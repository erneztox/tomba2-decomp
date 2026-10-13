#!/usr/bin/env python3
"""
Master Kanban Generator for Tomba! 2: The Evil Swine Return — Modern Bevy Port.
Generates the exhaustive, 100% complete technical inventory of all 1,567 MAIN.EXE functions
plus architectural engine sectors from Tomba2Engine, mapped to Bevy 0.15 Rust targets.
"""

import os
import json
import re

PROJECT_ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
STRUCTURE_JSON = os.path.join(PROJECT_ROOT, "src", "main", "STRUCTURE.json")
MAP_FUNCTIONS_PY = os.path.join(PROJECT_ROOT, "tools", "map_functions.py")
KANBAN_MD = os.path.join(PROJECT_ROOT, "KANBAN.md")
DOCS_KANBAN = os.path.join(PROJECT_ROOT, "docs", "kanban_inventory.md")

# Load STRUCTURE.json
with open(STRUCTURE_JSON, "r") as f:
    structure_data = json.load(f)

# Load MAPPINGS from map_functions.py
with open(MAP_FUNCTIONS_PY, "r") as f:
    map_text = f.read()

match = re.search(r"MAPPINGS\s*=\s*\{", map_text)
sub = map_text[match.start():]
brace_count = 0
end_idx = 0
for i, c in enumerate(sub):
    if c == "{": brace_count += 1
    elif c == "}":
        brace_count -= 1
        if brace_count == 0:
            end_idx = i + 1
            break
scope = {}
exec(sub[:end_idx], {}, scope)
mappings = scope.get("MAPPINGS", {})

# Master Sectors definition
SECTOR_DEFS = [
    {
        "id": "SEC-01",
        "title": "SECTOR 1: Player & Entity Action State Machines",
        "description": "Máquinas de estados de acción de Tomba y entidades (Locomoción, Salto, Dash, Vuelo/Planeo, Nado, Escalada, Ataque, Lanzamiento, Daño).",
        "categories": ["entity/state"],
        "prefix": "ACT",
        "default_rust": "player::state_machine"
    },
    {
        "id": "SEC-02",
        "title": "SECTOR 2: Entity Physics & Kinematics",
        "description": "Cinemática, integración de velocidades, gravedad de subida/bajada, aceleración analógica, cálculo de pendientes y límites de contacto.",
        "categories": ["entity/physics"],
        "prefix": "PHY",
        "default_rust": "player::physics"
    },
    {
        "id": "SEC-03",
        "title": "SECTOR 3: 2.5D Collision & SCLD Rail Grid",
        "description": "Geometría sobre rieles 2.5D, proyección ortogonal a planos, sondeo de suelos, paredes bloqueantes y bifurcaciones.",
        "categories": ["collision"],
        "prefix": "COL",
        "default_rust": "collision::rail"
    },
    {
        "id": "SEC-04",
        "title": "SECTOR 4: Entity Allocation, Lifecycle & Loops",
        "description": "Gestión de memoria de entidades, pools 0..5, listas enlazadas (Active, Inactive, Background) y bucles por tick.",
        "categories": ["entity/alloc", "entity/loop", "entity", "entity/spawn"],
        "prefix": "ENT",
        "default_rust": "entity::lifecycle"
    },
    {
        "id": "SEC-05",
        "title": "SECTOR 5: Entity Behaviors, AI & Interactive World",
        "description": "Comportamientos de enemigos (Cerdos Koma, jefes), NPCs interactivos, puertas, palancas, empuje de bloques y proyectiles.",
        "categories": ["entity/behavior"],
        "prefix": "BEH",
        "default_rust": "ai::behavior"
    },
    {
        "id": "SEC-06",
        "title": "SECTOR 6: Skeletal Animation VM & Sprites",
        "description": "Despacho de clips de animación ANMP (239 clips), jerarquía esquelética de huesos, sprites 3D y partículas.",
        "categories": ["entity/anim", "entity/draw"],
        "prefix": "ANM",
        "default_rust": "animation::system"
    },
    {
        "id": "SEC-07",
        "title": "SECTOR 7: 2.5D Rail Camera Pipeline",
        "description": "Cámara tridimensional en rieles, filtros continuos por eje, zona muerta vertical, pisos de área, rotación angular y matriz de vista 1:1.",
        "categories": ["camera"],
        "prefix": "CAM",
        "default_rust": "camera::rail_camera"
    },
    {
        "id": "SEC-08",
        "title": "SECTOR 8: Items, Inventory & Equipment",
        "description": "Menú de 32 casos, armas (Blackjack, Boomerang, Grapple Hook), trajes especiales (Ardilla, Pájaro, Cerdo) e inventario de 99 slots.",
        "categories": ["inventory"],
        "prefix": "ITM",
        "default_rust": "items::inventory"
    },
    {
        "id": "SEC-09",
        "title": "SECTOR 9: Event Engine & Script Interpreter",
        "description": "Vector maestro de 256 flags, progresión de las 137 misiones, intérprete de bytecode de scripts con tabla de opcodes y fundidos.",
        "categories": ["event", "game", "overlay"],
        "prefix": "EVT",
        "default_rust": "events::progression"
    },
    {
        "id": "SEC-10",
        "title": "SECTOR 10: UI, Dialog System & HUD",
        "description": "Paneles 9-slice retro, flujo tipográfico carácter a carácter, métricas de fuente variable, HUD de vitalidad/AP y opciones.",
        "categories": ["ui", "dialog", "string"],
        "prefix": "UI",
        "default_rust": "ui::hud_and_dialog"
    },
    {
        "id": "SEC-11",
        "title": "SECTOR 11: Audio System & Sound Dispatch",
        "description": "Director musical CD-XA, ducking de volumen en diálogos, sintetizador SPU, envolventes ADSR y disparo de SFX.",
        "categories": ["audio"],
        "prefix": "AUD",
        "default_rust": "audio::playback"
    },
    {
        "id": "SEC-12",
        "title": "SECTOR 12: Memory Card, GPU, CD & Low-Level Subsystems",
        "description": "Controlador de guardado en Memory Card, colas de paquetes GPU, transformación vectorial GTE, streaming CD y vídeo MDEC.",
        "categories": ["save", "gpu", "gte", "cd", "mdec", "memory", "texture", "input", "math", "engine", "system", "screen", "misc", "debug"],
        "prefix": "SYS",
        "default_rust": "system::hardware"
    }
]

