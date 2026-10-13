//! Sector 8: Items, Inventory & Equipment (8 funciones 1:1 con Tomba! 2).
//!
//! Implementación exacta del subsistema de inventario y equipamiento:
//!   - Contador de 99 unidades máximas por slot (`0x800BFAB4`).
//!   - Anillo de ítems adquiridos recientemente (`0x800BF883` / `0x800BF884` para tipos 23..28).
//!   - Tabla de referencias cruzadas y contadores de paso de eventos (`0x800BFBB4`, `0x800BF8A1`, `0x800BF8A2`).
//!   - Campos de bits de banderas de inventario (`0x800BFD94`, `0x800BFC94`, `0x800BFD14`).
//!   - Equipamiento de armas (Blackjack, Boomerang, Grapple Hook) y trajes especiales (Ardilla Voladora, Pájaro, Cerdo).
//!
//! Referencias originales:
//!   - `src/main/inventory/Inventory_*.c`
//!   - `Tomba2Engine/game/items/inventory.h`, `inventory.cpp`, `inventory_layout.h`, `item_grant.cpp`

#![allow(dead_code)]

use bevy::prelude::*;
use crate::player::state_machine::WeaponType;

/// Capacidad máxima de acumulación por ítem en PS1 (99 unidades).
pub const MAX_ITEM_COUNT: u8 = 99;

/// Tipos de trajes especiales de Tomba (Sector 8).
#[derive(Debug, Clone, Copy, PartialEq, Eq, Default, Reflect)]
pub enum EquipSuit {
    /// Ropa estándar de Tomba (sin habilidades especiales).
    #[default]
    Standard,
    /// Traje de Ardilla Voladora (Flying Squirrel Suit): habilita ACT-31 Entity_State_Fly (planeo).
    FlyingSquirrel,
    /// Traje de Pájaro (Bird Suit): habilita vuelo continuo / aleteo.
    Bird,
    /// Traje de Cerdo (Pig Suit): permite interactuar y hablar con cerdos amigables.
    Pig,
}

/// Evento emitido al actualizar la interfaz gráfica de un ítem (UI_DrawItemIcon / UI_InventorySlot).
#[derive(Event, Debug, Clone, Copy)]
pub struct ItemUiEvent {
    pub item_id: u8,
    pub mode: u8, // 1 = removed normal, 2 = added ex, 4 = removed variant 2
}

/// Componente y recurso de Inventario y Equipamiento de Tomba.
#[derive(Component, Resource, Debug, Clone, Reflect)]
pub struct TombaInventory {
    /// Array de cantidad de ítems poseídos (0..255), acotados a 99 unidades.
    /// PS1: `inventory_layout::kCounts` en `0x800BFAB4`.
    pub counts: [u8; 256],

    /// Campo de bits de banderas de adquisición (256 bits = 32 bytes).
    /// PS1: `0x800BFD94`.
    pub bitflags: [u8; 32],

    /// Banderas categóricas de ítems - Categoría 0 (32 bytes).
    /// PS1: `0x800BFC94`.
    pub category_flags_0: [u8; 32],

    /// Banderas categóricas de ítems - Categoría 1 (32 bytes).
    /// PS1: `0x800BFD14`.
    pub category_flags_1: [u8; 32],

    /// Anillo de ítems recientemente adquiridos (tipos 23..28).
    /// PS1: `INV_RING_LEN` en `0x800BF883`, `INV_RING_DATA` en `0x800BF884`.
    pub recent_ring: [u8; 6],
    pub recent_ring_len: u8,

    /// Array de referencias cruzadas de misiones (256 bytes).
    /// PS1: `INV_QUESTREF` en `0x800BFBB4`.
    pub quest_ref: [u8; 256],

    /// Contador de paso de misiones variante A.
    /// PS1: `INV_EVT_A` en `0x800BF8A2`.
    pub quest_pass_counter_a: u8,

    /// Contador de paso de misiones variante B.
    /// PS1: `INV_EVT_B` en `0x800BF8A1`.
    pub quest_pass_counter_b: u8,

    /// Arma actualmente equipada.
    pub equipped_weapon: Option<WeaponType>,

    /// Traje actualmente equipado.
    pub equipped_suit: EquipSuit,
}

impl Default for TombaInventory {
    fn default() -> Self {
        let mut inv = Self {
            counts: [0; 256],
            bitflags: [0; 32],
            category_flags_0: [0; 32],
            category_flags_1: [0; 32],
            recent_ring: [0; 6],
            recent_ring_len: 0,
            quest_ref: [0; 256],
            quest_pass_counter_a: 0,
            quest_pass_counter_b: 0,
            equipped_weapon: Some(WeaponType::Blackjack),
            equipped_suit: EquipSuit::Standard,
        };
        // Tomba comienza con su Blackjack (Garrote de madera) en inventario
        inv.inventory_additem(0, 1);
        inv
    }
}