# Implemented functions in bevy_tomba2
IMPLEMENTED_FUNCS = {
    0x80060064: ("player::tomba_movement_system (Idle)", "[x]"),
    0x8006670C: ("player::tomba_movement_system (Walk)", "[x]"),
    0x80064524: ("player::tomba_movement_system (Jump Rise)", "[x]"),
    0x800572EC: ("player::tomba_movement_system (Jump Fall)", "[x]"),
    0x80064BA0: ("player::tomba_movement_system (Turn / Facing)", "[x]"),
    0x800637F4: ("player::PlayerActionState::TurnToJunction", "[x]"),
    0x80056B48: ("player::tomba_movement_system (velocityIntegrate)", "[x]"),
    0x80054650: ("player::tomba_movement_system (settleStep)", "[x]"),
    0x80066478: ("player::TOMBA_GRAVITY / TOMBA_JUMP_GRAVITY", "[x]"),
    0x80066538: ("player::TOMBA_TERMINAL_VELOCITY", "[x]"),
    0x80049968: ("collision::LevelCollision::planes", "[x]"),
    0x80047778: ("collision::CollisionPlane::project_actor_onto_plane", "[x]"),
    0x80047CBC: ("collision::LevelCollision index query", "[x]"),
    0x80048034: ("collision::CollisionPlane::sample_floor", "[x]"),
    0x800490E4: ("collision::LevelCollision::check_junction", "[x]"),
    0x80048750: ("collision::CollisionPlane::is_wall_blocking", "[x]"),
    0x800498C8: ("collision::CollisionPlane::sample_floor", "[x]"),
    0x8006CF10: ("camera::CAM_FOLLOW_DISTANCE (14.0m)", "[x]"),
    0x8006E918: ("camera::CAM_FOLLOW_DISTANCE / heading", "[x]"),
    0x8006D960: ("camera::follow_axis / trackXZ", "[x]"),
    0x8006DA54: ("camera::follow_axis / trackY", "[x]"),
    0x8006D654: ("camera::CAM_VERTICAL_DEADZONE (pitch)", "[x]"),
    0x8006DF88: ("camera::CAM_FOLLOW_HEIGHT (5.50m)", "[x]"),
    0x8006C80C: ("camera::SEASIDE_Y_FLOOR (5.50m)", "[x]"),
    0x8006D02C: ("camera::camera_controller (lookAt Euler YXZ)", "[x]"),
    0x8006E010: ("camera::CAM_ANGLE_STEP_RATE (0.368 rad/s)", "[x]"),
    0x80077C40: ("player::hook_tomba_animation_player", "[x]"),
    0x80076D68: ("player::tomba_animation_control_system", "[x]"),
    0x80074590: ("audio::AudioPlayer (SFX Dispatch)", "[x]"),
    0x80074F24: ("audio::AudioPlayer (BGM Track 04_01)", "[x]"),
    0x80074BF8: ("audio::AudioPlayer (BGM SetBank)", "[x]"),
    0x8005262C: ("main::setup_scene (GTE Draw Env)", "[x]")
}