impl TombaInventory {
    // ── ITM-01: Inventory_AddItem (0x8004D338) ───────────────────────────────
    /// Añade una cantidad de un ítem al inventario con límite de 99.
    /// Administra el anillo de ítems 23..28 y las tablas de misiones.
    /// Ref: Inventory_AddItem.c:16-58, Inventory::addNative (inventory.cpp:75-100).
    pub fn inventory_additem(&mut self, item_id: u8, amount: u8) -> u8 {
        // (1) Anillo de ítems adquiridos recientemente: tipos 23..28
        // PS1: `if (param_1 - 0x17U < 6)`
        if (item_id >= 23 && item_id <= 28) && (self.recent_ring_len as usize) < self.recent_ring.len() {
            self.recent_ring[self.recent_ring_len as usize] = item_id;
            self.recent_ring_len += 1;
        }

        // (2) Mantenimiento de referencias de misión si es la primera vez que se adquiere
        if self.counts[item_id as usize] == 0 {
            // Variante de actualización de referencias de quest
            for i in 0..256 {
                if self.counts[i] != 0 {
                    self.quest_ref[i] = self.quest_ref[i].saturating_add(1);
                }
            }
            self.quest_ref[item_id as usize] = 0;
            self.quest_pass_counter_a = self.quest_pass_counter_a.wrapping_add(1);
        }

        // (3) Sumar cantidad y limitar a 99
        let current = self.counts[item_id as usize];
        let new_total = (current as u16 + amount as u16).min(MAX_ITEM_COUNT as u16) as u8;
        self.counts[item_id as usize] = new_total;

        // Auto-marcar bitflag de posesión
        self.inventory_setbit(item_id);

        new_total
    }

    // ── ITM-02: Inventory_AddItemEx (0x8004D4C4) ─────────────────────────────
    /// Añade un ítem al inventario y dispara un evento gráfico de obtención de ítem (modo 2).
    /// Ref: Inventory_AddItemEx.c:13-19, Inventory::giveAndFlag (inventory.cpp:32).
    pub fn inventory_additemex(&mut self, item_id: u8, amount: u8) -> (u8, ItemUiEvent) {
        let count = self.inventory_additem(item_id, amount);
        let event = ItemUiEvent { item_id, mode: 2 };
        (count, event)
    }

    // ── ITM-03: Inventory_CheckFlag (0x8004D868) ─────────────────────────────
    /// Comprueba si la bandera de posesión de un ítem está activa en el campo de bits `0x800BFD94`.
    /// Ref: Inventory_CheckFlag.c:16-24.
    #[inline]
    pub fn inventory_checkflag(&self, item_id: u8) -> bool {
        let byte_idx = (item_id >> 3) as usize;
        let bit_idx = item_id & 7;
        (self.bitflags[byte_idx] & (1 << bit_idx)) != 0
    }

    // ── ITM-04: Inventory_RemoveItem (0x8004D604) ────────────────────────────
    /// Remueve una cantidad de un ítem y emite evento UI en modo 1.
    /// Ref: Inventory_RemoveItem.c:14-21.
    pub fn inventory_removeitem(&mut self, item_id: u8, amount: u8) -> (u8, ItemUiEvent) {
        let current = self.counts[item_id as usize];
        let new_count = current.saturating_sub(amount);
        self.counts[item_id as usize] = new_count;
        let event = ItemUiEvent { item_id, mode: 1 };
        (new_count, event)
    }

    // ── ITM-05: Inventory_RemoveItem2 (0x8004D688) ───────────────────────────
    /// Variante de remover ítem que emite evento UI en modo 4.
    /// Ref: Inventory_RemoveItem2.c:14-21.
    pub fn inventory_removeitem2(&mut self, item_id: u8, amount: u8) -> (u8, ItemUiEvent) {
        let current = self.counts[item_id as usize];
        let new_count = current.saturating_sub(amount);
        self.counts[item_id as usize] = new_count;
        let event = ItemUiEvent { item_id, mode: 4 };
        (new_count, event)
    }

    // ── ITM-06: Inventory_RemoveItem3 (0x8004D650) ───────────────────────────
    /// Variante simple de remover ítem que actualiza el slot sin dibujar icono emergente.
    /// Ref: Inventory_RemoveItem3.c:14-20.
    pub fn inventory_removeitem3(&mut self, item_id: u8, amount: u8) -> u8 {
        let current = self.counts[item_id as usize];
        let new_count = current.saturating_sub(amount);
        self.counts[item_id as usize] = new_count;
        new_count
    }

    // ── ITM-07: Inventory_SetBit (0x8004D79C) ────────────────────────────────
    /// Activa el bit correspondiente al ítem en el campo de bits `0x800BFD94`.
    /// Ref: Inventory_SetBit.c:16-25.
    #[inline]
    pub fn inventory_setbit(&mut self, item_id: u8) {
        let byte_idx = (item_id >> 3) as usize;
        let bit_idx = item_id & 7;
        self.bitflags[byte_idx] |= 1 << bit_idx;
    }