# Generate Markdown
lines = []
lines.append("# 📋 Inventario Maestro y Kanban de Implementación Total: Tomba 2 ➔ Bevy (Rust)\n")
lines.append("> **Fuente de Verdad Absoluta:** Este documento contiene el censo total, exhaustivo e individualizado de las **1.567 funciones y máquinas de estado** de `MAIN.EXE` (organizadas en 12 Sectores Maestros), correlacionadas directamente contra el motor C++ (`Tomba2Engine/`), el mapa de símbolos (`symbol_addrs.txt`) y la base de descompilación Ghidra (`src/main/`).\n")
lines.append("Cualquier avance en `bevy_tomba2/` debe reflejarse en este inventario actualizando su estado (`[x]` implementado, `[ ]` pendiente).\n")
lines.append("---\n")

# Summary Table
lines.append("## 🧭 Censo y Resumen General por Sectores Maestros\n\n")
lines.append("| Sector | Código | Descripción del Subsistema | Total Funciones | Estado |\n")
lines.append("| :--- | :--- | :--- | :---: | :---: |\n")

total_funcs = 0
total_implemented = len(IMPLEMENTED_FUNCS)

sector_stats = []
for sec in SECTOR_DEFS:
    sec_funcs = []
    for cat in sec["categories"]:
        sec_funcs.extend(structure_data.get(cat, []))
    total_funcs += len(sec_funcs)
    implemented_in_sec = sum(1 for fn in sec_funcs if int(fn["address"], 16) in IMPLEMENTED_FUNCS)
    status_str = f"**{implemented_in_sec} / {len(sec_funcs)}**"
    lines.append(f"| **{sec['id']}** | `{sec['prefix']}` | {sec['title']} | {len(sec_funcs)} | {status_str} |\n")
    sector_stats.append((sec, sec_funcs, implemented_in_sec))

lines.append(f"| **TOTAL** | — | **Todas las 33 categorías de MAIN.EXE** | **{total_funcs}** | **{total_implemented} implementadas** |\n\n")
lines.append("---\n\n")

# Detailed Tables per Sector
for sec, sec_funcs, _ in sector_stats:
    lines.append(f"## 🗂️ {sec['title']}\n\n")
    lines.append(f"> {sec['description']}\n\n")
    lines.append("| ID | Función / Símbolo | Dirección PS1 | Archivo C | Comportamiento Técnico Original | Mapeo Bevy (Rust) | Estado |\n")
    lines.append("| :--- | :--- | :---: | :--- | :--- | :--- | :---: |\n")
    
    for idx, fn in enumerate(sec_funcs, 1):
        addr_int = int(fn["address"], 16)
        item_id = f"{sec['prefix']}-{idx:02d}" if len(sec_funcs) < 100 else f"{sec['prefix']}-{idx:03d}"
        
        # Look up description
        mapping = mappings.get(addr_int)
        if mapping:
            desc = mapping[1]
        else:
            desc = f"Subrutina de {fn['name']} ({fn['file']})"
        
        # Escape pipe in description
        desc = desc.replace("|", "\\|")
        
        # Check implementation status
        if addr_int in IMPLEMENTED_FUNCS:
            rust_target, status = IMPLEMENTED_FUNCS[addr_int]
        else:
            rust_target = f"`{sec['default_rust']}::{fn['name'].lower()}`"
            status = "`[ ]`"
            
        file_path = fn.get("file", "")
        lines.append(f"| **{item_id}** | `{fn['name']}` | `{fn['address']}` | `{file_path}` | {desc} | {rust_target} | {status} |\n")
    
    lines.append("\n---\n\n")

content = "".join(lines)

# Write to KANBAN.md
with open(KANBAN_MD, "w") as f:
    f.write(content)
print(f"KANBAN.md generated successfully ({len(lines)} lines, {total_funcs} functions)!")

# Sync to docs/kanban_inventory.md
with open(DOCS_KANBAN, "w") as f:
    f.write(content)
print(f"docs/kanban_inventory.md synced successfully!")