    // ── ITM-08: Inventory_SetFlag (0x8004D714) ───────────────────────────────
    /// Activa una bandera en las tablas categóricas (categoría 0: 0x800BFC94, categoría 1: 0x800BFD14).
    /// Ref: Inventory_SetFlag.c:16-28.
    pub fn inventory_setflag(&mut self, item_id: u8, category: u8) {
        let byte_idx = (item_id >> 3) as usize;
        let bit_idx = item_id & 7;
        if category == 0 {
            self.category_flags_0[byte_idx] |= 1 << bit_idx;
        } else {
            self.category_flags_1[byte_idx] |= 1 << bit_idx;
        }
    }

    // ── Métodos de Equipamiento y Consulta ────────────────────────────────────

    /// Retorna la cantidad de unidades de un ítem (0..99).
    #[inline]
    pub fn count(&self, item_id: u8) -> u8 {
        self.counts[item_id as usize]
    }

    /// Retorna true si Tomba posee al menos una unidad del ítem.
    #[inline]
    pub fn has(&self, item_id: u8) -> bool {
        self.counts[item_id as usize] > 0
    }

    /// Equipa un arma en la mano de Tomba.
    pub fn equip_weapon(&mut self, weapon: WeaponType) {
        self.equipped_weapon = Some(weapon);
    }

    /// Desequipa el arma activa (lucha a mano limpia / mordisco).
    pub fn unequip_weapon(&mut self) {
        self.equipped_weapon = None;
    }

    /// Equipa un traje especial de Tomba.
    pub fn equip_suit(&mut self, suit: EquipSuit) {
        self.equipped_suit = suit;
    }

    /// Consulta si el Traje de Ardilla Voladora está equipado.
    #[inline]
    pub fn has_flying_squirrel_suit(&self) -> bool {
        self.equipped_suit == EquipSuit::FlyingSquirrel
    }
}

// ─── TESTS UNITARIOS DEL SECTOR 8 ────────────────────────────────────────────

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_inventory_add_and_clamp_99() {
        let mut inv = TombaInventory::default();
        let item_id = 10;

        // Añadir 50 unidades
        let c1 = inv.inventory_additem(item_id, 50);
        assert_eq!(c1, 50);
        assert_eq!(inv.count(item_id), 50);
        assert!(inv.has(item_id));

        // Añadir 60 unidades más -> debe acotarse a 99 (MAX_ITEM_COUNT)
        let c2 = inv.inventory_additem(item_id, 60);
        assert_eq!(c2, 99);
        assert_eq!(inv.count(item_id), 99);
    }

    #[test]
    fn test_inventory_bitflags() {
        let mut inv = TombaInventory::default();
        let item_id = 45;

        assert!(!inv.inventory_checkflag(item_id));
        inv.inventory_setbit(item_id);
        assert!(inv.inventory_checkflag(item_id));

        // Probar categorías de banderas
        inv.inventory_setflag(item_id, 0);
        assert!((inv.category_flags_0[(item_id >> 3) as usize] & (1 << (item_id & 7))) != 0);

        inv.inventory_setflag(item_id, 1);
        assert!((inv.category_flags_1[(item_id >> 3) as usize] & (1 << (item_id & 7))) != 0);
    }

    #[test]
    fn test_inventory_recent_ring_for_special_items() {
        let mut inv = TombaInventory::default();
        assert_eq!(inv.recent_ring_len, 0);

        // Ítem 10 no es del rango 23..28 -> no se agrega al anillo
        inv.inventory_additem(10, 1);
        assert_eq!(inv.recent_ring_len, 0);

        // Ítems 23, 24, 25 pertenecen al rango -> se agregan al anillo
        inv.inventory_additem(23, 1);
        assert_eq!(inv.recent_ring_len, 1);
        assert_eq!(inv.recent_ring[0], 23);

        inv.inventory_additem(24, 1);
        assert_eq!(inv.recent_ring_len, 2);
        assert_eq!(inv.recent_ring[1], 24);
    }

    #[test]
    fn test_inventory_remove_variants() {
        let mut inv = TombaInventory::default();
        inv.inventory_additem(5, 10);

        // ITM-04: RemoveItem modo 1
        let (rem1, ev1) = inv.inventory_removeitem(5, 3);
        assert_eq!(rem1, 7);
        assert_eq!(ev1.mode, 1);

        // ITM-05: RemoveItem2 modo 4
        let (rem2, ev2) = inv.inventory_removeitem2(5, 2);
        assert_eq!(rem2, 5);
        assert_eq!(ev2.mode, 4);

        // ITM-06: RemoveItem3 sin evento UI
        let rem3 = inv.inventory_removeitem3(5, 5);
        assert_eq!(rem3, 0);
        assert!(!inv.has(5));
    }

    #[test]
    fn test_equipment_suits_and_weapons() {
        let mut inv = TombaInventory::default();
        assert!(!inv.has_flying_squirrel_suit());

        inv.equip_suit(EquipSuit::FlyingSquirrel);
        assert!(inv.has_flying_squirrel_suit());

        inv.equip_suit(EquipSuit::Bird);
        assert!(!inv.has_flying_squirrel_suit());

        inv.equip_weapon(WeaponType::Boomerang);
        assert_eq!(inv.equipped_weapon, Some(WeaponType::Boomerang));
    }
}
