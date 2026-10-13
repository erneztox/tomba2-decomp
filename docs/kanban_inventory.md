# 📋 Inventario Maestro y Kanban de Implementación Total: Tomba 2 ➔ Bevy (Rust)
> **Fuente de Verdad Absoluta:** Este documento contiene el censo total, exhaustivo e individualizado de las **1.567 funciones y máquinas de estado** de `MAIN.EXE` (organizadas en 12 Sectores Maestros), correlacionadas directamente contra el motor C++ (`Tomba2Engine/`), el mapa de símbolos (`symbol_addrs.txt`) y la base de descompilación Ghidra (`src/main/`).
Cualquier avance en `bevy_tomba2/` debe reflejarse en este inventario actualizando su estado (`[x]` implementado, `[ ]` pendiente).
---
## 🧭 Censo y Resumen General por Sectores Maestros

| Sector | Código | Descripción del Subsistema | Total Funciones | Estado |
| :--- | :--- | :--- | :---: | :---: |
| **SEC-01** | `ACT` | SECTOR 1: Player & Entity Action State Machines | 64 | **64 / 64** |
| **SEC-02** | `PHY` | SECTOR 2: Entity Physics & Kinematics | 82 | **82 / 82** |
| **SEC-03** | `COL` | SECTOR 3: 2.5D Collision & SCLD Rail Grid | 35 | **35 / 35** |
| **SEC-04** | `ENT` | SECTOR 4: Entity Allocation, Lifecycle & Loops | 357 | **4 / 357** |
| **SEC-05** | `BEH` | SECTOR 5: Entity Behaviors, AI & Interactive World | 71 | **1 / 71** |
| **SEC-06** | `ANM` | SECTOR 6: Skeletal Animation VM & Sprites | 81 | **81 / 81** |
| **SEC-07** | `CAM` | SECTOR 7: 2.5D Rail Camera Pipeline | 32 | **32 / 32** |
| **SEC-08** | `ITM` | SECTOR 8: Items, Inventory & Equipment | 8 | **8 / 8** |
| **SEC-09** | `EVT` | SECTOR 9: Event Engine & Script Interpreter | 49 | **49 / 49** |
| **SEC-10** | `UI` | SECTOR 10: UI, Dialog System & HUD | 88 | **88 / 88** |
| **SEC-11** | `AUD` | SECTOR 11: Audio System & Sound Dispatch | 140 | **2 / 140** |
| **SEC-12** | `SYS` | SECTOR 12: Memory Card, GPU, CD & Low-Level Subsystems | 560 | **1 / 560** |
| **TOTAL** | — | **Todas las 33 categorías de MAIN.EXE** | **1567** | **449 implementadas** |

---

## 🗂️ SECTOR 1: Player & Entity Action State Machines

> Máquinas de estados de acción de Tomba y entidades (Locomoción, Salto, Dash, Vuelo/Planeo, Nado, Escalada, Ataque, Lanzamiento, Daño).

| ID | Función / Símbolo | Dirección PS1 | Archivo C | Comportamiento Técnico Original | Mapeo Bevy (Rust) | Estado |
| :--- | :--- | :---: | :--- | :--- | :--- | :---: |
| **ACT-01** | `Entity_State_Action2` | `0x8005A970` | `entity/state/Entity_State_Action2.c` | Entity action state variant 2: entity[6] dispatch | `player::state_machine::entity_state_action2` | `[x]` |
| **ACT-02** | `Entity_State_Action3` | `0x8005E580` | `entity/state/Entity_State_Action3.c` | Entity action state variant 3: entity[6] switch | `player::state_machine::entity_state_action3` | `[x]` |
| **ACT-03** | `Entity_State_Action4` | `0x8005E8FC` | `entity/state/Entity_State_Action4.c` | Entity action state variant 4: entity[6] switch | `player::state_machine::entity_state_action4` | `[x]` |
| **ACT-04** | `Entity_State_Anim` | `0x80042894` | `entity/state/Entity_State_Anim.c` | Entity anim state: builds sprite data, submits to OT | `player::state_machine::entity_state_anim` | `[x]` |
| **ACT-05** | `Entity_State_Attack` | `0x8005ACC8` | `entity/state/Entity_State_Attack.c` | Entity attack state: entity[6]=0, sets attack params | `player::state_machine::entity_state_attack` | `[x]` |
| **ACT-06** | `Entity_State_Attack2` | `0x800658E4` | `entity/state/Entity_State_Attack2.c` | Entity attack state variant 2: entity[6] state, different callback path | `player::state_machine::entity_state_attack2` | `[x]` |
| **ACT-07** | `Entity_State_Attack3` | `0x8005A714` | `entity/state/Entity_State_Attack3.c` | Entity attack state variant 3: entity[0x6A] dispatch | `player::state_machine::entity_state_attack3` | `[x]` |
| **ACT-08** | `Entity_State_Attack4` | `0x8006762C` | `entity/state/Entity_State_Attack4.c` | Entity attack state variant 4: entity[6] switch | `player::state_machine::entity_state_attack4` | `[x]` |
| **ACT-09** | `Entity_State_Attack5` | `0x8006506C` | `entity/state/Entity_State_Attack5.c` | Entity attack state variant 5: entity[6] state machine | `player::state_machine::entity_state_attack5` | `[x]` |
| **ACT-10** | `Entity_State_Attack6` | `0x8005A39C` | `entity/state/Entity_State_Attack6.c` | Entity attack state variant 6: entity[6] dispatch | `player::state_machine::entity_state_attack6` | `[x]` |
| **ACT-11** | `Entity_State_AttackTrans` | `0x8006585C` | `entity/state/Entity_State_AttackTrans.c` | Attack transition: entity[6] state machine, calls FUN_80076d68 then branch on action flag | `player::state_machine::entity_state_attacktrans` | `[x]` |
| **ACT-12** | `Entity_State_Block` | `0x8006A900` | `entity/state/Entity_State_Block.c` | Entity block state: entity[6] state, blocking/defense | `player::state_machine::entity_state_block` | `[x]` |
| **ACT-13** | `Entity_State_Bounce` | `0x8006A080` | `entity/state/Entity_State_Bounce.c` | Entity bounce state: entity[6]=0, checks flag, sets velocity | `player::state_machine::entity_state_bounce` | `[x]` |
| **ACT-14** | `Entity_State_Camera` | `0x8006C328` | `entity/state/Entity_State_Camera.c` | Entity camera state: entity[6]=0->1, sets camera target | `player::state_machine::entity_state_camera` | `[x]` |
| **ACT-15** | `Entity_State_Charge` | `0x80064E48` | `entity/state/Entity_State_Charge.c` | Entity charge state: entity[6] state machine, charging | `player::state_machine::entity_state_charge` | `[x]` |
| **ACT-16** | `Entity_State_Cliff` | `0x80062A30` | `entity/state/Entity_State_Cliff.c` | Entity cliff state: edge detection + reaction | `player::state_machine::entity_state_cliff` | `[x]` |
| **ACT-17** | `Entity_State_Climb` | `0x800660AC` | `entity/state/Entity_State_Climb.c` | Entity climb state: entity[6] dispatch, checks height/angle | `player::state_machine::entity_state_climb` | `[x]` |
| **ACT-18** | `Entity_State_Collide` | `0x8006A240` | `entity/state/Entity_State_Collide.c` | Entity collide state: entity[7]=1/2/3, handles collision | `player::state_machine::entity_state_collide` | `[x]` |
| **ACT-19** | `Entity_State_Collision` | `0x80044144` | `entity/state/Entity_State_Collision.c` | Entity collision state: entity[0x78]=1, checks collision | `player::state_machine::entity_state_collision` | `[x]` |
| **ACT-20** | `Entity_State_Combo` | `0x800574E0` | `entity/state/Entity_State_Combo.c` | Entity combo state: chain attacks, timer-based | `player::state_machine::entity_state_combo` | `[x]` |
| **ACT-21** | `Entity_State_Damage` | `0x8006B9DC` | `entity/state/Entity_State_Damage.c` | Entity damage state: entity[6]=0->1, sets timer, applies knockback | `player::state_machine::entity_state_damage` | `[x]` |
| **ACT-22** | `Entity_State_Dash` | `0x8005706C` | `entity/state/Entity_State_Dash.c` | Entity dash state: entity[0x4A] += 0x360, applies velocity to position | `player::state_machine::entity_state_dash` | `[x]` |
| **ACT-23** | `Entity_State_Dash2` | `0x80057150` | `entity/state/Entity_State_Dash2.c` | Entity dash state variant 2: checks entity[0x17E] flags | `player::state_machine::entity_state_dash2` | `[x]` |
| **ACT-24** | `Entity_State_Dash3` | `0x8005EF48` | `entity/state/Entity_State_Dash3.c` | Entity dash state variant 3: entity[6] state machine | `player::state_machine::entity_state_dash3` | `[x]` |
| **ACT-25** | `Entity_State_Death` | `0x80066878` | `entity/state/Entity_State_Death.c` | Entity death state: entity[6] switch, death animation | `player::state_machine::entity_state_death` | `[x]` |
| **ACT-26** | `Entity_State_Dive` | `0x8005EC70` | `entity/state/Entity_State_Dive.c` | Entity dive state: entity[6] state, diving movement | `player::state_machine::entity_state_dive` | `[x]` |
| **ACT-27** | `Entity_State_Event` | `0x80043BD4` | `entity/state/Entity_State_Event.c` | Entity event state: entity[0x74] counter, dispatches events | `player::state_machine::entity_state_event` | `[x]` |
| **ACT-28** | `Entity_State_Event2` | `0x800433FC` | `entity/state/Entity_State_Event2.c` | Entity event state variant 2: entity[0x78] dispatch | `player::state_machine::entity_state_event2` | `[x]` |
| **ACT-29** | `Entity_State_Fight` | `0x80066FA8` | `entity/state/Entity_State_Fight.c` | Entity fight state: complex combat state machine (200L) | `player::state_machine::entity_state_fight` | `[x]` |
| **ACT-30** | `Entity_State_Float` | `0x800645E0` | `entity/state/Entity_State_Float.c` | Entity float state: entity[6] state machine, buoyancy | `player::state_machine::entity_state_float` | `[x]` |
| **ACT-31** | `Entity_State_Fly` | `0x8006228C` | `entity/state/Entity_State_Fly.c` | Entity fly state: entity[6] state machine, aerial movement | `player::state_machine::entity_state_fly` | `[x]` |
| **ACT-32** | `Entity_State_Follow` | `0x800702C0` | `entity/state/Entity_State_Follow.c` | Entity follow state: entity[0x62] target, follows | `player::state_machine::entity_state_follow` | `[x]` |
| **ACT-33** | `Entity_State_Giant` | `0x80061C64` | `entity/state/Entity_State_Giant.c` | Entity giant state: large entity state machine | `player::state_machine::entity_state_giant` | `[x]` |
| **ACT-34** | `Entity_State_Grab` | `0x8003FFCC` | `entity/state/Entity_State_Grab.c` | Entity grab state: entity[6]=0, plays SFX, grabs target | `player::state_machine::entity_state_grab` | `[x]` |
| **ACT-35** | `Entity_State_Ground` | `0x80057C08` | `entity/state/Entity_State_Ground.c` | Entity ground state: calls FUN_80057a68, checks collision | `player::state_machine::entity_state_ground` | `[x]` |
| **ACT-36** | `Entity_State_Hang` | `0x80070BD0` | `entity/state/Entity_State_Hang.c` | Entity hang state: entity[6] state, hanging/climbing | `player::state_machine::entity_state_hang` | `[x]` |
| **ACT-37** | `Entity_State_Hit` | `0x80057A68` | `entity/state/Entity_State_Hit.c` | Entity hit state: entity[0x158] ptr, checks hit reaction | `player::state_machine::entity_state_hit` | `[x]` |
| **ACT-38** | `Entity_State_Idle` | `0x80060064` | `entity/state/Entity_State_Idle.c` | Entity idle state: entity[6]=0, checks ground, transitions | `player::state_machine::entity_state_idle` | `[x]` |
| **ACT-39** | `Entity_State_InitWithOverlay` | `0x800653F4` | `entity/state/Entity_State_InitWithOverlay.c` | Entity state: init + load anim 0x40, conditionally calls overlay func_0x8010c780 | `player::state_machine::entity_state_initwithoverlay` | `[x]` |
| **ACT-40** | `Entity_State_Jump` | `0x80064524` | `entity/state/Entity_State_Jump.c` | Entity jump state: entity[6]=2, calls FUN_80053d0c, sets velocity, advances | `player::state_machine::entity_state_jump` | `[x]` |
| **ACT-41** | `Entity_State_Jump2` | `0x800572EC` | `entity/state/Entity_State_Jump2.c` | Entity jump state variant 2: calls physics, checks ground contact | `player::state_machine::entity_state_jump2` | `[x]` |
| **ACT-42** | `Entity_State_Jump3` | `0x80057DC0` | `entity/state/Entity_State_Jump3.c` | Entity jump state variant 3: checks entity[0x17E] flags | `player::state_machine::entity_state_jump3` | `[x]` |
| **ACT-43** | `Entity_State_Jump4` | `0x8004B528` | `entity/state/Entity_State_Jump4.c` | Entity jump state variant 4: entity[6]=1, aerial | `player::state_machine::entity_state_jump4` | `[x]` |
| **ACT-44** | `Entity_State_JumpStart` | `0x80065990` | `entity/state/Entity_State_JumpStart.c` | Jump start state: entity[6]=0->1, calls damage/physics, branches on _DAT_1f800184 action | `player::state_machine::entity_state_jumpstart` | `[x]` |
| **ACT-45** | `Entity_State_Ladder` | `0x800624B4` | `entity/state/Entity_State_Ladder.c` | Entity ladder state: entity[6] dispatch, climb movement | `player::state_machine::entity_state_ladder` | `[x]` |
| **ACT-46** | `Entity_State_Move` | `0x8005F1B0` | `entity/state/Entity_State_Move.c` | Entity move state: entity[6] state 0->1->2, applies movement | `player::state_machine::entity_state_move` | `[x]` |
| **ACT-47** | `Entity_State_Physics` | `0x800551C4` | `entity/state/Entity_State_Physics.c` | Entity physics state: entity[0x29]=0, checks entity[0x147] dir, sets angle | `player::state_machine::entity_state_physics` | `[x]` |
| **ACT-48** | `Entity_State_PickupCheck` | `0x800427F4` | `entity/state/Entity_State_PickupCheck.c` | Pickup state machine: checks idle counter, advances state byte at entity[0x78] | `player::state_machine::entity_state_pickupcheck` | `[x]` |
| **ACT-49** | `Entity_State_Roll` | `0x8006271C` | `entity/state/Entity_State_Roll.c` | Entity roll state: entity[6] state machine, rolling movement | `player::state_machine::entity_state_roll` | `[x]` |
| **ACT-50** | `Entity_State_Scene` | `0x80043A40` | `entity/state/Entity_State_Scene.c` | Entity scene state: entity[0x78]=1, plays audio + transition | `player::state_machine::entity_state_scene` | `[x]` |
| **ACT-51** | `Entity_State_Scene2` | `0x800446A4` | `entity/state/Entity_State_Scene2.c` | Entity scene state variant 2: entity[0x78] dispatch | `player::state_machine::entity_state_scene2` | `[x]` |
| **ACT-52** | `Entity_State_Shoot` | `0x800674F4` | `entity/state/Entity_State_Shoot.c` | Entity shoot state: spawns projectile, plays SFX, sets timer | `player::state_machine::entity_state_shoot` | `[x]` |
| **ACT-53** | `Entity_State_Shop` | `0x800735F4` | `entity/state/Entity_State_Shop.c` | Entity shop state: entity[7]=1, checks DAT_800bf816 flag | `player::state_machine::entity_state_shop` | `[x]` |
| **ACT-54** | `Entity_State_Slide` | `0x80062D8C` | `entity/state/Entity_State_Slide.c` | Entity slide state: checks flags, sliding movement | `player::state_machine::entity_state_slide` | `[x]` |
| **ACT-55** | `Entity_State_Spawn` | `0x80043108` | `entity/state/Entity_State_Spawn.c` | Entity spawn state: reads script, spawns entities | `player::state_machine::entity_state_spawn` | `[x]` |
| **ACT-56** | `Entity_State_Special` | `0x800620D0` | `entity/state/Entity_State_Special.c` | Entity special state: entity[6] state 0->1->2, SFX | `player::state_machine::entity_state_special` | `[x]` |
| **ACT-57** | `Entity_State_Swim` | `0x80061A7C` | `entity/state/Entity_State_Swim.c` | Entity swim state: entity[6] state machine, water movement | `player::state_machine::entity_state_swim` | `[x]` |
| **ACT-58** | `Entity_State_Throw` | `0x80066DE8` | `entity/state/Entity_State_Throw.c` | Entity throw state: entity[6]=0, spawns projectile | `player::state_machine::entity_state_throw` | `[x]` |
| **ACT-59** | `Entity_State_Throw2` | `0x80067A40` | `entity/state/Entity_State_Throw2.c` | Entity throw state variant 2: spawns+throws object | `player::state_machine::entity_state_throw2` | `[x]` |
| **ACT-60** | `Entity_State_Title` | `0x80049A60` | `entity/state/Entity_State_Title.c` | Entity title state: entity[5] switch, title screen | `player::state_machine::entity_state_title` | `[x]` |
| **ACT-61** | `Entity_State_Trail` | `0x8006BE88` | `entity/state/Entity_State_Trail.c` | Entity trail state: spawns trail particles behind entity | `player::state_machine::entity_state_trail` | `[x]` |
| **ACT-62** | `Entity_State_Turn` | `0x80064BA0` | `entity/state/Entity_State_Turn.c` | Entity turn state: entity[6] state, turning around | `player::state_machine::entity_state_turn` | `[x]` |
| **ACT-63** | `Entity_State_Walk` | `0x8006670C` | `entity/state/Entity_State_Walk.c` | Entity walk state: entity[6] state 0->1->2, moves entity | `player::state_machine::entity_state_walk` | `[x]` |
| **ACT-64** | `Entity_State_Wall` | `0x8006483C` | `entity/state/Entity_State_Wall.c` | Entity wall state: entity[7] state, wall collision | `player::state_machine::entity_state_wall` | `[x]` |

---

## 🗂️ SECTOR 2: Entity Physics & Kinematics

> Cinemática, integración de velocidades, gravedad de subida/bajada, aceleración analógica, cálculo de pendientes y límites de contacto.

| ID | Función / Símbolo | Dirección PS1 | Archivo C | Comportamiento Técnico Original | Mapeo Bevy (Rust) | Estado |
| :--- | :--- | :---: | :--- | :--- | :--- | :---: |
| **PHY-01** | `Entity_CalcAimPos` | `0x80024AF0` | `entity/physics/Entity_CalcAimPos.c` | Calculates aim position: GTE cos/sin on entity[0x56], offset from entity[0x2E/0x32/0x36] | `player::physics::entity_calcaimpos` | `[x]` |
| **PHY-02** | `Entity_CalcAngle10` | `0x80022060` | `entity/physics/Entity_CalcAngle10.c` | Entity angle calc variant 10: checks DAT_1f80027a flag first | `player::physics::entity_calcangle10` | `[x]` |
| **PHY-03** | `Entity_CalcAngle11` | `0x80022AC8` | `entity/physics/Entity_CalcAngle11.c` | Entity angle calc variant 11: different entity offset computation | `player::physics::entity_calcangle11` | `[x]` |
| **PHY-04** | `Entity_CalcAngle12` | `0x800216B4` | `entity/physics/Entity_CalcAngle12.c` | Entity angle calc variant 12: atan2 with entity[0x2E]/[0x36] offsets | `player::physics::entity_calcangle12` | `[x]` |
| **PHY-05** | `Entity_CalcAngle13` | `0x8001FAE0` | `entity/physics/Entity_CalcAngle13.c` | Entity angle calc variant 13: checks entity[0x145] flag first | `player::physics::entity_calcangle13` | `[x]` |
| **PHY-06** | `Entity_CalcAngle14` | `0x80023870` | `entity/physics/Entity_CalcAngle14.c` | Entity angle calc variant 14: different entity offset format | `player::physics::entity_calcangle14` | `[x]` |
| **PHY-07** | `Entity_CalcAngle15` | `0x8002192C` | `entity/physics/Entity_CalcAngle15.c` | Entity angle calc variant 15: atan2 with XZ distance check | `player::physics::entity_calcangle15` | `[x]` |
| **PHY-08** | `Entity_CalcAngle16` | `0x8001F830` | `entity/physics/Entity_CalcAngle16.c` | Entity angle calc variant 16: atan2 with XZ distance validation | `player::physics::entity_calcangle16` | `[x]` |
| **PHY-09** | `Entity_CalcAngle17` | `0x80020C34` | `entity/physics/Entity_CalcAngle17.c` | Entity angle calc variant 17: different entity offset format | `player::physics::entity_calcangle17` | `[x]` |
| **PHY-10** | `Entity_CalcAngle18` | `0x80020DB8` | `entity/physics/Entity_CalcAngle18.c` | Entity angle calc variant 18: uses entity[0x2E/0x36] | `player::physics::entity_calcangle18` | `[x]` |
| **PHY-11** | `Entity_CalcAngle19` | `0x80020F7C` | `entity/physics/Entity_CalcAngle19.c` | Entity angle calc variant 19: longer computation path | `player::physics::entity_calcangle19` | `[x]` |
| **PHY-12** | `Entity_CalcAngle20` | `0x8001F650` | `entity/physics/Entity_CalcAngle20.c` | Entity angle calc variant 20: atan2 with complex offset | `player::physics::entity_calcangle20` | `[x]` |
| **PHY-13** | `Entity_CalcAngle21` | `0x8001FDB4` | `entity/physics/Entity_CalcAngle21.c` | Entity angle calc variant 21: atan2 with Y component | `player::physics::entity_calcangle21` | `[x]` |
| **PHY-14** | `Entity_CalcAngle22` | `0x80021150` | `entity/physics/Entity_CalcAngle22.c` | Entity angle calc variant 22: complex offset computation | `player::physics::entity_calcangle22` | `[x]` |
| **PHY-15** | `Entity_CalcAngle3` | `0x800240FC` | `entity/physics/Entity_CalcAngle3.c` | Entity angle calc variant 3: atan2 from entity pos to target with offset | `player::physics::entity_calcangle3` | `[x]` |
| **PHY-16** | `Entity_CalcAngle4` | `0x80022F04` | `entity/physics/Entity_CalcAngle4.c` | Entity angle calc variant 4: different entity offset computation | `player::physics::entity_calcangle4` | `[x]` |
| **PHY-17** | `Entity_CalcAngle5` | `0x80021800` | `entity/physics/Entity_CalcAngle5.c` | Entity angle calc variant 5: atan2 with different entity offsets | `player::physics::entity_calcangle5` | `[x]` |
| **PHY-18** | `Entity_CalcAngle6` | `0x8001F9DC` | `entity/physics/Entity_CalcAngle6.c` | Entity angle calc variant 6: atan2 from entity to param2 target | `player::physics::entity_calcangle6` | `[x]` |
| **PHY-19** | `Entity_CalcAngle7` | `0x8001FC50` | `entity/physics/Entity_CalcAngle7.c` | Entity angle calc variant 7: tests entity[0x17E] flags before atan2 | `player::physics::entity_calcangle7` | `[x]` |
| **PHY-20** | `Entity_CalcAngle8` | `0x80020B08` | `entity/physics/Entity_CalcAngle8.c` | Entity angle calc variant 8: checks param2 flags, computes atan2 | `player::physics::entity_calcangle8` | `[x]` |
| **PHY-21** | `Entity_CalcAngle9` | `0x80021DF4` | `entity/physics/Entity_CalcAngle9.c` | Entity angle calc variant 9: checks param2 bit 3, atan2 with offset | `player::physics::entity_calcangle9` | `[x]` |
| **PHY-22** | `Entity_CalcAngleDelta` | `0x80072EFC` | `entity/physics/Entity_CalcAngleDelta.c` | Calculates angle delta: entity[0x56] = entity[0x5A] - entity[0x50] | `player::physics::entity_calcangledelta` | `[x]` |
| **PHY-23** | `Entity_CalcAngleToTarget_2` | `0x80069A2C` | `entity/physics/Entity_CalcAngleToTarget_2.c` | Calculates angle from entity to target point using GTE cos/sin + atan2 | `player::physics::entity_calcangletotarget_2` | `[x]` |
| **PHY-24** | `Entity_CalcAngleToward` | `0x8004130C` | `entity/physics/Entity_CalcAngleToward.c` | Calculates rotation angle from entity toward target entity | `player::physics::entity_calcangletoward` | `[x]` |
| **PHY-25** | `Entity_CalcCollisionAngle` | `0x80048654` | `entity/physics/Entity_CalcCollisionAngle.c` | Calculates collision angles: atan2 on surface normal, stores slope vectors at entity[0x48-4C] | `player::physics::entity_calccollisionangle` | `[x]` |
| **PHY-26** | `Entity_CalcMove` | `0x80023D48` | `entity/physics/Entity_CalcMove.c` | Entity move calculator: computes velocity + position | `player::physics::entity_calcmove` | `[x]` |
| **PHY-27** | `Entity_CalcMovePos` | `0x800634A8` | `entity/physics/Entity_CalcMovePos.c` | Calculates move position: GTE sin on entity[0x56/0x58], radius entity[0x64], updates pos | `player::physics::entity_calcmovepos` | `[x]` |
| **PHY-28** | `Entity_CalcOrbitPos` | `0x80063ECC` | `entity/physics/Entity_CalcOrbitPos.c` | Orbit position: uses GTE cos/sin on entity[0x58] angle + entity[0x64] radius for offset from parent | `player::physics::entity_calcorbitpos` | `[x]` |
| **PHY-29** | `Entity_CalcPath` | `0x80021AB0` | `entity/physics/Entity_CalcPath.c` | Entity path calculator: complex route computation toward target | `player::physics::entity_calcpath` | `[x]` |
| **PHY-30** | `Entity_CalcPos` | `0x8001F40C` | `entity/physics/Entity_CalcPos.c` | Entity position calculator: computes new pos from delta + flags | `player::physics::entity_calcpos` | `[x]` |
| **PHY-31** | `Entity_CalcRoute` | `0x80021394` | `entity/physics/Entity_CalcRoute.c` | Entity route calculator: computes path toward target | `player::physics::entity_calcroute` | `[x]` |
| **PHY-32** | `Entity_CalcTarget` | `0x80021F34` | `entity/physics/Entity_CalcTarget.c` | Entity target calculator: computes position delta to target entity | `player::physics::entity_calctarget` | `[x]` |
| **PHY-33** | `Entity_CheckAction` | `0x800552EC` | `entity/physics/Entity_CheckAction.c` | Entity action check: tests DAT_1f800230 + entity[0x181] + input flags | `player::physics::entity_checkaction` | `[x]` |
| **PHY-34** | `Entity_CheckAction2` | `0x8005308C` | `entity/physics/Entity_CheckAction2.c` | Entity action check variant 2: tests _DAT_800e7e84/85 + entity flags | `player::physics::entity_checkaction2` | `[x]` |
| **PHY-35** | `Entity_CheckActionTrigger` | `0x80055C30` | `entity/physics/Entity_CheckActionTrigger.c` | Checks if action trigger conditions met: sets sub-state to 0xB | `player::physics::entity_checkactiontrigger` | `[x]` |
| **PHY-36** | `Entity_CheckAnimEnd` | `0x80070830` | `entity/physics/Entity_CheckAnimEnd.c` | Checks if animation ended: entity[0x70] < 1, calls FUN_80041718(0,2) | `player::physics::entity_checkanimend` | `[x]` |
| **PHY-37** | `Entity_CheckClimbEnd` | `0x800661E0` | `entity/physics/Entity_CheckClimbEnd.c` | Checks climb end: entity[6] state, adjusts Y+10, collision check, sets flag 0x800E7EFE | `player::physics::entity_checkclimbend` | `[x]` |
| **PHY-38** | `Entity_CheckCollectible` | `0x80040C00` | `entity/physics/Entity_CheckCollectible.c` | Entity collectible check: tests _DAT_800e7fee, reads struct at offset | `player::physics::entity_checkcollectible` | `[x]` |
| **PHY-39** | `Entity_CheckCollision` | `0x80047778` | `entity/physics/Entity_CheckCollision.c` | Main collision detection: checks entity bounds against world geometry | collision::CollisionPlane::project_actor_onto_plane | [x] |
| **PHY-40** | `Entity_CheckCollisionAndAngle` | `0x800419C4` | `entity/physics/Entity_CheckCollisionAndAngle.c` | Checks collision at position offset, stores surface angle in entity[0x62] | `player::physics::entity_checkcollisionandangle` | `[x]` |
| **PHY-41** | `Entity_CheckCollisionFlags` | `0x80055634` | `entity/physics/Entity_CheckCollisionFlags.c` | Entity collision flag check: tests DAT_800bf816 + entity[0x174] flags | `player::physics::entity_checkcollisionflags` | `[x]` |
| **PHY-42** | `Entity_CheckCondition` | `0x8006BD20` | `entity/physics/Entity_CheckCondition.c` | Entity condition check: tests entity[2] and game state for behavior activation | `player::physics::entity_checkcondition` | `[x]` |
| **PHY-43** | `Entity_CheckDamage` | `0x8006918C` | `entity/physics/Entity_CheckDamage.c` | Entity damage check: tests entity[0x46] flags + global DAT_800e7edf condition | `player::physics::entity_checkdamage` | `[x]` |
| **PHY-44** | `Entity_CheckDistance3D` | `0x80023794` | `entity/physics/Entity_CheckDistance3D.c` | 3D distance check: sqrt(X^2+Z^2) vs entity[0x80] radius, Y bounds vs entity[0x86] | `player::physics::entity_checkdistance3d` | `[x]` |
| **PHY-45** | `Entity_CheckEvent` | `0x800421CC` | `entity/physics/Entity_CheckEvent.c` | Entity event check: tests entity[0x72] and global DAT_800e806e for event trigger | `player::physics::entity_checkevent` | `[x]` |
| **PHY-46** | `Entity_CheckEventTrigger` | `0x8005344C` | `entity/physics/Entity_CheckEventTrigger.c` | Checks if specific event (level 4, bit 0x10) should trigger for entity | `player::physics::entity_checkeventtrigger` | `[x]` |
| **PHY-47** | `Entity_CheckFlag` | `0x800665F4` | `entity/physics/Entity_CheckFlag.c` | Entity flag checker: tests entity[0x6A] bit 0x8000, validates | `player::physics::entity_checkflag` | `[x]` |
| **PHY-48** | `Entity_CheckGround` | `0x800696C4` | `entity/physics/Entity_CheckGround.c` | Entity ground checker: calls FUN_800495dc, validates ground | `player::physics::entity_checkground` | `[x]` |
| **PHY-49** | `Entity_CheckInputActive` | `0x800557EC` | `entity/physics/Entity_CheckInputActive.c` | Checks if entity[0x148] is set OR input state flag is active | `player::physics::entity_checkinputactive` | `[x]` |
| **PHY-50** | `Entity_CheckInteraction` | `0x80023618` | `entity/physics/Entity_CheckInteraction.c` | Checks if two entities can interact: same type, valid spawn check | `player::physics::entity_checkinteraction` | `[x]` |
| **PHY-51** | `Entity_CheckLifecycle` | `0x80041F34` | `entity/physics/Entity_CheckLifecycle.c` | Entity lifecycle check: tests entity[5]==3, entity[0x42]==-1 for completion | `player::physics::entity_checklifecycle` | `[x]` |
| **PHY-52** | `Entity_CheckLoop` | `0x800368D0` | `entity/physics/Entity_CheckLoop.c` | Entity check loop: entity[0x24] counter, validates state | `player::physics::entity_checkloop` | `[x]` |
| **PHY-53** | `Entity_CheckPlayer` | `0x80044308` | `entity/physics/Entity_CheckPlayer.c` | Entity player checker: tests entity[0x72] bit 0x8000 | `player::physics::entity_checkplayer` | `[x]` |
| **PHY-54** | `Entity_CheckProximity` | `0x80069B6C` | `entity/physics/Entity_CheckProximity.c` | Checks if entity is within 0x1CC distance of another entity on all axes | `player::physics::entity_checkproximity` | `[x]` |
| **PHY-55** | `Entity_CheckState` | `0x800535E0` | `entity/physics/Entity_CheckState.c` | Entity state checker: switch on entity[0x6C] type, returns state | `player::physics::entity_checkstate` | `[x]` |
| **PHY-56** | `Entity_CheckState2` | `0x80051300` | `entity/physics/Entity_CheckState2.c` | Entity state check variant 2: iterates entity[9] flags | `player::physics::entity_checkstate2` | `[x]` |
| **PHY-57** | `Entity_CheckState3` | `0x8006042C` | `entity/physics/Entity_CheckState3.c` | Entity state check variant 3: checks DAT_1f800253/237 | `player::physics::entity_checkstate3` | `[x]` |
| **PHY-58** | `Entity_CheckStateAndSet` | `0x80041FCC` | `entity/physics/Entity_CheckStateAndSet.c` | Checks if entity[5] != 3, if so sets entity[5] = 10 and returns 1 | `player::physics::entity_checkstateandset` | `[x]` |
| **PHY-59** | `Entity_CheckStateType` | `0x8005376C` | `entity/physics/Entity_CheckStateType.c` | Entity state type check: switch on entity[0x176] returning entity[0x44] state | `player::physics::entity_checkstatetype` | `[x]` |
| **PHY-60** | `Entity_CheckTarget` | `0x800205CC` | `entity/physics/Entity_CheckTarget.c` | Entity target checker: validates target entity ptr | `player::physics::entity_checktarget` | `[x]` |
| **PHY-61** | `Entity_CheckVisibility` | `0x8002B278` | `entity/physics/Entity_CheckVisibility.c` | Subrutina de Entity_CheckVisibility (entity/physics/Entity_CheckVisibility.c) | `player::physics::entity_checkvisibility` | `[x]` |
| **PHY-62** | `Entity_MoveCalc` | `0x8002423C` | `entity/physics/Entity_MoveCalc.c` | Entity move calculator: computes velocity from entity[0x4A], updates pos | `player::physics::entity_movecalc` | `[x]` |
| **PHY-63** | `Entity_MoveInCircle` | `0x80070E60` | `entity/physics/Entity_MoveInCircle.c` | Circular motion: cos/sin on entity[0x44] angle, offset from entity[0x4E/0x50/0x52], advance angle 0x20 | `player::physics::entity_moveincircle` | `[x]` |
| **PHY-64** | `Entity_MoveMain` | `0x8001EC3C` | `entity/physics/Entity_MoveMain.c` | Entity move main: trajectory + collision + position | `player::physics::entity_movemain` | `[x]` |
| **PHY-65** | `Entity_MoveTarget` | `0x80023A04` | `entity/physics/Entity_MoveTarget.c` | Entity move to target: computes trajectory toward point | `player::physics::entity_movetarget` | `[x]` |
| **PHY-66** | `Entity_MoveTo` | `0x8001FF7C` | `entity/physics/Entity_MoveTo.c` | Entity move-to: computes trajectory, updates position | `player::physics::entity_moveto` | `[x]` |
| **PHY-67** | `Entity_MoveToTarget` | `0x80041938` | `entity/physics/Entity_MoveToTarget.c` | Entity moves toward target: collision check with entity[0x29] state, sets angle via atan2 | `player::physics::entity_movetotarget` | `[x]` |
| **PHY-68** | `Entity_MoveToward` | `0x80041194` | `entity/physics/Entity_MoveToward.c` | Moves entity toward target: physics step with collision, sets angle on success | `player::physics::entity_movetoward` | `[x]` |
| **PHY-69** | `Entity_PhysicsAndAngle` | `0x80041AC0` | `entity/physics/Entity_PhysicsAndAngle.c` | Runs physics step + stores resulting angle in entity[0x60] | `player::physics::entity_physicsandangle` | `[x]` |
| **PHY-70** | `Entity_PhysicsApply` | `0x8005B370` | `entity/physics/Entity_PhysicsApply.c` | Entity physics applier: calls FUN_80055d5c, updates velocity | `player::physics::entity_physicsapply` | `[x]` |
| **PHY-71** | `Entity_PhysicsClimb` | `0x8003FC00` | `entity/physics/Entity_PhysicsClimb.c` | Subrutina de Entity_PhysicsClimb (entity/physics/Entity_PhysicsClimb.c) | `player::physics::entity_physicsclimb` | `[x]` |
| **PHY-72** | `Entity_PhysicsFull` | `0x8003FBC4` | `entity/physics/Entity_PhysicsFull.c` | Subrutina de Entity_PhysicsFull (entity/physics/Entity_PhysicsFull.c) | `player::physics::entity_physicsfull` | `[x]` |
| **PHY-73** | `Entity_PhysicsIfMatch` | `0x8003FC8C` | `entity/physics/Entity_PhysicsIfMatch.c` | Runs physics step only if global flag at 0x800BF816 matches entity[0x6A] ID | `player::physics::entity_physicsifmatch` | `[x]` |
| **PHY-74** | `Entity_PhysicsInit` | `0x80069858` | `entity/physics/Entity_PhysicsInit.c` | Entity physics initializer: calls collision + slope calc, checks result | `player::physics::entity_physicsinit` | `[x]` |
| **PHY-75** | `Entity_PhysicsMain` | `0x80063F9C` | `entity/physics/Entity_PhysicsMain.c` | Entity physics main: collision + movement pipeline | `player::physics::entity_physicsmain` | `[x]` |
| **PHY-76** | `Entity_PhysicsMove` | `0x80056C00` | `entity/physics/Entity_PhysicsMove.c` | Entity physics move: entity[0x29]=0, checks collision + angle | `player::physics::entity_physicsmove` | `[x]` |
| **PHY-77** | `Entity_PhysicsStep` | `0x8004766C` | `entity/physics/Entity_PhysicsStep.c` | Physics/collision step: checks collision, updates entity position from result | `player::physics::entity_physicsstep` | `[x]` |
| **PHY-78** | `Entity_PhysicsStep2` | `0x80055D5C` | `entity/physics/Entity_PhysicsStep2.c` | Entity physics step variant 2: collision + slope calc + angle update | `player::physics::entity_physicsstep2` | `[x]` |
| **PHY-79** | `Entity_PhysicsStep3` | `0x80060A80` | `entity/physics/Entity_PhysicsStep3.c` | Entity physics step variant 3: different velocity handling | `player::physics::entity_physicsstep3` | `[x]` |
| **PHY-80** | `Entity_PhysicsStep4` | `0x8005AEE4` | `entity/physics/Entity_PhysicsStep4.c` | Entity physics step variant 4: different collision path | `player::physics::entity_physicsstep4` | `[x]` |
| **PHY-81** | `Entity_PhysicsStepRot` | `0x80048750` | `entity/physics/Entity_PhysicsStepRot.c` | Physics step with rotation: computes rotation angles from collision data via atan2 | collision::CollisionPlane::is_wall_blocking | [x] |
| **PHY-82** | `Entity_PhysicsUpdate` | `0x80055E28` | `entity/physics/Entity_PhysicsUpdate.c` | Entity physics update: entity[0x14A] flags, collision + movement | `player::physics::entity_physicsupdate` | `[x]` |

---

## 🗂️ SECTOR 3: 2.5D Collision & SCLD Rail Grid

> Geometría sobre rieles 2.5D, proyección ortogonal a planos, sondeo de suelos, paredes bloqueantes y bifurcaciones.

| ID | Función / Símbolo | Dirección PS1 | Archivo C | Comportamiento Técnico Original | Mapeo Bevy (Rust) | Estado |
| :--- | :--- | :---: | :--- | :--- | :--- | :---: |
| **COL-01** | `Collision_CalcAngle` | `0x80049760` | `collision/Collision_CalcAngle.c` | Collision angle calc: atan2 on _DAT_1f8001b4-b8, stores at _DAT_1f8001a0 | `collision::FloorSegment::slope_angle` | `[x]` |
| **COL-02** | `Collision_CalcSlope` | `0x80049674` | `collision/Collision_CalcSlope.c` | Collision slope calculator: atan2 on surface normal, sqrt on XZ components | `collision::FloorSegment::surface_normal` | `[x]` |
| **COL-03** | `Collision_CalcVector` | `0x80049418` | `collision/Collision_CalcVector.c` | Collision vector calc: GTE cos/sin on param_4, stores result in scratchpad | `collision::CollisionPlane::point_at` | `[x]` |
| **COL-04** | `Collision_Check1` | `0x80049250` | `collision/Collision_Check1.c` | Collision check variant 1: calls 0x80045B30 with entity angle | `collision::CollisionPlane::resolve_wall_movement` | `[x]` |
| **COL-05** | `Collision_Check2_2` | `0x80048894` | `collision/Collision_Check2_2.c` | Collision check variant 2: saves entity pos, tests collision flags | `collision::CollisionPlane::resolve_wall_movement` | `[x]` |
| **COL-06** | `Collision_Check3_2` | `0x800489E4` | `collision/Collision_Check3_2.c` | Collision check variant 3: saves entity pos at _DAT_1f8001bc/c0/c2 | `collision::CollisionPlane::resolve_wall_movement` | `[x]` |
| **COL-07** | `Collision_CheckEnv` | `0x80046E2C` | `collision/Collision_CheckEnv.c` | Collision environment check: full world collision | `collision::LevelCollision::snap_actor_to_terrain` | `[x]` |
| **COL-08** | `Collision_CheckFull` | `0x80048B30` | `collision/Collision_CheckFull.c` | Collision full checker: reads collision result, validates hit | `collision::LevelCollision::snap_actor_to_terrain` | `[x]` |
| **COL-09** | `Collision_CheckFull2` | `0x80046A44` | `collision/Collision_CheckFull2.c` | Collision full check variant 2: extended validation | `collision::LevelCollision::snap_actor_to_terrain` | `[x]` |
| **COL-10** | `Collision_CheckMain` | `0x80047B5C` | `collision/Collision_CheckMain.c` | Collision check main: computes collision flags, checks geometry | `collision::CollisionPlane::sample_ground_contact` | `[x]` |
| **COL-11** | `Collision_CheckMove` | `0x8004720C` | `collision/Collision_CheckMove.c` | Collision move checker: computes new pos from collision | `collision::CollisionPlane::resolve_wall_movement` | `[x]` |
| **COL-12** | `Collision_CheckResult` | `0x80048360` | `collision/Collision_CheckResult.c` | Collision result checker: computes normal + distance | `collision::GroundContact` | `[x]` |
| **COL-13** | `Collision_CheckWall` | `0x80048134` | `collision/Collision_CheckWall.c` | Collision wall checker: computes wall normal, push | `collision::CollisionPlane::resolve_wall_movement` | `[x]` |
| **COL-14** | `Collision_FindGround` | `0x800498C8` | `collision/Collision_FindGround.c` | Collision loop: repeatedly checks floor height until valid ground found (bit 0x4000) | `collision::CollisionPlane::sample_ground_contact` | `[x]` |
| **COL-15** | `Collision_GetFloorHeight` | `0x80047CBC` | `collision/Collision_GetFloorHeight.c` | Heightmap/floor collision: looks up ground height from world grid at entity position | `collision::FloorSegment::height_at` | `[x]` |
| **COL-16** | `Collision_GetSurfaceType` | `0x8004960C` | `collision/Collision_GetSurfaceType.c` | Reads collision surface type byte from geometry response data | `collision::SurfaceType::from_kind` | `[x]` |
| **COL-17** | `Collision_GridInit` | `0x8004798C` | `collision/Collision_GridInit.c` | Collision grid initializer: sets up collision grid bounds | `collision::LevelCollision::load_from_file` | `[x]` |
| **COL-18** | `Collision_GridLookup` | `0x80048ECC` | `collision/Collision_GridLookup.c` | Collision grid lookup: indexes grid from _DAT_1f8001c8 table | `collision::LevelCollision::get_plane` | `[x]` |
| **COL-19** | `Collision_GridSelect` | `0x80048D3C` | `collision/Collision_GridSelect.c` | Collision grid selector: switch on DAT_800bf870, sets grid ptr | `collision::LevelCollision::get_plane` | `[x]` |
| **COL-20** | `Collision_GridWalk` | `0x800490E4` | `collision/Collision_GridWalk.c` | Collision grid walker: walks grid from _DAT_1f8001c8 ptr | `collision::LevelCollision::check_junction` | `[x]` |
| **COL-21** | `Collision_InitGrid` | `0x80049968` | `collision/Collision_InitGrid.c` | Initializes collision grid pointers from header at 0x1F8001C8 | `collision::LevelCollision::planes` | `[x]` |
| **COL-22** | `Collision_Main` | `0x800462E4` | `collision/Collision_Main.c` | Collision main: full collision detection pipeline | `collision::LevelCollision::advance_actor_along_rail` | `[x]` |
| **COL-23** | `Collision_Move` | `0x80045724` | `collision/Collision_Move.c` | Collision move processor: reads collision result, updates entity pos step | `collision::LevelCollision::advance_actor_along_rail` | `[x]` |
| **COL-24** | `Collision_Move2` | `0x800459D0` | `collision/Collision_Move2.c` | Collision move variant 2: reads _DAT_1f8001ec, updates position | `collision::LevelCollision::advance_actor_along_rail` | `[x]` |
| **COL-25** | `Collision_Move3` | `0x800468AC` | `collision/Collision_Move3.c` | Collision move variant 3: GTE cos/sin, updates position from normal | `collision::FloorSegment::surface_normal` | `[x]` |
| **COL-26** | `Collision_MoveMain` | `0x80045CAC` | `collision/Collision_MoveMain.c` | Collision move main: full collision response pipeline | `collision::LevelCollision::advance_actor_along_rail` | `[x]` |
| **COL-27** | `Collision_Process` | `0x80049800` | `collision/Collision_Process.c` | Collision result processor: reads _DAT_1f8001e0, updates entity position | `collision::LevelCollision::advance_actor_along_rail` | `[x]` |
| **COL-28** | `Collision_ProcessResult` | `0x80048034` | `collision/Collision_ProcessResult.c` | Processes collision result: extracts surface normal and contact point from hit data | `collision::GroundContact` | `[x]` |
| **COL-29** | `Collision_Push` | `0x80045810` | `collision/Collision_Push.c` | Collision push handler: reads _DAT_1f8001e0, applies push vector | `collision::CollisionPlane::resolve_wall_movement` | `[x]` |
| **COL-30** | `Collision_Push2` | `0x80047468` | `collision/Collision_Push2.c` | Collision push variant 2: GTE cos/sin, applies push | `collision::CollisionPlane::resolve_wall_movement` | `[x]` |
| **COL-31** | `Collision_Push3` | `0x8004602C` | `collision/Collision_Push3.c` | Collision push variant 3: computes push from normal | `collision::CollisionPlane::resolve_wall_movement` | `[x]` |
| **COL-32** | `Collision_Slope2` | `0x80048FC4` | `collision/Collision_Slope2.c` | Collision slope calc variant 2: different scratchpad layout | `collision::LevelCollision::advance_actor_along_rail` | `[x]` |
| **COL-33** | `Collision_Vector2` | `0x800492B0` | `collision/Collision_Vector2.c` | Collision vector calc variant 2: GTE cos/sin, stores result | `collision::CollisionPlane::project_actor_onto_plane` | `[x]` |
| **COL-34** | `Collision_Vector3` | `0x800455C0` | `collision/Collision_Vector3.c` | Collision vector calc variant 3: GTE cos/sin on param_4 | `collision::CollisionPlane::point_at` | `[x]` |
| **COL-35** | `Collision_Vector4` | `0x80045B30` | `collision/Collision_Vector4.c` | Collision vector calc variant 4: different scratchpad usage | `collision::CollisionPlane::point_at` | `[x]` |

---

## 🗂️ SECTOR 4: Entity Allocation, Lifecycle & Loops

> Gestión de memoria de entidades, pools 0..5, listas enlazadas (Active, Inactive, Background) y bucles por tick.

| ID | Función / Símbolo | Dirección PS1 | Archivo C | Comportamiento Técnico Original | Mapeo Bevy (Rust) | Estado |
| :--- | :--- | :---: | :--- | :--- | :--- | :---: |
| **ENT-001** | `Entity_AllocBackground` | `0x8007A464` | `entity/alloc/Entity_AllocBackground.c` | Allocates background entity from free list, inserts with mode selection | `entity::lifecycle::entity_allocbackground` | `[ ]` |
| **ENT-002** | `Entity_AllocBackground03` | `0x8007AB20` | `entity/alloc/Entity_AllocBackground03.c` | Wrapper: Entity_AllocBackground(0, 3) - allocates background entity at position 3 | `entity::lifecycle::entity_allocbackground03` | `[ ]` |
| **ENT-003** | `Entity_AllocByPoolId` | `0x8007A980` | `entity/alloc/Entity_AllocByPoolId.c` | Routes allocation to correct pool (0-4) based on first parameter | `entity::lifecycle::entity_allocbypoolid` | `[ ]` |
| **ENT-004** | `Entity_AllocChildSlot` | `0x8007B26C` | `entity/alloc/Entity_AllocChildSlot.c` | Allocates a free slot in the child entity table (0x28 slots of 0x40 bytes) | `entity::lifecycle::entity_allocchildslot` | `[ ]` |
| **ENT-005** | `Entity_AllocDispatch` | `0x8007AA38` | `entity/alloc/Entity_AllocDispatch.c` | Entity alloc dispatcher: switch on entity[10] type, different alloc paths | `entity::lifecycle::entity_allocdispatch` | `[ ]` |
| **ENT-006** | `Entity_AllocFromFreeList` | `0x8007AAE8` | `entity/alloc/Entity_AllocFromFreeList.c` | Allocs entity from free list at _DAT_800ed098, pops head, returns pointer | `entity::lifecycle::entity_allocfromfreelist` | `[ ]` |
| **ENT-007** | `Entity_AllocFromPool` | `0x800519E0` | `entity/alloc/Entity_AllocFromPool.c` | Entity pool allocator: checks pool count, allocs entity struct | `entity::lifecycle::entity_allocfrompool` | `[ ]` |
| **ENT-008** | `Entity_AllocPool0` | `0x80079C3C` | `entity/alloc/Entity_AllocPool0.c` | Allocates entity from pool 0, inserts into doubly-linked list at head/tail/before/after | `entity::lifecycle::entity_allocpool0` | `[ ]` |
| **ENT-009** | `Entity_AllocPool1` | `0x80079DDC` | `entity/alloc/Entity_AllocPool1.c` | Allocates entity from pool 1 with list insertion modes | `entity::lifecycle::entity_allocpool1` | `[ ]` |
| **ENT-010** | `Entity_AllocPool2` | `0x80079F90` | `entity/alloc/Entity_AllocPool2.c` | Allocates entity from pool 2 with list insertion modes | `entity::lifecycle::entity_allocpool2` | `[ ]` |
| **ENT-011** | `Entity_AllocPool3` | `0x8007A12C` | `entity/alloc/Entity_AllocPool3.c` | Allocates entity from pool 3 with list insertion modes | `entity::lifecycle::entity_allocpool3` | `[ ]` |
| **ENT-012** | `Entity_AllocPool4` | `0x8007A2C8` | `entity/alloc/Entity_AllocPool4.c` | Allocates entity from pool 4 with list insertion modes | `entity::lifecycle::entity_allocpool4` | `[ ]` |
| **ENT-013** | `Entity_AllocSlot` | `0x8007AD98` | `entity/alloc/Entity_AllocSlot.c` | Allocates free child slot: scans 8 slots of 0x4C at 0x80100400, returns first empty | `entity::lifecycle::entity_allocslot` | `[ ]` |
| **ENT-014** | `Entity_AllocSubEntities` | `0x80040410` | `entity/alloc/Entity_AllocSubEntities.c` | Allocates multiple sub-entity structures (hitboxes/parts) from table data | `entity::lifecycle::entity_allocsubentities` | `[ ]` |
| **ENT-015** | `Entity_ClearInputFlags` | `0x8007A8E0` | `entity/alloc/Entity_ClearInputFlags.c` | Resets engine state buffer and input flags | `entity::lifecycle::entity_clearinputflags` | `[ ]` |
| **ENT-016** | `Entity_ClearPool0` | `0x8007AC14` | `entity/alloc/Entity_ClearPool0.c` | Clears entity memory pool at 0x800E8008 (0x90 bytes) with memset | `entity::lifecycle::entity_clearpool0` | `[ ]` |
| **ENT-017** | `Entity_ClearPool1` | `0x8007AC40` | `entity/alloc/Entity_ClearPool1.c` | Clears entity memory pool at 0x800F2418 (0x20C bytes) with memset | `entity::lifecycle::entity_clearpool1` | `[ ]` |
| **ENT-018** | `Entity_ClearPool2` | `0x8007AC6C` | `entity/alloc/Entity_ClearPool2.c` | Clears entity memory pool at 0x80100660 (0x30 bytes) with memset | `entity::lifecycle::entity_clearpool2` | `[ ]` |
| **ENT-019** | `Entity_ClearPool3` | `0x8007AC98` | `entity/alloc/Entity_ClearPool3.c` | Clears entity memory pool at 0x800ED018 (0x3C bytes) with memset | `entity::lifecycle::entity_clearpool3` | `[ ]` |
| **ENT-020** | `Entity_ClearPool4` | `0x8007AD14` | `entity/alloc/Entity_ClearPool4.c` | Clears entity memory pool at 0x800ED058 (0x40 bytes) with memset | `entity::lifecycle::entity_clearpool4` | `[ ]` |
| **ENT-021** | `Entity_ClearPool5` | `0x8007ACC4` | `entity/alloc/Entity_ClearPool5.c` | Clears 8 blocks of 0x4C bytes at 0x80100400 (entity child/slot table) | `entity::lifecycle::entity_clearpool5` | `[ ]` |
| **ENT-022** | `Entity_InitAttackState` | `0x8006923C` | `entity/alloc/Entity_InitAttackState.c` | Initializes attack state: entity[0x46] dispatch, sets entity[0x6A], SFX 0x22, timer 0x6E | `entity::lifecycle::entity_initattackstate` | `[ ]` |
| **ENT-023** | `Entity_InitAttackTrail` | `0x8006BDF0` | `entity/alloc/Entity_InitAttackTrail.c` | Inits attack trail: sets entity[0x68] angle, entity[0x6A]=0x400, SFX 0x22, optional trail | `entity::lifecycle::entity_initattacktrail` | `[ ]` |
| **ENT-024** | `Entity_InitBackgroundPool` | `0x8007A810` | `entity/alloc/Entity_InitBackgroundPool.c` | Initializes background entity pool with 4 pre-allocated entities | `entity::lifecycle::entity_initbackgroundpool` | `[ ]` |
| **ENT-025** | `Entity_InitBehavior` | `0x80028E10` | `entity/alloc/Entity_InitBehavior.c` | Subrutina de Entity_InitBehavior (entity/alloc/Entity_InitBehavior.c) | `entity::lifecycle::entity_initbehavior` | `[ ]` |
| **ENT-026** | `Entity_InitBehaviorConfig` | `0x8006C59C` | `entity/alloc/Entity_InitBehaviorConfig.c` | Configures entity behavior: sets sprite bounds, draw func, and state to 1 | `entity::lifecycle::entity_initbehaviorconfig` | `[ ]` |
| **ENT-027** | `Entity_InitChildFinalize` | `0x80026F88` | `entity/alloc/Entity_InitChildFinalize.c` | Step 4: finalize child entity setup (stride 0x28) | `entity::lifecycle::entity_initchildfinalize` | `[ ]` |
| **ENT-028** | `Entity_InitChildPipeline` | `0x80027058` | `entity/alloc/Entity_InitChildPipeline.c` | Runs child entity through 4-step init pipeline (position, rotation, scale, finalize) | `entity::lifecycle::entity_initchildpipeline` | `[ ]` |
| **ENT-029** | `Entity_InitChildPosition` | `0x80026D08` | `entity/alloc/Entity_InitChildPosition.c` | Step 1: init child position from data (stride 0x24) | `entity::lifecycle::entity_initchildposition` | `[ ]` |
| **ENT-030** | `Entity_InitChildRotation` | `0x80026DD8` | `entity/alloc/Entity_InitChildRotation.c` | Step 2: init child rotation/animation from data (stride 0x2C) | `entity::lifecycle::entity_initchildrotation` | `[ ]` |
| **ENT-031** | `Entity_InitChildScale` | `0x80026EB8` | `entity/alloc/Entity_InitChildScale.c` | Step 3: init child scale/size from data (stride 0x24) | `entity::lifecycle::entity_initchildscale` | `[ ]` |
| **ENT-032** | `Entity_InitCombat` | `0x800708CC` | `entity/alloc/Entity_InitCombat.c` | Entity combat init: entity[0x44]=0x400, saves pos at _DAT_800bf826, sets flag bit 5 | `entity::lifecycle::entity_initcombat` | `[ ]` |
| **ENT-033** | `Entity_InitConfig` | `0x8006ACAC` | `entity/alloc/Entity_InitConfig.c` | Entity config initializer: switch on entity[2] type | `entity::lifecycle::entity_initconfig` | `[ ]` |
| **ENT-034** | `Entity_InitDrawEnv` | `0x8005262C` | `entity/alloc/Entity_InitDrawEnv.c` | Initializes entity draw environment: sets up GTE and render state | main::setup_scene (GTE Draw Env) | [x] |
| **ENT-035** | `Entity_InitFreeList` | `0x8007B0F0` | `entity/alloc/Entity_InitFreeList.c` | Builds free list: clears 0x208 blocks of 0x44 bytes, links them backward, sets count | `entity::lifecycle::entity_initfreelist` | `[ ]` |
| **ENT-036** | `Entity_InitFromGlobals` | `0x800682C4` | `entity/alloc/Entity_InitFromGlobals.c` | Inits entity state from globals: sets sprite flags entity[0xD] from DAT_800bf881 | `entity::lifecycle::entity_initfromglobals` | `[ ]` |
| **ENT-037** | `Entity_InitFromScript` | `0x80040CDC` | `entity/alloc/Entity_InitFromScript.c` | Initializes entity from script data: sets up callback, flags, and script pointer | `entity::lifecycle::entity_initfromscript` | `[ ]` |
| **ENT-038** | `Entity_InitFromTable` | `0x8006AC7C` | `entity/alloc/Entity_InitFromTable.c` | Initializes entity from data table at 0x800A4A94 indexed by param | `entity::lifecycle::entity_initfromtable` | `[ ]` |
| **ENT-039** | `Entity_InitFromTypeTable` | `0x8004A9A4` | `entity/alloc/Entity_InitFromTypeTable.c` | Initializes entity sprite/bounds from type data table at 0x800A29CC (8 bytes/entry) | `entity::lifecycle::entity_initfromtypetable` | `[ ]` |
| **ENT-040** | `Entity_InitFull` | `0x8001E860` | `entity/alloc/Entity_InitFull.c` | Entity full initializer: sets all entity fields from data | `entity::lifecycle::entity_initfull` | `[ ]` |
| **ENT-041** | `Entity_InitGlobals2` | `0x8007B38C` | `entity/alloc/Entity_InitGlobals2.c` | Entity globals init: copies 0x800FB166-167 to 0x800BFE4C-4E, sets related flags | `entity::lifecycle::entity_initglobals2` | `[ ]` |
| **ENT-042** | `Entity_InitMatrix` | `0x80051C8C` | `entity/alloc/Entity_InitMatrix.c` | Initializes entity GTE matrix to identity (0x1000 scale) at entity[0x98] | `entity::lifecycle::entity_initmatrix` | `[ ]` |
| **ENT-043** | `Entity_InitObjState` | `0x8006914C` | `entity/alloc/Entity_InitObjState.c` | Initializes object state: sets entity[0x44/0x45/0x2B/0x4/0x6E/0x6F], decrements counter | `entity::lifecycle::entity_initobjstate` | `[ ]` |
| **ENT-044** | `Entity_InitPlayer` | `0x800716B4` | `entity/alloc/Entity_InitPlayer.c` | Initializes player entity: sets global ptr, positions 0, scales 0x200, angles 0, entity[0xB]=0xF | `entity::lifecycle::entity_initplayer` | `[ ]` |
| **ENT-045** | `Entity_InitRenderQueue` | `0x8007AD40` | `entity/alloc/Entity_InitRenderQueue.c` | Initializes render queue: clears 0xA00 bytes at 0x800EC188, sets 0x28 entries | `entity::lifecycle::entity_initrenderqueue` | `[ ]` |
| **ENT-046** | `Entity_InitScript` | `0x800713F8` | `entity/alloc/Entity_InitScript.c` | Entity script init: entity[6]=0, calls FUN_80040cdc to load script data | `entity::lifecycle::entity_initscript` | `[ ]` |
| **ENT-047** | `Entity_InitScriptData` | `0x80040DE0` | `entity/alloc/Entity_InitScriptData.c` | Entity script data init: stores sprite/script ptrs at entity[0x6C/0x72/0x74] | `entity::lifecycle::entity_initscriptdata` | `[ ]` |
| **ENT-048** | `Entity_InitScriptFlags` | `0x80040D68` | `entity/alloc/Entity_InitScriptFlags.c` | Sets entity script processing flags from u16: bit 0x1000=flag2, 0x4000=flag4 | `entity::lifecycle::entity_initscriptflags` | `[ ]` |
| **ENT-049** | `Entity_InitSprite` | `0x8007E110` | `entity/alloc/Entity_InitSprite.c` | Inits sprite entity in pool 3: entity[0x47]=2, assigns sprite data from DAT_800ecf60 | `entity::lifecycle::entity_initsprite` | `[ ]` |
| **ENT-050** | `Entity_InitSpriteConfig` | `0x8006ABF4` | `entity/alloc/Entity_InitSpriteConfig.c` | Initializes sprite config: sets entity[0xB-0xD], loads anim data from table 0x36 | `entity::lifecycle::entity_initspriteconfig` | `[ ]` |
| **ENT-051** | `Entity_InitSpriteConfig2` | `0x8006AC38` | `entity/alloc/Entity_InitSpriteConfig2.c` | Initializes sprite config variant: same structure, uses table index 0x13C | `entity::lifecycle::entity_initspriteconfig2` | `[ ]` |
| **ENT-052** | `Entity_InitSpriteType2` | `0x8002343C` | `entity/alloc/Entity_InitSpriteType2.c` | Sets up sprite config bytes for type 2: state=2, size=2, count=2 | `entity::lifecycle::entity_initspritetype2` | `[ ]` |
| **ENT-053** | `Entity_InitSpriteType3` | `0x80023528` | `entity/alloc/Entity_InitSpriteType3.c` | Sets up sprite config bytes for type 3: state=3, size=2, count=11 | `entity::lifecycle::entity_initspritetype3` | `[ ]` |
| **ENT-054** | `Entity_InitSubEntity` | `0x80051B70` | `entity/alloc/Entity_InitSubEntity.c` | Initializes sub-entity: allocates if slots available, sets default values | `entity::lifecycle::entity_initsubentity` | `[ ]` |
| **ENT-055** | `Entity_InitSystem` | `0x800520E0` | `entity/alloc/Entity_InitSystem.c` | Entity system init: calls InitGlobals2, resets flags at 0x800BF4FA/ECF4A-E | `entity::lifecycle::entity_initsystem` | `[ ]` |
| **ENT-056** | `Entity_InitTrail` | `0x8006B020` | `entity/alloc/Entity_InitTrail.c` | Entity trail init: sets _DAT_1f8000c8/cc based on param, plays SFX | `entity::lifecycle::entity_inittrail` | `[ ]` |
| **ENT-057** | `Entity_InitType` | `0x80069948` | `entity/alloc/Entity_InitType.c` | Entity type initializer: calls FUN_80069858, sets entity[0]/[0x2B] state | `entity::lifecycle::entity_inittype` | `[ ]` |
| **ENT-058** | `Entity_InitType2` | `0x80058648` | `entity/alloc/Entity_InitType2.c` | Entity type init variant 2: AllocFromPool, sets config | `entity::lifecycle::entity_inittype2` | `[ ]` |
| **ENT-059** | `Entity_InitUI` | `0x800738B0` | `entity/alloc/Entity_InitUI.c` | Entity UI init: calls draw functions with 0x4000/0x2000 flags, sets up UI elem | `entity::lifecycle::entity_initui` | `[ ]` |
| **ENT-060** | `EntityLoop_Active` | `0x8003C048` | `entity/loop/EntityLoop_Active.c` | Subrutina de EntityLoop_Active (entity/loop/EntityLoop_Active.c) | `entity::lifecycle::entityloop_active` | `[ ]` |
| **ENT-061** | `EntityLoop_Background` | `0x8003EEC0` | `entity/loop/EntityLoop_Background.c` | Subrutina de EntityLoop_Background (entity/loop/EntityLoop_Background.c) | `entity::lifecycle::entityloop_background` | `[ ]` |
| **ENT-062** | `EntityLoop_Background_Draw` | `0x8003BF00` | `entity/loop/EntityLoop_Background_Draw.c` | Subrutina de EntityLoop_Background_Draw (entity/loop/EntityLoop_Background_Draw.c) | `entity::lifecycle::entityloop_background_draw` | `[ ]` |
| **ENT-063** | `EntityLoop_NPC` | `0x8003BCF4` | `entity/loop/EntityLoop_NPC.c` | Subrutina de EntityLoop_NPC (entity/loop/EntityLoop_NPC.c) | `entity::lifecycle::entityloop_npc` | `[ ]` |
| **ENT-064** | `EntityLoop_Object` | `0x8003BB50` | `entity/loop/EntityLoop_Object.c` | Subrutina de EntityLoop_Object (entity/loop/EntityLoop_Object.c) | `entity::lifecycle::entityloop_object` | `[ ]` |
| **ENT-065** | `EntityLoop_Player` | `0x8003B588` | `entity/loop/EntityLoop_Player.c` | Subrutina de EntityLoop_Player (entity/loop/EntityLoop_Player.c) | `entity::lifecycle::entityloop_player` | `[ ]` |
| **ENT-066** | `Entity_ActionCheck2` | `0x80055704` | `entity/Entity_ActionCheck2.c` | Entity action check variant 2: tests DAT_1f800230 + entity flags | `entity::lifecycle::entity_actioncheck2` | `[ ]` |
| **ENT-067** | `Entity_ActionDispatch` | `0x80058304` | `entity/Entity_ActionDispatch.c` | Entity action dispatcher: switch on action type | `entity::lifecycle::entity_actiondispatch` | `[ ]` |
| **ENT-068** | `Entity_ActionMain` | `0x80058F5C` | `entity/Entity_ActionMain.c` | Entity action main: action state dispatcher (251L) | `entity::lifecycle::entity_actionmain` | `[ ]` |
| **ENT-069** | `Entity_ActionStateMachine` | `0x80067CA4` | `entity/Entity_ActionStateMachine.c` | Entity action state machine: switch on entity[5], 6 states | `entity::lifecycle::entity_actionstatemachine` | `[ ]` |
| **ENT-070** | `Entity_Activate` | `0x8007A5A8` | `entity/Entity_Activate.c` | Activates an entity: removes from free list, inserts into active list | `entity::lifecycle::entity_activate` | `[ ]` |
| **ENT-071** | `Entity_ActivatePool3` | `0x8007E038` | `entity/Entity_ActivatePool3.c` | Activates entity in pool 3: checks game flags, sets entity[0x47]=1, callback=FUN_8007dc38 | `entity::lifecycle::entity_activatepool3` | `[ ]` |
| **ENT-072** | `Entity_AdvanceScript` | `0x8007D14C` | `entity/Entity_AdvanceScript.c` | Entity script advance: reads byte at entity[0x14], dispatches commands | `entity::lifecycle::entity_advancescript` | `[ ]` |
| **ENT-073** | `Entity_AdvanceSpritePtr` | `0x800286CC` | `entity/Entity_AdvanceSpritePtr.c` | Advances entity[0x3C] sprite data pointer by 1 byte, checks bit 0x80 terminator | `entity::lifecycle::entity_advancespriteptr` | `[ ]` |
| **ENT-074** | `Entity_AngleCheck` | `0x80055C9C` | `entity/Entity_AngleCheck.c` | Entity angle check: compares angle vs target, returns direction | `entity::lifecycle::entity_anglecheck` | `[ ]` |
| **ENT-075** | `Entity_AngleToTarget` | `0x80052720` | `entity/Entity_AngleToTarget.c` | Entity angle to target: calc atan2 from entity pos to target pos | `entity::lifecycle::entity_angletotarget` | `[ ]` |
| **ENT-076** | `Entity_AngleToTarget2` | `0x80022E04` | `entity/Entity_AngleToTarget2.c` | Entity angle to target variant 2: atan2 from entity pos to target pos | `entity::lifecycle::entity_angletotarget2` | `[ ]` |
| **ENT-077** | `Entity_ApplyGravity` | `0x80066478` | `entity/Entity_ApplyGravity.c` | Applies gravity: entity[0x4A] += 0x400, updates entity[0x30] Y pos, triggers at angle wrap | player::TOMBA_GRAVITY / TOMBA_JUMP_GRAVITY | [x] |
| **ENT-078** | `Entity_ApplyTransform` | `0x8002AE0C` | `entity/Entity_ApplyTransform.c` | Subrutina de Entity_ApplyTransform (entity/Entity_ApplyTransform.c) | `entity::lifecycle::entity_applytransform` | `[ ]` |
| **ENT-079** | `Entity_ApplyTransformCheck` | `0x8003FAA4` | `entity/Entity_ApplyTransformCheck.c` | Applies GTE transform if entity[0xB] has bit 0x40 or 0x80 set | `entity::lifecycle::entity_applytransformcheck` | `[ ]` |
| **ENT-080** | `Entity_ApplyVelocity` | `0x80056B48` | `entity/Entity_ApplyVelocity.c` | Applies velocity vector (entity[0x44-0x4C]) to entity position | player::tomba_movement_system (velocityIntegrate) | [x] |
| **ENT-081** | `Entity_ApplyVelocityMax` | `0x80066538` | `entity/Entity_ApplyVelocityMax.c` | Applies velocity with cap: entity[0x4A] capped at 0x2800, updates Y pos, advances timer | player::TOMBA_TERMINAL_VELOCITY | [x] |
| **ENT-082** | `Entity_ApproachAngle` | `0x80041438` | `entity/Entity_ApproachAngle.c` | Wraps Math_ApproachAngle for entity[0x56] rotation field | `entity::lifecycle::entity_approachangle` | `[ ]` |
| **ENT-083** | `Entity_AttackCheck` | `0x80056E08` | `entity/Entity_AttackCheck.c` | Entity attack check: tests input + entity[0x167] + collision flags | `entity::lifecycle::entity_attackcheck` | `[ ]` |
| **ENT-084** | `Entity_AttackInit` | `0x80056F3C` | `entity/Entity_AttackInit.c` | Entity attack initializer: reads entity[0x104/0x108] data | `entity::lifecycle::entity_attackinit` | `[ ]` |
| **ENT-085** | `Entity_BGSpawn` | `0x800537B8` | `entity/Entity_BGSpawn.c` | Entity background spawner: allocs background, sets pos + callback | `entity::lifecycle::entity_bgspawn` | `[ ]` |
| **ENT-086** | `Entity_BGUpdate` | `0x80022554` | `entity/Entity_BGUpdate.c` | Entity background updater: iterates 0x800F2738 list, draws | `entity::lifecycle::entity_bgupdate` | `[ ]` |
| **ENT-087** | `Entity_BehaviorDispatch2` | `0x80053670` | `entity/Entity_BehaviorDispatch2.c` | Entity behavior dispatch variant 2: sets entity[0x176] type | `entity::lifecycle::entity_behaviordispatch2` | `[ ]` |
| **ENT-088** | `Entity_BehaviorDispatch_2` | `0x800438D4` | `entity/Entity_BehaviorDispatch_2.c` | Entity behavior dispatcher: switch on entity type, calls handler | `entity::lifecycle::entity_behaviordispatch_2` | `[ ]` |
| **ENT-089** | `Entity_BehaviorDispatcher` | `0x80055FBC` | `entity/Entity_BehaviorDispatcher.c` | Entity behavior dispatcher: master behavior switch (375L) | `entity::lifecycle::entity_behaviordispatcher` | `[ ]` |
| **ENT-090** | `Entity_BehaviorList` | `0x80022D08` | `entity/Entity_BehaviorList.c` | Entity behavior list: checks entity type/flags, dispatches to state machine | `entity::lifecycle::entity_behaviorlist` | `[ ]` |
| **ENT-091** | `Entity_BehaviorList2` | `0x80022760` | `entity/Entity_BehaviorList2.c` | Entity behavior list variant 2: checks timer + DAT_800bf80d flag | `entity::lifecycle::entity_behaviorlist2` | `[ ]` |
| **ENT-092** | `Entity_BehaviorMain` | `0x8005D16C` | `entity/Entity_BehaviorMain.c` | Entity behavior main: primary behavior dispatcher | `entity::lifecycle::entity_behaviormain` | `[ ]` |
| **ENT-093** | `Entity_BehaviorMain2` | `0x80073CD8` | `entity/Entity_BehaviorMain2.c` | Entity behavior main variant 2: entity[4]=1 dispatch | `entity::lifecycle::entity_behaviormain2` | `[ ]` |
| **ENT-094** | `Entity_BehaviorSet` | `0x80024448` | `entity/Entity_BehaviorSet.c` | Entity behavior setter: sets entity[0x14A]/[0x14B]/[0x14C] from config | `entity::lifecycle::entity_behaviorset` | `[ ]` |
| **ENT-095** | `Entity_BehaviorSet2` | `0x80068E68` | `entity/Entity_BehaviorSet2.c` | Entity behavior setter variant 2: entity[1]=1, tests entity[0x46] | `entity::lifecycle::entity_behaviorset2` | `[ ]` |
| **ENT-096** | `Entity_BehaviorSet3` | `0x80068FBC` | `entity/Entity_BehaviorSet3.c` | Entity behavior setter variant 3: entity[4]=0/1 state | `entity::lifecycle::entity_behaviorset3` | `[ ]` |
| **ENT-097** | `Entity_BehaviorSet4` | `0x80069300` | `entity/Entity_BehaviorSet4.c` | Entity behavior setter variant 4: entity[4] state | `entity::lifecycle::entity_behaviorset4` | `[ ]` |
| **ENT-098** | `Entity_BehaviorType` | `0x8002F36C` | `entity/Entity_BehaviorType.c` | Entity behavior type: processes entity type flags, dispatches | `entity::lifecycle::entity_behaviortype` | `[ ]` |
| **ENT-099** | `Entity_BehaviorType2` | `0x800308C0` | `entity/Entity_BehaviorType2.c` | Entity behavior type variant 2: entity[4]=1 state dispatch | `entity::lifecycle::entity_behaviortype2` | `[ ]` |
| **ENT-100** | `Entity_BehaviorType3` | `0x8002B8F4` | `entity/Entity_BehaviorType3.c` | Entity behavior type variant 3: entity[4]=1, type dispatch | `entity::lifecycle::entity_behaviortype3` | `[ ]` |
| **ENT-101** | `Entity_BehaviorType4` | `0x800683B8` | `entity/Entity_BehaviorType4.c` | Entity behavior type variant 4: entity[4]=1, complex | `entity::lifecycle::entity_behaviortype4` | `[ ]` |
| **ENT-102** | `Entity_BehaviorType5` | `0x80024F18` | `entity/Entity_BehaviorType5.c` | Entity behavior type variant 5: complex dispatch | `entity::lifecycle::entity_behaviortype5` | `[ ]` |
| **ENT-103** | `Entity_BehaviorType6` | `0x80080424` | `entity/Entity_BehaviorType6.c` | Entity behavior type variant 6: entity[4]=1, type check | `entity::lifecycle::entity_behaviortype6` | `[ ]` |
| **ENT-104** | `Entity_BlinkControl` | `0x8004B374` | `entity/Entity_BlinkControl.c` | Toggles blink/flash bits on entity[0xD] based on frame counter for transparency effect | `entity::lifecycle::entity_blinkcontrol` | `[ ]` |
| **ENT-105** | `Entity_CallCallback` | `0x800412CC` | `entity/Entity_CallCallback.c` | Calls function pointer stored at entity[0x74] as callback | `entity::lifecycle::entity_callcallback` | `[ ]` |
| **ENT-106** | `Entity_CallHandler0` | `0x800241FC` | `entity/Entity_CallHandler0.c` | Wraps entity handler call with flag 0 | `entity::lifecycle::entity_callhandler0` | `[ ]` |
| **ENT-107** | `Entity_CallHandler1` | `0x8002421C` | `entity/Entity_CallHandler1.c` | Wraps entity handler call with flag 1 | `entity::lifecycle::entity_callhandler1` | `[ ]` |
| **ENT-108** | `Entity_CallInit` | `0x8002311C` | `entity/Entity_CallInit.c` | Calls entity init function at 0x8001EC3C | `entity::lifecycle::entity_callinit` | `[ ]` |
| **ENT-109** | `Entity_ChildInit` | `0x8006F9D8` | `entity/Entity_ChildInit.c` | Entity child initializer: sets child callback from table | `entity::lifecycle::entity_childinit` | `[ ]` |
| **ENT-110** | `Entity_ChildMain` | `0x8006F2D0` | `entity/Entity_ChildMain.c` | Entity child main: manages child entity lifecycle (242L) | `entity::lifecycle::entity_childmain` | `[ ]` |
| **ENT-111** | `Entity_ChildUpdate2` | `0x80070018` | `entity/Entity_ChildUpdate2.c` | Entity child update variant 2: entity[4]=1, processes | `entity::lifecycle::entity_childupdate2` | `[ ]` |
| **ENT-112** | `Entity_CleanupRef` | `0x80034634` | `entity/Entity_CleanupRef.c` | Cleans up entity reference: deallocs if ref exists, clears pointer | `entity::lifecycle::entity_cleanupref` | `[ ]` |
| **ENT-113** | `Entity_CleanupSprite` | `0x8007ADDC` | `entity/Entity_CleanupSprite.c` | Subrutina de Entity_CleanupSprite (entity/Entity_CleanupSprite.c) | `entity::lifecycle::entity_cleanupsprite` | `[ ]` |
| **ENT-114** | `Entity_CollisionGround` | `0x8005444C` | `entity/Entity_CollisionGround.c` | Entity collision ground: checks ground contact, sets flag | `entity::lifecycle::entity_collisionground` | `[ ]` |
| **ENT-115** | `Entity_CollisionResponse` | `0x80020868` | `entity/Entity_CollisionResponse.c` | Entity collision response: sets entity[0x29], pushes | `entity::lifecycle::entity_collisionresponse` | `[ ]` |
| **ENT-116** | `Entity_CollisionWrap1` | `0x8004951C` | `entity/Entity_CollisionWrap1.c` | Collision wrapper 1: calls FUN_80045b30 with entity[0x56] as angle | `entity::lifecycle::entity_collisionwrap1` | `[ ]` |
| **ENT-117** | `Entity_CollisionWrap2` | `0x8004954C` | `entity/Entity_CollisionWrap2.c` | Collision wrapper 2: calls FUN_80045cac with entity[0x56] as angle | `entity::lifecycle::entity_collisionwrap2` | `[ ]` |
| **ENT-118** | `Entity_CollisionWrap3` | `0x8004957C` | `entity/Entity_CollisionWrap3.c` | Collision wrapper 3: calls FUN_800468ac with entity[0x56] as angle | `entity::lifecycle::entity_collisionwrap3` | `[ ]` |
| **ENT-119** | `Entity_CollisionWrap4` | `0x800495AC` | `entity/Entity_CollisionWrap4.c` | Collision wrapper 4: calls FUN_80046e2c with entity[0x56] as angle | `entity::lifecycle::entity_collisionwrap4` | `[ ]` |
| **ENT-120** | `Entity_CollisionWrap5` | `0x800495DC` | `entity/Entity_CollisionWrap5.c` | Collision wrapper 5: calls FUN_80047468 with entity[0x56] as angle | `entity::lifecycle::entity_collisionwrap5` | `[ ]` |
| **ENT-121** | `Entity_CopyParentPos` | `0x80069AE4` | `entity/Entity_CopyParentPos.c` | Copies parent entity position (0x2C-0x36) to this entity from 0x800E7F5C | `entity::lifecycle::entity_copyparentpos` | `[ ]` |
| **ENT-122** | `Entity_CopyStateData` | `0x8006E1C0` | `entity/Entity_CopyStateData.c` | Entity state data copy: saves camera target at 0x800E806C/F to scratchpad | `entity::lifecycle::entity_copystatedata` | `[ ]` |
| **ENT-123** | `Entity_CopyVertexToSP` | `0x8003B220` | `entity/Entity_CopyVertexToSP.c` | Subrutina de Entity_CopyVertexToSP (entity/Entity_CopyVertexToSP.c) | `entity::lifecycle::entity_copyvertextosp` | `[ ]` |
| **ENT-124** | `Entity_Dealloc` | `0x8007A624` | `entity/Entity_Dealloc.c` | Deallocates entity: removes from linked list, returns to pool, cleans up sprite | `entity::lifecycle::entity_dealloc` | `[ ]` |
| **ENT-125** | `Entity_DebugText` | `0x8003A1E4` | `entity/Entity_DebugText.c` | Entity debug text: entity[8] bit dispatch, renders debug overlay text | `entity::lifecycle::entity_debugtext` | `[ ]` |
| **ENT-126** | `Entity_DecrementTimer` | `0x80022C0C` | `entity/Entity_DecrementTimer.c` | Decrements entity timer: entity[0x16E] -= param2, sets DAT_800bf80d=0xFF on expire | `entity::lifecycle::entity_decrementtimer` | `[ ]` |
| **ENT-127** | `Entity_DecrementTimer2` | `0x8006CDCC` | `entity/Entity_DecrementTimer2.c` | Entity timer decrement: entity[0x84]--, updates _DAT_1f8000d0/d2 | `entity::lifecycle::entity_decrementtimer2` | `[ ]` |
| **ENT-128** | `Entity_DispatchAction` | `0x8005A910` | `entity/Entity_DispatchAction.c` | Dispatches entity action: calls overlay func or local handler based on flags | `entity::lifecycle::entity_dispatchaction` | `[ ]` |
| **ENT-129** | `Entity_DispatchBehavior` | `0x80069688` | `entity/Entity_DispatchBehavior.c` | Entity behavior dispatch by type: reads entity[2], looks up table, calls handler | `entity::lifecycle::entity_dispatchbehavior` | `[ ]` |
| **ENT-130** | `Entity_DispatchSprite` | `0x80043858` | `entity/Entity_DispatchSprite.c` | Entity sprite dispatch: calls FUN_8006ff10, stores result in globals | `entity::lifecycle::entity_dispatchsprite` | `[ ]` |
| **ENT-131** | `Entity_DispatchSpriteCmd` | `0x80043634` | `entity/Entity_DispatchSpriteCmd.c` | Dispatches sprite cmd: entity[0x72] bit 0x1000 selects FUN_8006fde8 or FUN_8006fb0c | `entity::lifecycle::entity_dispatchspritecmd` | `[ ]` |
| **ENT-132** | `Entity_DistanceCheck` | `0x8002313C` | `entity/Entity_DistanceCheck.c` | Entity distance check: computes 2D distance between two entity positions | `entity::lifecycle::entity_distancecheck` | `[ ]` |
| **ENT-133** | `Entity_DistanceCheck2` | `0x8002300C` | `entity/Entity_DistanceCheck2.c` | Entity distance check variant 2: entity[0x2E/32/36] to entity2 pos | `entity::lifecycle::entity_distancecheck2` | `[ ]` |
| **ENT-134** | `Entity_DoAction` | `0x8004266C` | `entity/Entity_DoAction.c` | Performs action from script: calls FUN_800708b4 with entity[0x72] param | `entity::lifecycle::entity_doaction` | `[ ]` |
| **ENT-135** | `Entity_EndAction` | `0x800655A0` | `entity/Entity_EndAction.c` | Ends current entity action: resets state, sets sub-state to 0x1E, calls cleanup | `entity::lifecycle::entity_endaction` | `[ ]` |
| **ENT-136** | `Entity_EnterHurtState` | `0x80073260` | `entity/Entity_EnterHurtState.c` | Enters hurt state: sets entity=2, plays SFX 0x17, resets collision globals | `entity::lifecycle::entity_enterhurtstate` | `[ ]` |
| **ENT-137** | `Entity_EnterHurtState1` | `0x800732C0` | `entity/Entity_EnterHurtState1.c` | Enters hurt state variant 1: calls EnterHurtState, sets DAT_800bf818=1, saves entity[3] | `entity::lifecycle::entity_enterhurtstate1` | `[ ]` |
| **ENT-138** | `Entity_EnterHurtState3` | `0x80073300` | `entity/Entity_EnterHurtState3.c` | Wrapper: Entity_EnterHurtState then sets DAT_800bf818 = 3 | `entity::lifecycle::entity_enterhurtstate3` | `[ ]` |
| **ENT-139** | `Entity_ExecScriptCmd1` | `0x80043964` | `entity/Entity_ExecScriptCmd1.c` | Executes script command via FUN_800438d4 with entity[0x72-0x76] params | `entity::lifecycle::entity_execscriptcmd1` | `[ ]` |
| **ENT-140** | `Entity_ExecScriptCmd2` | `0x800439A4` | `entity/Entity_ExecScriptCmd2.c` | Executes script command variant with different data offset | `entity::lifecycle::entity_execscriptcmd2` | `[ ]` |
| **ENT-141** | `Entity_ExecScriptCmd3` | `0x800439E4` | `entity/Entity_ExecScriptCmd3.c` | Executes script command via FUN_800521f4 with entity[0x72-0x76] params | `entity::lifecycle::entity_execscriptcmd3` | `[ ]` |
| **ENT-142** | `Entity_ExecWithFlag0` | `0x80043EBC` | `entity/Entity_ExecWithFlag0.c` | Wraps entity script execution with flag=0 parameter | `entity::lifecycle::entity_execwithflag0` | `[ ]` |
| **ENT-143** | `Entity_ExecWithFlag1` | `0x80043E9C` | `entity/Entity_ExecWithFlag1.c` | Wraps entity script execution with flag=1 parameter | `entity::lifecycle::entity_execwithflag1` | `[ ]` |
| **ENT-144** | `Entity_FlagHandler` | `0x80053BF8` | `entity/Entity_FlagHandler.c` | Entity flag handler: entity[0x61] bit dispatch, sets mode/flag | `entity::lifecycle::entity_flaghandler` | `[ ]` |
| **ENT-145** | `Entity_ForwardStateToParent` | `0x80041FF8` | `entity/Entity_ForwardStateToParent.c` | Forwards entity[5] state check to parent entity | `entity::lifecycle::entity_forwardstatetoparent` | `[ ]` |
| **ENT-146** | `Entity_ForwardToParent` | `0x80041FA8` | `entity/Entity_ForwardToParent.c` | Calls parent entity function at entity[0x10] with same params | `entity::lifecycle::entity_forwardtoparent` | `[ ]` |
| **ENT-147** | `Entity_FrameLoop` | `0x80051E60` | `entity/Entity_FrameLoop.c` | Entity frame loop: iterates framebuffer array at 0x801FE000, processes 2-byte headers | `entity::lifecycle::entity_frameloop` | `[ ]` |
| **ENT-148** | `Entity_GetChildCount` | `0x800270F8` | `entity/Entity_GetChildCount.c` | Sums 8 u16 values from child distribution table | `entity::lifecycle::entity_getchildcount` | `[ ]` |
| **ENT-149** | `Entity_GetState176` | `0x800535D4` | `entity/Entity_GetState176.c` | Returns entity[0x176] + 1 as state value | `entity::lifecycle::entity_getstate176` | `[ ]` |
| **ENT-150** | `Entity_GetTypeData` | `0x80040A58` | `entity/Entity_GetTypeData.c` | Reads entity type data from table at 0x800A33C9 (12 bytes/entry, 16 types) | `entity::lifecycle::entity_gettypedata` | `[ ]` |
| **ENT-151** | `Entity_InputProcess` | `0x8005950C` | `entity/Entity_InputProcess.c` | Entity input processor: reads pad flags, sets state | `entity::lifecycle::entity_inputprocess` | `[ ]` |
| **ENT-152** | `Entity_InputUpdate` | `0x80059D28` | `entity/Entity_InputUpdate.c` | Entity input updater: DAT_800bf819--, clears input flags | `entity::lifecycle::entity_inputupdate` | `[ ]` |
| **ENT-153** | `Entity_Interact` | `0x80023320` | `entity/Entity_Interact.c` | Entity interact handler: checks input flags, triggers interaction | `entity::lifecycle::entity_interact` | `[ ]` |
| **ENT-154** | `Entity_ItemPickup` | `0x8004C0E4` | `entity/Entity_ItemPickup.c` | Entity item pickup: reads table at 0x800A3EDC, sets item params | `entity::lifecycle::entity_itempickup` | `[ ]` |
| **ENT-155** | `Entity_LevelCheck` | `0x800531DC` | `entity/Entity_LevelCheck.c` | Entity level check: tests DAT_800bf870==5, checks Y position bounds | `entity::lifecycle::entity_levelcheck` | `[ ]` |
| **ENT-156** | `Entity_ListInsert` | `0x8007AB44` | `entity/Entity_ListInsert.c` | Entity list insert: inserts entity into linked list at 0x800F2738 | `entity::lifecycle::entity_listinsert` | `[ ]` |
| **ENT-157** | `Entity_LoadSprite` | `0x8006FDE8` | `entity/Entity_LoadSprite.c` | Entity sprite loader: loads sprite data from table at 0x800A3EA4 | `entity::lifecycle::entity_loadsprite` | `[ ]` |
| **ENT-158** | `Entity_LoadSprite2` | `0x8006FB0C` | `entity/Entity_LoadSprite2.c` | Entity sprite loader variant 2: loads from table at 0x800A3E80 | `entity::lifecycle::entity_loadsprite2` | `[ ]` |
| **ENT-159** | `Entity_LoadVertexData` | `0x8003B054` | `entity/Entity_LoadVertexData.c` | Subrutina de Entity_LoadVertexData (entity/Entity_LoadVertexData.c) | `entity::lifecycle::entity_loadvertexdata` | `[ ]` |
| **ENT-160** | `Entity_LookupType` | `0x8005B5E4` | `entity/Entity_LookupType.c` | Entity type lookup: switch on entity[2] returns sprite/animation mode | `entity::lifecycle::entity_lookuptype` | `[ ]` |
| **ENT-161** | `Entity_LoopCheck` | `0x800365F0` | `entity/Entity_LoopCheck.c` | Entity loop checker: iterates entity[0x1F] times, returns status | `entity::lifecycle::entity_loopcheck` | `[ ]` |
| **ENT-162** | `Entity_LoopCheck2` | `0x8003675C` | `entity/Entity_LoopCheck2.c` | Entity loop check variant 2: entity[0x1F] + param check | `entity::lifecycle::entity_loopcheck2` | `[ ]` |
| **ENT-163** | `Entity_LoopCheck6` | `0x80036708` | `entity/Entity_LoopCheck6.c` | Loops entity check up to 6 times via FUN_800365f0, returns true if any pass | `entity::lifecycle::entity_loopcheck6` | `[ ]` |
| **ENT-164** | `Entity_LoopCheck6B` | `0x8003687C` | `entity/Entity_LoopCheck6B.c` | Loops entity check up to 6 times via FUN_8003675c, returns true if any pass | `entity::lifecycle::entity_loopcheck6b` | `[ ]` |
| **ENT-165** | `Entity_Main` | `0x8004AAC4` | `entity/Entity_Main.c` | Entity main: primary entity update loop (205L) | `entity::lifecycle::entity_main` | `[ ]` |
| **ENT-166** | `Entity_Main2` | `0x8001DD00` | `entity/Entity_Main2.c` | Entity main variant 2: complex entity controller (453L) | `entity::lifecycle::entity_main2` | `[ ]` |
| **ENT-167** | `Entity_OffsetX` | `0x80070650` | `entity/Entity_OffsetX.c` | Entity X offset: entity[0x2E] += 8 if entity[0x60] != 0 | `entity::lifecycle::entity_offsetx` | `[ ]` |
| **ENT-168** | `Entity_OverlayDispatch` | `0x800662D8` | `entity/Entity_OverlayDispatch.c` | Entity overlay dispatch: calls overlay func based on DAT_800bf870 state | `entity::lifecycle::entity_overlaydispatch` | `[ ]` |
| **ENT-169** | `Entity_OverlayDispatch2` | `0x800633B0` | `entity/Entity_OverlayDispatch2.c` | Entity overlay dispatch variant 2: switch on DAT_800bf870 | `entity::lifecycle::entity_overlaydispatch2` | `[ ]` |
| **ENT-170** | `Entity_ParentUpdate` | `0x8005B20C` | `entity/Entity_ParentUpdate.c` | Entity parent update: copies pos/angle from parent entity[0x10] | `entity::lifecycle::entity_parentupdate` | `[ ]` |
| **ENT-171** | `Entity_PlayAnimation` | `0x80071A3C` | `entity/Entity_PlayAnimation.c` | Entity animation player: entity[4]=1 state, calls advance + GTE compose | `entity::lifecycle::entity_playanimation` | `[ ]` |
| **ENT-172** | `Entity_PlaySFX_FadeOut` | `0x80042354` | `entity/Entity_PlaySFX_FadeOut.c` | Plays SFX from 2-element table at 0x80015368, sets fade flag 0x800BF84B=0 | `entity::lifecycle::entity_playsfx_fadeout` | `[ ]` |
| **ENT-173** | `Entity_PlayScriptSFX` | `0x80043A10` | `entity/Entity_PlayScriptSFX.c` | Plays SFX from entity script data at entity[0x72-0x76] | `entity::lifecycle::entity_playscriptsfx` | `[ ]` |
| **ENT-174** | `Entity_PlayTimedSFX` | `0x80042EA4` | `entity/Entity_PlayTimedSFX.c` | Timed SFX: plays sound at intervals using frame counter mask from entity[0x38] data | `entity::lifecycle::entity_playtimedsfx` | `[ ]` |
| **ENT-175** | `Entity_PosUpdate` | `0x8007101C` | `entity/Entity_PosUpdate.c` | Entity position updater: computes new pos from velocity + angle | `entity::lifecycle::entity_posupdate` | `[ ]` |
| **ENT-176** | `Entity_ProcessAnimDirect` | `0x800328BC` | `entity/Entity_ProcessAnimDirect.c` | Subrutina de Entity_ProcessAnimDirect (entity/Entity_ProcessAnimDirect.c) | `entity::lifecycle::entity_processanimdirect` | `[ ]` |
| **ENT-177** | `Entity_ProcessAnimEvent` | `0x8004179C` | `entity/Entity_ProcessAnimEvent.c` | Processes animation events: timing, sub-entity texture cycling | `entity::lifecycle::entity_processanimevent` | `[ ]` |
| **ENT-178** | `Entity_ProcessAnimFrame` | `0x80027A4C` | `entity/Entity_ProcessAnimFrame.c` | Subrutina de Entity_ProcessAnimFrame (entity/Entity_ProcessAnimFrame.c) | `entity::lifecycle::entity_processanimframe` | `[ ]` |
| **ENT-179** | `Entity_ProcessAnimation` | `0x8003F174` | `entity/Entity_ProcessAnimation.c` | Subrutina de Entity_ProcessAnimation (entity/Entity_ProcessAnimation.c) | `entity::lifecycle::entity_processanimation` | `[ ]` |
| **ENT-180** | `Entity_ProcessCollision` | `0x800235A0` | `entity/Entity_ProcessCollision.c` | Processes collision result: calls FUN_8001f40c, branches on entity[0x164] mode | `entity::lifecycle::entity_processcollision` | `[ ]` |
| **ENT-181** | `Entity_ProcessFrame` | `0x80051E00` | `entity/Entity_ProcessFrame.c` | Entity frame processor: iterates framebuffer array at 0x801FE000 | `entity::lifecycle::entity_processframe` | `[ ]` |
| **ENT-182** | `Entity_ProcessProjCmd` | `0x80027E5C` | `entity/Entity_ProcessProjCmd.c` | Subrutina de Entity_ProcessProjCmd (entity/Entity_ProcessProjCmd.c) | `entity::lifecycle::entity_processprojcmd` | `[ ]` |
| **ENT-183** | `Entity_ProcessProjCmdNoScale` | `0x80027CB4` | `entity/Entity_ProcessProjCmdNoScale.c` | GTE projection + animation frame processing without entity[6] scale factor | `entity::lifecycle::entity_processprojcmdnoscale` | `[ ]` |
| **ENT-184** | `Entity_ProcessSprite` | `0x8007DDE0` | `entity/Entity_ProcessSprite.c` | Entity sprite processor: entity[4]=1, calls draw + UI, dealloc at 3 | `entity::lifecycle::entity_processsprite` | `[ ]` |
| **ENT-185** | `Entity_ProcessSpriteCmd` | `0x800288AC` | `entity/Entity_ProcessSpriteCmd.c` | Subrutina de Entity_ProcessSpriteCmd (entity/Entity_ProcessSpriteCmd.c) | `entity::lifecycle::entity_processspritecmd` | `[ ]` |
| **ENT-186** | `Entity_RenderInit` | `0x800524B4` | `entity/Entity_RenderInit.c` | Entity render init: checks DAT_800bf4f8, calls MDEC setup | `entity::lifecycle::entity_renderinit` | `[ ]` |
| **ENT-187** | `Entity_ResetActionState` | `0x80056D44` | `entity/Entity_ResetActionState.c` | Resets entity action state: clears flags 0x146/0x167/0x16A/0x178/0x181 | `entity::lifecycle::entity_resetactionstate` | `[ ]` |
| **ENT-188** | `Entity_ResetAnimAndState` | `0x800442A0` | `entity/Entity_ResetAnimAndState.c` | Resets entity animation mode and sets sub-state via entity[0x74] | `entity::lifecycle::entity_resetanimandstate` | `[ ]` |
| **ENT-189** | `Entity_ResetFull` | `0x80034670` | `entity/Entity_ResetFull.c` | Full entity reset: clears state bytes, resets audio bank, cleans refs | `entity::lifecycle::entity_resetfull` | `[ ]` |
| **ENT-190** | `Entity_ResetStateFlags` | `0x8005749C` | `entity/Entity_ResetStateFlags.c` | Resets entity state flags: clears 0x29/0x58/0x6A/0x144-0x178, advances state | `entity::lifecycle::entity_resetstateflags` | `[ ]` |
| **ENT-191** | `Entity_ResetState_2` | `0x80054198` | `entity/Entity_ResetState_2.c` | Entity state reset: clears entity[0x44/0x45/0x182] if conditions met | `entity::lifecycle::entity_resetstate_2` | `[ ]` |
| **ENT-192** | `Entity_RotateLimb` | `0x80072F14` | `entity/Entity_RotateLimb.c` | Rotates entity limb: entity[0x50] += 0x40 per frame, wraps, sets entity[0x56] delta | `entity::lifecycle::entity_rotatelimb` | `[ ]` |
| **ENT-193** | `Entity_RotateMove` | `0x80075F0C` | `entity/Entity_RotateMove.c` | Entity rotate + move: entity[0x88] += entity[0x90], updates position | `entity::lifecycle::entity_rotatemove` | `[ ]` |
| **ENT-194** | `Entity_RotateSubPartNeg` | `0x800730C8` | `entity/Entity_RotateSubPartNeg.c` | Rotates sub-part negative: param2[0x12] delta, param2[0xA] = param2[0xE] - delta | `entity::lifecycle::entity_rotatesubpartneg` | `[ ]` |
| **ENT-195** | `Entity_RotateSubPartPos` | `0x80073194` | `entity/Entity_RotateSubPartPos.c` | Rotates sub-part positive: param2[0x12] delta, param2[0xA] = param2[0xE] + delta | `entity::lifecycle::entity_rotatesubpartpos` | `[ ]` |
| **ENT-196** | `Entity_RotateToTarget` | `0x800654D4` | `entity/Entity_RotateToTarget.c` | Rotates entity toward target angle: entity[6] state, uses FUN_800776f8 approach, sets flag | `entity::lifecycle::entity_rotatetotarget` | `[ ]` |
| **ENT-197** | `Entity_SFXState` | `0x8006F04C` | `entity/Entity_SFXState.c` | Entity SFX state machine: switch on DAT_800bf840 & 0xF, plays sounds | `entity::lifecycle::entity_sfxstate` | `[ ]` |
| **ENT-198** | `Entity_SaveGlobals` | `0x8007B3F4` | `entity/Entity_SaveGlobals.c` | Entity globals save: reverses InitGlobals2, writes back 0x800BFE4C-F to 0x800FB160-7 | `entity::lifecycle::entity_saveglobals` | `[ ]` |
| **ENT-199** | `Entity_ScriptBranch` | `0x800423FC` | `entity/Entity_ScriptBranch.c` | Branches script execution: if entity[0x72]=0 calls title, else calls 0x80042354 | `entity::lifecycle::entity_scriptbranch` | `[ ]` |
| **ENT-200** | `Entity_ScriptRun_2` | `0x8007C0D0` | `entity/Entity_ScriptRun_2.c` | Entity script runner: reads bytecode from entity[0x14] | `entity::lifecycle::entity_scriptrun_2` | `[ ]` |
| **ENT-201** | `Entity_ScriptStep` | `0x80040FA0` | `entity/Entity_ScriptStep.c` | Advances entity script by one step: handles state transitions via FUN_80040e54 | `entity::lifecycle::entity_scriptstep` | `[ ]` |
| **ENT-202** | `Entity_SelectWeapon` | `0x8004B4B0` | `entity/Entity_SelectWeapon.c` | Selects weapon/item by index: calls FUN_8004d4c4 and updates globals | `entity::lifecycle::entity_selectweapon` | `[ ]` |
| **ENT-203** | `Entity_SetAccel` | `0x80055F48` | `entity/Entity_SetAccel.c` | Sets entity[0x4A] acceleration from table 0x800A457C based on entity[0x6D] | `entity::lifecycle::entity_setaccel` | `[ ]` |
| **ENT-204** | `Entity_SetActionFlag` | `0x80065478` | `entity/Entity_SetActionFlag.c` | Sets action flag: if 0x800BF816 set, calls 0x8005444C; else clears flags | `entity::lifecycle::entity_setactionflag` | `[ ]` |
| **ENT-205** | `Entity_SetAngleFromState` | `0x8003FC78` | `entity/Entity_SetAngleFromState.c` | Sets entity rotation angle: entity[0x56] = entity[0x2A] << 4 | `entity::lifecycle::entity_setanglefromstate` | `[ ]` |
| **ENT-206** | `Entity_SetAnimFlag` | `0x80023764` | `entity/Entity_SetAnimFlag.c` | Sets entity[0x29]=1 if animation check passes | `entity::lifecycle::entity_setanimflag` | `[ ]` |
| **ENT-207** | `Entity_SetAnimFlag79` | `0x8004190C` | `entity/Entity_SetAnimFlag79.c` | Sets entity animation flag at entity[0x79] from FUN_80076d68 | `entity::lifecycle::entity_setanimflag79` | `[ ]` |
| **ENT-208** | `Entity_SetAnimMode` | `0x80041718` | `entity/Entity_SetAnimMode.c` | Sets entity animation mode (0=normal, non-0=alternate) with different calls | `entity::lifecycle::entity_setanimmode` | `[ ]` |
| **ENT-209** | `Entity_SetAnimMode2` | `0x80054DAC` | `entity/Entity_SetAnimMode2.c` | Sets entity animation mode via entity[0x46] with mode-dependent call | `entity::lifecycle::entity_setanimmode2` | `[ ]` |
| **ENT-210** | `Entity_SetAnimModeIfNew` | `0x80041768` | `entity/Entity_SetAnimModeIfNew.c` | Sets anim mode only if different from current entity[0x46] value | `entity::lifecycle::entity_setanimmodeifnew` | `[ ]` |
| **ENT-211** | `Entity_SetAnimSpeed` | `0x80069634` | `entity/Entity_SetAnimSpeed.c` | Sets entity animation speed from table 0x800A4A6C by type and state | `entity::lifecycle::entity_setanimspeed` | `[ ]` |
| **ENT-212** | `Entity_SetCollisionFlag` | `0x80052198` | `entity/Entity_SetCollisionFlag.c` | Entity collision flag: builds byte from param, stores at param_2 | `entity::lifecycle::entity_setcollisionflag` | `[ ]` |
| **ENT-213** | `Entity_SetColorOverride` | `0x8004B354` | `entity/Entity_SetColorOverride.c` | Sets entity[0x18-0x1A] RGB to 0 (normal) or 0xFFFFFF (white flash) | `entity::lifecycle::entity_setcoloroverride` | `[ ]` |
| **ENT-214** | `Entity_SetCombatFlags` | `0x80070724` | `entity/Entity_SetCombatFlags.c` | Sets combat flags: entity[0xBF] + 3 globals at 0x800BF830/31/43 | `entity::lifecycle::entity_setcombatflags` | `[ ]` |
| **ENT-215** | `Entity_SetCombatFlagsEx` | `0x8007074C` | `entity/Entity_SetCombatFlagsEx.c` | Extended combat flags: calls SetCombatFlags + 3 extra params at 0x800BF824/28 | `entity::lifecycle::entity_setcombatflagsex` | `[ ]` |
| **ENT-216** | `Entity_SetFlag84C` | `0x80043BB0` | `entity/Entity_SetFlag84C.c` | Sets global flag at 0x800BF84C from entity script data | `entity::lifecycle::entity_setflag84c` | `[ ]` |
| **ENT-217** | `Entity_SetFlagBit1` | `0x80083C70` | `entity/Entity_SetFlagBit1.c` | Entity flag bit 1 set/clear: entity[7] bit 1 toggled by param_2 | `entity::lifecycle::entity_setflagbit1` | `[ ]` |
| **ENT-218** | `Entity_SetPosFromGlobals` | `0x80070F00` | `entity/Entity_SetPosFromGlobals.c` | Entity position from globals: copies _DAT_1f800160-4 to entity pos at 0x2E/0x32 | `entity::lifecycle::entity_setposfromglobals` | `[ ]` |
| **ENT-219** | `Entity_SetPosition` | `0x8004BD64` | `entity/Entity_SetPosition.c` | Entity position setter: copies pos from param3/4/5 to entity[0x2E/32/36] | `entity::lifecycle::entity_setposition` | `[ ]` |
| **ENT-220** | `Entity_SetRenderMode` | `0x80052144` | `entity/Entity_SetRenderMode.c` | Entity render mode setter: sets entity[0xB] flags based on param (0x80/0x20 or 0x10/0x40) | `entity::lifecycle::entity_setrendermode` | `[ ]` |
| **ENT-221** | `Entity_SetSpriteData` | `0x800416A8` | `entity/Entity_SetSpriteData.c` | Sets sprite data pointer at entity[0x7C] and texture at entity[0x3C] | `entity::lifecycle::entity_setspritedata` | `[ ]` |
| **ENT-222** | `Entity_SetSpriteDataAuto` | `0x800416F0` | `entity/Entity_SetSpriteDataAuto.c` | Auto-configures sprite data from entity[0x72]/[0x74] params | `entity::lifecycle::entity_setspritedataauto` | `[ ]` |
| **ENT-223** | `Entity_SetState` | `0x800708B4` | `entity/Entity_SetState.c` | Sets entity state: entity[6]=0, entity[3]=param_1 from global entity ptr | `entity::lifecycle::entity_setstate` | `[ ]` |
| **ENT-224** | `Entity_SetState4` | `0x8006B0D8` | `entity/Entity_SetState4.c` | Entity state set type 4: entity[0x2B]=2, entity[1]=0, entity[4]=2 if conditions met | `entity::lifecycle::entity_setstate4` | `[ ]` |
| **ENT-225** | `Entity_SetStateCombat` | `0x80070798` | `entity/Entity_SetStateCombat.c` | Entity combat state: entity[6]=0, entity[5]=3 | `entity::lifecycle::entity_setstatecombat` | `[ ]` |
| **ENT-226** | `Entity_SetStateTo9` | `0x800645CC` | `entity/Entity_SetStateTo9.c` | Sets entity sub-state: entity[5]=9, entity[6]=0, entity[7]=0 | `entity::lifecycle::entity_setstateto9` | `[ ]` |
| **ENT-227** | `Entity_SetSubEntityData` | `0x80051B04` | `entity/Entity_SetSubEntityData.c` | Sets sub-entity data pointer at entity[0x40] from table at 0x800ECF58 | `entity::lifecycle::entity_setsubentitydata` | `[ ]` |
| **ENT-228** | `Entity_SetSubEntityTexture` | `0x8004162C` | `entity/Entity_SetSubEntityTexture.c` | Sets texture/tpage for sub-entity by index from entity[0x72] table | `entity::lifecycle::entity_setsubentitytexture` | `[ ]` |
| **ENT-229** | `Entity_SetSubState22` | `0x800440E4` | `entity/Entity_SetSubState22.c` | Sets entity sub-state to 0x22 or 0x26 based on bit 15 of param | `entity::lifecycle::entity_setsubstate22` | `[ ]` |
| **ENT-230** | `Entity_SetType` | `0x8004CC64` | `entity/Entity_SetType.c` | Sets entity type byte at entity[0x3] to given value | `entity::lifecycle::entity_settype` | `[ ]` |
| **ENT-231** | `Entity_SetupAnimFrame` | `0x80077E3C` | `entity/Entity_SetupAnimFrame.c` | Sets up animation frame with offset: calls 0x80075FF8, sets entity[0xE] | `entity::lifecycle::entity_setupanimframe` | `[ ]` |
| **ENT-232** | `Entity_SetupBehavior` | `0x8005FA84` | `entity/Entity_SetupBehavior.c` | Sets up entity behavior: checks DAT_800bfa47/80b for mode, branches to state init | `entity::lifecycle::entity_setupbehavior` | `[ ]` |
| **ENT-233** | `Entity_SetupBossUI` | `0x80056EC8` | `entity/Entity_SetupBossUI.c` | Sets up boss HP bar UI: configures 2 sub-entities + spawns indicator | `entity::lifecycle::entity_setupbossui` | `[ ]` |
| **ENT-234** | `Entity_SetupSpawn` | `0x80042690` | `entity/Entity_SetupSpawn.c` | Entity spawn setup: reads position data, sets entity pos at 0x2C/0x32/0x36 | `entity::lifecycle::entity_setupspawn` | `[ ]` |
| **ENT-235** | `Entity_SetupSpriteRender` | `0x8004A828` | `entity/Entity_SetupSpriteRender.c` | Configures sprite rendering flags from type table at 0x800A29CE (8 bytes/entry) | `entity::lifecycle::entity_setupspriterender` | `[ ]` |
| **ENT-236** | `Entity_Sound` | `0x80042F70` | `entity/Entity_Sound.c` | Entity sound player: checks entity[0x72], plays SFX based on type | `entity::lifecycle::entity_sound` | `[ ]` |
| **ENT-237** | `Entity_SpriteAdvance` | `0x80040E54` | `entity/Entity_SpriteAdvance.c` | Entity sprite advance: reads sprite[0x6C], advances ptr | `entity::lifecycle::entity_spriteadvance` | `[ ]` |
| **ENT-238** | `Entity_SpriteConfig` | `0x80024E00` | `entity/Entity_SpriteConfig.c` | Entity sprite config: switch on DAT_800e7eef, loads animation | `entity::lifecycle::entity_spriteconfig` | `[ ]` |
| **ENT-239** | `Entity_SpriteDispatch2` | `0x800444EC` | `entity/Entity_SpriteDispatch2.c` | Entity sprite dispatch variant 2: entity[0x72] bits | `entity::lifecycle::entity_spritedispatch2` | `[ ]` |
| **ENT-240** | `Entity_SpriteInit2` | `0x80042BDC` | `entity/Entity_SpriteInit2.c` | Entity sprite init variant 2: sets DAT_800e806c, inits timers | `entity::lifecycle::entity_spriteinit2` | `[ ]` |
| **ENT-241** | `Entity_SpriteLifecycle` | `0x8007DC38` | `entity/Entity_SpriteLifecycle.c` | Entity sprite lifecycle: entity[4]=1 state, processes draw/spawn | `entity::lifecycle::entity_spritelifecycle` | `[ ]` |
| **ENT-242** | `Entity_SpriteMode` | `0x80042A8C` | `entity/Entity_SpriteMode.c` | Entity sprite mode setter: checks entity[0x72], switches on mode | `entity::lifecycle::entity_spritemode` | `[ ]` |
| **ENT-243** | `Entity_SpriteMode2` | `0x80067EF4` | `entity/Entity_SpriteMode2.c` | Entity sprite mode setter variant 2: switch on entity[0x6F] | `entity::lifecycle::entity_spritemode2` | `[ ]` |
| **ENT-244** | `Entity_SpriteType` | `0x80038F7C` | `entity/Entity_SpriteType.c` | Entity sprite type lookup: switch on param & 0x7F, returns type | `entity::lifecycle::entity_spritetype` | `[ ]` |
| **ENT-245** | `Entity_SpriteUpdate` | `0x8007DA50` | `entity/Entity_SpriteUpdate.c` | Entity sprite updater: entity[4]=1, processes draw commands | `entity::lifecycle::entity_spriteupdate` | `[ ]` |
| **ENT-246** | `Entity_StateAction` | `0x800656FC` | `entity/Entity_StateAction.c` | Entity action state: entity[6] state 0->1->2, sets DAT_800bf80e | `entity::lifecycle::entity_stateaction` | `[ ]` |
| **ENT-247** | `Entity_StateCheck` | `0x80053D0C` | `entity/Entity_StateCheck.c` | Entity state checker: tests entity[0x158] state ptr, validates | `entity::lifecycle::entity_statecheck` | `[ ]` |
| **ENT-248** | `Entity_StateControl` | `0x80055390` | `entity/Entity_StateControl.c` | Entity state controller: entity[0x174] flags, transitions | `entity::lifecycle::entity_statecontrol` | `[ ]` |
| **ENT-249** | `Entity_StateDispatch` | `0x8005314C` | `entity/Entity_StateDispatch.c` | Entity state dispatcher: switch on entity[0x6A] value, calls handlers | `entity::lifecycle::entity_statedispatch` | `[ ]` |
| **ENT-250** | `Entity_StateDispatch2` | `0x80026AD0` | `entity/Entity_StateDispatch2.c` | Entity state dispatch variant 2: switch on entity[5] | `entity::lifecycle::entity_statedispatch2` | `[ ]` |
| **ENT-251** | `Entity_StateDispatch3` | `0x800532A0` | `entity/Entity_StateDispatch3.c` | Entity state dispatch variant 3: entity[0x6A] dispatch | `entity::lifecycle::entity_statedispatch3` | `[ ]` |
| **ENT-252** | `Entity_StateDispatcherMain` | `0x80058918` | `entity/Entity_StateDispatcherMain.c` | Entity state dispatcher main: master state switch (244L) | `entity::lifecycle::entity_statedispatchermain` | `[ ]` |
| **ENT-253** | `Entity_StateEnd` | `0x800655DC` | `entity/Entity_StateEnd.c` | Entity state end: entity[6] state 0->1->2, cleanup at state 2 | `entity::lifecycle::entity_stateend` | `[ ]` |
| **ENT-254** | `Entity_StateEnd2` | `0x80053E50` | `entity/Entity_StateEnd2.c` | Entity state end variant 2: checks timer, plays SFX, transitions | `entity::lifecycle::entity_stateend2` | `[ ]` |
| **ENT-255** | `Entity_StateEnd3` | `0x80053FDC` | `entity/Entity_StateEnd3.c` | Entity state end variant 3: checks timer, transitions | `entity::lifecycle::entity_stateend3` | `[ ]` |
| **ENT-256** | `Entity_StateInput` | `0x80060268` | `entity/Entity_StateInput.c` | Entity input state: tests _DAT_800ecf54 input bits, dispatches action | `entity::lifecycle::entity_stateinput` | `[ ]` |
| **ENT-257** | `Entity_StateMachine2` | `0x8006032C` | `entity/Entity_StateMachine2.c` | Entity state machine variant 2: entity[0x169] state dispatch | `entity::lifecycle::entity_statemachine2` | `[ ]` |
| **ENT-258** | `Entity_StateMain` | `0x80054E80` | `entity/Entity_StateMain.c` | Entity main state: entity[0x145] flags, primary dispatch | `entity::lifecycle::entity_statemain` | `[ ]` |
| **ENT-259** | `Entity_StateMain10` | `0x80065A54` | `entity/Entity_StateMain10.c` | Entity state main variant 10: entity[6] switch (239L) | `entity::lifecycle::entity_statemain10` | `[ ]` |
| **ENT-260** | `Entity_StateMain11` | `0x8005F2F0` | `entity/Entity_StateMain11.c` | Entity state main variant 11: DAT_1f80027a=1 (246L) | `entity::lifecycle::entity_statemain11` | `[ ]` |
| **ENT-261** | `Entity_StateMain12` | `0x8005DE54` | `entity/Entity_StateMain12.c` | Entity state main variant 12: entity[6] switch (255L) | `entity::lifecycle::entity_statemain12` | `[ ]` |
| **ENT-262** | `Entity_StateMain13` | `0x8005D530` | `entity/Entity_StateMain13.c` | Entity state main variant 13: complex switch (331L) | `entity::lifecycle::entity_statemain13` | `[ ]` |
| **ENT-263** | `Entity_StateMain14` | `0x8005B63C` | `entity/Entity_StateMain14.c` | Entity state main variant 14: extended dispatch (385L) | `entity::lifecycle::entity_statemain14` | `[ ]` |
| **ENT-264** | `Entity_StateMain15` | `0x80060C60` | `entity/Entity_StateMain15.c` | Entity state main variant 15: mega state machine (458L) | `entity::lifecycle::entity_statemain15` | `[ ]` |
| **ENT-265** | `Entity_StateMain2` | `0x8005CDF8` | `entity/Entity_StateMain2.c` | Entity state main variant 2: entity[6] dispatch | `entity::lifecycle::entity_statemain2` | `[ ]` |
| **ENT-266** | `Entity_StateMain3` | `0x80057FD4` | `entity/Entity_StateMain3.c` | Entity state main variant 3: complex state dispatch | `entity::lifecycle::entity_statemain3` | `[ ]` |
| **ENT-267** | `Entity_StateMain4` | `0x80063B94` | `entity/Entity_StateMain4.c` | Entity state main variant 4: extended state handler | `entity::lifecycle::entity_statemain4` | `[ ]` |
| **ENT-268** | `Entity_StateMain5` | `0x80059ED8` | `entity/Entity_StateMain5.c` | Entity state main variant 5: entity[4]=1, state dispatch | `entity::lifecycle::entity_statemain5` | `[ ]` |
| **ENT-269** | `Entity_StateMain6` | `0x8005FB54` | `entity/Entity_StateMain6.c` | Entity state main variant 6: DAT_1f80027a=1, state init | `entity::lifecycle::entity_statemain6` | `[ ]` |
| **ENT-270** | `Entity_StateMain7` | `0x8005C8A0` | `entity/Entity_StateMain7.c` | Entity state main variant 7: complex dispatch (202L) | `entity::lifecycle::entity_statemain7` | `[ ]` |
| **ENT-271** | `Entity_StateMain8` | `0x80060544` | `entity/Entity_StateMain8.c` | Entity state main variant 8: entity[7] switch (205L) | `entity::lifecycle::entity_statemain8` | `[ ]` |
| **ENT-272** | `Entity_StateMain9` | `0x8005C26C` | `entity/Entity_StateMain9.c` | Entity state main variant 9: entity[6] switch (219L) | `entity::lifecycle::entity_statemain9` | `[ ]` |
| **ENT-273** | `Entity_StatePick` | `0x80043EDC` | `entity/Entity_StatePick.c` | Entity pick state: entity[0x78] state machine for pickup | `entity::lifecycle::entity_statepick` | `[ ]` |
| **ENT-274** | `Entity_StateSwitch` | `0x80053D90` | `entity/Entity_StateSwitch.c` | Entity state switcher: switch on entity[0x78], 8 states | `entity::lifecycle::entity_stateswitch` | `[ ]` |
| **ENT-275** | `Entity_StateTransition` | `0x80058F24` | `entity/Entity_StateTransition.c` | Transitions entity to state 3 with 60-frame timer, clears global flag | `entity::lifecycle::entity_statetransition` | `[ ]` |
| **ENT-276** | `Entity_StateTransition2` | `0x800588BC` | `entity/Entity_StateTransition2.c` | Transitions entity to state 3 if input active and 0x164 flag set | `entity::lifecycle::entity_statetransition2` | `[ ]` |
| **ENT-277** | `Entity_StateTrigger` | `0x80043D8C` | `entity/Entity_StateTrigger.c` | Entity state trigger: entity[0x78]=1, checks flag vs DAT_800bf816 | `entity::lifecycle::entity_statetrigger` | `[ ]` |
| **ENT-278** | `Entity_StateTrigger2` | `0x8004491C` | `entity/Entity_StateTrigger2.c` | Entity state trigger variant 2: entity[0x78]=1, checks flags | `entity::lifecycle::entity_statetrigger2` | `[ ]` |
| **ENT-279** | `Entity_StateWait2` | `0x80041C54` | `entity/Entity_StateWait2.c` | Entity wait state variant 2: entity[0x78] state machine | `entity::lifecycle::entity_statewait2` | `[ ]` |
| **ENT-280** | `Entity_StateWait3` | `0x80043720` | `entity/Entity_StateWait3.c` | Entity wait state variant 3: entity[0x78]=1, polls DAT_800bf822 | `entity::lifecycle::entity_statewait3` | `[ ]` |
| **ENT-281** | `Entity_StateWait4` | `0x80041D60` | `entity/Entity_StateWait4.c` | Entity wait state variant 4: entity[0x78]=1, polls condition | `entity::lifecycle::entity_statewait4` | `[ ]` |
| **ENT-282** | `Entity_SubState` | `0x800541F4` | `entity/Entity_SubState.c` | Entity sub-state handler: checks entity[0x16B] flag, branches | `entity::lifecycle::entity_substate` | `[ ]` |
| **ENT-283** | `Entity_SubmitDraw` | `0x800262D8` | `entity/Entity_SubmitDraw.c` | Submits entity draw data via FUN_8007e1b8 with data table lookup | `entity::lifecycle::entity_submitdraw` | `[ ]` |
| **ENT-284** | `Entity_SubmitDraw2` | `0x80026320` | `entity/Entity_SubmitDraw2.c` | Submits entity draw data via FUN_8007e6dc with data table lookup | `entity::lifecycle::entity_submitdraw2` | `[ ]` |
| **ENT-285** | `Entity_SubmitGTEVertices` | `0x8003C8F4` | `entity/Entity_SubmitGTEVertices.c` | Submits GTE-transformed vertices to OT as textured quad primitive | `entity::lifecycle::entity_submitgtevertices` | `[ ]` |
| **ENT-286** | `Entity_SubmitQuadToOT` | `0x80027768` | `entity/Entity_SubmitQuadToOT.c` | Subrutina de Entity_SubmitQuadToOT (entity/Entity_SubmitQuadToOT.c) | `entity::lifecycle::entity_submitquadtoot` | `[ ]` |
| **ENT-287** | `Entity_SubmitRotatedSprite` | `0x800318A0` | `entity/Entity_SubmitRotatedSprite.c` | Submits rotated sprite to OT: GTE matrix from 3-byte rotation + MVMVA transform | `entity::lifecycle::entity_submitrotatedsprite` | `[ ]` |
| **ENT-288** | `Entity_SubmitSpriteRotAll` | `0x800321D8` | `entity/Entity_SubmitSpriteRotAll.c` | Subrutina de Entity_SubmitSpriteRotAll (entity/Entity_SubmitSpriteRotAll.c) | `entity::lifecycle::entity_submitspriterotall` | `[ ]` |
| **ENT-289** | `Entity_SubmitSpriteRotX` | `0x80031F84` | `entity/Entity_SubmitSpriteRotX.c` | Subrutina de Entity_SubmitSpriteRotX (entity/Entity_SubmitSpriteRotX.c) | `entity::lifecycle::entity_submitspriterotx` | `[ ]` |
| **ENT-290** | `Entity_SubmitSpriteRotY` | `0x80031AC4` | `entity/Entity_SubmitSpriteRotY.c` | Submits Y-axis rotated sprite: adds GTE rotation on Y before MVMVA | `entity::lifecycle::entity_submitspriteroty` | `[ ]` |
| **ENT-291** | `Entity_SubmitSpriteRotYX` | `0x800323FC` | `entity/Entity_SubmitSpriteRotYX.c` | Subrutina de Entity_SubmitSpriteRotYX (entity/Entity_SubmitSpriteRotYX.c) | `entity::lifecycle::entity_submitspriterotyx` | `[ ]` |
| **ENT-292** | `Entity_SubmitSpriteRotZ` | `0x80031D24` | `entity/Entity_SubmitSpriteRotZ.c` | Submits Z-axis rotated sprite: adds GTE rotation on Z before MVMVA | `entity::lifecycle::entity_submitspriterotz` | `[ ]` |
| **ENT-293** | `Entity_SubmitSpriteRotZX` | `0x8003265C` | `entity/Entity_SubmitSpriteRotZX.c` | Subrutina de Entity_SubmitSpriteRotZX (entity/Entity_SubmitSpriteRotZX.c) | `entity::lifecycle::entity_submitspriterotzx` | `[ ]` |
| **ENT-294** | `Entity_SubmitSpriteToOT` | `0x8003F698` | `entity/Entity_SubmitSpriteToOT.c` | Subrutina de Entity_SubmitSpriteToOT (entity/Entity_SubmitSpriteToOT.c) | `entity::lifecycle::entity_submitspritetoot` | `[ ]` |
| **ENT-295** | `Entity_SubmitVerticesToOT` | `0x8003B320` | `entity/Entity_SubmitVerticesToOT.c` | Subrutina de Entity_SubmitVerticesToOT (entity/Entity_SubmitVerticesToOT.c) | `entity::lifecycle::entity_submitverticestoot` | `[ ]` |
| **ENT-296** | `Entity_SyncToParent` | `0x8006AFC4` | `entity/Entity_SyncToParent.c` | Syncs entity position to parent if parent is in state 1 | `entity::lifecycle::entity_synctoparent` | `[ ]` |
| **ENT-297** | `Entity_TargetDistance` | `0x80024338` | `entity/Entity_TargetDistance.c` | Entity target distance: computes DX/DY from entity[0x14C/14E/150] to target | `entity::lifecycle::entity_targetdistance` | `[ ]` |
| **ENT-298** | `Entity_TargetDistance2` | `0x80024BD8` | `entity/Entity_TargetDistance2.c` | Entity target distance variant 2: different entity offset for target | `entity::lifecycle::entity_targetdistance2` | `[ ]` |
| **ENT-299** | `Entity_TransformPoint` | `0x80051D20` | `entity/Entity_TransformPoint.c` | Transforms a point by entity GTE matrix, adds translation | `entity::lifecycle::entity_transformpoint` | `[ ]` |
| **ENT-300** | `Entity_TransformPoint2` | `0x80051D90` | `entity/Entity_TransformPoint2.c` | Variant point transform: uses pre-computed matrix, no translation add | `entity::lifecycle::entity_transformpoint2` | `[ ]` |
| **ENT-301** | `Entity_TriggerAnimMode` | `0x800707E0` | `entity/Entity_TriggerAnimMode.c` | Triggers animation mode: checks entity[0x70], calls FUN_80041718(2,2), sets flag | `entity::lifecycle::entity_triggeranimmode` | `[ ]` |
| **ENT-302** | `Entity_TriggerEvent` | `0x80042758` | `entity/Entity_TriggerEvent.c` | Triggers event: entity[0x78] state, checks entity[0x72/0x74] conditions, calls FUN_80042728 | `entity::lifecycle::entity_triggerevent` | `[ ]` |
| **ENT-303** | `Entity_TypeCheck` | `0x8005C138` | `entity/Entity_TypeCheck.c` | Entity type checker: switch on entity[2] + entity[0xC] type | `entity::lifecycle::entity_typecheck` | `[ ]` |
| **ENT-304** | `Entity_TypeDispatch` | `0x8005B134` | `entity/Entity_TypeDispatch.c` | Entity type dispatcher: switch on entity[2]/[0xC] type | `entity::lifecycle::entity_typedispatch` | `[ ]` |
| **ENT-305** | `Entity_Update` | `0x800635D4` | `entity/Entity_Update.c` | Entity update: full per-frame entity update (228L) | `entity::lifecycle::entity_update` | `[ ]` |
| **ENT-306** | `Entity_UpdateAll` | `0x8007A904` | `entity/Entity_UpdateAll.c` | Iterates all active and inactive entities, calls their update functions | `entity::lifecycle::entity_updateall` | `[ ]` |
| **ENT-307** | `Entity_UpdateAngle` | `0x80055284` | `entity/Entity_UpdateAngle.c` | Updates entity[0x56] angle: conditional wraparound based on entity[0x147] flag | `entity::lifecycle::entity_updateangle` | `[ ]` |
| **ENT-308** | `Entity_UpdateBGList` | `0x80069B28` | `entity/Entity_UpdateBGList.c` | Iterates background entity linked list, calls each entity's update function | `entity::lifecycle::entity_updatebglist` | `[ ]` |
| **ENT-309** | `Entity_UpdateChild` | `0x80026A1C` | `entity/Entity_UpdateChild.c` | Entity child update: decrements entity[8], if expired calls callback entity[0xC] | `entity::lifecycle::entity_updatechild` | `[ ]` |
| **ENT-310** | `Entity_UpdateChildren` | `0x80026C88` | `entity/Entity_UpdateChildren.c` | Iterates 0x28 child entity slots, calls each child's update function | `entity::lifecycle::entity_updatechildren` | `[ ]` |
| **ENT-311** | `Entity_UpdateLifecycle` | `0x8007263C` | `entity/Entity_UpdateLifecycle.c` | Lifecycle callback: entity[4] state machine, checks done flag, dealloc at state 3 | `entity::lifecycle::entity_updatelifecycle` | `[ ]` |
| **ENT-312** | `Entity_UpdateList8` | `0x80026368` | `entity/Entity_UpdateList8.c` | Iterates 8 entity slots at 0x80100400, calls type-specific update function | `entity::lifecycle::entity_updatelist8` | `[ ]` |
| **ENT-313** | `Entity_UpdateLoop` | `0x8007B008` | `entity/Entity_UpdateLoop.c` | Entity update loop: iterates linked list from 0x800F2624, calls each entity[0x1C] callback | `entity::lifecycle::entity_updateloop` | `[ ]` |
| **ENT-314** | `Entity_UpdateLoop2` | `0x8007B04C` | `entity/Entity_UpdateLoop2.c` | Entity update loop variant 2: iterates inactive list from DAT_800fb168 | `entity::lifecycle::entity_updateloop2` | `[ ]` |
| **ENT-315** | `Entity_UpdateMatrix` | `0x800517F8` | `entity/Entity_UpdateMatrix.c` | Updates entity GTE matrix from entity[0x54] rotation and [0x2C-0x36] position | `entity::lifecycle::entity_updatematrix` | `[ ]` |
| **ENT-316** | `Entity_UpdateMovement` | `0x8003EF9C` | `entity/Entity_UpdateMovement.c` | Subrutina de Entity_UpdateMovement (entity/Entity_UpdateMovement.c) | `entity::lifecycle::entity_updatemovement` | `[ ]` |
| **ENT-317** | `Entity_UpdatePhysics` | `0x8003B704` | `entity/Entity_UpdatePhysics.c` | Subrutina de Entity_UpdatePhysics (entity/Entity_UpdatePhysics.c) | `entity::lifecycle::entity_updatephysics` | `[ ]` |
| **ENT-318** | `Entity_UpdateState` | `0x800726D4` | `entity/Entity_UpdateState.c` | Subrutina de Entity_UpdateState (entity/Entity_UpdateState.c) | `entity::lifecycle::entity_updatestate` | `[ ]` |
| **ENT-319** | `Entity_WaitForFlag` | `0x800425FC` | `entity/Entity_WaitForFlag.c` | Waits for flag: entity[0x78] state, polls DAT_800bf843 until zero then returns success | `entity::lifecycle::entity_waitforflag` | `[ ]` |
| **ENT-320** | `Entity_WaitState` | `0x800424F0` | `entity/Entity_WaitState.c` | Entity wait state: entity[0x78]=0, polls DAT_800bf843, checks flags | `entity::lifecycle::entity_waitstate` | `[ ]` |
| **ENT-321** | `Entity_WorldToScreen` | `0x8004DAEC` | `entity/Entity_WorldToScreen.c` | Converts entity world position to screen coords via GTE and checks visibility | `entity::lifecycle::entity_worldtoscreen` | `[ ]` |
| **ENT-322** | `Entity_SpawnAnim` | `0x80071DFC` | `entity/spawn/Entity_SpawnAnim.c` | Entity spawn animator: entity[6] state, spawns + anims | `entity::lifecycle::entity_spawnanim` | `[ ]` |
| **ENT-323** | `Entity_SpawnBackground` | `0x800534B0` | `entity/spawn/Entity_SpawnBackground.c` | Entity spawn in background: AllocBackground, sets position + callbacks | `entity::lifecycle::entity_spawnbackground` | `[ ]` |
| **ENT-324** | `Entity_SpawnBreakFX` | `0x8004B2E8` | `entity/spawn/Entity_SpawnBreakFX.c` | Spawns break effect entity 0x1F at saved position, plays SFX 0x28 | `entity::lifecycle::entity_spawnbreakfx` | `[ ]` |
| **ENT-325** | `Entity_SpawnChecked` | `0x800727D4` | `entity/spawn/Entity_SpawnChecked.c` | Entity spawn with check: calls FUN_80040a58, then AllocByPoolId if valid | `entity::lifecycle::entity_spawnchecked` | `[ ]` |
| **ENT-326** | `Entity_SpawnChild` | `0x80072DDC` | `entity/spawn/Entity_SpawnChild.c` | Spawns child entity: AllocByPoolId with bitmask, sets parent/type/flag | `entity::lifecycle::entity_spawnchild` | `[ ]` |
| **ENT-327** | `Entity_SpawnChild2` | `0x80071B44` | `entity/spawn/Entity_SpawnChild2.c` | Entity child spawner variant 2: allocs type 0xD, sets callback + flags | `entity::lifecycle::entity_spawnchild2` | `[ ]` |
| **ENT-328** | `Entity_SpawnChild27` | `0x8006A8C8` | `entity/spawn/Entity_SpawnChild27.c` | Spawns child entity of type 0x27 with parent reference | `entity::lifecycle::entity_spawnchild27` | `[ ]` |
| **ENT-329** | `Entity_SpawnChildAttached` | `0x800331D8` | `entity/spawn/Entity_SpawnChildAttached.c` | Subrutina de Entity_SpawnChildAttached (entity/spawn/Entity_SpawnChildAttached.c) | `entity::lifecycle::entity_spawnchildattached` | `[ ]` |
| **ENT-330** | `Entity_SpawnChildSequence` | `0x80027144` | `entity/spawn/Entity_SpawnChildSequence.c` | Spawns a sequence of child entities using a count/distribution table | `entity::lifecycle::entity_spawnchildsequence` | `[ ]` |
| **ENT-331** | `Entity_SpawnChildren` | `0x8006FC34` | `entity/spawn/Entity_SpawnChildren.c` | Entity children spawner: iterates table at 0x800A4BB8 | `entity::lifecycle::entity_spawnchildren` | `[ ]` |
| **ENT-332** | `Entity_SpawnCollectibleIf` | `0x80067FE4` | `entity/spawn/Entity_SpawnCollectibleIf.c` | Spawns collectible entity based on entity[0x6E] type byte | `entity::lifecycle::entity_spawncollectibleif` | `[ ]` |
| **ENT-333** | `Entity_SpawnCollectible_2` | `0x8006804C` | `entity/spawn/Entity_SpawnCollectible_2.c` | Entity collectible spawner: allocs entity, sets type+pos | `entity::lifecycle::entity_spawncollectible_2` | `[ ]` |
| **ENT-334** | `Entity_SpawnControl` | `0x80069CD8` | `entity/spawn/Entity_SpawnControl.c` | Entity spawn controller: manages spawn queue | `entity::lifecycle::entity_spawncontrol` | `[ ]` |
| **ENT-335** | `Entity_SpawnDropItem` | `0x80072114` | `entity/spawn/Entity_SpawnDropItem.c` | Spawns drop item: child entity 0x0D with timed lifecycle, timer 0x7C7E, SFX 8, manages global ptr | `entity::lifecycle::entity_spawndropitem` | `[ ]` |
| **ENT-336** | `Entity_SpawnEffect_2` | `0x80072308` | `entity/spawn/Entity_SpawnEffect_2.c` | Entity effect spawner: allocs child, sets sprite+pos | `entity::lifecycle::entity_spawneffect_2` | `[ ]` |
| **ENT-337** | `Entity_SpawnIfClear` | `0x80023548` | `entity/spawn/Entity_SpawnIfClear.c` | Checks spawn collision and spawns entity if space is clear | `entity::lifecycle::entity_spawnifclear` | `[ ]` |
| **ENT-338** | `Entity_SpawnItem` | `0x8004A2A0` | `entity/spawn/Entity_SpawnItem.c` | Entity item spawner: checks item count, allocs entity 0x1F, sets params | `entity::lifecycle::entity_spawnitem` | `[ ]` |
| **ENT-339** | `Entity_SpawnItem2` | `0x8004A118` | `entity/spawn/Entity_SpawnItem2.c` | Entity item spawner variant 2: allocs entity 0x1F, sets callback | `entity::lifecycle::entity_spawnitem2` | `[ ]` |
| **ENT-340** | `Entity_SpawnListener` | `0x80080750` | `entity/spawn/Entity_SpawnListener.c` | Entity spawn listener: allocs child of type 7, callback FUN_800805ec | `entity::lifecycle::entity_spawnlistener` | `[ ]` |
| **ENT-341** | `Entity_SpawnMain` | `0x800741DC` | `entity/spawn/Entity_SpawnMain.c` | Entity spawn main: full spawn pipeline with callbacks | `entity::lifecycle::entity_spawnmain` | `[ ]` |
| **ENT-342** | `Entity_SpawnMultiple` | `0x8006FF10` | `entity/spawn/Entity_SpawnMultiple.c` | Entity multiple spawner: iterates table at 0x800A4BB8, spawns children | `entity::lifecycle::entity_spawnmultiple` | `[ ]` |
| **ENT-343** | `Entity_SpawnNoPos` | `0x800310F4` | `entity/spawn/Entity_SpawnNoPos.c` | Subrutina de Entity_SpawnNoPos (entity/spawn/Entity_SpawnNoPos.c) | `entity::lifecycle::entity_spawnnopos` | `[ ]` |
| **ENT-344** | `Entity_SpawnPool2Lifecycle` | `0x8006F0E4` | `entity/spawn/Entity_SpawnPool2Lifecycle.c` | Spawns entity in pool 2 with FUN_8006f2d0 callback, type 1, flag 0x80 | `entity::lifecycle::entity_spawnpool2lifecycle` | `[ ]` |
| **ENT-345** | `Entity_SpawnProjectile` | `0x80068214` | `entity/spawn/Entity_SpawnProjectile.c` | Spawns projectile entity 0x1B at entity position with scale 0x200, type 1, behavior 4 | `entity::lifecycle::entity_spawnprojectile` | `[ ]` |
| **ENT-346** | `Entity_SpawnSFX` | `0x8007413C` | `entity/spawn/Entity_SpawnSFX.c` | Entity SFX spawn: allocs child with callback, sets type 4, stores SFX ID | `entity::lifecycle::entity_spawnsfx` | `[ ]` |
| **ENT-347** | `Entity_SpawnScorePopup` | `0x8004B0D8` | `entity/spawn/Entity_SpawnScorePopup.c` | Spawns score popup entity at current position with SFX 0x28 | `entity::lifecycle::entity_spawnscorepopup` | `[ ]` |
| **ENT-348** | `Entity_SpawnScorePopupEx` | `0x8004B428` | `entity/spawn/Entity_SpawnScorePopupEx.c` | Spawns score popup with SFX + sets global flag at 0x800BF820 | `entity::lifecycle::entity_spawnscorepopupex` | `[ ]` |
| **ENT-349** | `Entity_SpawnSpecial` | `0x80031470` | `entity/spawn/Entity_SpawnSpecial.c` | Subrutina de Entity_SpawnSpecial (entity/spawn/Entity_SpawnSpecial.c) | `entity::lifecycle::entity_spawnspecial` | `[ ]` |
| **ENT-350** | `Entity_SpawnSprite` | `0x8007DEF8` | `entity/spawn/Entity_SpawnSprite.c` | Entity sprite spawner: allocs pool 3, sets sprite callback | `entity::lifecycle::entity_spawnsprite` | `[ ]` |
| **ENT-351** | `Entity_SpawnSubEntity` | `0x80040AA4` | `entity/spawn/Entity_SpawnSubEntity.c` | Spawns a sub-entity from pool 4 with behavior at 0x8003AD48 | `entity::lifecycle::entity_spawnsubentity` | `[ ]` |
| **ENT-352** | `Entity_SpawnTrail` | `0x80031558` | `entity/spawn/Entity_SpawnTrail.c` | Spawns trail follower entity with Entity_Behavior_Trail and draw func | `entity::lifecycle::entity_spawntrail` | `[ ]` |
| **ENT-353** | `Entity_SpawnWithBehavior` | `0x800525D0` | `entity/spawn/Entity_SpawnWithBehavior.c` | Spawns entity with behavior at 0x800527C8 and specific entity type | `entity::lifecycle::entity_spawnwithbehavior` | `[ ]` |
| **ENT-354** | `Entity_SpawnWithCallback` | `0x800725D4` | `entity/spawn/Entity_SpawnWithCallback.c` | Spawns entity via pool 1, sets entity[0x1C] callback, type 0x17, flag 0x80 | `entity::lifecycle::entity_spawnwithcallback` | `[ ]` |
| **ENT-355** | `Entity_SpawnWithFlag` | `0x800312D4` | `entity/spawn/Entity_SpawnWithFlag.c` | Subrutina de Entity_SpawnWithFlag (entity/spawn/Entity_SpawnWithFlag.c) | `entity::lifecycle::entity_spawnwithflag` | `[ ]` |
| **ENT-356** | `Entity_SpawnWithPos` | `0x8003116C` | `entity/spawn/Entity_SpawnWithPos.c` | Subrutina de Entity_SpawnWithPos (entity/spawn/Entity_SpawnWithPos.c) | `entity::lifecycle::entity_spawnwithpos` | `[ ]` |
| **ENT-357** | `Entity_SpawnWithVector` | `0x800313A0` | `entity/spawn/Entity_SpawnWithVector.c` | Subrutina de Entity_SpawnWithVector (entity/spawn/Entity_SpawnWithVector.c) | `entity::lifecycle::entity_spawnwithvector` | `[ ]` |

---

## 🗂️ SECTOR 5: Entity Behaviors, AI & Interactive World

> Comportamientos de enemigos (Cerdos Koma, jefes), NPCs interactivos, puertas, palancas, empuje de bloques y proyectiles.

| ID | Función / Símbolo | Dirección PS1 | Archivo C | Comportamiento Técnico Original | Mapeo Bevy (Rust) | Estado |
| :--- | :--- | :---: | :--- | :--- | :--- | :---: |
| **BEH-01** | `Entity_Behavior_AI` | `0x80020364` | `entity/behavior/Entity_Behavior_AI.c` | Entity AI behavior: checks target, moves toward player | `ai::behavior::entity_behavior_ai` | `[ ]` |
| **BEH-02** | `Entity_Behavior_AnimPlayer1` | `0x800292B8` | `entity/behavior/Entity_Behavior_AnimPlayer1.c` | Sprite animation player - variant 1 (selects data table by entity type) | `ai::behavior::entity_behavior_animplayer1` | `[ ]` |
| **BEH-03** | `Entity_Behavior_AnimPlayer2` | `0x800293F4` | `entity/behavior/Entity_Behavior_AnimPlayer2.c` | Sprite animation player - variant 2 (different data tables) | `ai::behavior::entity_behavior_animplayer2` | `[ ]` |
| **BEH-04** | `Entity_Behavior_AnimState1` | `0x8002C3EC` | `entity/behavior/Entity_Behavior_AnimState1.c` | Animation state machine variant 1: switches on entity[7] with GTE transforms | `ai::behavior::entity_behavior_animstate1` | `[ ]` |
| **BEH-05** | `Entity_Behavior_AnimState2` | `0x8002C548` | `entity/behavior/Entity_Behavior_AnimState2.c` | Animation state machine variant 2: same structure, different GTE setup | `ai::behavior::entity_behavior_animstate2` | `[ ]` |
| **BEH-06** | `Entity_Behavior_ApproachTarget` | `0x80044B38` | `entity/behavior/Entity_Behavior_ApproachTarget.c` | Entity approaches target position: state 0 calc angle, state 1 approach | `ai::behavior::entity_behavior_approachtarget` | `[ ]` |
| **BEH-07** | `Entity_Behavior_Attack` | `0x8006B494` | `entity/behavior/Entity_Behavior_Attack.c` | Entity attack behavior main: entity[6] switch, attack types | `ai::behavior::entity_behavior_attack` | `[ ]` |
| **BEH-08** | `Entity_Behavior_Attack2` | `0x8006B124` | `entity/behavior/Entity_Behavior_Attack2.c` | Entity attack behavior variant 2: entity[0x46] state, sets speed | `ai::behavior::entity_behavior_attack2` | `[ ]` |
| **BEH-09** | `Entity_Behavior_AttackMain` | `0x8006C0C4` | `entity/behavior/Entity_Behavior_AttackMain.c` | Entity attack main: entity[6] switch, attack states | `ai::behavior::entity_behavior_attackmain` | `[ ]` |
| **BEH-10** | `Entity_Behavior_Boss` | `0x8001F054` | `entity/behavior/Entity_Behavior_Boss.c` | Entity boss behavior: complex multi-state AI | `ai::behavior::entity_behavior_boss` | `[ ]` |
| **BEH-11** | `Entity_Behavior_Cam` | `0x8006C478` | `entity/behavior/Entity_Behavior_Cam.c` | Entity camera behavior: entity[4] state 0->1->2->3 transitions | `ai::behavior::entity_behavior_cam` | `[ ]` |
| **BEH-12** | `Entity_Behavior_Cam2` | `0x8006C608` | `entity/behavior/Entity_Behavior_Cam2.c` | Entity camera behavior variant 2: entity[4] state machine | `ai::behavior::entity_behavior_cam2` | `[ ]` |
| **BEH-13** | `Entity_Behavior_Collect` | `0x8004B9C8` | `entity/behavior/Entity_Behavior_Collect.c` | Entity collect behavior: entity[5] state 0->1, handles collection | `ai::behavior::entity_behavior_collect` | `[ ]` |
| **BEH-14** | `Entity_Behavior_Collectible` | `0x8004C238` | `entity/behavior/Entity_Behavior_Collectible.c` | Collectible/item entity behavior: handles pickup, bounce, score display | `ai::behavior::entity_behavior_collectible` | `[ ]` |
| **BEH-15** | `Entity_Behavior_Collectible2` | `0x8004BEF4` | `entity/behavior/Entity_Behavior_Collectible2.c` | Entity collectible behavior variant: entity[0x5C] timer state machine | `ai::behavior::entity_behavior_collectible2` | `[ ]` |
| **BEH-16** | `Entity_Behavior_Cutscene` | `0x80026148` | `entity/behavior/Entity_Behavior_Cutscene.c` | Entity cutscene behavior: entity[4]=1, advances timer, triggers event | `ai::behavior::entity_behavior_cutscene` | `[ ]` |
| **BEH-17** | `Entity_Behavior_Cutscene2` | `0x80072A78` | `entity/behavior/Entity_Behavior_Cutscene2.c` | Entity cutscene behavior variant 2: entity[4] state | `ai::behavior::entity_behavior_cutscene2` | `[ ]` |
| **BEH-18** | `Entity_Behavior_Death` | `0x800678E8` | `entity/behavior/Entity_Behavior_Death.c` | Entity death behavior: plays SFX 0x24, sets timer, dealloc | `ai::behavior::entity_behavior_death` | `[ ]` |
| **BEH-19** | `Entity_Behavior_Destroy` | `0x8006AE28` | `entity/behavior/Entity_Behavior_Destroy.c` | Entity destroy behavior: entity[4] 0->1->2, cleanup | `ai::behavior::entity_behavior_destroy` | `[ ]` |
| **BEH-20** | `Entity_Behavior_Door` | `0x80026864` | `entity/behavior/Entity_Behavior_Door.c` | Entity door behavior: entity[4]=1, checks game state transition | `ai::behavior::entity_behavior_door` | `[ ]` |
| **BEH-21** | `Entity_Behavior_Door2` | `0x80068698` | `entity/behavior/Entity_Behavior_Door2.c` | Entity door behavior variant 2: entity[4]=1, transition | `ai::behavior::entity_behavior_door2` | `[ ]` |
| **BEH-22** | `Entity_Behavior_Draw` | `0x8002FC40` | `entity/behavior/Entity_Behavior_Draw.c` | Entity draw behavior: entity[4]=1, configures sprite+draw | `ai::behavior::entity_behavior_draw` | `[ ]` |
| **BEH-23** | `Entity_Behavior_DustTrail` | `0x8002BAFC` | `entity/behavior/Entity_Behavior_DustTrail.c` | Dust trail particles: random velocity/position with 5-segment history buffer | `ai::behavior::entity_behavior_dusttrail` | `[ ]` |
| **BEH-24** | `Entity_Behavior_End` | `0x80053968` | `entity/behavior/Entity_Behavior_End.c` | Entity end behavior: cleanup and transition | `ai::behavior::entity_behavior_end` | `[ ]` |
| **BEH-25** | `Entity_Behavior_Enemy` | `0x8006B390` | `entity/behavior/Entity_Behavior_Enemy.c` | Entity enemy behavior: calls FUN_80069858, sets type-specific state | `ai::behavior::entity_behavior_enemy` | `[ ]` |
| **BEH-26** | `Entity_Behavior_Enemy2` | `0x80069BEC` | `entity/behavior/Entity_Behavior_Enemy2.c` | Entity enemy behavior variant 2: entity[0x46] state, sets DAT_1f80027c flag | `ai::behavior::entity_behavior_enemy2` | `[ ]` |
| **BEH-27** | `Entity_Behavior_EnemyMain` | `0x8006A384` | `entity/behavior/Entity_Behavior_EnemyMain.c` | Entity enemy behavior main: entity[6] switch, AI states | `ai::behavior::entity_behavior_enemymain` | `[ ]` |
| **BEH-28** | `Entity_Behavior_Explosion` | `0x8004022C` | `entity/behavior/Entity_Behavior_Explosion.c` | Explosion/particle effect: accelerate, spawn children, dealloc | `ai::behavior::entity_behavior_explosion` | `[ ]` |
| **BEH-29** | `Entity_Behavior_Fade` | `0x80026024` | `entity/behavior/Entity_Behavior_Fade.c` | Entity fade behavior: checks entity[0x14]/[0x15], handles fade transition | `ai::behavior::entity_behavior_fade` | `[ ]` |
| **BEH-30** | `Entity_Behavior_Fall` | `0x8006B1FC` | `entity/behavior/Entity_Behavior_Fall.c` | Entity fall behavior: entity[7] state 0->1->2->3, gravity | `ai::behavior::entity_behavior_fall` | `[ ]` |
| **BEH-31** | `Entity_Behavior_Floater` | `0x80029530` | `entity/behavior/Entity_Behavior_Floater.c` | Floating/orbiting behavior using trig functions and GTE timer | `ai::behavior::entity_behavior_floater` | `[ ]` |
| **BEH-32** | `Entity_Behavior_FollowParentY` | `0x800543C0` | `entity/behavior/Entity_Behavior_FollowParentY.c` | Follows parent entity Y offset: reads parent[0x10], computes delta from entity[0x32] | `ai::behavior::entity_behavior_followparenty` | `[ ]` |
| **BEH-33** | `Entity_Behavior_Hit` | `0x80024548` | `entity/behavior/Entity_Behavior_Hit.c` | Entity hit behavior: checks entity[0x16B], applies reaction | `ai::behavior::entity_behavior_hit` | `[ ]` |
| **BEH-34** | `Entity_Behavior_Hurt` | `0x8006BB6C` | `entity/behavior/Entity_Behavior_Hurt.c` | Entity hurt behavior: entity[4] state 0->1->2, knockback | `ai::behavior::entity_behavior_hurt` | `[ ]` |
| **BEH-35** | `Entity_Behavior_Init2` | `0x80054650` | `entity/behavior/Entity_Behavior_Init2.c` | Entity behavior init variant 2: clears flags, sets timer | player::tomba_movement_system (settleStep) | [x] |
| **BEH-36** | `Entity_Behavior_InitItem` | `0x8004B150` | `entity/behavior/Entity_Behavior_InitItem.c` | Entity item init behavior: sets entity[0x18] mode based on param | `ai::behavior::entity_behavior_inititem` | `[ ]` |
| **BEH-37** | `Entity_Behavior_Item` | `0x8004BF84` | `entity/behavior/Entity_Behavior_Item.c` | Entity item behavior: state machine with pickup/drop animation | `ai::behavior::entity_behavior_item` | `[ ]` |
| **BEH-38** | `Entity_Behavior_Item2` | `0x8004BB38` | `entity/behavior/Entity_Behavior_Item2.c` | Entity item behavior variant 2: entity[4]=1, pickup | `ai::behavior::entity_behavior_item2` | `[ ]` |
| **BEH-39** | `Entity_Behavior_Jump_2` | `0x800558B4` | `entity/behavior/Entity_Behavior_Jump_2.c` | Entity jump behavior: checks timer, applies velocity | `ai::behavior::entity_behavior_jump_2` | `[ ]` |
| **BEH-40** | `Entity_Behavior_Move` | `0x80068A94` | `entity/behavior/Entity_Behavior_Move.c` | Entity move behavior: entity[0x2B]=0, uses timer entity[0x40] | `ai::behavior::entity_behavior_move` | `[ ]` |
| **BEH-41** | `Entity_Behavior_Move2` | `0x80068BE8` | `entity/behavior/Entity_Behavior_Move2.c` | Entity move behavior variant 2: entity[5] state | `ai::behavior::entity_behavior_move2` | `[ ]` |
| **BEH-42** | `Entity_Behavior_NPC` | `0x8004C930` | `entity/behavior/Entity_Behavior_NPC.c` | Entity NPC behavior: entity[4]=1, dialog/interaction | `ai::behavior::entity_behavior_npc` | `[ ]` |
| **BEH-43** | `Entity_Behavior_Painter` | `0x80024794` | `entity/behavior/Entity_Behavior_Painter.c` | Entity painter behavior: entity[0x14A] flag, branches on painter mode | `ai::behavior::entity_behavior_painter` | `[ ]` |
| **BEH-44** | `Entity_Behavior_Painter2` | `0x800248D0` | `entity/behavior/Entity_Behavior_Painter2.c` | Entity painter behavior variant 2: checks DAT_800bf873 flag | `ai::behavior::entity_behavior_painter2` | `[ ]` |
| **BEH-45** | `Entity_Behavior_Parent` | `0x8002B7B0` | `entity/behavior/Entity_Behavior_Parent.c` | Entity parent behavior: entity[4]=1, reads parent[0x10] | `ai::behavior::entity_behavior_parent` | `[ ]` |
| **BEH-46** | `Entity_Behavior_Particle` | `0x80027254` | `entity/behavior/Entity_Behavior_Particle.c` | Particle effect entity: random velocity, deceleration, timed life | `ai::behavior::entity_behavior_particle` | `[ ]` |
| **BEH-47** | `Entity_Behavior_ParticleBurst` | `0x80040390` | `entity/behavior/Entity_Behavior_ParticleBurst.c` | Particle burst: wait for animation flag, spawn children, dealloc | `ai::behavior::entity_behavior_particleburst` | `[ ]` |
| **BEH-48** | `Entity_Behavior_Pickup` | `0x8004C01C` | `entity/behavior/Entity_Behavior_Pickup.c` | Entity pickup behavior: entity[5]=0/1 state, picks up item animation | `ai::behavior::entity_behavior_pickup` | `[ ]` |
| **BEH-49** | `Entity_Behavior_Player` | `0x800739AC` | `entity/behavior/Entity_Behavior_Player.c` | Entity player behavior: entity[4]=1, player control | `ai::behavior::entity_behavior_player` | `[ ]` |
| **BEH-50** | `Entity_Behavior_PlayerController` | `0x80040558` | `entity/behavior/Entity_Behavior_PlayerController.c` | Main player/character state machine with 8 entity-type dispatch + 6 sub-states | `ai::behavior::entity_behavior_playercontroller` | `[ ]` |
| **BEH-51** | `Entity_Behavior_Projectile` | `0x8002F738` | `entity/behavior/Entity_Behavior_Projectile.c` | Entity projectile behavior: entity[4]=1, reads parent, moves | `ai::behavior::entity_behavior_projectile` | `[ ]` |
| **BEH-52** | `Entity_Behavior_Push` | `0x80073328` | `entity/behavior/Entity_Behavior_Push.c` | Entity push behavior: entity[6] switch, push reaction | `ai::behavior::entity_behavior_push` | `[ ]` |
| **BEH-53** | `Entity_Behavior_Rotate` | `0x800663A8` | `entity/behavior/Entity_Behavior_Rotate.c` | Entity rotate behavior: uses angle approach, checks distance, advances state | `ai::behavior::entity_behavior_rotate` | `[ ]` |
| **BEH-54** | `Entity_Behavior_Script` | `0x800300D8` | `entity/behavior/Entity_Behavior_Script.c` | Entity script behavior: entity[4]=1, runs bytecode | `ai::behavior::entity_behavior_script` | `[ ]` |
| **BEH-55** | `Entity_Behavior_Scripted` | `0x80030A3C` | `entity/behavior/Entity_Behavior_Scripted.c` | Script-driven entity behavior: reads entity[0x6C] script data, complex state machine | `ai::behavior::entity_behavior_scripted` | `[ ]` |
| **BEH-56** | `Entity_Behavior_Sequence` | `0x8007091C` | `entity/behavior/Entity_Behavior_Sequence.c` | Entity sequence behavior: runs scripted action seq | `ai::behavior::entity_behavior_sequence` | `[ ]` |
| **BEH-57** | `Entity_Behavior_Shake` | `0x8003FD10` | `entity/behavior/Entity_Behavior_Shake.c` | Camera shake effect: toggles sub-entity position with random offset every 16 frames | `ai::behavior::entity_behavior_shake` | `[ ]` |
| **BEH-58** | `Entity_Behavior_ShakeSFX` | `0x8003FED8` | `entity/behavior/Entity_Behavior_ShakeSFX.c` | Shake with sound: same as Shake but plays SFX 0x19 on start, resets parent flag | `ai::behavior::entity_behavior_shakesfx` | `[ ]` |
| **BEH-59** | `Entity_Behavior_Sparkle` | `0x8002A584` | `entity/behavior/Entity_Behavior_Sparkle.c` | Sparkle/dust particles: random positions, follow parent entity with offset | `ai::behavior::entity_behavior_sparkle` | `[ ]` |
| **BEH-60** | `Entity_Behavior_Spawn` | `0x8002F514` | `entity/behavior/Entity_Behavior_Spawn.c` | Entity spawn behavior: switch on entity type, spawns | `ai::behavior::entity_behavior_spawn` | `[ ]` |
| **BEH-61** | `Entity_Behavior_SpawnAtOffset` | `0x800538E0` | `entity/behavior/Entity_Behavior_SpawnAtOffset.c` | Spawns entity 0x35 at offset from entity[0x84] if entity type is 0 or 3 | `ai::behavior::entity_behavior_spawnatoffset` | `[ ]` |
| **BEH-62** | `Entity_Behavior_Spin` | `0x80063158` | `entity/behavior/Entity_Behavior_Spin.c` | Entity spin behavior: entity[0x154] deceleration | `ai::behavior::entity_behavior_spin` | `[ ]` |
| **BEH-63** | `Entity_Behavior_SpinAttack` | `0x80063098` | `entity/behavior/Entity_Behavior_SpinAttack.c` | Spin attack: accelerates entity[0x154] speed, rotates, plays SFX 0x1B at threshold | `ai::behavior::entity_behavior_spinattack` | `[ ]` |
| **BEH-64** | `Entity_Behavior_Swing` | `0x800559F4` | `entity/behavior/Entity_Behavior_Swing.c` | Entity swing behavior: checks timer, applies swing | `ai::behavior::entity_behavior_swing` | `[ ]` |
| **BEH-65** | `Entity_Behavior_Talk` | `0x8004B208` | `entity/behavior/Entity_Behavior_Talk.c` | Entity talk behavior: entity[5]=0->1, inits dialog via FUN_80041194 | `ai::behavior::entity_behavior_talk` | `[ ]` |
| **BEH-66** | `Entity_Behavior_Talk2` | `0x8004B788` | `entity/behavior/Entity_Behavior_Talk2.c` | Entity talk behavior variant 2: entity[5]=1, dialog | `ai::behavior::entity_behavior_talk2` | `[ ]` |
| **BEH-67** | `Entity_Behavior_TimedLife` | `0x80072520` | `entity/behavior/Entity_Behavior_TimedLife.c` | Timed lifecycle: entity[4] state 0->1->2->3, timer 0x3C, dealloc at state 3 | `ai::behavior::entity_behavior_timedlife` | `[ ]` |
| **BEH-68** | `Entity_Behavior_TimedSFX` | `0x8006625C` | `entity/behavior/Entity_Behavior_TimedSFX.c` | Entity timed SFX: decrements timer, plays SFX based on entity[0x16E] counter | `ai::behavior::entity_behavior_timedsfx` | `[ ]` |
| **BEH-69** | `Entity_Behavior_Trail` | `0x80029B40` | `entity/behavior/Entity_Behavior_Trail.c` | Subrutina de Entity_Behavior_Trail (entity/behavior/Entity_Behavior_Trail.c) | `ai::behavior::entity_behavior_trail` | `[ ]` |
| **BEH-70** | `Entity_Behavior_TrailPt` | `0x800275D4` | `entity/behavior/Entity_Behavior_TrailPt.c` | 5-point trail segment: orbital motion with sine/cosine, visibility check | `ai::behavior::entity_behavior_trailpt` | `[ ]` |
| **BEH-71** | `Entity_Behavior_Wander` | `0x8002918C` | `entity/behavior/Entity_Behavior_Wander.c` | Random wander/patrol with visibility check and timer | `ai::behavior::entity_behavior_wander` | `[ ]` |

---

## 🗂️ SECTOR 6: Skeletal Animation VM & Sprites

> Despacho de clips de animación ANMP (239 clips), jerarquía esquelética de huesos, sprites 3D y partículas.

| ID | Función / Símbolo | Dirección PS1 | Archivo C | Comportamiento Técnico Original | Mapeo Bevy (Rust) | Estado |
| :--- | :--- | :---: | :--- | :--- | :--- | :---: |
| **ANM-01** | `Entity_AdvanceAnim` | `0x80052694` | `entity/anim/Entity_AdvanceAnim.c` | Entity animation advance: decrements entity[0x44] counter, branches on threshold | `animation::system::entity_advanceanim` | `[x]` |
| **ANM-02** | `Entity_AdvanceAnim2` | `0x80072E60` | `entity/anim/Entity_AdvanceAnim2.c` | Entity animation advance 2: entity[0x46]=0 state, animates entity[0x50] delta | `animation::system::entity_advanceanim2` | `[x]` |
| **ANM-03** | `Entity_AdvanceAnim3` | `0x80077B5C` | `entity/anim/Entity_AdvanceAnim3.c` | Entity anim advance variant 3: entity[0xE] timer, calls next frame | `animation::system::entity_advanceanim3` | `[x]` |
| **ANM-04** | `Entity_AdvanceAnimByte` | `0x80031744` | `entity/anim/Entity_AdvanceAnimByte.c` | Subrutina de Entity_AdvanceAnimByte (entity/anim/Entity_AdvanceAnimByte.c) | `animation::system::entity_advanceanimbyte` | `[x]` |
| **ANM-05** | `Entity_AdvanceAnimScript` | `0x80031780` | `entity/anim/Entity_AdvanceAnimScript.c` | Subrutina de Entity_AdvanceAnimScript (entity/anim/Entity_AdvanceAnimScript.c) | `animation::system::entity_advanceanimscript` | `[x]` |
| **ANM-06** | `Entity_AdvanceAnimWord` | `0x80031708` | `entity/anim/Entity_AdvanceAnimWord.c` | Subrutina de Entity_AdvanceAnimWord (entity/anim/Entity_AdvanceAnimWord.c) | `animation::system::entity_advanceanimword` | `[x]` |
| **ANM-07** | `Entity_AnimChain` | `0x80071CF4` | `entity/anim/Entity_AnimChain.c` | Multi-segment chain animation: per-segment angles at entity[param*2+0x60], radius entity[0x82] | `animation::system::entity_animchain` | `[x]` |
| **ANM-08** | `Entity_AnimController` | `0x80072898` | `entity/anim/Entity_AnimController.c` | Entity animation controller: manages anim state machine | `animation::system::entity_animcontroller` | `[x]` |
| **ANM-09** | `Entity_AnimController2` | `0x80076904` | `entity/anim/Entity_AnimController2.c` | Entity animation controller variant 2: frame advance | `animation::system::entity_animcontroller2` | `[x]` |
| **ANM-10** | `Entity_AnimFrame` | `0x80076D68` | `entity/anim/Entity_AnimFrame.c` | Entity animation frame: advances frame, checks wrap | player::tomba_animation_control_system | [x] |
| **ANM-11** | `Entity_AnimLoad2` | `0x80054C08` | `entity/anim/Entity_AnimLoad2.c` | Entity anim load variant 2: checks entity flags, loads from table | `animation::system::entity_animload2` | `[x]` |
| **ANM-12** | `Entity_AnimLoad3` | `0x80054790` | `entity/anim/Entity_AnimLoad3.c` | Entity anim load variant 3: looks up table at 0x800A42F8 | `animation::system::entity_animload3` | `[x]` |
| **ANM-13** | `Entity_AnimLoad4` | `0x80071260` | `entity/anim/Entity_AnimLoad4.c` | Entity anim loader variant 4: entity[6]=0, loads anim data | `animation::system::entity_animload4` | `[x]` |
| **ANM-14** | `Entity_AnimLoadDispatch` | `0x8005490C` | `entity/anim/Entity_AnimLoadDispatch.c` | Entity anim load dispatcher: switch on entity type | `animation::system::entity_animloaddispatch` | `[x]` |
| **ANM-15** | `Entity_AnimMode` | `0x8003FE00` | `entity/anim/Entity_AnimMode.c` | Entity animation mode setter: entity[3] state, sets entity[0x40] timer | `animation::system::entity_animmode` | `[x]` |
| **ANM-16** | `Entity_AnimPlay2` | `0x8007156C` | `entity/anim/Entity_AnimPlay2.c` | Entity anim player variant 2: entity[3] switch, 6 animation modes | `animation::system::entity_animplay2` | `[x]` |
| **ANM-17** | `Entity_AnimPlayer` | `0x80071768` | `entity/anim/Entity_AnimPlayer.c` | Entity animation player: manages animation playback | `animation::system::entity_animplayer` | `[x]` |
| **ANM-18** | `Entity_AnimScriptStep` | `0x80041468` | `entity/anim/Entity_AnimScriptStep.c` | Animation script step: state machine processing entity[0x78] animation events | `animation::system::entity_animscriptstep` | `[x]` |
| **ANM-19** | `Entity_AnimSegment` | `0x80071C48` | `entity/anim/Entity_AnimSegment.c` | Single segment animation: entity[6] state machine, angle advance 0x100, radius from entity[0x82] | `animation::system::entity_animsegment` | `[x]` |
| **ANM-20** | `Entity_AnimSegment2` | `0x800721DC` | `entity/anim/Entity_AnimSegment2.c` | Entity anim segment variant 2: entity[6]=1 state, advances angle | `animation::system::entity_animsegment2` | `[x]` |
| **ANM-21** | `Entity_AnimSet` | `0x80064358` | `entity/anim/Entity_AnimSet.c` | Entity animation setter: sets params, loads animation data | `animation::system::entity_animset` | `[x]` |
| **ANM-22** | `Entity_LoadAnimData` | `0x80077B38` | `entity/anim/Entity_LoadAnimData.c` | Loads animation data from table: sets entity[0x38] pointer and entity[0xE] flags | `animation::system::entity_loadanimdata` | `[x]` |
| **ANM-23** | `Entity_LoadAnimData3` | `0x80077C40` | `entity/anim/Entity_LoadAnimData3.c` | Entity anim data loader variant 3: loads from table, stores ptrs | player::hook_tomba_animation_player | [x] |
| **ANM-24** | `Entity_LoadAnimDataEx` | `0x80077CFC` | `entity/anim/Entity_LoadAnimDataEx.c` | Extended anim load: sets animation pointer, calls setup + frame init | `animation::system::entity_loadanimdataex` | `[x]` |
| **ANM-25** | `Entity_LoadAnimDispatch` | `0x80054E24` | `entity/anim/Entity_LoadAnimDispatch.c` | Entity anim load dispatch: branches on param_2 (0,1,2+) for anim loading path | `animation::system::entity_loadanimdispatch` | `[x]` |
| **ANM-26** | `Entity_LoadAnimIfChanged` | `0x80054D14` | `entity/anim/Entity_LoadAnimIfChanged.c` | Loads entity animation data only when entity[0x46] animation ID has changed | `animation::system::entity_loadanimifchanged` | `[x]` |
| **ANM-27** | `Entity_LoadAnimTable` | `0x80054B34` | `entity/anim/Entity_LoadAnimTable.c` | Entity anim table load: lookup by type table at 0x800A4544 | `animation::system::entity_loadanimtable` | `[x]` |
| **ANM-28** | `Entity_Draw` | `0x8003CCA4` | `entity/draw/Entity_Draw.c` | Main entity draw dispatcher: switches on entity[0xD] for draw mode | `animation::system::entity_draw` | `[x]` |
| **ANM-29** | `Entity_Draw3DSprite` | `0x8003C2D4` | `entity/draw/Entity_Draw3DSprite.c` | Draws 3D sprite with GTE transform: MVMVA + OT submission | `animation::system::entity_draw3dsprite` | `[x]` |
| **ANM-30** | `Entity_Draw3DSpriteDirect` | `0x8003C788` | `entity/draw/Entity_Draw3DSpriteDirect.c` | Draws 3D sprite directly without GTE: uses screen coordinates | `animation::system::entity_draw3dspritedirect` | `[x]` |
| **ANM-31** | `Entity_Draw3DSpriteRotated` | `0x8003C5F8` | `entity/draw/Entity_Draw3DSpriteRotated.c` | Draws rotated 3D sprite with GTE rotation matrix + MVMVA | `animation::system::entity_draw3dspriterotated` | `[x]` |
| **ANM-32** | `Entity_Draw3DSpriteScaled` | `0x8003C464` | `entity/draw/Entity_Draw3DSpriteScaled.c` | Draws scaled 3D sprite with GTE scale matrix + MVMVA | `animation::system::entity_draw3dspritescaled` | `[x]` |
| **ANM-33** | `Entity_DrawBehavior` | `0x8002EF58` | `entity/draw/Entity_DrawBehavior.c` | Entity draw behavior: entity[4]=1, selects draw method | `animation::system::entity_drawbehavior` | `[x]` |
| **ANM-34** | `Entity_DrawCheck` | `0x80051128` | `entity/draw/Entity_DrawCheck.c` | Entity draw checker: iterates entity[9] flags, dispatches draw | `animation::system::entity_drawcheck` | `[x]` |
| **ANM-35** | `Entity_DrawCheck2` | `0x80051464` | `entity/draw/Entity_DrawCheck2.c` | Entity draw check variant 2: similar iteration, different flag | `animation::system::entity_drawcheck2` | `[x]` |
| **ANM-36** | `Entity_DrawChild` | `0x80068610` | `entity/draw/Entity_DrawChild.c` | Entity draw child: updates child entity pos from parent with offset | `animation::system::entity_drawchild` | `[x]` |
| **ANM-37** | `Entity_DrawChild1` | `0x8003393C` | `entity/draw/Entity_DrawChild1.c` | Subrutina de Entity_DrawChild1 (entity/draw/Entity_DrawChild1.c) | `animation::system::entity_drawchild1` | `[x]` |
| **ANM-38** | `Entity_DrawChild2_2` | `0x800376EC` | `entity/draw/Entity_DrawChild2_2.c` | Entity child drawer variant 2: builds quad from child data at offset | `animation::system::entity_drawchild2_2` | `[x]` |
| **ANM-39** | `Entity_DrawChild3_2` | `0x80022190` | `entity/draw/Entity_DrawChild3_2.c` | Entity child drawer variant 3: reads sprite from param2[0x6C] | `animation::system::entity_drawchild3_2` | `[x]` |
| **ANM-40** | `Entity_DrawChild4` | `0x80022330` | `entity/draw/Entity_DrawChild4.c` | Entity child drawer variant 4: reads sprite from param2[0x6C] | `animation::system::entity_drawchild4` | `[x]` |
| **ANM-41** | `Entity_DrawChild5` | `0x80033B94` | `entity/draw/Entity_DrawChild5.c` | Entity child drawer variant 5: draws with GTE projection | `animation::system::entity_drawchild5` | `[x]` |
| **ANM-42** | `Entity_DrawChild6` | `0x80033FF4` | `entity/draw/Entity_DrawChild6.c` | Entity child drawer variant 6: processes child draw | `animation::system::entity_drawchild6` | `[x]` |
| **ANM-43** | `Entity_DrawChildren` | `0x8003CDD8` | `entity/draw/Entity_DrawChildren.c` | Draws child entities by iterating linked list from entity[0xC0] | `animation::system::entity_drawchildren` | `[x]` |
| **ANM-44** | `Entity_DrawFull` | `0x8003791C` | `entity/draw/Entity_DrawFull.c` | Entity full drawer: processes sprite + GTE projection | `animation::system::entity_drawfull` | `[x]` |
| **ANM-45** | `Entity_DrawLifecycle` | `0x800330AC` | `entity/draw/Entity_DrawLifecycle.c` | Entity draw lifecycle: entity[4]=1 state, processes sprite, dealloc at state 4 | `animation::system::entity_drawlifecycle` | `[x]` |
| **ANM-46** | `Entity_DrawLifecycle2` | `0x80033630` | `entity/draw/Entity_DrawLifecycle2.c` | Entity draw lifecycle variant 2: different sprite processing path | `animation::system::entity_drawlifecycle2` | `[x]` |
| **ANM-47** | `Entity_DrawLifecycle3` | `0x80033560` | `entity/draw/Entity_DrawLifecycle3.c` | Entity draw lifecycle variant 3: entity[4]=1, different sprite path | `animation::system::entity_drawlifecycle3` | `[x]` |
| **ANM-48** | `Entity_DrawLifecycle4` | `0x80033380` | `entity/draw/Entity_DrawLifecycle4.c` | Entity draw lifecycle variant 4: entity[4]=1, different draw path | `animation::system::entity_drawlifecycle4` | `[x]` |
| **ANM-49** | `Entity_DrawLifecycle5` | `0x80032918` | `entity/draw/Entity_DrawLifecycle5.c` | Entity draw lifecycle variant 5: processes sprite, dealloc at state 4 | `animation::system::entity_drawlifecycle5` | `[x]` |
| **ANM-50** | `Entity_DrawLifecycle6` | `0x80032F98` | `entity/draw/Entity_DrawLifecycle6.c` | Entity draw lifecycle variant 6: entity[4]=1, processes draw | `animation::system::entity_drawlifecycle6` | `[x]` |
| **ANM-51** | `Entity_DrawLifecycle7` | `0x80033450` | `entity/draw/Entity_DrawLifecycle7.c` | Entity draw lifecycle variant 7: entity[4]=1, different draw path | `animation::system::entity_drawlifecycle7` | `[x]` |
| **ANM-52** | `Entity_DrawLifecycle8` | `0x80033278` | `entity/draw/Entity_DrawLifecycle8.c` | Entity draw lifecycle variant 8: entity[4]=1, render path | `animation::system::entity_drawlifecycle8` | `[x]` |
| **ANM-53** | `Entity_DrawMain` | `0x800251F0` | `entity/draw/Entity_DrawMain.c` | Entity draw main: full entity rendering pipeline | `animation::system::entity_drawmain` | `[x]` |
| **ANM-54** | `Entity_DrawMain2` | `0x8002C920` | `entity/draw/Entity_DrawMain2.c` | Entity draw main variant 2: different render path | `animation::system::entity_drawmain2` | `[x]` |
| **ANM-55** | `Entity_DrawMain3` | `0x80037E44` | `entity/draw/Entity_DrawMain3.c` | Entity draw main variant 3: extended draw pipeline | `animation::system::entity_drawmain3` | `[x]` |
| **ANM-56** | `Entity_DrawMain4` | `0x8002D65C` | `entity/draw/Entity_DrawMain4.c` | Entity draw main variant 4: final projection path | `animation::system::entity_drawmain4` | `[x]` |
| **ANM-57** | `Entity_DrawMain5` | `0x80030264` | `entity/draw/Entity_DrawMain5.c` | Entity draw main variant 5: full draw pipeline (202L) | `animation::system::entity_drawmain5` | `[x]` |
| **ANM-58** | `Entity_DrawMain6` | `0x8002E680` | `entity/draw/Entity_DrawMain6.c` | Entity draw main variant 6: GTE projection path (236L) | `animation::system::entity_drawmain6` | `[x]` |
| **ANM-59** | `Entity_DrawMain7` | `0x800527C8` | `entity/draw/Entity_DrawMain7.c` | Entity draw main variant 7: rendering pipeline (254L) | `animation::system::entity_drawmain7` | `[x]` |
| **ANM-60** | `Entity_DrawMain8` | `0x8002CD18` | `entity/draw/Entity_DrawMain8.c` | Entity draw main variant 8: final draw path (273L) | `animation::system::entity_drawmain8` | `[x]` |
| **ANM-61** | `Entity_DrawPrim` | `0x80037894` | `entity/draw/Entity_DrawPrim.c` | Entity draw primitive: builds quad prim from entity data, submits | `animation::system::entity_drawprim` | `[x]` |
| **ANM-62** | `Entity_DrawQuad` | `0x800336DC` | `entity/draw/Entity_DrawQuad.c` | Entity quad drawer: builds textured quad from entity data | `animation::system::entity_drawquad` | `[x]` |
| **ANM-63** | `Entity_DrawQuad_Variant0` | `0x8003F344` | `entity/draw/Entity_DrawQuad_Variant0.c` | Subrutina de Entity_DrawQuad_Variant0 (entity/draw/Entity_DrawQuad_Variant0.c) | `animation::system::entity_drawquad_variant0` | `[x]` |
| **ANM-64** | `Entity_DrawQuad_Variant1` | `0x8003F3F4` | `entity/draw/Entity_DrawQuad_Variant1.c` | Subrutina de Entity_DrawQuad_Variant1 (entity/draw/Entity_DrawQuad_Variant1.c) | `animation::system::entity_drawquad_variant1` | `[x]` |
| **ANM-65** | `Entity_DrawQuad_Variant2` | `0x8003F4C4` | `entity/draw/Entity_DrawQuad_Variant2.c` | Subrutina de Entity_DrawQuad_Variant2 (entity/draw/Entity_DrawQuad_Variant2.c) | `animation::system::entity_drawquad_variant2` | `[x]` |
| **ANM-66** | `Entity_DrawQuad_Variant3` | `0x8003F594` | `entity/draw/Entity_DrawQuad_Variant3.c` | Subrutina de Entity_DrawQuad_Variant3 (entity/draw/Entity_DrawQuad_Variant3.c) | `animation::system::entity_drawquad_variant3` | `[x]` |
| **ANM-67** | `Entity_DrawSprite` | `0x8002E1E8` | `entity/draw/Entity_DrawSprite.c` | Entity sprite drawer: renders sprite with GTE projection | `animation::system::entity_drawsprite` | `[x]` |
| **ANM-68** | `Entity_DrawSprite2` | `0x8002ECD8` | `entity/draw/Entity_DrawSprite2.c` | Entity sprite drawer variant 2: different projection | `animation::system::entity_drawsprite2` | `[x]` |
| **ANM-69** | `Entity_DrawSprite3` | `0x8002C138` | `entity/draw/Entity_DrawSprite3.c` | Entity sprite drawer variant 3: different matrix source | `animation::system::entity_drawsprite3` | `[x]` |
| **ANM-70** | `Entity_DrawSprite4` | `0x8002A834` | `entity/draw/Entity_DrawSprite4.c` | Entity sprite drawer variant 4: different matrix config | `animation::system::entity_drawsprite4` | `[x]` |
| **ANM-71** | `Entity_DrawSprite5` | `0x80030D68` | `entity/draw/Entity_DrawSprite5.c` | Entity sprite drawer variant 5: projection + draw | `animation::system::entity_drawsprite5` | `[x]` |
| **ANM-72** | `Entity_DrawSprite6` | `0x8002B3A4` | `entity/draw/Entity_DrawSprite6.c` | Entity sprite drawer variant 6: full projection pipeline | `animation::system::entity_drawsprite6` | `[x]` |
| **ANM-73** | `Entity_DrawSpriteAndProject` | `0x80033080` | `entity/draw/Entity_DrawSpriteAndProject.c` | Calls ProcessProjCmd then ProcessSpriteCmd for combined projection+sprite draw | `animation::system::entity_drawspriteandproject` | `[x]` |
| **ANM-74** | `Entity_DrawSpriteDispatch` | `0x80024D34` | `entity/draw/Entity_DrawSpriteDispatch.c` | Entity sprite draw dispatch: reads sprite type, calls draw handler | `animation::system::entity_drawspritedispatch` | `[x]` |
| **ANM-75** | `Entity_DrawSpriteNoColor` | `0x800328EC` | `entity/draw/Entity_DrawSpriteNoColor.c` | Draws sprite without color modulation: sets GTE color to 0, calls submit | `animation::system::entity_drawspritenocolor` | `[x]` |
| **ANM-76** | `Entity_DrawSpriteRotated` | `0x80028B70` | `entity/draw/Entity_DrawSpriteRotated.c` | Renders a rotated sprite using GTE matrix multiply from entity[0x48] transform | `animation::system::entity_drawspriterotated` | `[x]` |
| **ANM-77** | `Entity_DrawSpriteSwitch` | `0x8007D0D0` | `entity/draw/Entity_DrawSpriteSwitch.c` | Entity sprite draw switch: switch on entity[3] type, sets entity[0x40]=1 | `animation::system::entity_drawspriteswitch` | `[x]` |
| **ANM-78** | `Entity_DrawTrailChain` | `0x80029664` | `entity/draw/Entity_DrawTrailChain.c` | Subrutina de Entity_DrawTrailChain (entity/draw/Entity_DrawTrailChain.c) | `animation::system::entity_drawtrailchain` | `[x]` |
| **ANM-79** | `Entity_DrawType` | `0x8002F230` | `entity/draw/Entity_DrawType.c` | Entity draw type selector: entity[4]=1 state, picks draw path | `animation::system::entity_drawtype` | `[x]` |
| **ANM-80** | `Entity_DrawUI` | `0x800737F8` | `entity/draw/Entity_DrawUI.c` | Entity UI draw: renders UI primitive array at entity pos via FUN_80033afc | `animation::system::entity_drawui` | `[x]` |
| **ANM-81** | `Entity_DrawUI2` | `0x80037B6C` | `entity/draw/Entity_DrawUI2.c` | Entity UI drawer variant 2: renders UI sprites | `animation::system::entity_drawui2` | `[x]` |

---

## 🗂️ SECTOR 7: 2.5D Rail Camera Pipeline

> Cámara tridimensional en rieles, filtros continuos por eje, zona muerta vertical, pisos de área, rotación angular y matriz de vista 1:1.

| ID | Función / Símbolo | Dirección PS1 | Archivo C | Comportamiento Técnico Original | Mapeo Bevy (Rust) | Estado |
| :--- | :--- | :---: | :--- | :--- | :--- | :---: |
| **CAM-01** | `Camera_Border` | `0x8006C80C` | `camera/Camera_Border.c` | Camera border check: switch on DAT_800bf870, clamps camera Y | `camera::rail_camera::RailCameraPipeline::camera_border` | `[x]` |
| **CAM-02** | `Camera_CalcDelta` | `0x8006DAD8` | `camera/Camera_CalcDelta.c` | Camera delta calculation: GTE cos/sin, smooths distance, updates scratchpad | `camera::rail_camera::RailCameraPipeline::camera_calcdelta` | `[x]` |
| **CAM-03** | `Camera_CalcOrbitPos` | `0x8006E918` | `camera/Camera_CalcOrbitPos.c` | Camera orbit position: GTE cos/sin on angle, incorporates entity[0x56] flip direction | `camera::rail_camera::RailCameraPipeline::camera_calcorbitpos` | `[x]` |
| **CAM-04** | `Camera_CheckEntity` | `0x8006E1E4` | `camera/Camera_CheckEntity.c` | Camera entity check: tests DAT_800e7e82 flag, updates target entity pointer | `camera::rail_camera::RailCameraPipeline::camera_checkentity` | `[x]` |
| **CAM-05** | `Camera_Commit` | `0x8006D02C` | `camera/Camera_Commit.c` | Camera committer: applies computed position to view matrix | `camera::rail_camera::RailCameraPipeline::camera_commit` | `[x]` |
| **CAM-06** | `Camera_Config` | `0x8006E010` | `camera/Camera_Config.c` | Camera configurator: switch on DAT_800e7fe4/8, sets mode params | `camera::rail_camera::RailCameraPipeline::camera_config` | `[x]` |
| **CAM-07** | `Camera_Init` | `0x8006EA7C` | `camera/Camera_Init.c` | Camera initializer: sets entity[0x56]=0x100, zeroes flags | `camera::rail_camera::RailCameraPipeline::camera_init` | `[x]` |
| **CAM-08** | `Camera_Lerp` | `0x8006CEC4` | `camera/Camera_Lerp.c` | Camera lerp: interpolates between two camera positions | `camera::rail_camera::RailCameraPipeline::camera_lerp` | `[x]` |
| **CAM-09** | `Camera_Main` | `0x8006E464` | `camera/Camera_Main.c` | Camera main: full camera management system | `camera::rail_camera::RailCameraPipeline::camera_main` | `[x]` |
| **CAM-10** | `Camera_Mode1` | `0x8006E294` | `camera/Camera_Mode1.c` | Camera mode 1: init + conditionally calls FUN_8006dc38/FUN_8006df88 + commit | `camera::rail_camera::RailCameraPipeline::camera_mode1` | `[x]` |
| **CAM-11** | `Camera_Mode2` | `0x8006E2FC` | `camera/Camera_Mode2.c` | Camera mode 2: init + conditionally calls FUN_8006dad8/FUN_8006def0 + commit | `camera::rail_camera::RailCameraPipeline::camera_mode2` | `[x]` |
| **CAM-12** | `Camera_Mode3` | `0x8006EA00` | `camera/Camera_Mode3.c` | Camera mode 3 (no param): sets pos from DAT_800e7eae/b2/b6, cos calc + commit | `camera::rail_camera::RailCameraPipeline::camera_mode3` | `[x]` |
| **CAM-13** | `Camera_Mode4` | `0x8006E228` | `camera/Camera_Mode4.c` | Camera mode 4: init, smooth Y, conditionally updates delta, commit | `camera::rail_camera::RailCameraPipeline::camera_mode4` | `[x]` |
| **CAM-14** | `Camera_Mode5` | `0x8006E3F4` | `camera/Camera_Mode5.c` | Camera mode 5: inits, conditionally sets entity[0x66] bit 1, commits | `camera::rail_camera::RailCameraPipeline::camera_mode5` | `[x]` |
| **CAM-15** | `Camera_Mode6` | `0x8006E0F0` | `camera/Camera_Mode6.c` | Camera mode 6: full sequence init + pos + calc + smoothY + commit | `camera::rail_camera::RailCameraPipeline::camera_mode6` | `[x]` |
| **CAM-16** | `Camera_ModeMain` | `0x8006D654` | `camera/Camera_ModeMain.c` | Camera mode main: switch on DAT_800e7fe4, sets params | `camera::rail_camera::RailCameraPipeline::camera_modemain` | `[x]` |
| **CAM-17** | `Camera_ModeSwitch` | `0x8006C988` | `camera/Camera_ModeSwitch.c` | Camera mode switcher: switch on entity[0x76], sets params | `camera::rail_camera::RailCameraPipeline::camera_modeswitch` | `[x]` |
| **CAM-18** | `Camera_SetFOV` | `0x8006D934` | `camera/Camera_SetFOV.c` | Sets camera field of view from param array | `camera::rail_camera::RailCameraPipeline::camera_setfov` | `[x]` |
| **CAM-19** | `Camera_SetHeight` | `0x8006DF88` | `camera/Camera_SetHeight.c` | Sets camera height: param2=0 uses entity[0x26], else cos(entity[0x6E])*radius | `camera::rail_camera::RailCameraPipeline::camera_setheight` | `[x]` |
| **CAM-20** | `Camera_SetModeSeq` | `0x8006E3B0` | `camera/Camera_SetModeSeq.c` | Camera mode sequence: calls init, set params, and commit in order | `camera::rail_camera::RailCameraPipeline::camera_setmodeseq` | `[x]` |
| **CAM-21** | `Camera_SetPosition` | `0x8006CBA8` | `camera/Camera_SetPosition.c` | Sets camera world position from entity coordinates (x, y, z) | `camera::rail_camera::RailCameraPipeline::camera_setposition` | `[x]` |
| **CAM-22** | `Camera_SetRoll` | `0x8006D950` | `camera/Camera_SetRoll.c` | Sets camera roll angle from 4-byte data | `camera::rail_camera::RailCameraPipeline::camera_setroll` | `[x]` |
| **CAM-23** | `Camera_SetTarget` | `0x8006CBD0` | `camera/Camera_SetTarget.c` | Sets camera look-at target and rotation vectors from 6-short array | `camera::rail_camera::RailCameraPipeline::camera_settarget` | `[x]` |
| **CAM-24** | `Camera_Smooth` | `0x8006CC1C` | `camera/Camera_Smooth.c` | Camera smoother: interpolates position with 0x80 step | `camera::rail_camera::RailCameraPipeline::camera_smooth` | `[x]` |
| **CAM-25** | `Camera_SmoothMove` | `0x8006DEF0` | `camera/Camera_SmoothMove.c` | Camera smoothing: lerps _DAT_1f8000d4 toward target, sets entity[0x66] bit 2 | `camera::rail_camera::RailCameraPipeline::camera_smoothmove` | `[x]` |
| **CAM-26** | `Camera_SmoothX` | `0x8006D960` | `camera/Camera_SmoothX.c` | Camera X smoothing: same pattern as SmoothY, lerps X toward target | `camera::rail_camera::RailCameraPipeline::camera_smoothx` | `[x]` |
| **CAM-27** | `Camera_SmoothY` | `0x8006DA54` | `camera/Camera_SmoothY.c` | Camera Y smoothing: snaps if within 10 units, else lerps toward target with 0x1600 step | `camera::rail_camera::RailCameraPipeline::camera_smoothy` | `[x]` |
| **CAM-28** | `Camera_Update` | `0x8006DCF4` | `camera/Camera_Update.c` | Camera updater: checks entity[0x74] flags, updates position | `camera::rail_camera::RailCameraPipeline::camera_update` | `[x]` |
| **CAM-29** | `Camera_UpdateFull` | `0x8006E360` | `camera/Camera_UpdateFull.c` | Full camera update: runs init, set position, target, FOV, and roll | `camera::rail_camera::RailCameraPipeline::camera_updatefull` | `[x]` |
| **CAM-30** | `Camera_UpdateMain` | `0x8006D2AC` | `camera/Camera_UpdateMain.c` | Camera update main: full camera update pipeline | `camera::rail_camera::RailCameraPipeline::camera_updatemain` | `[x]` |
| **CAM-31** | `Camera_UpdateOrbit` | `0x8006EF38` | `camera/Camera_UpdateOrbit.c` | Updates camera orbit: GTE cos/sin on DAT_800e8078 angle, radius 500, advances angle 8 | `camera::rail_camera::RailCameraPipeline::camera_updateorbit` | `[x]` |
| **CAM-32** | `Camera_UpdatePosition` | `0x8006DC38` | `camera/Camera_UpdatePosition.c` | Updates camera position: GTE cos/sin on entity[0x6E]/[0x70], radius entity[0x6C] | `camera::rail_camera::RailCameraPipeline::camera_updateposition` | `[x]` |

---

## 🗂️ SECTOR 8: Items, Inventory & Equipment

> Menú de 32 casos, armas (Blackjack, Boomerang, Grapple Hook), trajes especiales (Ardilla, Pájaro, Cerdo) e inventario de 99 slots.

| ID | Función / Símbolo | Dirección PS1 | Archivo C | Comportamiento Técnico Original | Mapeo Bevy (Rust) | Estado |
| :--- | :--- | :---: | :--- | :--- | :--- | :---: |
| **ITM-01** | `Inventory_AddItem` | `0x8004D338` | `inventory/Inventory_AddItem.c` | Adds item to inventory: increments count (max 99), tracks in item tables at 0x800BFAB4 | `items::inventory::TombaInventory::inventory_additem` | `[x]` |
| **ITM-02** | `Inventory_AddItemEx` | `0x8004D4C4` | `inventory/Inventory_AddItemEx.c` | Adds item to inventory via FUN_8004d338 + FUN_8004ed0c(param, 2) | `items::inventory::TombaInventory::inventory_additemex` | `[x]` |
| **ITM-03** | `Inventory_CheckFlag` | `0x8004D868` | `inventory/Inventory_CheckFlag.c` | Checks inventory bit flag at 0x800BFD94 for item ID | `items::inventory::TombaInventory::inventory_checkflag` | `[x]` |
| **ITM-04** | `Inventory_RemoveItem` | `0x8004D604` | `inventory/Inventory_RemoveItem.c` | Removes item from inventory: decrements count, updates UI | `items::inventory::TombaInventory::inventory_removeitem` | `[x]` |
| **ITM-05** | `Inventory_RemoveItem2` | `0x8004D688` | `inventory/Inventory_RemoveItem2.c` | Removes item variant: uses mode 4 instead of mode 1 for UI update | `items::inventory::TombaInventory::inventory_removeitem2` | `[x]` |
| **ITM-06** | `Inventory_RemoveItem3` | `0x8004D650` | `inventory/Inventory_RemoveItem3.c` | Removes item from inventory: decrements count, updates UI display | `items::inventory::TombaInventory::inventory_removeitem3` | `[x]` |
| **ITM-07** | `Inventory_SetBit` | `0x8004D79C` | `inventory/Inventory_SetBit.c` | Sets bit flag in inventory bitfield at 0x800BFDAC for item ID | `items::inventory::TombaInventory::inventory_setbit` | `[x]` |
| **ITM-08** | `Inventory_SetFlag` | `0x8004D714` | `inventory/Inventory_SetFlag.c` | Sets a bit flag in inventory bitfield tables based on item ID and category | `items::inventory::TombaInventory::inventory_setflag` | `[x]` |

---

## 🗂️ SECTOR 9: Event Engine & Script Interpreter

> Vector maestro de 256 flags, progresión de las 137 misiones, intérprete de bytecode de scripts con tabla de opcodes y fundidos.

| ID | Función / Símbolo | Dirección PS1 | Archivo C | Comportamiento Técnico Original | Mapeo Bevy (Rust) | Estado |
| :--- | :--- | :---: | :--- | :--- | :--- | :---: |
| **EVT-01** | `Event_Check3` | `0x80034BE0` | `event/Event_Check3.c` | Event check variant 3: tests DAT_800bf873 + game state conditions | `events::progression::event_check3` | `[x]` |
| **EVT-02** | `Event_Check4` | `0x80035424` | `event/Event_Check4.c` | Event check variant 4: calls FUN_80035640(8) + FUN_80035640(9) | `events::progression::event_check4` | `[x]` |
| **EVT-03** | `Event_Check5` | `0x80035218` | `event/Event_Check5.c` | Event check variant 5: tests DAT_800bf881 flags + game state | `events::progression::event_check5` | `[x]` |
| **EVT-04** | `Event_Check6` | `0x800349A4` | `event/Event_Check6.c` | Event check variant 6: tests DAT_800bf89e + DAT_800bf881 flags | `events::progression::event_check6` | `[x]` |
| **EVT-05** | `Event_CheckTrigger` | `0x80035088` | `event/Event_CheckTrigger.c` | Event trigger check: tests DAT_800bf881 flags, checks input conditions | `events::progression::event_checktrigger` | `[x]` |
| **EVT-06** | `Event_CheckTrigger2` | `0x80035640` | `event/Event_CheckTrigger2.c` | Event trigger check variant 2: tests DAT_800bf881 event flags | `events::progression::event_checktrigger2` | `[x]` |
| **EVT-07** | `Event_Dispatch` | `0x80035FAC` | `event/Event_Dispatch.c` | Event dispatcher: looks up event type, calls handler | `events::progression::event_dispatch` | `[x]` |
| **EVT-08** | `Event_DispatchMain` | `0x800346BC` | `event/Event_DispatchMain.c` | Event dispatch main: DAT_80100660 state machine | `events::progression::event_dispatchmain` | `[x]` |
| **EVT-09** | `Event_DrawUI` | `0x80034338` | `event/Event_DrawUI.c` | Event UI drawer: checks DAT_800bf81a/b, draws UI elements | `events::progression::event_drawui` | `[x]` |
| **EVT-10** | `Event_Handler` | `0x80035338` | `event/Event_Handler.c` | Event handler: calls FUN_80035640, dispatches by event type 0x62 | `events::progression::event_handler` | `[x]` |
| **EVT-11** | `Event_Handler2` | `0x800364AC` | `event/Event_Handler2.c` | Event handler variant 2: switch on param_1, returns action code | `events::progression::event_handler2` | `[x]` |
| **EVT-12** | `Event_HandlerMain` | `0x80036240` | `event/Event_HandlerMain.c` | Event main handler: processes event queue, dispatches | `events::progression::event_handlermain` | `[x]` |
| **EVT-13** | `Event_LoadData` | `0x80036BAC` | `event/Event_LoadData.c` | Event data loader: loads 64+64 bytes, dispatches by type | `events::progression::event_loaddata` | `[x]` |
| **EVT-14** | `Event_Main` | `0x80036DFC` | `event/Event_Main.c` | Event main: full event system controller (377L) | `events::progression::event_main` | `[x]` |
| **EVT-15** | `Event_MainDispatch` | `0x80034CE0` | `event/Event_MainDispatch.c` | Event main dispatcher: switch on event type 0x66-0x6E | `events::progression::event_maindispatch` | `[x]` |
| **EVT-16** | `Event_TriggerCollectible` | `0x80040B48` | `event/Event_TriggerCollectible.c` | Triggers collectible/event: marks as collected, updates global counters | `events::progression::event_triggercollectible` | `[x]` |
| **EVT-17** | `Event_TriggerTypeA` | `0x80035528` | `event/Event_TriggerTypeA.c` | Triggers event type A (0x18): spawns entity with overlay func at 0x8011600C | `events::progression::event_triggertypea` | `[x]` |
| **EVT-18** | `Event_TriggerTypeB` | `0x800355B4` | `event/Event_TriggerTypeB.c` | Triggers event type B (0x1A): spawns entity with overlay func at 0x801189C4 | `events::progression::event_triggertypeb` | `[x]` |
| **EVT-19** | `Event_TypeDispatch` | `0x80036560` | `event/Event_TypeDispatch.c` | Event type dispatcher: returns action code by event type (0/1/2) | `events::progression::event_typedispatch` | `[x]` |
| **EVT-20** | `Event_WeaponCheck` | `0x8003511C` | `event/Event_WeaponCheck.c` | Event weapon check: tests weapon/item type 0x59 vs game state | `events::progression::event_weaponcheck` | `[x]` |
| **EVT-21** | `Game_AddScore` | `0x8004B3F4` | `game/Game_AddScore.c` | Adds score points: increments total + shows score popup on screen | `events::progression::game_addscore` | `[x]` |
| **EVT-22** | `Game_CheckArea` | `0x80036D90` | `game/Game_CheckArea.c` | Checks game area flag: returns 1 if area is 0 or 5 in specific game mode | `events::progression::game_checkarea` | `[x]` |
| **EVT-23** | `Game_CheckBit` | `0x8006EFF4` | `game/Game_CheckBit.c` | Checks bit at position in global bitfield at 0x800BFE48 | `events::progression::game_checkbit` | `[x]` |
| **EVT-24** | `Game_CheckBit50` | `0x80078894` | `game/Game_CheckBit50.c` | Checks bit in global flag at 0x800BFE50 at given position | `events::progression::game_checkbit50` | `[x]` |
| **EVT-25** | `Game_CheckFlagInput` | `0x80055824` | `game/Game_CheckFlagInput.c` | Checks global input flag at 0x800E7E68 AND with input state | `events::progression::game_checkflaginput` | `[x]` |
| **EVT-26** | `Game_CheckFlagSys` | `0x80055844` | `game/Game_CheckFlagSys.c` | Checks system flag at 0x800ECF54 AND with input state | `events::progression::game_checkflagsys` | `[x]` |
| **EVT-27** | `Game_CheckIdle` | `0x80042728` | `game/Game_CheckIdle.c` | Checks if game is idle: no dialogs active (0x800ED06D) and no event flag (0x800BF849) | `events::progression::game_checkidle` | `[x]` |
| **EVT-28** | `Game_CheckUnlock` | `0x80036DC4` | `game/Game_CheckUnlock.c` | Checks if area is unlocked via table at 0x800A24E4 | `events::progression::game_checkunlock` | `[x]` |
| **EVT-29** | `Game_ClearPause` | `0x800269FC` | `game/Game_ClearPause.c` | Clears pause state: resets entity flag and global pause variable | `events::progression::game_clearpause` | `[x]` |
| **EVT-30** | `Game_DispatchOverlayCall` | `0x80065374` | `game/Game_DispatchOverlayCall.c` | Dispatches overlay call by game state: 0, 5, 6 each call different overlay functions | `events::progression::game_dispatchoverlaycall` | `[x]` |
| **EVT-31** | `Game_InitEntitySystem` | `0x8007B328` | `game/Game_InitEntitySystem.c` | Initializes entity globals at 0x800FB160: sets default values (1,0,7,0,9,0,0) | `events::progression::game_initentitysystem` | `[x]` |
| **EVT-32** | `Game_InitGlobals` | `0x800796DC` | `game/Game_InitGlobals.c` | Game globals init: clears 0x68 bytes at 0x800BF808, sets defaults | `events::progression::game_initglobals` | `[x]` |
| **EVT-33** | `Game_InitLevel` | `0x800783DC` | `game/Game_InitLevel.c` | Game level init: sets up collision grid, inits entity pools | `events::progression::game_initlevel` | `[x]` |
| **EVT-34** | `Game_InitSaveData` | `0x8005082C` | `game/Game_InitSaveData.c` | Game save data init: copies globals 0x800EA0D5-7 to 0x800BF8A4-6 | `events::progression::game_initsavedata` | `[x]` |
| **EVT-35** | `Game_LoadData` | `0x800384EC` | `game/Game_LoadData.c` | Game data loader: reads from 0x800A33D4, fills globals | `events::progression::game_loaddata` | `[x]` |
| **EVT-36** | `Game_ReadInput` | `0x80055864` | `game/Game_ReadInput.c` | Reads combined input state: checks 0x800E7E68 against 0x1F800172/0x1F800174 | `events::progression::game_readinput` | `[x]` |
| **EVT-37** | `Game_ReturnToTitle` | `0x80042310` | `game/Game_ReturnToTitle.c` | Returns to title screen: plays SFX 0x7F, resets state, calls level cleanup | `events::progression::game_returntotitle` | `[x]` |
| **EVT-38** | `Game_SetEventFlag` | `0x8006F00C` | `game/Game_SetEventFlag.c` | Sets event bit flag: _DAT_800bfe48 \|= 1 << (param_1 & 0x1F) | `events::progression::game_seteventflag` | `[x]` |
| **EVT-39** | `Game_SetEventFlag2` | `0x800782F0` | `game/Game_SetEventFlag2.c` | Game event flag setter 2: sets bit at _DAT_800bfe50 via table lookup | `events::progression::game_seteventflag2` | `[x]` |
| **EVT-40** | `Game_SetFlag2` | `0x8006F02C` | `game/Game_SetFlag2.c` | Sets bit flag 2: _DAT_800bfe34 \|= 1 << (param_1 & 0x1F) | `events::progression::game_setflag2` | `[x]` |
| **EVT-41** | `Game_SetFlag842` | `0x80077D64` | `game/Game_SetFlag842.c` | Sets game flag bit 7 (0x80) on global at 0x800BF842 | `events::progression::game_setflag842` | `[x]` |
| **EVT-42** | `Game_SetFlag84C` | `0x80043B88` | `game/Game_SetFlag84C.c` | Sets global flag at 0x800BF84C to boolean value from param | `events::progression::game_setflag84c` | `[x]` |
| **EVT-43** | `Game_SetGlobal` | `0x8009A480` | `game/Game_SetGlobal.c` | Sets global DAT_80105ee8 = param_1 (simple setter) | `events::progression::game_setglobal` | `[x]` |
| **EVT-44** | `Game_SetPause` | `0x800269BC` | `game/Game_SetPause.c` | Sets game pause flag (0x800BF80F = 2), blocks input if already paused | `events::progression::game_setpause` | `[x]` |
| **EVT-45** | `Game_SetUnpause` | `0x800269EC` | `game/Game_SetUnpause.c` | Sets unpause request flag (0x800BF80F = 1) | `events::progression::game_setunpause` | `[x]` |
| **EVT-46** | `Game_StateLoad` | `0x80036A14` | `game/Game_StateLoad.c` | Game state loader: reads save state from DAT_800bf870, dispatches | `events::progression::game_stateload` | `[x]` |
| **EVT-47** | `Game_SwapGlobal` | `0x8009D044` | `game/Game_SwapGlobal.c` | Global swapper: saves old DAT_8010621c, sets new, returns old | `events::progression::game_swapglobal` | `[x]` |
| **EVT-48** | `Overlay_LoadFile` | `0x800499E8` | `overlay/Overlay_LoadFile.c` | Overlay file load: reads BIN path, calls FUN_8008b8f0 to load | `events::progression::overlay_loadfile` | `[x]` |
| **EVT-49** | `Overlay_LookupString` | `0x800263E8` | `overlay/Overlay_LookupString.c` | Overlay string lookup: reads string ptr from table at 0x8009D414 by game state | `events::progression::overlay_lookupstring` | `[x]` |

---

## 🗂️ SECTOR 10: UI, Dialog System & HUD

> Paneles 9-slice retro, flujo tipográfico carácter a carácter, métricas de fuente variable, HUD de vitalidad/AP y opciones.

| ID | Función / Símbolo | Dirección PS1 | Archivo C | Comportamiento Técnico Original | Mapeo Bevy (Rust) | Estado |
| :--- | :--- | :---: | :--- | :--- | :--- | :---: |
| **UI-01** | `Menu_ActionMode0` | `0x8004D6D4` | `ui/Menu_ActionMode0.c` | Menu action with mode 0: calls 0x8004ED0C with mode 0 | `ui::hud_and_dialog::menu_actionmode0` | `[x]` |
| **UI-02** | `Menu_ActionMode3` | `0x8004D6F4` | `ui/Menu_ActionMode3.c` | Menu action with mode 3: calls 0x8004ED0C with mode 3 | `ui::hud_and_dialog::menu_actionmode3` | `[x]` |
| **UI-03** | `Menu_AnimIcon` | `0x8003A3E8` | `ui/Menu_AnimIcon.c` | Animates menu icon with sine wave oscillation using GTE trig functions | `ui::hud_and_dialog::menu_animicon` | `[x]` |
| **UI-04** | `Menu_ClearItems` | `0x80036AE8` | `ui/Menu_ClearItems.c` | Clears all 3 menu item slots by calling FUN_80036a14 with modes 0,1,2 | `ui::hud_and_dialog::menu_clearitems` | `[x]` |
| **UI-05** | `Menu_ClearSlot` | `0x80094B10` | `ui/Menu_ClearSlot.c` | Clears a menu slot: zeros 0x38-byte entry at DAT_801054e5 by index | `ui::hud_and_dialog::menu_clearslot` | `[x]` |
| **UI-06** | `Menu_CursorDraw` | `0x8003A290` | `ui/Menu_CursorDraw.c` | Menu cursor drawer: draws cursor sprite at entity[0x1F] position | `ui::hud_and_dialog::menu_cursordraw` | `[x]` |
| **UI-07** | `Menu_CursorMove` | `0x8003A470` | `ui/Menu_CursorMove.c` | Menu cursor mover: entity[0x1F] state, updates position | `ui::hud_and_dialog::menu_cursormove` | `[x]` |
| **UI-08** | `Menu_CursorNext` | `0x800386C0` | `ui/Menu_CursorNext.c` | Advances menu cursor to next item, wraps at max from entity[0x21] | `ui::hud_and_dialog::menu_cursornext` | `[x]` |
| **UI-09** | `Menu_CursorNext6` | `0x80038708` | `ui/Menu_CursorNext6.c` | Advances menu cursor up to 6 positions, returns true if wrapped | `ui::hud_and_dialog::menu_cursornext6` | `[x]` |
| **UI-10** | `Menu_CursorPrev` | `0x80038758` | `ui/Menu_CursorPrev.c` | Moves menu cursor to previous item, wraps at 0 | `ui::hud_and_dialog::menu_cursorprev` | `[x]` |
| **UI-11** | `Menu_CursorPrev6` | `0x80038794` | `ui/Menu_CursorPrev6.c` | Moves menu cursor back up to 6 positions, returns true if wrapped | `ui::hud_and_dialog::menu_cursorprev6` | `[x]` |
| **UI-12** | `Menu_Dialog` | `0x8003ABE4` | `ui/Menu_Dialog.c` | Menu dialog handler: entity[5] state 0->1->2, manages text | `ui::hud_and_dialog::menu_dialog` | `[x]` |
| **UI-13** | `Menu_DrawConfig` | `0x8007F104` | `ui/Menu_DrawConfig.c` | Menu config draw: renders strings + sprites for configuration menu | `ui::hud_and_dialog::menu_drawconfig` | `[x]` |
| **UI-14** | `Menu_DrawNumber` | `0x8007ED5C` | `ui/Menu_DrawNumber.c` | Menu number drawer: converts value to digits, renders sprites | `ui::hud_and_dialog::menu_drawnumber` | `[x]` |
| **UI-15** | `Menu_DrawNumber2` | `0x8007EF60` | `ui/Menu_DrawNumber2.c` | Menu number drawer variant 2: different digit rendering path | `ui::hud_and_dialog::menu_drawnumber2` | `[x]` |
| **UI-16** | `Menu_DrawOptions` | `0x8007F078` | `ui/Menu_DrawOptions.c` | Menu options draw: renders text strings via FUN_80078988 + sprites via FUN_80079324 | `ui::hud_and_dialog::menu_drawoptions` | `[x]` |
| **UI-17** | `Menu_DrawPage` | `0x8007F498` | `ui/Menu_DrawPage.c` | Menu page drawer: renders full page with GTE projection | `ui::hud_and_dialog::menu_drawpage` | `[x]` |
| **UI-18** | `Menu_DrawSave` | `0x8007F8F8` | `ui/Menu_DrawSave.c` | Menu save drawer: renders save menu with GTE projection | `ui::hud_and_dialog::menu_drawsave` | `[x]` |
| **UI-19** | `Menu_DrawText` | `0x8007F73C` | `ui/Menu_DrawText.c` | Menu text drawer: renders string via sprite primitives + GTE projection | `ui::hud_and_dialog::menu_drawtext` | `[x]` |
| **UI-20** | `Menu_DrawTextPage` | `0x8007EE74` | `ui/Menu_DrawTextPage.c` | Menu text page draw: renders menu text with sprite primitives | `ui::hud_and_dialog::menu_drawtextpage` | `[x]` |
| **UI-21** | `Menu_InputHandle` | `0x800387E0` | `ui/Menu_InputHandle.c` | Menu input handler: processes pad input for menus | `ui::hud_and_dialog::menu_inputhandle` | `[x]` |
| **UI-22** | `Menu_ItemDispatch` | `0x8004A3D4` | `ui/Menu_ItemDispatch.c` | Item/weapon menu action dispatcher: 32 cases for item selection, texture loading | `ui::hud_and_dialog::menu_itemdispatch` | `[x]` |
| **UI-23** | `Menu_Main` | `0x80039110` | `ui/Menu_Main.c` | Menu main: full menu system controller | `ui::hud_and_dialog::menu_main` | `[x]` |
| **UI-24** | `Menu_SaveDraw` | `0x8003AD48` | `ui/Menu_SaveDraw.c` | Menu save drawer: entity[4]=1, draws save UI | `ui::hud_and_dialog::menu_savedraw` | `[x]` |
| **UI-25** | `Menu_SaveExec` | `0x8003A790` | `ui/Menu_SaveExec.c` | Menu save executor: entity[5]=1, writes/reads save data | `ui::hud_and_dialog::menu_saveexec` | `[x]` |
| **UI-26** | `Menu_SaveLoad` | `0x8003A9A0` | `ui/Menu_SaveLoad.c` | Menu save/load handler: entity[5] state, manages save data | `ui::hud_and_dialog::menu_saveload` | `[x]` |
| **UI-27** | `Menu_SlotDraw` | `0x8003A5E4` | `ui/Menu_SlotDraw.c` | Menu slot drawer: switch on entity[0x1F], draws save slots | `ui::hud_and_dialog::menu_slotdraw` | `[x]` |
| **UI-28** | `Menu_TextDraw2` | `0x80078988` | `ui/Menu_TextDraw2.c` | Menu text drawer variant 2: renders with different format | `ui::hud_and_dialog::menu_textdraw2` | `[x]` |
| **UI-29** | `Menu_TextRender` | `0x8007F250` | `ui/Menu_TextRender.c` | Menu text renderer: draws text strings with GTE projection | `ui::hud_and_dialog::menu_textrender` | `[x]` |
| **UI-30** | `Menu_UpdateCursor` | `0x80039034` | `ui/Menu_UpdateCursor.c` | Menu cursor update: reads table at 0x800A27AC, updates cursor pos | `ui::hud_and_dialog::menu_updatecursor` | `[x]` |
| **UI-31** | `Menu_UpdateItemCount` | `0x8004D4F4` | `ui/Menu_UpdateItemCount.c` | Updates item count display after selection change | `ui::hud_and_dialog::menu_updateitemcount` | `[x]` |
| **UI-32** | `UI_ChangeTextureSet` | `0x8004B4E8` | `ui/UI_ChangeTextureSet.c` | Changes UI texture set: updates globals and reloads via Texture_LoadUI | `ui::hud_and_dialog::ui_changetextureset` | `[x]` |
| **UI-33** | `UI_ClearElement` | `0x8004EE50` | `ui/UI_ClearElement.c` | Clears UI element structure (0x8C bytes) with memset, sets terminator bytes | `ui::hud_and_dialog::ui_clearelement` | `[x]` |
| **UI-34** | `UI_ClearList` | `0x8004EE2C` | `ui/UI_ClearList.c` | Clears list of 12 u16 entries to 0xFFFF at given pointer | `ui::hud_and_dialog::ui_clearlist` | `[x]` |
| **UI-35** | `UI_DialogMain` | `0x8004DF94` | `ui/UI_DialogMain.c` | UI dialog main: entity[4]=1, full dialog state machine | `ui::hud_and_dialog::ui_dialogmain` | `[x]` |
| **UI-36** | `UI_DialogSpawn` | `0x8004DC84` | `ui/UI_DialogSpawn.c` | UI dialog spawner: allocs child type 5, sets dialog callback | `ui::hud_and_dialog::ui_dialogspawn` | `[x]` |
| **UI-37** | `UI_DialogText` | `0x8004F184` | `ui/UI_DialogText.c` | UI dialog text handler: parses 48-byte buffer, draws text | `ui::hud_and_dialog::ui_dialogtext` | `[x]` |
| **UI-38** | `UI_DialogUpdate` | `0x8004DE04` | `ui/UI_DialogUpdate.c` | UI dialog updater: entity[4]=1, processes dialog text | `ui::hud_and_dialog::ui_dialogupdate` | `[x]` |
| **UI-39** | `UI_DrawConfigMenu` | `0x80034548` | `ui/UI_DrawConfigMenu.c` | Draws configuration menu layout: sets up panels, sliders, text elements | `ui::hud_and_dialog::ui_drawconfigmenu` | `[x]` |
| **UI-40** | `UI_DrawElement_2` | `0x8004EDDC` | `ui/UI_DrawElement_2.c` | UI element draw: builds 6-word primitive from params, draws at position | `ui::hud_and_dialog::ui_drawelement_2` | `[x]` |
| **UI-41** | `UI_DrawItemIcon` | `0x8004ED0C` | `ui/UI_DrawItemIcon.c` | UI item icon draw: renders item icon with 0x8000 flag + color code | `ui::hud_and_dialog::ui_drawitemicon` | `[x]` |
| **UI-42** | `UI_DrawOverlay` | `0x8004FD30` | `ui/UI_DrawOverlay.c` | Screen overlay/fade renderer: draws rectangles and processes render queue items | `ui::hud_and_dialog::ui_drawoverlay` | `[x]` |
| **UI-43** | `UI_DrawPanel` | `0x8005019C` | `ui/UI_DrawPanel.c` | 9-slice panel/window renderer: draws 4 corner tiles + 5 inner tiles via TILE primitives | `ui::hud_and_dialog::ui_drawpanel` | `[x]` |
| **UI-44** | `UI_DrawPanel2` | `0x8004FA38` | `ui/UI_DrawPanel2.c` | UI panel draw variant 2: uses _DAT_800bf552 index, different layout | `ui::hud_and_dialog::ui_drawpanel2` | `[x]` |
| **UI-45** | `UI_DrawScreenOverlay` | `0x80050970` | `ui/UI_DrawScreenOverlay.c` | Draws screen overlay: calls 0x800508A8 or 0x8005082C based on flag | `ui::hud_and_dialog::ui_drawscreenoverlay` | `[x]` |
| **UI-46** | `UI_DrawText` | `0x8004EB94` | `ui/UI_DrawText.c` | Text renderer: iterates string bytes, writes character SPRT tiles to OT | `ui::hud_and_dialog::ui_drawtext` | `[x]` |
| **UI-47** | `UI_DrawTextLine` | `0x8004EFC0` | `ui/UI_DrawTextLine.c` | UI text line draw: iterates string, draws each char via FUN_8004ea4c | `ui::hud_and_dialog::ui_drawtextline` | `[x]` |
| **UI-48** | `UI_DrawTile` | `0x8004FFB4` | `ui/UI_DrawTile.c` | Draws a single UI tile primitive (0x2C/0x2E) at given rect position | `ui::hud_and_dialog::ui_drawtile` | `[x]` |
| **UI-49** | `UI_ElementUpdate` | `0x80049E54` | `ui/UI_ElementUpdate.c` | UI element updater: checks _DAT_800e7fee, updates element state | `ui::hud_and_dialog::ui_elementupdate` | `[x]` |
| **UI-50** | `UI_InitDialog` | `0x8004F378` | `ui/UI_InitDialog.c` | UI dialog init: calls FUN_80077d64, sets up dialog struct at entity+0x1B0 | `ui::hud_and_dialog::ui_initdialog` | `[x]` |
| **UI-51** | `UI_InventoryDraw` | `0x8004E808` | `ui/UI_InventoryDraw.c` | UI inventory drawer: renders inventory items with icons | `ui::hud_and_dialog::ui_inventorydraw` | `[x]` |
| **UI-52** | `UI_InventoryDraw2` | `0x8004E928` | `ui/UI_InventoryDraw2.c` | UI inventory draw variant 2: entity[4]=1 state, draws items | `ui::hud_and_dialog::ui_inventorydraw2` | `[x]` |
| **UI-53** | `UI_InventoryMenu` | `0x8004CE14` | `ui/UI_InventoryMenu.c` | UI inventory menu: entity[4]=1, manages inventory UI | `ui::hud_and_dialog::ui_inventorymenu` | `[x]` |
| **UI-54** | `UI_InventorySlot` | `0x8004D514` | `ui/UI_InventorySlot.c` | UI inventory slot handler: reads/writes slot at DAT_800bfab4/bb4 | `ui::hud_and_dialog::ui_inventoryslot` | `[x]` |
| **UI-55** | `UI_InventoryUpdate` | `0x80049F80` | `ui/UI_InventoryUpdate.c` | UI inventory updater: checks DAT_800bf87c/d state | `ui::hud_and_dialog::ui_inventoryupdate` | `[x]` |
| **UI-56** | `UI_ItemLookup` | `0x8004DBC0` | `ui/UI_ItemLookup.c` | UI item lookup: switch on item ID 0x59-0x6B, returns icon/type | `ui::hud_and_dialog::ui_itemlookup` | `[x]` |
| **UI-57** | `UI_ItemSelect` | `0x8004E29C` | `ui/UI_ItemSelect.c` | UI item selector: switch on entity[0x60] value, selects item | `ui::hud_and_dialog::ui_itemselect` | `[x]` |
| **UI-58** | `UI_ListUpdate` | `0x8004F474` | `ui/UI_ListUpdate.c` | UI list updater: processes param_1[8] entries, updates positions | `ui::hud_and_dialog::ui_listupdate` | `[x]` |
| **UI-59** | `UI_Main` | `0x8004E414` | `ui/UI_Main.c` | UI main: full user interface controller | `ui::hud_and_dialog::ui_main` | `[x]` |
| **UI-60** | `UI_MenuUpdate` | `0x8004F6D0` | `ui/UI_MenuUpdate.c` | UI menu updater: processes menu state, draws elements | `ui::hud_and_dialog::ui_menuupdate` | `[x]` |
| **UI-61** | `UI_PanelDispatch` | `0x8004FE84` | `ui/UI_PanelDispatch.c` | UI panel dispatcher: switch on DAT_800bf549 state, calls handlers | `ui::hud_and_dialog::ui_paneldispatch` | `[x]` |
| **UI-62** | `UI_PanelDraw` | `0x8004F514` | `ui/UI_PanelDraw.c` | UI panel drawer: renders 9-slice panel with text | `ui::hud_and_dialog::ui_paneldraw` | `[x]` |
| **UI-63** | `UI_PanelUpdate` | `0x8004F8DC` | `ui/UI_PanelUpdate.c` | UI panel updater: checks panel state, updates positions | `ui::hud_and_dialog::ui_panelupdate` | `[x]` |
| **UI-64** | `UI_ParseCmd` | `0x8004D0D4` | `ui/UI_ParseCmd.c` | UI command parser: parses bytecode commands from param_2 array | `ui::hud_and_dialog::ui_parsecmd` | `[x]` |
| **UI-65** | `UI_RenderChar` | `0x8004EA4C` | `ui/UI_RenderChar.c` | UI character renderer: handles 0xFB escape codes, renders glyph tiles | `ui::hud_and_dialog::ui_renderchar` | `[x]` |
| **UI-66** | `UI_SetSlotColors` | `0x800345D8` | `ui/UI_SetSlotColors.c` | Sets menu slot color configuration: active=100, inactive=2/3/0x84 | `ui::hud_and_dialog::ui_setslotcolors` | `[x]` |
| **UI-67** | `UI_SpawnChild` | `0x8004D19C` | `ui/UI_SpawnChild.c` | UI child spawner: allocs entity with callback from param_2 table | `ui::hud_and_dialog::ui_spawnchild` | `[x]` |
| **UI-68** | `UI_StringParse` | `0x80073750` | `ui/UI_StringParse.c` | UI string parser: tokenizes string by spaces, calls handler | `ui::hud_and_dialog::ui_stringparse` | `[x]` |
| **UI-69** | `UI_TextDecode` | `0x8004EAD0` | `ui/UI_TextDecode.c` | UI text decoder: parses control codes 0/1/2 from text buffer | `ui::hud_and_dialog::ui_textdecode` | `[x]` |
| **UI-70** | `UI_TextDraw` | `0x8004EE88` | `ui/UI_TextDraw.c` | UI text drawer: formats text with escape codes, draws to screen | `ui::hud_and_dialog::ui_textdraw` | `[x]` |
| **UI-71** | `UI_TextParser` | `0x8004F058` | `ui/UI_TextParser.c` | UI text parser: processes text buffer, handles control codes | `ui::hud_and_dialog::ui_textparser` | `[x]` |
| **UI-72** | `UI_UpdateElement_2` | `0x8004DD90` | `ui/UI_UpdateElement_2.c` | UI element update: calls FUN_80049e54, updates pos from entity[0x42] + offset | `ui::hud_and_dialog::ui_updateelement_2` | `[x]` |
| **UI-73** | `Dialog_CharDispatch` | `0x80035738` | `dialog/Dialog_CharDispatch.c` | Dialogue character dispatcher: handles special chars (0x3E-0x68) for text boxes | `ui::hud_and_dialog::dialog_chardispatch` | `[x]` |
| **UI-74** | `String_Compare` | `0x8009A600` | `string/String_Compare.c` | String compare: compares two null-terminated strings, returns difference | `ui::hud_and_dialog::string_compare` | `[x]` |
| **UI-75** | `String_Compare2` | `0x8009A540` | `string/String_Compare2.c` | String compare variant 2: returns 0 if equal, -1/+1 if different | `ui::hud_and_dialog::string_compare2` | `[x]` |
| **UI-76** | `String_CompareICase` | `0x8009A640` | `string/String_CompareICase.c` | String compare ignore case: compares strings case-insensitively | `ui::hud_and_dialog::string_compareicase` | `[x]` |
| **UI-77** | `String_Copy` | `0x8009A5B0` | `string/String_Copy.c` | String copy: copies null-terminated string from param_2 to param_1 | `ui::hud_and_dialog::string_copy` | `[x]` |
| **UI-78** | `String_CopyFilterNL` | `0x80036B28` | `string/String_CopyFilterNL.c` | Copies string replacing newline chars with spaces, null-terminates | `ui::hud_and_dialog::string_copyfilternl` | `[x]` |
| **UI-79** | `String_CopyUntil` | `0x8004EF54` | `string/String_CopyUntil.c` | Copies string until terminator byte 0xFA or 0xFF, appends 0xFF | `ui::hud_and_dialog::string_copyuntil` | `[x]` |
| **UI-80** | `String_FindChar` | `0x8004EF8C` | `string/String_FindChar.c` | String search: finds nth occurrence of char -6 (0xFA) in string | `ui::hud_and_dialog::string_findchar` | `[x]` |
| **UI-81** | `String_FindChar2` | `0x8009A490` | `string/String_FindChar2.c` | String char finder variant: searches for null or matching char | `ui::hud_and_dialog::string_findchar2` | `[x]` |
| **UI-82** | `String_Format` | `0x80079634` | `string/String_Format.c` | String formatter: writes formatted output to buffer at local_10 | `ui::hud_and_dialog::string_format` | `[x]` |
| **UI-83** | `String_GetChar` | `0x80078770` | `string/String_GetChar.c` | Gets character from string table at 0x800A4F88 by index and position | `ui::hud_and_dialog::string_getchar` | `[x]` |
| **UI-84** | `String_Length` | `0x80079528` | `string/String_Length.c` | String length: counts chars until null terminator | `ui::hud_and_dialog::string_length` | `[x]` |
| **UI-85** | `String_LookupDialog` | `0x80078798` | `string/String_LookupDialog.c` | Looks up dialog string from nested tables at 0x800A55B0/0x800A2B84 | `ui::hud_and_dialog::string_lookupdialog` | `[x]` |
| **UI-86** | `String_LookupName` | `0x800787F8` | `string/String_LookupName.c` | Looks up name/label string from table at 0x800A2B64 by type index | `ui::hud_and_dialog::string_lookupname` | `[x]` |
| **UI-87** | `String_ParseHex` | `0x80079554` | `string/String_ParseHex.c` | String hex parser: reads 2-char hex value from string | `ui::hud_and_dialog::string_parsehex` | `[x]` |
| **UI-88** | `String_TableLookup` | `0x800793C4` | `string/String_TableLookup.c` | String table lookup: searches string table for matching entry | `ui::hud_and_dialog::string_tablelookup` | `[x]` |

---

## 🗂️ SECTOR 11: Audio System & Sound Dispatch

> Director musical CD-XA, ducking de volumen en diálogos, sintetizador SPU, envolventes ADSR y disparo de SFX.

| ID | Función / Símbolo | Dirección PS1 | Archivo C | Comportamiento Técnico Original | Mapeo Bevy (Rust) | Estado |
| :--- | :--- | :---: | :--- | :--- | :--- | :---: |
| **AUD-001** | `Audio_ADSRCalc` | `0x80094474` | `audio/Audio_ADSRCalc.c` | Audio ADSR calculator: computes envelope from phase + step | `audio::playback::audio_adsrcalc` | `[ ]` |
| **AUD-002** | `Audio_AllocChannel` | `0x8008EAD0` | `audio/Audio_AllocChannel.c` | Audio channel alloc: calls FUN_80092a70 + FUN_80090160, stores result at [0x90] | `audio::playback::audio_allocchannel` | `[ ]` |
| **AUD-003** | `Audio_AllocChannel2` | `0x80091810` | `audio/Audio_AllocChannel2.c` | Audio channel alloc variant 2: looks up channel table, calls init | `audio::playback::audio_allocchannel2` | `[ ]` |
| **AUD-004** | `Audio_AllocVoice` | `0x80090160` | `audio/Audio_AllocVoice.c` | Audio voice allocator: finds free voice slot in channel struct | `audio::playback::audio_allocvoice` | `[ ]` |
| **AUD-005** | `Audio_AllocVoice2` | `0x800752B4` | `audio/Audio_AllocVoice2.c` | Audio voice allocator variant 2: searches table by range | `audio::playback::audio_allocvoice2` | `[ ]` |
| **AUD-006** | `Audio_CD_Cmd` | `0x80094108` | `audio/Audio_CD_Cmd.c` | Audio CD command: calls FUN_80093ebc(0x21, param1, param2, param3) | `audio::playback::audio_cd_cmd` | `[ ]` |
| **AUD-007** | `Audio_CalcPitch` | `0x80092B00` | `audio/Audio_CalcPitch.c` | Audio pitch calculator: clamps abs(param) to 0-0x3FFF, scales to pitch | `audio::playback::audio_calcpitch` | `[ ]` |
| **AUD-008** | `Audio_CalcValue` | `0x8009440C` | `audio/Audio_CalcValue.c` | Audio value calc: computes DAT_80105d04 + offset*0x10, scales result | `audio::playback::audio_calcvalue` | `[ ]` |
| **AUD-009** | `Audio_CallCallbacks` | `0x800909C0` | `audio/Audio_CallCallbacks.c` | Audio callback chain: calls DAT_800ac430 then DAT_800ac42c function ptrs | `audio::playback::audio_callcallbacks` | `[ ]` |
| **AUD-010** | `Audio_ChannelCmd` | `0x8008E860` | `audio/Audio_ChannelCmd.c` | Audio channel command: looks up struct, calls FUN_80095d10 with channel data | `audio::playback::audio_channelcmd` | `[ ]` |
| **AUD-011** | `Audio_ChannelCmd2` | `0x8008E930` | `audio/Audio_ChannelCmd2.c` | Audio channel command variant 2: same pattern, different params | `audio::playback::audio_channelcmd2` | `[ ]` |
| **AUD-012** | `Audio_ChannelConfig` | `0x80090A60` | `audio/Audio_ChannelConfig.c` | Audio channel config: sets up channel params at DAT_800ac448 | `audio::playback::audio_channelconfig` | `[ ]` |
| **AUD-013** | `Audio_ChannelDispatch` | `0x80090010` | `audio/Audio_ChannelDispatch.c` | Audio channel dispatch: looks up struct, branches on flag to FUN_80093ebc or FUN_800939a0 | `audio::playback::audio_channeldispatch` | `[ ]` |
| **AUD-014** | `Audio_ChannelEvent` | `0x80093EBC` | `audio/Audio_ChannelEvent.c` | Audio channel event handler: iterates channels, dispatches events | `audio::playback::audio_channelevent` | `[ ]` |
| **AUD-015** | `Audio_ChannelInit2` | `0x8008DC00` | `audio/Audio_ChannelInit2.c` | Audio channel init variant 2: sets voice, calls FUN_80095530 | `audio::playback::audio_channelinit2` | `[ ]` |
| **AUD-016** | `Audio_ChannelKey` | `0x80091970` | `audio/Audio_ChannelKey.c` | Audio channel key handler: looks up channel, calls voice funcs | `audio::playback::audio_channelkey` | `[ ]` |
| **AUD-017** | `Audio_ChannelParam` | `0x8008EA20` | `audio/Audio_ChannelParam.c` | Audio channel param: branches on param3 < 0x40, calls different handlers | `audio::playback::audio_channelparam` | `[ ]` |
| **AUD-018** | `Audio_ChannelPlay` | `0x8008FB60` | `audio/Audio_ChannelPlay.c` | Audio channel play: reads byte, advances ptr, calls FUN_800952cc | `audio::playback::audio_channelplay` | `[ ]` |
| **AUD-019** | `Audio_ChannelProcess` | `0x80091120` | `audio/Audio_ChannelProcess.c` | Audio channel processor: updates channel state, calls voice funcs | `audio::playback::audio_channelprocess` | `[ ]` |
| **AUD-020** | `Audio_ChannelSetParam3` | `0x8008E790` | `audio/Audio_ChannelSetParam3.c` | Audio channel param set: reads struct, calls FUN_80095d10, sets param at offset | `audio::playback::audio_channelsetparam3` | `[ ]` |
| **AUD-021** | `Audio_ChannelUpdate` | `0x8009121C` | `audio/Audio_ChannelUpdate.c` | Audio channel updater: processes channel, updates voice | `audio::playback::audio_channelupdate` | `[ ]` |
| **AUD-022** | `Audio_ChannelVoice` | `0x8008EC60` | `audio/Audio_ChannelVoice.c` | Audio channel voice handler: sets voice params from struct | `audio::playback::audio_channelvoice` | `[ ]` |
| **AUD-023** | `Audio_CheckDevice` | `0x80092E00` | `audio/Audio_CheckDevice.c` | Audio device check: if param < 0x18, calls FUN_8009a170, else returns 0 | `audio::playback::audio_checkdevice` | `[ ]` |
| **AUD-024** | `Audio_ClampParam` | `0x800943C0` | `audio/Audio_ClampParam.c` | Audio param clamp: clamps DAT_80105d09 to 0x7F, multiplies by 0x81 | `audio::playback::audio_clampparam` | `[ ]` |
| **AUD-025** | `Audio_ClampVolume` | `0x80075CEC` | `audio/Audio_ClampVolume.c` | Audio volume clamp: negative→abs, positive→clamp to 0x7FFF | `audio::playback::audio_clampvolume` | `[ ]` |
| **AUD-026** | `Audio_ClearChannel` | `0x80026510` | `audio/Audio_ClearChannel.c` | Clears audio channel: sends mute SPU command | `audio::playback::audio_clearchannel` | `[ ]` |
| **AUD-027** | `Audio_ClearFlag` | `0x800931A0` | `audio/Audio_ClearFlag.c` | Audio flag clearer: DAT_80105c90 = 0 | `audio::playback::audio_clearflag` | `[ ]` |
| **AUD-028** | `Audio_ClearSlot` | `0x80090B98` | `audio/Audio_ClearSlot.c` | Audio slot clearer: zeros word at DAT_800ac448 + index*0x10 if index < 3 | `audio::playback::audio_clearslot` | `[ ]` |
| **AUD-029** | `Audio_Cmd1` | `0x80091B18` | `audio/Audio_Cmd1.c` | Audio command 1: calls FUN_80091970(param1, param2) | `audio::playback::audio_cmd1` | `[ ]` |
| **AUD-030** | `Audio_Cmd2` | `0x80091AF0` | `audio/Audio_Cmd2.c` | Audio command 2: calls FUN_80091970(param1, 0) | `audio::playback::audio_cmd2` | `[ ]` |
| **AUD-031** | `Audio_Cmd3` | `0x80092048` | `audio/Audio_Cmd3.c` | Audio command 3: calls FUN_80095a9c with combined channel ID | `audio::playback::audio_cmd3` | `[ ]` |
| **AUD-032** | `Audio_Cmd4` | `0x800910F0` | `audio/Audio_Cmd4.c` | Audio command wrapper: calls FUN_80091120(param1, param2) | `audio::playback::audio_cmd4` | `[ ]` |
| **AUD-033** | `Audio_Cmd5` | `0x8008F120` | `audio/Audio_Cmd5.c` | Audio command 5: builds param stack, calls FUN_80092420 with 3 params | `audio::playback::audio_cmd5` | `[ ]` |
| **AUD-034** | `Audio_Cmd6` | `0x8008F090` | `audio/Audio_Cmd6.c` | Audio command 6: builds param stack, calls FUN_80092420 with 2 params | `audio::playback::audio_cmd6` | `[ ]` |
| **AUD-035** | `Audio_CmdWithParam` | `0x80092BB0` | `audio/Audio_CmdWithParam.c` | Audio command with param: sets struct + 0x10 flag, calls FUN_80098330 | `audio::playback::audio_cmdwithparam` | `[ ]` |
| **AUD-036** | `Audio_CmdWithParam2` | `0x80092A30` | `audio/Audio_CmdWithParam2.c` | Audio command with param 2: sets struct + 8 flag, calls FUN_80098330 | `audio::playback::audio_cmdwithparam2` | `[ ]` |
| **AUD-037** | `Audio_EnableChannel` | `0x80091910` | `audio/Audio_EnableChannel.c` | Audio channel enable: sets channel[0x14]=1, clears flag bit 3 | `audio::playback::audio_enablechannel` | `[ ]` |
| **AUD-038** | `Audio_GPU_Cmd0` | `0x80092BF0` | `audio/Audio_GPU_Cmd0.c` | Audio GPU command with param 0: calls FUN_80098150(0) | `audio::playback::audio_gpu_cmd0` | `[ ]` |
| **AUD-039** | `Audio_GPU_Cmd1` | `0x80092C10` | `audio/Audio_GPU_Cmd1.c` | Audio GPU command with param 1: calls FUN_80098150(1) | `audio::playback::audio_gpu_cmd1` | `[ ]` |
| **AUD-040** | `Audio_GetChannelByte` | `0x8008E0C0` | `audio/Audio_GetChannelByte.c` | Audio channel getter: returns byte at channel[param2]+0x14 from struct ptr table | `audio::playback::audio_getchannelbyte` | `[ ]` |
| **AUD-041** | `Audio_Init` | `0x800909A0` | `audio/Audio_Init.c` | Audio init wrapper: calls FUN_80090750(0) | `audio::playback::audio_init` | `[ ]` |
| **AUD-042** | `Audio_Init2` | `0x8008DFA0` | `audio/Audio_Init2.c` | Audio init variant 2: sets up channel table at 0x80104C30 | `audio::playback::audio_init2` | `[ ]` |
| **AUD-043** | `Audio_InitCD` | `0x80075240` | `audio/Audio_InitCD.c` | Audio CD init: calls Video_InitDecoder, sets volume, calls init sequence | `audio::playback::audio_initcd` | `[ ]` |
| **AUD-044** | `Audio_InitChannel` | `0x80091050` | `audio/Audio_InitChannel.c` | Audio channel init: looks up 0xB0-stride struct, zeros fields, calls init function | `audio::playback::audio_initchannel` | `[ ]` |
| **AUD-045** | `Audio_InitSPU` | `0x80074B44` | `audio/Audio_InitSPU.c` | Audio SPU init: iterates _DAT_800bed78 slots, sets ADSR/volume per slot | `audio::playback::audio_initspu` | `[ ]` |
| **AUD-046** | `Audio_InitSeq` | `0x80090750` | `audio/Audio_InitSeq.c` | Audio sequence initializer: inits SEQ engine, 0x3E6 loops | `audio::playback::audio_initseq` | `[ ]` |
| **AUD-047** | `Audio_InitSequence` | `0x8008E040` | `audio/Audio_InitSequence.c` | Audio init sequence: calls 4 init functions in order | `audio::playback::audio_initsequence` | `[ ]` |
| **AUD-048** | `Audio_InitVolume` | `0x80075A30` | `audio/Audio_InitVolume.c` | Audio volume init: sets stereo/pan values at 0x800BE1FC-0A, calls init, clears | `audio::playback::audio_initvolume` | `[ ]` |
| **AUD-049** | `Audio_KeyOn` | `0x80092310` | `audio/Audio_KeyOn.c` | Audio key on: checks slot state, calls FUN_800962b0, triggers voice | `audio::playback::audio_keyon` | `[ ]` |
| **AUD-050** | `Audio_KeyOn2` | `0x800952CC` | `audio/Audio_KeyOn2.c` | Audio key on variant 2: calls CD_CheckSlot, sets voice params, triggers | `audio::playback::audio_keyon2` | `[ ]` |
| **AUD-051** | `Audio_Lock` | `0x800929BC` | `audio/Audio_Lock.c` | Audio lock: sets _DAT_80104c24=1, returns -1 if already locked | `audio::playback::audio_lock` | `[ ]` |
| **AUD-052** | `Audio_LookupChannel` | `0x80095A9C` | `audio/Audio_LookupChannel.c` | Audio channel lookup: DAT_80105d0c = channel ID, indexes struct table | `audio::playback::audio_lookupchannel` | `[ ]` |
| **AUD-053** | `Audio_Main` | `0x800931C0` | `audio/Audio_Main.c` | Audio main: full audio processing pipeline | `audio::playback::audio_main` | `[ ]` |
| **AUD-054** | `Audio_Mute` | `0x80026470` | `audio/Audio_Mute.c` | Mutes audio output with SPU command | `audio::playback::audio_mute` | `[ ]` |
| **AUD-055** | `Audio_NoteOn` | `0x8008EDA0` | `audio/Audio_NoteOn.c` | Audio note on: sets channel[0x18]=param3, increments [0x1E], stores voice at [0x90] | `audio::playback::audio_noteon` | `[ ]` |
| **AUD-056** | `Audio_PitchBend` | `0x8009401C` | `audio/Audio_PitchBend.c` | Audio pitch bend: computes pitch delta between param5 and param6 | `audio::playback::audio_pitchbend` | `[ ]` |
| **AUD-057** | `Audio_PlaySFX_Vol` | `0x80074810` | `audio/Audio_PlaySFX_Vol.c` | Plays sound effect with volume only (wraps Audio_PlaySoundEffect) | `audio::playback::audio_playsfx_vol` | `[ ]` |
| **AUD-058** | `Audio_PlaySFX_VolPan` | `0x8007483C` | `audio/Audio_PlaySFX_VolPan.c` | Plays sound effect with volume and pan (wraps Audio_PlaySoundEffect) | `audio::playback::audio_playsfx_volpan` | `[ ]` |
| **AUD-059** | `Audio_PlaySoundEffect` | `0x80074590` | `audio/Audio_PlaySoundEffect.c` | Subrutina de Audio_PlaySoundEffect (audio/Audio_PlaySoundEffect.c) | audio::AudioPlayer (SFX Dispatch) | [x] |
| **AUD-060** | `Audio_PollChannel` | `0x80095C40` | `audio/Audio_PollChannel.c` | Audio channel poll: iterates DAT_80105cf8 channels, updates state | `audio::playback::audio_pollchannel` | `[ ]` |
| **AUD-061** | `Audio_ProgramChange` | `0x8008E390` | `audio/Audio_ProgramChange.c` | Audio program change: reads byte, increments ptr, sets [0x26], stores voice at [0x90] | `audio::playback::audio_programchange` | `[ ]` |
| **AUD-062** | `Audio_ReadDevice` | `0x80092EA0` | `audio/Audio_ReadDevice.c` | Audio device read: if param<0x18, calls FUN_8009a170 to read data | `audio::playback::audio_readdevice` | `[ ]` |
| **AUD-063** | `Audio_ReleaseChannel` | `0x80074E48` | `audio/Audio_ReleaseChannel.c` | Audio release channel: calls Audio_Cmd2 for channel at DAT_800bed80 | `audio::playback::audio_releasechannel` | `[ ]` |
| **AUD-064** | `Audio_ResetChannel_2` | `0x8008EE80` | `audio/Audio_ResetChannel_2.c` | Audio channel reset: clears GPU flags, resets struct fields 0x18/0x19/0x60/0x27 | `audio::playback::audio_resetchannel_2` | `[ ]` |
| **AUD-065** | `Audio_ResetSystem` | `0x80074EEC` | `audio/Audio_ResetSystem.c` | Resets audio system: clears flag 0x800BE22A, calls reset if channels active | `audio::playback::audio_resetsystem` | `[ ]` |
| **AUD-066** | `Audio_SFXSequence` | `0x80077D8C` | `audio/Audio_SFXSequence.c` | SFX sequencer: DAT_800bf842 state machine, plays SFX 0x29/0x2A in sequence, decrements | `audio::playback::audio_sfxsequence` | `[ ]` |
| **AUD-067** | `Audio_SPUCommand` | `0x80075E04` | `audio/Audio_SPUCommand.c` | Sends raw SPU command with voice parameters (ADSR, pitch, volume) | `audio::playback::audio_spucommand` | `[ ]` |
| **AUD-068** | `Audio_SPU_Find` | `0x8007496C` | `audio/Audio_SPU_Find.c` | Audio SPU voice finder: searches 0x800BE238 table by channel ID | `audio::playback::audio_spu_find` | `[ ]` |
| **AUD-069** | `Audio_SPU_Key` | `0x80094B50` | `audio/Audio_SPU_Key.c` | Audio SPU key on/off: sets bitmask at _DAT_80105d10 for voice allocation | `audio::playback::audio_spu_key` | `[ ]` |
| **AUD-070** | `Audio_SPU_Process` | `0x800950E0` | `audio/Audio_SPU_Process.c` | Audio SPU processor: processes 0x38-byte entry, updates | `audio::playback::audio_spu_process` | `[ ]` |
| **AUD-071** | `Audio_SPU_Update` | `0x8007566C` | `audio/Audio_SPU_Update.c` | Audio SPU updater: iterates 10 slots, updates ADSR/volume | `audio::playback::audio_spu_update` | `[ ]` |
| **AUD-072** | `Audio_SPU_VoiceSetup` | `0x8007486C` | `audio/Audio_SPU_VoiceSetup.c` | Audio SPU voice setup: computes ADSR/volume from table at 0x800A4D1E | `audio::playback::audio_spu_voicesetup` | `[ ]` |
| **AUD-073** | `Audio_ScanChannel` | `0x80095B90` | `audio/Audio_ScanChannel.c` | Audio channel scan: iterates DAT_80105cec channels, calls callback | `audio::playback::audio_scanchannel` | `[ ]` |
| **AUD-074** | `Audio_ScanChannels` | `0x800905E0` | `audio/Audio_ScanChannels.c` | Audio channel scanner: iterates channel table, updates active channels | `audio::playback::audio_scanchannels` | `[ ]` |
| **AUD-075** | `Audio_SeqCmd2` | `0x8008EFD0` | `audio/Audio_SeqCmd2.c` | Audio sequence command 2: calls FUN_80092420 with 4 params | `audio::playback::audio_seqcmd2` | `[ ]` |
| **AUD-076** | `Audio_SeqCmd_2` | `0x80092080` | `audio/Audio_SeqCmd_2.c` | Audio sequence command: sends cmd to SEQ player | `audio::playback::audio_seqcmd_2` | `[ ]` |
| **AUD-077** | `Audio_SeqCommand` | `0x800939A0` | `audio/Audio_SeqCommand.c` | Audio sequence commander: sends commands to SEQ | `audio::playback::audio_seqcommand` | `[ ]` |
| **AUD-078** | `Audio_SeqControl` | `0x80092660` | `audio/Audio_SeqControl.c` | Audio sequence controller: manages SEQ playback state | `audio::playback::audio_seqcontrol` | `[ ]` |
| **AUD-079** | `Audio_SeqData` | `0x80093650` | `audio/Audio_SeqData.c` | Audio sequence data: processes SEQ data stream | `audio::playback::audio_seqdata` | `[ ]` |
| **AUD-080** | `Audio_SeqEvent` | `0x80094150` | `audio/Audio_SeqEvent.c` | Audio sequence event handler: processes SEQ events | `audio::playback::audio_seqevent` | `[ ]` |
| **AUD-081** | `Audio_SeqLoad` | `0x8008E410` | `audio/Audio_SeqLoad.c` | Audio sequence loader: loads SEQ data from CD | `audio::playback::audio_seqload` | `[ ]` |
| **AUD-082** | `Audio_SeqMain` | `0x80090210` | `audio/Audio_SeqMain.c` | Audio sequence main: manages full SEQ playback loop | `audio::playback::audio_seqmain` | `[ ]` |
| **AUD-083** | `Audio_SeqMain2` | `0x80075FF8` | `audio/Audio_SeqMain2.c` | Audio sequence main variant 2: SEQ+SPU control (236L) | `audio::playback::audio_seqmain2` | `[ ]` |
| **AUD-084** | `Audio_SeqOpen` | `0x8008E100` | `audio/Audio_SeqOpen.c` | Audio sequence opener: checks _DAT_80104c28, opens SEQ data | `audio::playback::audio_seqopen` | `[ ]` |
| **AUD-085** | `Audio_SeqPlay` | `0x80075824` | `audio/Audio_SeqPlay.c` | Audio sequence player: checks DAT_1f80019a, plays SEQ | `audio::playback::audio_seqplay` | `[ ]` |
| **AUD-086** | `Audio_SeqPlay2` | `0x80075A80` | `audio/Audio_SeqPlay2.c` | Audio sequence player variant 2: manages playback state | `audio::playback::audio_seqplay2` | `[ ]` |
| **AUD-087** | `Audio_SeqTime` | `0x80094C10` | `audio/Audio_SeqTime.c` | Audio sequence timer: computes seq time from tick count | `audio::playback::audio_seqtime` | `[ ]` |
| **AUD-088** | `Audio_SeqTimer2` | `0x800945A0` | `audio/Audio_SeqTimer2.c` | Audio sequence timer variant 2: tick computation | `audio::playback::audio_seqtimer2` | `[ ]` |
| **AUD-089** | `Audio_SeqVoice` | `0x80091460` | `audio/Audio_SeqVoice.c` | Audio sequence voice: assigns voice to SEQ track | `audio::playback::audio_seqvoice` | `[ ]` |
| **AUD-090** | `Audio_SetBank` | `0x80074BF8` | `audio/Audio_SetBank.c` | Sets active sound bank / BGM track for music switching | audio::AudioPlayer (BGM SetBank) | [x] |
| **AUD-091** | `Audio_SetChannel` | `0x8008EB60` | `audio/Audio_SetChannel.c` | Audio channel setter: looks up channel struct, applies params | `audio::playback::audio_setchannel` | `[ ]` |
| **AUD-092** | `Audio_SetChannelConfig` | `0x80075070` | `audio/Audio_SetChannelConfig.c` | Configures audio channel: sets flag 0x800BE22B, stores channel param, calls 0x80075CEC | `audio::playback::audio_setchannelconfig` | `[ ]` |
| **AUD-093** | `Audio_SetChannelConfig2` | `0x800750A4` | `audio/Audio_SetChannelConfig2.c` | Audio channel config variant: calls 0x800750D8 with flag=1 | `audio::playback::audio_setchannelconfig2` | `[ ]` |
| **AUD-094** | `Audio_SetChannelParam` | `0x800922A0` | `audio/Audio_SetChannelParam.c` | Audio channel param: sets channel[0x48/0x9C] if flags 4 and 0x100 are clear | `audio::playback::audio_setchannelparam` | `[ ]` |
| **AUD-095** | `Audio_SetChannelPos` | `0x80091EC0` | `audio/Audio_SetChannelPos.c` | Audio channel position: sets channel[0x58/0x5A] or calls active setter via FUN_80095530 | `audio::playback::audio_setchannelpos` | `[ ]` |
| **AUD-096** | `Audio_SetChannelPos2` | `0x80091F50` | `audio/Audio_SetChannelPos2.c` | Audio channel position variant 2: same pattern but simplified index | `audio::playback::audio_setchannelpos2` | `[ ]` |
| **AUD-097** | `Audio_SetChannelPos3` | `0x80091FB8` | `audio/Audio_SetChannelPos3.c` | Audio channel position variant 3: same as SetChannelPos pattern | `audio::playback::audio_setchannelpos3` | `[ ]` |
| **AUD-098** | `Audio_SetFlag` | `0x800931B0` | `audio/Audio_SetFlag.c` | Audio flag setter: DAT_80105c90 = 2 | `audio::playback::audio_setflag` | `[ ]` |
| **AUD-099** | `Audio_SetParam` | `0x80092A70` | `audio/Audio_SetParam.c` | Audio param setter: stores value at 0x80105BF8, scales param to 0-0x7FFF range | `audio::playback::audio_setparam` | `[ ]` |
| **AUD-100** | `Audio_SetVoice` | `0x8008F930` | `audio/Audio_SetVoice.c` | Audio voice set: stores params in voice struct via FUN_80092420 | `audio::playback::audio_setvoice` | `[ ]` |
| **AUD-101** | `Audio_SetVoice10` | `0x8008F6F0` | `audio/Audio_SetVoice10.c` | Audio voice set variant 10: stores voice parameters from stack | `audio::playback::audio_setvoice10` | `[ ]` |
| **AUD-102** | `Audio_SetVoice2` | `0x8008F9D0` | `audio/Audio_SetVoice2.c` | Audio voice set variant 2: same pattern, different stack layout | `audio::playback::audio_setvoice2` | `[ ]` |
| **AUD-103** | `Audio_SetVoice3` | `0x8008F420` | `audio/Audio_SetVoice3.c` | Audio voice set variant 3: stores extended params in voice struct | `audio::playback::audio_setvoice3` | `[ ]` |
| **AUD-104** | `Audio_SetVoice4` | `0x8008F4D0` | `audio/Audio_SetVoice4.c` | Audio voice set variant 4: different stack layout for voice params | `audio::playback::audio_setvoice4` | `[ ]` |
| **AUD-105** | `Audio_SetVoice5` | `0x8008F1B0` | `audio/Audio_SetVoice5.c` | Audio voice set variant 5: stores voice params with byte access | `audio::playback::audio_setvoice5` | `[ ]` |
| **AUD-106** | `Audio_SetVoice6` | `0x8008F360` | `audio/Audio_SetVoice6.c` | Audio voice set variant 6: stores voice params, different byte layout | `audio::playback::audio_setvoice6` | `[ ]` |
| **AUD-107** | `Audio_SetVoice7` | `0x8008F580` | `audio/Audio_SetVoice7.c` | Audio voice set variant 7: extended voice parameter storage | `audio::playback::audio_setvoice7` | `[ ]` |
| **AUD-108** | `Audio_SetVoice8` | `0x8008F850` | `audio/Audio_SetVoice8.c` | Audio voice set variant 8: stores pan/volume in voice struct | `audio::playback::audio_setvoice8` | `[ ]` |
| **AUD-109** | `Audio_SetVoice9` | `0x8008F630` | `audio/Audio_SetVoice9.c` | Audio voice set variant 9: stores ADSR params in voice struct | `audio::playback::audio_setvoice9` | `[ ]` |
| **AUD-110** | `Audio_SetVoiceFlags` | `0x8008F2BC` | `audio/Audio_SetVoiceFlags.c` | Audio voice flags: extracts bit 0x8000 from params, stores in voice struct | `audio::playback::audio_setvoiceflags` | `[ ]` |
| **AUD-111** | `Audio_SetVolume` | `0x8008DE74` | `audio/Audio_SetVolume.c` | Audio volume setter: calls SetChannelParam(-vol), toggles flags 0x20/0x10 | `audio::playback::audio_setvolume` | `[ ]` |
| **AUD-112** | `Audio_SetVolume2` | `0x8008DEF4` | `audio/Audio_SetVolume2.c` | Audio volume set variant 2: same as SetVolume (duplicate) | `audio::playback::audio_setvolume2` | `[ ]` |
| **AUD-113** | `Audio_SetVolume3` | `0x8008DDD0` | `audio/Audio_SetVolume3.c` | Audio volume set variant 3: same as SetVolume (duplicate) | `audio::playback::audio_setvolume3` | `[ ]` |
| **AUD-114** | `Audio_SetupCmd` | `0x80090700` | `audio/Audio_SetupCmd.c` | Audio command setup: builds 2-word cmd with param*0x81, sends via struct | `audio::playback::audio_setupcmd` | `[ ]` |
| **AUD-115** | `Audio_SetupVoice` | `0x8008F260` | `audio/Audio_SetupVoice.c` | Audio voice setup: extracts bits from params, stores in voice struct | `audio::playback::audio_setupvoice` | `[ ]` |
| **AUD-116** | `Audio_SystemCmd` | `0x80091B50` | `audio/Audio_SystemCmd.c` | Audio system command: sets _DAT_801054b0/b2, dispatches | `audio::playback::audio_systemcmd` | `[ ]` |
| **AUD-117** | `Audio_SystemConfig` | `0x80091D70` | `audio/Audio_SystemConfig.c` | Audio system config: sets DAT_800ac424, checks 0x1000 flag | `audio::playback::audio_systemconfig` | `[ ]` |
| **AUD-118** | `Audio_SystemInit` | `0x80075130` | `audio/Audio_SystemInit.c` | Audio system init: calls Audio_Init2 + Audio_InitVolume + config | `audio::playback::audio_systeminit` | `[ ]` |
| **AUD-119** | `Audio_SystemLock` | `0x80090BD0` | `audio/Audio_SystemLock.c` | Audio system lock: sets _DAT_80104c24=1, processes queue | `audio::playback::audio_systemlock` | `[ ]` |
| **AUD-120** | `Audio_Toggle` | `0x80090A0C` | `audio/Audio_Toggle.c` | Audio toggle: flips DAT_800ac438, calls callback ptr on 1->0 transition | `audio::playback::audio_toggle` | `[ ]` |
| **AUD-121** | `Audio_VoiceAlloc2` | `0x8008FC10` | `audio/Audio_VoiceAlloc2.c` | Audio voice allocator variant 2: finds free voice slot | `audio::playback::audio_voicealloc2` | `[ ]` |
| **AUD-122** | `Audio_VoiceControl` | `0x8008FE40` | `audio/Audio_VoiceControl.c` | Audio voice controller: adjusts voice params from struct | `audio::playback::audio_voicecontrol` | `[ ]` |
| **AUD-123** | `Audio_VoiceKeyOn` | `0x80095530` | `audio/Audio_VoiceKeyOn.c` | Audio voice key-on: activates voice with ADSR params | `audio::playback::audio_voicekeyon` | `[ ]` |
| **AUD-124** | `Audio_VoiceParam` | `0x8008F7A0` | `audio/Audio_VoiceParam.c` | Audio voice param: stores byte params in voice struct | `audio::playback::audio_voiceparam` | `[ ]` |
| **AUD-125** | `Audio_VoiceParam2` | `0x80095D10` | `audio/Audio_VoiceParam2.c` | Audio voice param variant 2: extended parameter setup | `audio::playback::audio_voiceparam2` | `[ ]` |
| **AUD-126** | `Audio_VoiceSet` | `0x80090E40` | `audio/Audio_VoiceSet.c` | Audio voice setter: builds voice params at 0xB0 stride | `audio::playback::audio_voiceset` | `[ ]` |
| **AUD-127** | `Audio_VoiceSet1` | `0x80092420` | `audio/Audio_VoiceSet1.c` | Audio voice set variant 1: checks slot, sets voice params | `audio::playback::audio_voiceset1` | `[ ]` |
| **AUD-128** | `Audio_VoiceSet2` | `0x80092C30` | `audio/Audio_VoiceSet2.c` | Audio voice set variant 2: checks slot, sets different voice params | `audio::playback::audio_voiceset2` | `[ ]` |
| **AUD-129** | `Audio_VoiceUpdate` | `0x80092FD0` | `audio/Audio_VoiceUpdate.c` | Audio voice updater: processes active voices, updates params | `audio::playback::audio_voiceupdate` | `[ ]` |
| **AUD-130** | `Audio_WriteDevice` | `0x80092E3C` | `audio/Audio_WriteDevice.c` | Audio device write: if param<0x18, stores short at DAT_80104c30 table | `audio::playback::audio_writedevice` | `[ ]` |
| **AUD-131** | `SPU_Dispatch1` | `0x8008FA70` | `audio/SPU_Dispatch1.c` | SPU dispatch wrapper: calls 0x80092B00 | `audio::playback::spu_dispatch1` | `[ ]` |
| **AUD-132** | `SPU_Dispatch2` | `0x8008FAA0` | `audio/SPU_Dispatch2.c` | SPU dispatch wrapper: calls 0x80092A70 | `audio::playback::spu_dispatch2` | `[ ]` |
| **AUD-133** | `SPU_Dispatch3` | `0x8008FAD0` | `audio/SPU_Dispatch3.c` | SPU dispatch wrapper: calls 0x80092BB0 | `audio::playback::spu_dispatch3` | `[ ]` |
| **AUD-134** | `SPU_Dispatch4` | `0x8008FB00` | `audio/SPU_Dispatch4.c` | SPU dispatch wrapper: calls 0x80092A30 | `audio::playback::spu_dispatch4` | `[ ]` |
| **AUD-135** | `SPU_Dispatch5` | `0x8008FB30` | `audio/SPU_Dispatch5.c` | SPU dispatch wrapper: calls 0x80092A30 | `audio::playback::spu_dispatch5` | `[ ]` |
| **AUD-136** | `SPU_SetVoiceAttr` | `0x8008EE10` | `audio/SPU_SetVoiceAttr.c` | Sets SPU voice attribute: writes param to voice data at 0x80104C30 table | `audio::playback::spu_setvoiceattr` | `[ ]` |
| **AUD-137** | `SPU_SetVoiceAttr2` | `0x800900F0` | `audio/SPU_SetVoiceAttr2.c` | Sets SPU voice attribute variant: different offset calculation | `audio::playback::spu_setvoiceattr2` | `[ ]` |
| **AUD-138** | `SPU_SetVolume` | `0x80090560` | `audio/SPU_SetVolume.c` | Sets SPU voice volume via 0x800905E0 | `audio::playback::spu_setvolume` | `[ ]` |
| **AUD-139** | `SPU_SetVolumePan` | `0x80090598` | `audio/SPU_SetVolumePan.c` | Sets SPU voice volume and pan via 0x800905E0 | `audio::playback::spu_setvolumepan` | `[ ]` |
| **AUD-140** | `SPU_Start` | `0x80090980` | `audio/SPU_Start.c` | Starts SPU playback via 0x80090750 with flag 1 | `audio::playback::spu_start` | `[ ]` |

---

## 🗂️ SECTOR 12: Memory Card, GPU, CD & Low-Level Subsystems

> Controlador de guardado en Memory Card, colas de paquetes GPU, transformación vectorial GTE, streaming CD y vídeo MDEC.

| ID | Función / Símbolo | Dirección PS1 | Archivo C | Comportamiento Técnico Original | Mapeo Bevy (Rust) | Estado |
| :--- | :--- | :---: | :--- | :--- | :--- | :---: |
| **SYS-001** | `Save_Confirm` | `0x800399FC` | `save/Save_Confirm.c` | Save confirmation: entity[1] state, handles yes/no | `system::hardware::save_confirm` | `[ ]` |
| **SYS-002** | `Save_CursorNext` | `0x80039978` | `save/Save_CursorNext.c` | Advances save menu cursor with step of 5 (entity[0x1E]+=5) | `system::hardware::save_cursornext` | `[ ]` |
| **SYS-003** | `Save_CursorPrev` | `0x800399C0` | `save/Save_CursorPrev.c` | Moves save menu cursor to previous item (entity[0x1F]--, entity[0x1E]--) | `system::hardware::save_cursorprev` | `[ ]` |
| **SYS-004** | `Save_DrawText` | `0x8003990C` | `save/Save_DrawText.c` | Save menu text draw: renders save slot labels from string table | `system::hardware::save_drawtext` | `[ ]` |
| **SYS-005** | `Save_UpdateSlots` | `0x8003989C` | `save/Save_UpdateSlots.c` | Updates save slot display: increments entity[0x23] for each save present | `system::hardware::save_updateslots` | `[ ]` |
| **SYS-006** | `Save_Write` | `0x80039BCC` | `save/Save_Write.c` | Save data writer: writes save block to memory card | `system::hardware::save_write` | `[ ]` |
| **SYS-007** | `GPU_CallbackDispatch` | `0x80080940` | `gpu/GPU_CallbackDispatch.c` | GPU callback dispatcher: processes task queue, calls handlers | `system::hardware::gpu_callbackdispatch` | `[ ]` |
| **SYS-008** | `GPU_CheckDMA` | `0x800834A0` | `gpu/GPU_CheckDMA.c` | GPU DMA check: reads timer, sets timeout at DAT_800a5adc, returns status | `system::hardware::gpu_checkdma` | `[ ]` |
| **SYS-009** | `GPU_CheckQueueSpace` | `0x80082240` | `gpu/GPU_CheckQueueSpace.c` | GPU queue space check: validates param vs DAT_800a59a4 capacity | `system::hardware::gpu_checkqueuespace` | `[ ]` |
| **SYS-010** | `GPU_CheckQueueSpace2` | `0x800822D8` | `gpu/GPU_CheckQueueSpace2.c` | GPU queue space check variant 2: same pattern, returns 0 or 1 | `system::hardware::gpu_checkqueuespace2` | `[ ]` |
| **SYS-011** | `GPU_CheckTimeout` | `0x800834D4` | `gpu/GPU_CheckTimeout.c` | GPU timeout/reset handler: resets GPU state if hung or error detected | `system::hardware::gpu_checktimeout` | `[ ]` |
| **SYS-012** | `GPU_ClearImage` | `0x800810F0` | `gpu/GPU_ClearImage.c` | GPU clear image: sends ClearImage cmd via function pointer table at 0x800A5998 | `system::hardware::gpu_clearimage` | `[ ]` |
| **SYS-013** | `GPU_ClearOT` | `0x80081180` | `gpu/GPU_ClearOT.c` | GPU clear OT: sends ClearImage2 cmd with 0x80000000 flag via function table | `system::hardware::gpu_clearot` | `[ ]` |
| **SYS-014** | `GPU_Cmd3` | `0x80082CE0` | `gpu/GPU_Cmd3.c` | GPU command wrapper: calls FUN_80082d04 with third param=0 | `system::hardware::gpu_cmd3` | `[ ]` |
| **SYS-015** | `GPU_DMACallback` | `0x80082FB4` | `gpu/GPU_DMACallback.c` | GPU DMA callback: handles DMA completion, resets timeout | `system::hardware::gpu_dmacallback` | `[ ]` |
| **SYS-016** | `GPU_DMAQueue` | `0x80082D04` | `gpu/GPU_DMAQueue.c` | GPU DMA queue processor: waits for slot, submits packet, advances | `system::hardware::gpu_dmaqueue` | `[ ]` |
| **SYS-017** | `GPU_DMASend2` | `0x80082734` | `gpu/GPU_DMASend2.c` | GPU DMA send variant 2: checks prim count, sends via DMA | `system::hardware::gpu_dmasend2` | `[ ]` |
| **SYS-018** | `GPU_DMASend3` | `0x80082970` | `gpu/GPU_DMASend3.c` | GPU DMA send variant 3: different queue management | `system::hardware::gpu_dmasend3` | `[ ]` |
| **SYS-019** | `GPU_DMASetup` | `0x80083214` | `gpu/GPU_DMASetup.c` | GPU DMA setup: configures DMA channel, sets DAT_800a5ad8 timeout | `system::hardware::gpu_dmasetup` | `[ ]` |
| **SYS-020** | `GPU_DMASync` | `0x80083364` | `gpu/GPU_DMASync.c` | GPU DMA sync: waits for DMA channel completion, handles timeout | `system::hardware::gpu_dmasync` | `[ ]` |
| **SYS-021** | `GPU_DMATransfer` | `0x80082424` | `gpu/GPU_DMATransfer.c` | GPU DMA transfer: sets DMA regs, triggers xfer, waits for completion with timeout | `system::hardware::gpu_dmatransfer` | `[ ]` |
| **SYS-022** | `GPU_DispatchDraw2` | `0x800803DC` | `gpu/GPU_DispatchDraw2.c` | GPU draw dispatch: reads word, calls draw funcs for low and high 16 bits | `system::hardware::gpu_dispatchdraw2` | `[ ]` |
| **SYS-023** | `GPU_DispatchTask` | `0x80080ADC` | `gpu/GPU_DispatchTask.c` | GPU task dispatcher: processes task queue at _DAT_80100ab0, calls handlers | `system::hardware::gpu_dispatchtask` | `[ ]` |
| **SYS-024** | `GPU_DrawDigit` | `0x8007C5E4` | `gpu/GPU_DrawDigit.c` | Digit draw: calls FUN_8007c2a4 with DAT_800bf9ca+1 \| 0x80, param 3 | `system::hardware::gpu_drawdigit` | `[ ]` |
| **SYS-025** | `GPU_DrawDigit1` | `0x8007C620` | `gpu/GPU_DrawDigit1.c` | Digit draw variant 1: calls FUN_8007c2a4 with DAT_800bfa21 \| 0x80 | `system::hardware::gpu_drawdigit1` | `[ ]` |
| **SYS-026** | `GPU_DrawDigit2` | `0x8007C654` | `gpu/GPU_DrawDigit2.c` | Digit draw variant 2: calls FUN_8007c2a4 with DAT_800bfa2a \| 0x80 | `system::hardware::gpu_drawdigit2` | `[ ]` |
| **SYS-027** | `GPU_DrawDigit3` | `0x8007C780` | `gpu/GPU_DrawDigit3.c` | GPU digit draw variant 3: different global source | `system::hardware::gpu_drawdigit3` | `[ ]` |
| **SYS-028** | `GPU_DrawEnv` | `0x80081690` | `gpu/GPU_DrawEnv.c` | GPU draw environment: sends DrawEnv cmd with debug, decrements queue | `system::hardware::gpu_drawenv` | `[ ]` |
| **SYS-029** | `GPU_DrawMain` | `0x8008179C` | `gpu/GPU_DrawMain.c` | GPU draw main: full draw command processor | `system::hardware::gpu_drawmain` | `[ ]` |
| **SYS-030** | `GPU_DrawNumber` | `0x8007C2A4` | `gpu/GPU_DrawNumber.c` | GPU digit/number draw: splits value into tens/ones, draws 2 TILE prims per digit | `system::hardware::gpu_drawnumber` | `[ ]` |
| **SYS-031** | `GPU_DrawNumber2` | `0x8007C688` | `gpu/GPU_DrawNumber2.c` | GPU digit draw variant 2: uses DAT_800bfa24/28 instead of bfa21/2a | `system::hardware::gpu_drawnumber2` | `[ ]` |
| **SYS-032** | `GPU_DrawOTag` | `0x80081560` | `gpu/GPU_DrawOTag.c` | PsyQ DrawOTag wrapper: sends ordering table to GPU for rendering | `system::hardware::gpu_drawotag` | `[ ]` |
| **SYS-033** | `GPU_DrawPrimitive` | `0x80081504` | `gpu/GPU_DrawPrimitive.c` | GPU draw primitive: reads type from struct+3, dispatches via function ptr table | `system::hardware::gpu_drawprimitive` | `[ ]` |
| **SYS-034** | `GPU_DrawProcess` | `0x8003E894` | `gpu/GPU_DrawProcess.c` | GPU draw processor: processes draw commands, calls handlers | `system::hardware::gpu_drawprocess` | `[ ]` |
| **SYS-035** | `GPU_DrawQuad` | `0x80033AFC` | `gpu/GPU_DrawQuad.c` | GPU draw quad: builds textured quad primitive, submits to OT | `system::hardware::gpu_drawquad` | `[ ]` |
| **SYS-036** | `GPU_DrawSprite` | `0x80033A0C` | `gpu/GPU_DrawSprite.c` | GPU sprite drawer: builds sprite primitive from entity data | `system::hardware::gpu_drawsprite` | `[ ]` |
| **SYS-037** | `GPU_DrawSprite98` | `0x8007E998` | `gpu/GPU_DrawSprite98.c` | Sprite draw with code 0x98: calls FUN_8007e8dc | `system::hardware::gpu_drawsprite98` | `[ ]` |
| **SYS-038** | `GPU_DrawSync` | `0x80080F6C` | `gpu/GPU_DrawSync.c` | Waits for GPU to finish current operation (DrawSync callback) | `system::hardware::gpu_drawsync` | `[ ]` |
| **SYS-039** | `GPU_DrawSyncCallback` | `0x80080E74` | `gpu/GPU_DrawSyncCallback.c` | GPU draw sync: prints debug if queue depth > 1, calls GPU func via ptr table | `system::hardware::gpu_drawsynccallback` | `[ ]` |
| **SYS-040** | `GPU_DrawTile` | `0x8007C3CC` | `gpu/GPU_DrawTile.c` | GPU tile drawer: builds 4-point tile primitive, submits to OT | `system::hardware::gpu_drawtile` | `[ ]` |
| **SYS-041** | `GPU_EncodeDrawMode` | `0x80082220` | `gpu/GPU_EncodeDrawMode.c` | GPU draw mode encoder: builds GP0(0xE1) cmd from tpage/display params | `system::hardware::gpu_encodedrawmode` | `[ ]` |
| **SYS-042** | `GPU_EncodeTPage` | `0x80082370` | `gpu/GPU_EncodeTPage.c` | Encodes texture page parameters: (y<<11)\|(x)\|0xE5000000 for GPU TPAGE command | `system::hardware::gpu_encodetpage` | `[ ]` |
| **SYS-043** | `GPU_EncodeTexture` | `0x8008238C` | `gpu/GPU_EncodeTexture.c` | GPU texture page encoder: builds TSB from CLUT coords + texpage settings | `system::hardware::gpu_encodetexture` | `[ ]` |
| **SYS-044** | `GPU_GetStatus` | `0x8008240C` | `gpu/GPU_GetStatus.c` | Returns GPU status register value from 0x800A5AA8 | `system::hardware::gpu_getstatus` | `[ ]` |
| **SYS-045** | `GPU_GetStatusBit` | `0x80081CC8` | `gpu/GPU_GetStatusBit.c` | GPU status bit getter: calls GPU func via ptr table, returns top bit | `system::hardware::gpu_getstatusbit` | `[ ]` |
| **SYS-046** | `GPU_InitDisplay` | `0x80083B30` | `gpu/GPU_InitDisplay.c` | GPU display init: sets up display area at param_1 with w/h/x/y | `system::hardware::gpu_initdisplay` | `[ ]` |
| **SYS-047** | `GPU_InitDrawEnv` | `0x80082C68` | `gpu/GPU_InitDrawEnv.c` | Initializes drawing environment: sets display area, clear color, enable flags | `system::hardware::gpu_initdrawenv` | `[ ]` |
| **SYS-048** | `GPU_InitPacket` | `0x80083BF0` | `gpu/GPU_InitPacket.c` | GPU packet init: stores 3 params + zeros at offset 4-7 in packet struct | `system::hardware::gpu_initpacket` | `[ ]` |
| **SYS-049** | `GPU_InitStruct` | `0x80081768` | `gpu/GPU_InitStruct.c` | GPU struct init: Mem_Copy 0x5C bytes from DAT_800a59b0 template | `system::hardware::gpu_initstruct` | `[ ]` |
| **SYS-050** | `GPU_InitStruct2` | `0x80081C94` | `gpu/GPU_InitStruct2.c` | GPU struct init: Mem_Copy 0x14 bytes from DAT_800a5a0c template | `system::hardware::gpu_initstruct2` | `[ ]` |
| **SYS-051** | `GPU_LoadImage` | `0x80081218` | `gpu/GPU_LoadImage.c` | PsyQ LoadImage wrapper: uploads texture data from RAM to VRAM | `system::hardware::gpu_loadimage` | `[ ]` |
| **SYS-052** | `GPU_LoadImage2` | `0x800836B8` | `gpu/GPU_LoadImage2.c` | Alternate LoadImage with timeout handling | `system::hardware::gpu_loadimage2` | `[ ]` |
| **SYS-053** | `GPU_ModulateOTColors` | `0x8003D584` | `gpu/GPU_ModulateOTColors.c` | Modulates color values in OT primitives for fade/brightness effects | `system::hardware::gpu_modulateotcolors` | `[ ]` |
| **SYS-054** | `GPU_MoveImage_2` | `0x80083890` | `gpu/GPU_MoveImage_2.c` | GPU move image: sends MoveImage cmd, waits for DMA, returns | `system::hardware::gpu_moveimage_2` | `[ ]` |
| **SYS-055** | `GPU_OT_Advance` | `0x8007FC24` | `gpu/GPU_OT_Advance.c` | GPU OT advance: increments ordering table pointer, wraps at limit | `system::hardware::gpu_ot_advance` | `[ ]` |
| **SYS-056** | `GPU_OT_Build` | `0x8007FDB0` | `gpu/GPU_OT_Build.c` | GPU OT builder: constructs ordering table entries | `system::hardware::gpu_ot_build` | `[ ]` |
| **SYS-057** | `GPU_OT_Process` | `0x8003E264` | `gpu/GPU_OT_Process.c` | GPU OT processor: processes ordering table, submits primitives | `system::hardware::gpu_ot_process` | `[ ]` |
| **SYS-058** | `GPU_OT_Sort` | `0x8003E448` | `gpu/GPU_OT_Sort.c` | GPU OT sorter: sorts primitives by Z depth | `system::hardware::gpu_ot_sort` | `[ ]` |
| **SYS-059** | `GPU_OT_Submit2` | `0x8008007C` | `gpu/GPU_OT_Submit2.c` | GPU OT submitter variant 2: different queue handling | `system::hardware::gpu_ot_submit2` | `[ ]` |
| **SYS-060** | `GPU_PrimAlloc` | `0x80082504` | `gpu/GPU_PrimAlloc.c` | GPU primitive allocator: checks queue, returns free slot ptr | `system::hardware::gpu_primalloc` | `[ ]` |
| **SYS-061** | `GPU_PrimSend` | `0x80081DB8` | `gpu/GPU_PrimSend.c` | GPU primitive sender: checks queue space, sends prim via DMA | `system::hardware::gpu_primsend` | `[ ]` |
| **SYS-062** | `GPU_PrimSend2` | `0x80081FB0` | `gpu/GPU_PrimSend2.c` | GPU primitive sender variant 2: different queue checking | `system::hardware::gpu_primsend2` | `[ ]` |
| **SYS-063** | `GPU_PrimSetup` | `0x8007CDD4` | `gpu/GPU_PrimSetup.c` | GPU primitive setup: creates sprite prim at _DAT_800bf544 with params | `system::hardware::gpu_primsetup` | `[ ]` |
| **SYS-064** | `GPU_ProcessRenderQueue` | `0x80040530` | `gpu/GPU_ProcessRenderQueue.c` | Subrutina de GPU_ProcessRenderQueue (gpu/GPU_ProcessRenderQueue.c) | `system::hardware::gpu_processrenderqueue` | `[ ]` |
| **SYS-065** | `GPU_PutDrawEnv` | `0x800815D0` | `gpu/GPU_PutDrawEnv.c` | GPU put draw environment: sends PutDrawEnv cmd, returns ptr | `system::hardware::gpu_putdrawenv` | `[ ]` |
| **SYS-066** | `GPU_Render3DSprite` | `0x8003D23C` | `gpu/GPU_Render3DSprite.c` | Renders a 3D sprite: sets up GTE, transforms, submits to OT | `system::hardware::gpu_render3dsprite` | `[ ]` |
| **SYS-067** | `GPU_RenderSprite` | `0x8007E8DC` | `gpu/GPU_RenderSprite.c` | GPU sprite renderer: dispatches via function table at 0x80017334 + param index | `system::hardware::gpu_rendersprite` | `[ ]` |
| **SYS-068** | `GPU_RenderSprite2` | `0x8007E938` | `gpu/GPU_RenderSprite2.c` | Renders sprite variant 2: calls FUN_8007e6dc with function table lookup at 0x80017334 | `system::hardware::gpu_rendersprite2` | `[ ]` |
| **SYS-069** | `GPU_RenderSprite_V1` | `0x80079374` | `gpu/GPU_RenderSprite_V1.c` | Renders sprite variant 1: sets flag 0x20, calls FUN_80078ca8 with mode 0x100008 | `system::hardware::gpu_rendersprite_v1` | `[ ]` |
| **SYS-070** | `GPU_RenderSprite_V2` | `0x80079324` | `gpu/GPU_RenderSprite_V2.c` | Renders sprite variant 2: sets flag 0xFFE0, calls FUN_80078ca8 with mode 0x80008 | `system::hardware::gpu_rendersprite_v2` | `[ ]` |
| **SYS-071** | `GPU_ResetGraph` | `0x80080BF0` | `gpu/GPU_ResetGraph.c` | GPU graph reset: calls ResetGraph debug, dispatches by param & 7 | `system::hardware::gpu_resetgraph` | `[ ]` |
| **SYS-072** | `GPU_SPU_Cmd` | `0x80098150` | `gpu/GPU_SPU_Cmd.c` | GPU/SPU command: sets DAT_800ac598 flag, modifies SPU register at 0x800AC604+0x1AA | `system::hardware::gpu_spu_cmd` | `[ ]` |
| **SYS-073** | `GPU_SendCommand` | `0x80082BF0` | `gpu/GPU_SendCommand.c` | Sends raw 32-bit command to GPU register and stores shadow copy | `system::hardware::gpu_sendcommand` | `[ ]` |
| **SYS-074** | `GPU_SendCommandAndRead` | `0x80082CB0` | `gpu/GPU_SendCommandAndRead.c` | Sends GPU command with bit 28 set, returns GPU read response | `system::hardware::gpu_sendcommandandread` | `[ ]` |
| **SYS-075** | `GPU_SendDMAPacket` | `0x80083618` | `gpu/GPU_SendDMAPacket.c` | GPU DMA packet send: builds GP0 command, sends via DMA with flags | `system::hardware::gpu_senddmapacket` | `[ ]` |
| **SYS-076** | `GPU_SendPrimList` | `0x80082C28` | `gpu/GPU_SendPrimList.c` | GPU primitive list send: iterates param_2 prims, sends each via DMA | `system::hardware::gpu_sendprimlist` | `[ ]` |
| **SYS-077** | `GPU_SetDisplayMask` | `0x80080ED4` | `gpu/GPU_SetDisplayMask.c` | GPU display mask setter: sends SetDispMask cmd, calls GPU via ptr table | `system::hardware::gpu_setdisplaymask` | `[ ]` |
| **SYS-078** | `GPU_SetQueueDepth` | `0x80080D64` | `gpu/GPU_SetQueueDepth.c` | GPU queue depth setter: DAT_800a59a2 = param, calls callback if non-zero | `system::hardware::gpu_setqueuedepth` | `[ ]` |
| **SYS-079** | `GPU_SetQueueMode` | `0x80080DC0` | `gpu/GPU_SetQueueMode.c` | GPU command queue mode setter: dispatches via function table, checks DAT_800a59a1/2 | `system::hardware::gpu_setqueuemode` | `[ ]` |
| **SYS-080** | `GPU_SetRegClamped` | `0x80098100` | `gpu/GPU_SetRegClamped.c` | Sets GPU register with clamp: param clamped 0-0x3F, writes to DAT_800ac604+0x1AA | `system::hardware::gpu_setregclamped` | `[ ]` |
| **SYS-081** | `GPU_SetTexPrimHeader` | `0x80083CA0` | `gpu/GPU_SetTexPrimHeader.c` | Sets up textured primitive header: code=9 (TILE), size=0x2C | `system::hardware::gpu_settexprimheader` | `[ ]` |
| **SYS-082** | `GPU_SetTilePrimHeader` | `0x80083CC0` | `gpu/GPU_SetTilePrimHeader.c` | Sets up tile primitive header: code=4 (TILE_1), size=100 | `system::hardware::gpu_settileprimheader` | `[ ]` |
| **SYS-083** | `GPU_SetupDrawMode` | `0x80081D78` | `gpu/GPU_SetupDrawMode.c` | Sets up GPU draw mode: primitive[3]=2, encodes tpage, sets draw params | `system::hardware::gpu_setupdrawmode` | `[ ]` |
| **SYS-084** | `GPU_SetupDrawMode2` | `0x80083DE0` | `gpu/GPU_SetupDrawMode2.c` | GPU draw mode setup variant 2: builds GP0(0xE1) cmd with extra params | `system::hardware::gpu_setupdrawmode2` | `[ ]` |
| **SYS-085** | `GPU_SetupOT` | `0x80081458` | `gpu/GPU_SetupOT.c` | GPU ordering table setup: calls GPU funcs, sets up OT base address | `system::hardware::gpu_setupot` | `[ ]` |
| **SYS-086** | `GPU_SetupPacket` | `0x80080FD4` | `gpu/GPU_SetupPacket.c` | Sets up GPU primitive packet header before DMA transfer | `system::hardware::gpu_setuppacket` | `[ ]` |
| **SYS-087** | `GPU_SetupPrimitive` | `0x8007C8C8` | `gpu/GPU_SetupPrimitive.c` | GPU primitive setup: sets type byte at +3, encodes color from param bits | `system::hardware::gpu_setupprimitive` | `[ ]` |
| **SYS-088** | `GPU_SetupPrimitive2` | `0x80083DB0` | `gpu/GPU_SetupPrimitive2.c` | GPU primitive setup 2: sets type=2, encodes draw mode from param_2 | `system::hardware::gpu_setupprimitive2` | `[ ]` |
| **SYS-089** | `GPU_SpriteBuild` | `0x8007C940` | `gpu/GPU_SpriteBuild.c` | GPU sprite builder: constructs sprite prim from data | `system::hardware::gpu_spritebuild` | `[ ]` |
| **SYS-090** | `GPU_SpriteCmd` | `0x8007D208` | `gpu/GPU_SpriteCmd.c` | GPU sprite command processor: entity[0x46] flags, dispatches | `system::hardware::gpu_spritecmd` | `[ ]` |
| **SYS-091** | `GPU_SpriteDecode` | `0x8007CEEC` | `gpu/GPU_SpriteDecode.c` | GPU sprite decoder: reads bytecode, builds prim list | `system::hardware::gpu_spritedecode` | `[ ]` |
| **SYS-092** | `GPU_SpriteDrawMain` | `0x8007E1B8` | `gpu/GPU_SpriteDrawMain.c` | GPU sprite draw main: builds + submits sprite prims | `system::hardware::gpu_spritedrawmain` | `[ ]` |
| **SYS-093** | `GPU_SpriteList` | `0x8007EAE4` | `gpu/GPU_SpriteList.c` | GPU sprite list builder: constructs linked sprite prims | `system::hardware::gpu_spritelist` | `[ ]` |
| **SYS-094** | `GPU_SpriteMain` | `0x8007D594` | `gpu/GPU_SpriteMain.c` | GPU sprite main: full sprite rendering pipeline | `system::hardware::gpu_spritemain` | `[ ]` |
| **SYS-095** | `GPU_SpriteOT` | `0x8007E9C8` | `gpu/GPU_SpriteOT.c` | GPU sprite OT submit: sets GTE vals, creates sprite primitive in ordering table | `system::hardware::gpu_spriteot` | `[ ]` |
| **SYS-096** | `GPU_SpriteProcess` | `0x8007CC00` | `gpu/GPU_SpriteProcess.c` | GPU sprite processor: reads sprite data, builds primitives | `system::hardware::gpu_spriteprocess` | `[ ]` |
| **SYS-097** | `GPU_SpriteRender` | `0x8007E6DC` | `gpu/GPU_SpriteRender.c` | GPU sprite renderer: builds sprite prim from params, submits | `system::hardware::gpu_spriterender` | `[ ]` |
| **SYS-098** | `GPU_SpriteRender2` | `0x80078CA8` | `gpu/GPU_SpriteRender2.c` | GPU sprite renderer variant 2: builds prims, submits | `system::hardware::gpu_spriterender2` | `[ ]` |
| **SYS-099** | `GPU_StoreImage_2` | `0x800837A4` | `gpu/GPU_StoreImage_2.c` | GPU store image: sends StoreImage cmd, waits for DMA completion | `system::hardware::gpu_storeimage_2` | `[ ]` |
| **SYS-100** | `GPU_SubmitOT` | `0x8007FCC8` | `gpu/GPU_SubmitOT.c` | GPU OT submit: writes prim to ordering table with depth sorting | `system::hardware::gpu_submitot` | `[ ]` |
| **SYS-101** | `GPU_WaitVSync` | `0x80051FB4` | `gpu/GPU_WaitVSync.c` | Waits for vertical sync: spin-loops until vblank interrupt | `system::hardware::gpu_waitvsync` | `[ ]` |
| **SYS-102** | `OT_DrawRectSprite` | `0x80081CF8` | `gpu/OT_DrawRectSprite.c` | Subrutina de OT_DrawRectSprite (gpu/OT_DrawRectSprite.c) | `system::hardware::ot_drawrectsprite` | `[ ]` |
| **SYS-103** | `OT_LinkPrimitives` | `0x80083C30` | `gpu/OT_LinkPrimitives.c` | Links two OT primitives: swaps lower 24 bits of their tag words | `system::hardware::ot_linkprimitives` | `[ ]` |
| **SYS-104** | `OT_SubmitPrimitive` | `0x8003FAE8` | `gpu/OT_SubmitPrimitive.c` | Submits a primitive to the ordering table with depth sorting | `system::hardware::ot_submitprimitive` | `[ ]` |
| **SYS-105** | `GTE_ComposeAndProject` | `0x800518FC` | `gte/GTE_ComposeAndProject.c` | GTE compose+project: loads scale, composes rotation matrix, projects, adds position | `system::hardware::gte_composeandproject` | `[ ]` |
| **SYS-106** | `GTE_ComposeMatrix` | `0x80084110` | `gte/GTE_ComposeMatrix.c` | Subrutina de GTE_ComposeMatrix (gte/GTE_ComposeMatrix.c) | `system::hardware::gte_composematrix` | `[ ]` |
| **SYS-107** | `GTE_CopyMatrix` | `0x80051B34` | `gte/GTE_CopyMatrix.c` | Copies 5-word GTE matrix from source to destination | `system::hardware::gte_copymatrix` | `[ ]` |
| **SYS-108** | `GTE_DepthCheck` | `0x800317CC` | `gte/GTE_DepthCheck.c` | Standalone GTE depth/Z-sort check: RTPS projection + OT z-index calculation | `system::hardware::gte_depthcheck` | `[ ]` |
| **SYS-109** | `GTE_Init` | `0x80083FF8` | `gte/GTE_Init.c` | GTE init: enables coprocessor, sets IR1=0x155, IR2=0x100, SZ0=1000 | `system::hardware::gte_init` | `[ ]` |
| **SYS-110** | `GTE_InitProjectionMatrix` | `0x80050A80` | `gte/GTE_InitProjectionMatrix.c` | Inits GTE projection matrix: identity, zeros pos/trans, scales 0x1000, screen offset | `system::hardware::gte_initprojectionmatrix` | `[ ]` |
| **SYS-111** | `GTE_LoadIdentityMatrix` | `0x80051794` | `gte/GTE_LoadIdentityMatrix.c` | Subrutina de GTE_LoadIdentityMatrix (gte/GTE_LoadIdentityMatrix.c) | `system::hardware::gte_loadidentitymatrix` | `[ ]` |
| **SYS-112** | `GTE_LoadMatrix` | `0x80051614` | `gte/GTE_LoadMatrix.c` | GTE matrix loader: loads rotation + translation from table at 0x800E7F40 | `system::hardware::gte_loadmatrix` | `[ ]` |
| **SYS-113** | `GTE_LoadMatrix5` | `0x80084660` | `gte/GTE_LoadMatrix5.c` | GTE matrix load: sets 5 GTE regs (R11R12 through TRZ) from array | `system::hardware::gte_loadmatrix5` | `[ ]` |
| **SYS-114** | `GTE_LoadRotMatrixFromSVec` | `0x80085480` | `gte/GTE_LoadRotMatrixFromSVec.c` | Loads rotation matrix from SVec format into GTE registers | `system::hardware::gte_loadrotmatrixfromsvec` | `[ ]` |
| **SYS-115** | `GTE_LoadRotationFromSVec` | `0x800847F0` | `gte/GTE_LoadRotationFromSVec.c` | Subrutina de GTE_LoadRotationFromSVec (gte/GTE_LoadRotationFromSVec.c) | `system::hardware::gte_loadrotationfromsvec` | `[ ]` |
| **SYS-116** | `GTE_LoadScaleCompose` | `0x80051844` | `gte/GTE_LoadScaleCompose.c` | GTE scale + compose: loads entity scale (0xB8/BA/BC), composes with rotation matrix | `system::hardware::gte_loadscalecompose` | `[ ]` |
| **SYS-117** | `GTE_LoadScaleMatrix` | `0x800517BC` | `gte/GTE_LoadScaleMatrix.c` | Subrutina de GTE_LoadScaleMatrix (gte/GTE_LoadScaleMatrix.c) | `system::hardware::gte_loadscalematrix` | `[ ]` |
| **SYS-118** | `GTE_LoadTranslation` | `0x80084690` | `gte/GTE_LoadTranslation.c` | GTE translation load: sets TRX/TRY/TRZ from struct at offset 0x14 | `system::hardware::gte_loadtranslation` | `[ ]` |
| **SYS-119** | `GTE_MulMatrix` | `0x80084220` | `gte/GTE_MulMatrix.c` | GTE matrix multiply: loads matrix, calls copFunction(0x486012), reads result | `system::hardware::gte_mulmatrix` | `[ ]` |
| **SYS-120** | `GTE_MulMatrix2` | `0x800844C0` | `gte/GTE_MulMatrix2.c` | GTE matrix multiply variant 2: loads 2 matrices, multiplies, stores result | `system::hardware::gte_mulmatrix2` | `[ ]` |
| **SYS-121** | `GTE_MulMatrix3` | `0x80084250` | `gte/GTE_MulMatrix3.c` | GTE matrix multiply variant 3: different input format | `system::hardware::gte_mulmatrix3` | `[ ]` |
| **SYS-122** | `GTE_MulMatrix4` | `0x80084360` | `gte/GTE_MulMatrix4.c` | GTE matrix multiply variant 4: different register layout | `system::hardware::gte_mulmatrix4` | `[ ]` |
| **SYS-123** | `GTE_MulMatrixVec` | `0x80084470` | `gte/GTE_MulMatrixVec.c` | GTE matrix * vector multiply: loads matrix from array, transforms vector | `system::hardware::gte_mulmatrixvec` | `[ ]` |
| **SYS-124** | `GTE_Project10` | `0x8002C6AC` | `gte/GTE_Project10.c` | GTE project variant 10: different scratchpad layout | `system::hardware::gte_project10` | `[ ]` |
| **SYS-125** | `GTE_Project11` | `0x8002FDD0` | `gte/GTE_Project11.c` | GTE project variant 11: entity draw projection | `system::hardware::gte_project11` | `[ ]` |
| **SYS-126** | `GTE_Project2` | `0x8002DBE4` | `gte/GTE_Project2.c` | GTE project variant 2: loads matrix, projects, reads result | `system::hardware::gte_project2` | `[ ]` |
| **SYS-127** | `GTE_Project3` | `0x8002DD88` | `gte/GTE_Project3.c` | GTE project variant 3: loads matrix, projects, reads screen XY | `system::hardware::gte_project3` | `[ ]` |
| **SYS-128** | `GTE_Project4` | `0x8002801C` | `gte/GTE_Project4.c` | GTE project variant 4: loads from _DAT_1f8000f8, projects | `system::hardware::gte_project4` | `[ ]` |
| **SYS-129** | `GTE_Project5` | `0x8002E458` | `gte/GTE_Project5.c` | GTE project variant 5: loads from _DAT_1f8000f8, different path | `system::hardware::gte_project5` | `[ ]` |
| **SYS-130** | `GTE_Project6` | `0x80032AB4` | `gte/GTE_Project6.c` | GTE project variant 6: loads matrix, projects, stores result | `system::hardware::gte_project6` | `[ ]` |
| **SYS-131** | `GTE_Project7` | `0x80032CBC` | `gte/GTE_Project7.c` | GTE project variant 7: different matrix source | `system::hardware::gte_project7` | `[ ]` |
| **SYS-132** | `GTE_Project8` | `0x8002DF68` | `gte/GTE_Project8.c` | GTE project variant 8: loads from scratchpad, projects | `system::hardware::gte_project8` | `[ ]` |
| **SYS-133** | `GTE_Project9` | `0x8002AB5C` | `gte/GTE_Project9.c` | GTE project variant 9: loads matrix from entity, projects | `system::hardware::gte_project9` | `[ ]` |
| **SYS-134** | `GTE_ProjectEntity` | `0x8006F138` | `gte/GTE_ProjectEntity.c` | GTE entity projector: loads rotation, applies transform, stores result | `system::hardware::gte_projectentity` | `[ ]` |
| **SYS-135** | `GTE_ProjectEntity2` | `0x8002847C` | `gte/GTE_ProjectEntity2.c` | GTE entity projector variant 2: different register layout | `system::hardware::gte_projectentity2` | `[ ]` |
| **SYS-136** | `GTE_ProjectMain` | `0x8002BC9C` | `gte/GTE_ProjectMain.c` | GTE projection main: full projection pipeline | `system::hardware::gte_projectmain` | `[ ]` |
| **SYS-137** | `GTE_ProjectSprite` | `0x800281EC` | `gte/GTE_ProjectSprite.c` | GTE sprite projector: loads matrix, projects sprite vertices | `system::hardware::gte_projectsprite` | `[ ]` |
| **SYS-138** | `GTE_ProjectSprite1` | `0x80077ACC` | `gte/GTE_ProjectSprite1.c` | GTE sprite projection: sets _DAT_1f800080=1, _DAT_1f800084=4, calls FUN_8007712c | `system::hardware::gte_projectsprite1` | `[ ]` |
| **SYS-139** | `GTE_ProjectSprite2` | `0x8007778C` | `gte/GTE_ProjectSprite2.c` | GTE sprite projection: sets _DAT_1f800080=0, _DAT_1f800084=0, calls FUN_8007712c | `system::hardware::gte_projectsprite2` | `[ ]` |
| **SYS-140** | `GTE_ProjectSprite3` | `0x80077F3C` | `gte/GTE_ProjectSprite3.c` | GTE sprite projection: sets _DAT_1f800080=0, _DAT_1f800084=3, calls FUN_8007712c | `system::hardware::gte_projectsprite3` | `[ ]` |
| **SYS-141** | `GTE_ProjectSprite4` | `0x800777FC` | `gte/GTE_ProjectSprite4.c` | GTE sprite projection: sets _DAT_1f800080=0, _DAT_1f800084=2, calls FUN_8007712c | `system::hardware::gte_projectsprite4` | `[ ]` |
| **SYS-142** | `GTE_ProjectSprite5` | `0x80077870` | `gte/GTE_ProjectSprite5.c` | GTE sprite projection: sets _DAT_1f800080=0, _DAT_1f800084=1, calls FUN_8007712c | `system::hardware::gte_projectsprite5` | `[ ]` |
| **SYS-143** | `GTE_ProjectSprite6` | `0x800778E4` | `gte/GTE_ProjectSprite6.c` | GTE sprite projection: sets _DAT_1f800080=0, _DAT_1f800084=0, calls FUN_8007712c | `system::hardware::gte_projectsprite6` | `[ ]` |
| **SYS-144** | `GTE_ProjectSprite7` | `0x80077958` | `gte/GTE_ProjectSprite7.c` | GTE sprite projection: sets _DAT_1f800080=0, _DAT_1f800084=0, calls FUN_8007712c | `system::hardware::gte_projectsprite7` | `[ ]` |
| **SYS-145** | `GTE_ProjectSprite8` | `0x800779D0` | `gte/GTE_ProjectSprite8.c` | GTE sprite projection: sets _DAT_1f800080=0, _DAT_1f800084=0, calls FUN_8007712c | `system::hardware::gte_projectsprite8` | `[ ]` |
| **SYS-146** | `GTE_ProjectSprite9` | `0x80077A4C` | `gte/GTE_ProjectSprite9.c` | GTE sprite projection variant 9: _DAT_1f800080=1, _DAT_1f800084=0 | `system::hardware::gte_projectsprite9` | `[ ]` |
| **SYS-147** | `GTE_ProjectVertex` | `0x8003F7A0` | `gte/GTE_ProjectVertex.c` | GTE RTPS projection of single vertex: returns screen XY and depth Z | `system::hardware::gte_projectvertex` | `[ ]` |
| **SYS-148** | `GTE_ProjectionInit` | `0x80078610` | `gte/GTE_ProjectionInit.c` | GTE projection init: sets screen offset/scale, identity matrix | `system::hardware::gte_projectioninit` | `[ ]` |
| **SYS-149** | `GTE_RTPS` | `0x8003F7D8` | `gte/GTE_RTPS.c` | GTE RTPS projection: sets cop regs, calls RTPS, reads screen coords | `system::hardware::gte_rtps` | `[ ]` |
| **SYS-150** | `GTE_RotateVectorY` | `0x80085050` | `gte/GTE_RotateVectorY.c` | Subrutina de GTE_RotateVectorY (gte/GTE_RotateVectorY.c) | `system::hardware::gte_rotatevectory` | `[ ]` |
| **SYS-151** | `GTE_SetProjectionDist` | `0x800329E0` | `gte/GTE_SetProjectionDist.c` | Subrutina de GTE_SetProjectionDist (gte/GTE_SetProjectionDist.c) | `system::hardware::gte_setprojectiondist` | `[ ]` |
| **SYS-152** | `GTE_SetReg_D000` | `0x800846F0` | `gte/GTE_SetReg_D000.c` | GTE register set: writes param_1 to COP2 register 0xD000 (SZ0) | `system::hardware::gte_setreg_d000` | `[ ]` |
| **SYS-153** | `GTE_SetScaleZ` | `0x800846D0` | `gte/GTE_SetScaleZ.c` | GTE scale Z setter: sets SZ3=param1<<16, SZ2=param2<<16 via cop control | `system::hardware::gte_setscalez` | `[ ]` |
| **SYS-154** | `GTE_SpriteTransform` | `0x8007712C` | `gte/GTE_SpriteTransform.c` | GTE sprite transform: full vertex transform pipeline | `system::hardware::gte_spritetransform` | `[ ]` |
| **SYS-155** | `GTE_StoreMatrix` | `0x800847B0` | `gte/GTE_StoreMatrix.c` | GTE matrix store: reads GTE regs, stores to param_2 array (+translation) | `system::hardware::gte_storematrix` | `[ ]` |
| **SYS-156** | `GTE_TransformVec` | `0x80084520` | `gte/GTE_TransformVec.c` | GTE vector transform: loads matrix from param_2, transforms param_1 vector | `system::hardware::gte_transformvec` | `[ ]` |
| **SYS-157** | `CD_AdjustCmdByte` | `0x8009A3A4` | `cd/CD_AdjustCmdByte.c` | Adjusts CD command byte: if table[param_1]&1, adds 0x20 to command | `system::hardware::cd_adjustcmdbyte` | `[ ]` |
| **SYS-158** | `CD_AdvanceSeek` | `0x8008C508` | `cd/CD_AdvanceSeek.c` | CD seek advance: increments DAT_800ac2ec by stride, decrements counter | `system::hardware::cd_advanceseek` | `[ ]` |
| **SYS-159** | `CD_AlignDMA` | `0x80097540` | `cd/CD_AlignDMA.c` | CD DMA alignment: divides param by DAT_800ac630, aligns for DMA transfer | `system::hardware::cd_aligndma` | `[ ]` |
| **SYS-160** | `CD_AllocBuffer` | `0x8008CDC0` | `cd/CD_AllocBuffer.c` | CD buffer alloc: assigns 0x20-byte slot from _DAT_80102728 pool | `system::hardware::cd_allocbuffer` | `[ ]` |
| **SYS-161** | `CD_AllocDMA` | `0x800982A0` | `cd/CD_AllocDMA.c` | CD DMA allocator: finds free slot in DAT_800ac66c table, returns index | `system::hardware::cd_allocdma` | `[ ]` |
| **SYS-162** | `CD_CalcSector` | `0x8008A00C` | `cd/CD_CalcSector.c` | CD sector calculator: (offset+0x96)/0x4B = sector, remainder = offset | `system::hardware::cd_calcsector` | `[ ]` |
| **SYS-163** | `CD_CallbackDispatch` | `0x80085C44` | `cd/CD_CallbackDispatch.c` | Dispatches CD event callback via function table at 0x800ABDA0+0x18 | `system::hardware::cd_callbackdispatch` | `[ ]` |
| **SYS-164** | `CD_CallbackDispatch2` | `0x80085CB4` | `cd/CD_CallbackDispatch2.c` | CD callback dispatch variant 2: calls function table at 0x800ABDA4/8 | `system::hardware::cd_callbackdispatch2` | `[ ]` |
| **SYS-165** | `CD_CallbackStub` | `0x80045558` | `cd/CD_CallbackStub.c` | CD event callback stub: calls 0x8008A00C with preset params | `system::hardware::cd_callbackstub` | `[ ]` |
| **SYS-166** | `CD_Cancel` | `0x80089AA8` | `cd/CD_Cancel.c` | Cancels current CD operation via 0x8008B0C8 | `system::hardware::cd_cancel` | `[ ]` |
| **SYS-167** | `CD_CheckDevice` | `0x80098CE0` | `cd/CD_CheckDevice.c` | CD device check: calls FUN_800982a0, sets DAT_800ac59c flag, returns status | `system::hardware::cd_checkdevice` | `[ ]` |
| **SYS-168** | `CD_CheckInit` | `0x80089F88` | `cd/CD_CheckInit.c` | Checks if CD init is complete via 0x8008B620 | `system::hardware::cd_checkinit` | `[ ]` |
| **SYS-169** | `CD_CheckLoaded` | `0x80045580` | `cd/CD_CheckLoaded.c` | Checks if asset is loaded by looking up sector table | `system::hardware::cd_checkloaded` | `[ ]` |
| **SYS-170** | `CD_CheckReady` | `0x80089FA8` | `cd/CD_CheckReady.c` | Checks if CD is ready via 0x8008B720 | `system::hardware::cd_checkready` | `[ ]` |
| **SYS-171** | `CD_CheckSlot` | `0x800962B0` | `cd/CD_CheckSlot.c` | CD slot check: validates param<0x10, checks slot state == 1 | `system::hardware::cd_checkslot` | `[ ]` |
| **SYS-172** | `CD_CheckTimeout` | `0x8008CAFC` | `cd/CD_CheckTimeout.c` | CD timeout check: reads timer, checks against DAT_800ac300+0x4B0, handles timeout | `system::hardware::cd_checktimeout` | `[ ]` |
| **SYS-173** | `CD_CheckTransfer` | `0x80099310` | `cd/CD_CheckTransfer.c` | CD transfer check: validates address range, sets up FIFO via FUN_80097540 | `system::hardware::cd_checktransfer` | `[ ]` |
| **SYS-174** | `CD_ClearBuffer` | `0x8008CFF0` | `cd/CD_ClearBuffer.c` | Clears CD buffer: zeros param_2 entries of 0x20 bytes at DAT_80102728 | `system::hardware::cd_clearbuffer` | `[ ]` |
| **SYS-175** | `CD_ClearFlagCD8` | `0x80096390` | `cd/CD_ClearFlagCD8.c` | CD flag clearer: DAT_80105cd8 = 0 | `system::hardware::cd_clearflagcd8` | `[ ]` |
| **SYS-176** | `CD_Close` | `0x80089A3C` | `cd/CD_Close.c` | CD close/finalize: if param==2 calls FUN_8008b28c, else syncs with retry | `system::hardware::cd_close` | `[ ]` |
| **SYS-177** | `CD_CloseFile` | `0x8008CD40` | `cd/CD_CloseFile.c` | CD file close: dispatches on DAT_800abfdc flag, calls close or event handlers | `system::hardware::cd_closefile` | `[ ]` |
| **SYS-178** | `CD_Cmd1` | `0x80096480` | `cd/CD_Cmd1.c` | CD command wrapper 1: calls FUN_80096590 with callback FUN_800964b4 | `system::hardware::cd_cmd1` | `[ ]` |
| **SYS-179** | `CD_Cmd2` | `0x80096520` | `cd/CD_Cmd2.c` | CD command wrapper 2: calls FUN_80096590 with callback LAB_80096588 + param | `system::hardware::cd_cmd2` | `[ ]` |
| **SYS-180** | `CD_Cmd3` | `0x80096554` | `cd/CD_Cmd3.c` | CD command wrapper 3: calls FUN_80096590 with callback LAB_80096588 + param | `system::hardware::cd_cmd3` | `[ ]` |
| **SYS-181** | `CD_CmdMain` | `0x80096590` | `cd/CD_CmdMain.c` | CD command main: processes CD commands with retry | `system::hardware::cd_cmdmain` | `[ ]` |
| **SYS-182** | `CD_CmdRetry` | `0x80089E1C` | `cd/CD_CmdRetry.c` | CD command with retry: tries cmd up to 3 times with callback fallback | `system::hardware::cd_cmdretry` | `[ ]` |
| **SYS-183** | `CD_Cmd_20` | `0x8008996C` | `cd/CD_Cmd_20.c` | CD command with 0x20: calls BIOS stub with 0xF0000003, 0x20 | `system::hardware::cd_cmd_20` | `[ ]` |
| **SYS-184** | `CD_Cmd_40` | `0x80089994` | `cd/CD_Cmd_40.c` | CD command with 0x40: calls BIOS stub with 0xF0000003, 0x40 | `system::hardware::cd_cmd_40` | `[ ]` |
| **SYS-185** | `CD_Cmd_40b` | `0x800899BC` | `cd/CD_Cmd_40b.c` | CD command with 0x40 variant: same as Cmd_40 | `system::hardware::cd_cmd_40b` | `[ ]` |
| **SYS-186** | `CD_Cmd_CC_CD` | `0x80098DB0` | `cd/CD_Cmd_CC_CD.c` | CD command with codes 0xCC,0xCD: calls FUN_80097e40 | `system::hardware::cd_cmd_cc_cd` | `[ ]` |
| **SYS-187** | `CD_CompareName` | `0x8008BBC8` | `cd/CD_CompareName.c` | Compares two 12-byte CD file names, returns true if match | `system::hardware::cd_comparename` | `[ ]` |
| **SYS-188** | `CD_Control` | `0x8008AC34` | `cd/CD_Control.c` | CD-ROM control command: sends command with parameters, waits for completion | `system::hardware::cd_control` | `[ ]` |
| **SYS-189** | `CD_DMAProcess` | `0x80097A90` | `cd/CD_DMAProcess.c` | CD DMA processor: manages DMA transfer queue | `system::hardware::cd_dmaprocess` | `[ ]` |
| **SYS-190** | `CD_DecodeTime` | `0x8008A110` | `cd/CD_DecodeTime.c` | Decodes BCD time format (mm:ss:ff) to absolute frame count | `system::hardware::cd_decodetime` | `[ ]` |
| **SYS-191** | `CD_Dispatch04` | `0x80085B80` | `cd/CD_Dispatch04.c` | Dispatches CD driver function at table+0x04 | `system::hardware::cd_dispatch04` | `[ ]` |
| **SYS-192** | `CD_Dispatch08` | `0x80085B50` | `cd/CD_Dispatch08.c` | Dispatches CD driver function at table+0x08 | `system::hardware::cd_dispatch08` | `[ ]` |
| **SYS-193** | `CD_Dispatch0C` | `0x80085B20` | `cd/CD_Dispatch0C.c` | Dispatches CD driver function at table+0x0C | `system::hardware::cd_dispatch0c` | `[ ]` |
| **SYS-194** | `CD_Dispatch10` | `0x80085C14` | `cd/CD_Dispatch10.c` | Dispatches CD driver function at table+0x10 | `system::hardware::cd_dispatch10` | `[ ]` |
| **SYS-195** | `CD_Dispatch14` | `0x80085BB0` | `cd/CD_Dispatch14.c` | Dispatches CD driver function at table+0x14 with params | `system::hardware::cd_dispatch14` | `[ ]` |
| **SYS-196** | `CD_Dispatch14_NoParam` | `0x80085BE4` | `cd/CD_Dispatch14_NoParam.c` | Dispatches CD driver function at table+0x14 without params | `system::hardware::cd_dispatch14_noparam` | `[ ]` |
| **SYS-197** | `CD_EventCallback` | `0x8008BBE8` | `cd/CD_EventCallback.c` | CD event callback handler: processes event queue | `system::hardware::cd_eventcallback` | `[ ]` |
| **SYS-198** | `CD_EventHandler` | `0x8008C5D8` | `cd/CD_EventHandler.c` | CD event handler: checks DAT_800abf28, dispatches events | `system::hardware::cd_eventhandler` | `[ ]` |
| **SYS-199** | `CD_EventMain` | `0x8009B0C0` | `cd/CD_EventMain.c` | CD event main: event queue processor (303L) | `system::hardware::cd_eventmain` | `[ ]` |
| **SYS-200** | `CD_EventProcess` | `0x8008BF50` | `cd/CD_EventProcess.c` | CD event processor: checks DAT_800ac2d4, dispatches events | `system::hardware::cd_eventprocess` | `[ ]` |
| **SYS-201** | `CD_FileOpen` | `0x8008B8F0` | `cd/CD_FileOpen.c` | CD file opener: looks up file, opens for reading | `system::hardware::cd_fileopen` | `[ ]` |
| **SYS-202** | `CD_FileRead` | `0x8008C294` | `cd/CD_FileRead.c` | CD file read: sets DAT_800ac318, checks counter, reads | `system::hardware::cd_fileread` | `[ ]` |
| **SYS-203** | `CD_FlushBuffer` | `0x80097D90` | `cd/CD_FlushBuffer.c` | CD buffer flush: iterates DAT_800ac66c, clears active entries | `system::hardware::cd_flushbuffer` | `[ ]` |
| **SYS-204** | `CD_FlushCmd` | `0x8009AF5C` | `cd/CD_FlushCmd.c` | Flushes CD command queue: sends buffered cmds via BIOS stub, resets counter | `system::hardware::cd_flushcmd` | `[ ]` |
| **SYS-205** | `CD_GetByteAt4` | `0x800954E0` | `cd/CD_GetByteAt4.c` | CD byte getter: reads byte at DAT_80105cdc + param*0x10 + 4 | `system::hardware::cd_getbyteat4` | `[ ]` |
| **SYS-206** | `CD_GetCallback` | `0x80086604` | `cd/CD_GetCallback.c` | Returns CD event callback function pointer from 0x800ABE20 | `system::hardware::cd_getcallback` | `[ ]` |
| **SYS-207** | `CD_GetCmdTimeout` | `0x8009A6C0` | `cd/CD_GetCmdTimeout.c` | CD command timeout: looks up table at 0x800ACE75, returns timeout or 9999999 (infinite) | `system::hardware::cd_getcmdtimeout` | `[ ]` |
| **SYS-208** | `CD_GetField` | `0x8009A1D0` | `cd/CD_GetField.c` | CD struct field getter: returns word at DAT_800ac604 + index*0x10 + 0xC | `system::hardware::cd_getfield` | `[ ]` |
| **SYS-209** | `CD_GetMode` | `0x80089A00` | `cd/CD_GetMode.c` | Returns CD mode byte from 0x800ABFC8 | `system::hardware::cd_getmode` | `[ ]` |
| **SYS-210** | `CD_GetParamPtr` | `0x80089A30` | `cd/CD_GetParamPtr.c` | Returns pointer to CD parameter area at 0x800ABFD4 | `system::hardware::cd_getparamptr` | `[ ]` |
| **SYS-211** | `CD_GetReg` | `0x8009CC14` | `cd/CD_GetReg.c` | CD register getter: returns *DAT_800ad098 | `system::hardware::cd_getreg` | `[ ]` |
| **SYS-212** | `CD_GetStatusByte` | `0x80089A10` | `cd/CD_GetStatusByte.c` | Returns CD status byte from 0x800ABFD8 | `system::hardware::cd_getstatusbyte` | `[ ]` |
| **SYS-213** | `CD_GetStatus_2` | `0x8009BBEC` | `cd/CD_GetStatus_2.c` | CD status getter: returns DAT_800acf44 | `system::hardware::cd_getstatus_2` | `[ ]` |
| **SYS-214** | `CD_HandleError` | `0x800964B4` | `cd/CD_HandleError.c` | CD error handler: on FUN_800977c0=-1, sets flag, decrements counter DAT_80105d70 | `system::hardware::cd_handleerror` | `[ ]` |
| **SYS-215** | `CD_Init` | `0x80089F68` | `cd/CD_Init.c` | Initializes CD subsystem via 0x8008B040 | `system::hardware::cd_init` | `[ ]` |
| **SYS-216** | `CD_Init2` | `0x80096A90` | `cd/CD_Init2.c` | CD init variant 2: calls FUN_80096bf0, clears buffer at 0x800AC5EE | `system::hardware::cd_init2` | `[ ]` |
| **SYS-217** | `CD_Init3` | `0x8008B2D8` | `cd/CD_Init3.c` | CD init variant 3: prints debug, calls init funcs, sets flags | `system::hardware::cd_init3` | `[ ]` |
| **SYS-218** | `CD_InitAttempt` | `0x80089930` | `cd/CD_InitAttempt.c` | CD init attempt: tries FUN_8008b2d8 then FUN_8008b19c, returns success bool | `system::hardware::cd_initattempt` | `[ ]` |
| **SYS-219** | `CD_InitBuffer` | `0x8008CCE0` | `cd/CD_InitBuffer.c` | CD buffer init: zeros 4 ptrs at 0x80102704-14, calls CD_ClearBuffer | `system::hardware::cd_initbuffer` | `[ ]` |
| **SYS-220** | `CD_InitCallbacks` | `0x80086738` | `cd/CD_InitCallbacks.c` | Initializes CD callback function pointers at 0x80102444-0x8010244C | `system::hardware::cd_initcallbacks` | `[ ]` |
| **SYS-221** | `CD_InitController` | `0x80086144` | `cd/CD_InitController.c` | CD controller init: sets flag, restores saved state, returns status | `system::hardware::cd_initcontroller` | `[ ]` |
| **SYS-222** | `CD_InitDrive` | `0x8008B040` | `cd/CD_InitDrive.c` | Initializes CD drive hardware: sends config commands | `system::hardware::cd_initdrive` | `[ ]` |
| **SYS-223** | `CD_InitDrive2` | `0x8008B19C` | `cd/CD_InitDrive2.c` | Second stage CD init: sets volume, filter, playback mode | `system::hardware::cd_initdrive2` | `[ ]` |
| **SYS-224** | `CD_InitFileLoad` | `0x8008CE4C` | `cd/CD_InitFileLoad.c` | CD file load init: calls FUN_8008a110, allocates via FUN_8008a00c | `system::hardware::cd_initfileload` | `[ ]` |
| **SYS-225** | `CD_InitIRQ` | `0x80096B78` | `cd/CD_InitIRQ.c` | CD init with IRQ: sets flag, enables IRQ, registers callback FUN_80097030 | `system::hardware::cd_initirq` | `[ ]` |
| **SYS-226** | `CD_InitParams` | `0x8008B620` | `cd/CD_InitParams.c` | CD init params: sets 0x800AC280-2B8 defaults (mode, speed, filter) | `system::hardware::cd_initparams` | `[ ]` |
| **SYS-227** | `CD_InitRead` | `0x80086230` | `cd/CD_InitRead.c` | Initializes CD-ROM read operation: sets up DMA, starts transfer | `system::hardware::cd_initread` | `[ ]` |
| **SYS-228** | `CD_InitSeek` | `0x80086350` | `cd/CD_InitSeek.c` | Initializes CD-ROM seek operation: configures parameters, starts seek | `system::hardware::cd_initseek` | `[ ]` |
| **SYS-229** | `CD_InitSub` | `0x80089FEC` | `cd/CD_InitSub.c` | Initializes CD subsystem via 0x8008B4B8 | `system::hardware::cd_initsub` | `[ ]` |
| **SYS-230** | `CD_InitWithRetry` | `0x800898A0` | `cd/CD_InitWithRetry.c` | CD init with 4 retries: sets callbacks at 0x800ABF24 on success, prints error on fail | `system::hardware::cd_initwithretry` | `[ ]` |
| **SYS-231** | `CD_Interrupt` | `0x80097030` | `cd/CD_Interrupt.c` | CD interrupt handler: checks DAT_800ac654, processes SPU reg, handles DMA | `system::hardware::cd_interrupt` | `[ ]` |
| **SYS-232** | `CD_InterruptHandler` | `0x80085D8C` | `cd/CD_InterruptHandler.c` | CD interrupt handler: reads status, dispatches by event type | `system::hardware::cd_interrupthandler` | `[ ]` |
| **SYS-233** | `CD_IsReady` | `0x80099478` | `cd/CD_IsReady.c` | CD ready check: returns DAT_800ac638 != 1 | `system::hardware::cd_isready` | `[ ]` |
| **SYS-234** | `CD_LoadAsset` | `0x80045258` | `cd/CD_LoadAsset.c` | Loads game asset from CD by ID: uses 0x800ECF58 + 0x800FB170 tables | `system::hardware::cd_loadasset` | `[ ]` |
| **SYS-235** | `CD_LoadChunk` | `0x80045080` | `cd/CD_LoadChunk.c` | Loads data chunk from CD: reads sector table at 0x800BE118 by chunk ID | `system::hardware::cd_loadchunk` | `[ ]` |
| **SYS-236** | `CD_LoadLevelData` | `0x800754F4` | `cd/CD_LoadLevelData.c` | Loads level data segments: CD load + 10 sub-loads via FUN_80075448 with config from overlay header | `system::hardware::cd_loadleveldata` | `[ ]` |
| **SYS-237** | `CD_LoadSectors` | `0x8001DC40` | `cd/CD_LoadSectors.c` | Loads CD sectors to RAM: calculates sector count, aligns to 4-byte boundary | `system::hardware::cd_loadsectors` | `[ ]` |
| **SYS-238** | `CD_LoadSegment` | `0x80075448` | `cd/CD_LoadSegment.c` | CD level segment load: loads param-sized segment into CD buffer, returns offset | `system::hardware::cd_loadsegment` | `[ ]` |
| **SYS-239** | `CD_LoadToRAM` | `0x800753AC` | `cd/CD_LoadToRAM.c` | Loads CD sector data to RAM address from 0x800BE108 + offset | `system::hardware::cd_loadtoram` | `[ ]` |
| **SYS-240** | `CD_Main` | `0x80098330` | `cd/CD_Main.c` | CD main: full CD-ROM command processor | `system::hardware::cd_main` | `[ ]` |
| **SYS-241** | `CD_OpenFile` | `0x8008C1EC` | `cd/CD_OpenFile.c` | Opens file on CD: looks up name, seeks to sector, returns success | `system::hardware::cd_openfile` | `[ ]` |
| **SYS-242** | `CD_PollEvent` | `0x8008BEAC` | `cd/CD_PollEvent.c` | CD event poll: iterates 0x800AC2D4 table, dispatches active event callbacks | `system::hardware::cd_pollevent` | `[ ]` |
| **SYS-243** | `CD_PollSync` | `0x8008B818` | `cd/CD_PollSync.c` | CD poll sync: spins on DAT_800ac280 flag, waits for FUN_8008a190 completion | `system::hardware::cd_pollsync` | `[ ]` |
| **SYS-244** | `CD_ProcessInterrupt` | `0x8008639C` | `cd/CD_ProcessInterrupt.c` | CD interrupt processor: reads DAT_800abdf0 status, dispatches events | `system::hardware::cd_processinterrupt` | `[ ]` |
| **SYS-245** | `CD_QueueCmd` | `0x8009AE60` | `cd/CD_QueueCmd.c` | CD command queue: appends byte to buffer at DAT_800acf08, flushes on full, special cmds 9/10 | `system::hardware::cd_queuecmd` | `[ ]` |
| **SYS-246** | `CD_QueueCmdAndFlush` | `0x8009AF98` | `cd/CD_QueueCmdAndFlush.c` | CD cmd queue + flush: same as QueueCmd but forces flush at end | `system::hardware::cd_queuecmdandflush` | `[ ]` |
| **SYS-247** | `CD_ReadByte` | `0x80095470` | `cd/CD_ReadByte.c` | CD byte read: calls FUN_800962b0, writes result to buffer at DAT_80105cdc+offset+4 | `system::hardware::cd_readbyte` | `[ ]` |
| **SYS-248** | `CD_ReadByteAt1` | `0x800953B0` | `cd/CD_ReadByteAt1.c` | CD byte read at offset+1: same as CD_ReadByte but writes to +1 instead of +4 | `system::hardware::cd_readbyteat1` | `[ ]` |
| **SYS-249** | `CD_ReadMain` | `0x8008A190` | `cd/CD_ReadMain.c` | CD read main: full sector read pipeline | `system::hardware::cd_readmain` | `[ ]` |
| **SYS-250** | `CD_ReadReg` | `0x8009A170` | `cd/CD_ReadReg.c` | CD register read: reads ushort from DAT_800ac604 + param*0x10 | `system::hardware::cd_readreg` | `[ ]` |
| **SYS-251** | `CD_ReadRequest` | `0x8001CE04` | `cd/CD_ReadRequest.c` | CD-ROM read request: initiates read with retry loop via FUN_80089ce8/80089b44 | `system::hardware::cd_readrequest` | `[ ]` |
| **SYS-252** | `CD_ReadSector_2` | `0x8009A1F0` | `cd/CD_ReadSector_2.c` | CD sector reader: reads sector data, handles retry logic | `system::hardware::cd_readsector_2` | `[ ]` |
| **SYS-253** | `CD_ReadSeek` | `0x800753D4` | `cd/CD_ReadSeek.c` | CD read + seek: calls CD_Cmd1 for read, then FUN_80096980 for seek | `system::hardware::cd_readseek` | `[ ]` |
| **SYS-254** | `CD_ReadStart` | `0x8008C7C0` | `cd/CD_ReadStart.c` | CD read start: checks DAT_800abf28 flag, initiates read | `system::hardware::cd_readstart` | `[ ]` |
| **SYS-255** | `CD_ReadWord` | `0x80095420` | `cd/CD_ReadWord.c` | CD word reader: same pattern as ReadByte but reads word from buffer | `system::hardware::cd_readword` | `[ ]` |
| **SYS-256** | `CD_Ready` | `0x8008A96C` | `cd/CD_Ready.c` | CD-ROM ready check: polls CD status with callback processing | `system::hardware::cd_ready` | `[ ]` |
| **SYS-257** | `CD_ReadySimple` | `0x80089B64` | `cd/CD_ReadySimple.c` | Wraps CD_Ready for simple ready check | `system::hardware::cd_readysimple` | `[ ]` |
| **SYS-258** | `CD_RegisterCallback` | `0x80083AD0` | `cd/CD_RegisterCallback.c` | CD event callback register: calls FUN_80085b80(2, FUN_80082fb4) | `system::hardware::cd_registercallback` | `[ ]` |
| **SYS-259** | `CD_ReleaseSlot` | `0x800963D0` | `cd/CD_ReleaseSlot.c` | CD slot release: checks slot < 0x10, calls FUN_80097d90, clears, decrements counter | `system::hardware::cd_releaseslot` | `[ ]` |
| **SYS-260** | `CD_Reset` | `0x8008B0C8` | `cd/CD_Reset.c` | CD reset: cycles DAT_800ac280, waits for bit clear, resets controller | `system::hardware::cd_reset` | `[ ]` |
| **SYS-261** | `CD_ResetCallbacks` | `0x8008B28C` | `cd/CD_ResetCallbacks.c` | Resets CD event/error callbacks and re-inits drive | `system::hardware::cd_resetcallbacks` | `[ ]` |
| **SYS-262** | `CD_ResetController` | `0x800860A4` | `cd/CD_ResetController.c` | CD controller reset: saves state from 0x800ABDA8/C, zeros fields, calls BIOS stub | `system::hardware::cd_resetcontroller` | `[ ]` |
| **SYS-263** | `CD_ResetState` | `0x8009C8E0` | `cd/CD_ResetState.c` | CD state reset: clears CD regs at 0x800AD098, zeros buffers at DAT_800acf54/cfd8 | `system::hardware::cd_resetstate` | `[ ]` |
| **SYS-264** | `CD_ResetWithOption` | `0x8009C620` | `cd/CD_ResetWithOption.c` | CD reset with option: optionally calls FUN_80085b20, then CD_ResetState | `system::hardware::cd_resetwithoption` | `[ ]` |
| **SYS-265** | `CD_SPU_Cmd` | `0x80097E40` | `cd/CD_SPU_Cmd.c` | CD/SPU command: branch on DAT_800ac5f0 flag, selects buffer for transfer | `system::hardware::cd_spu_cmd` | `[ ]` |
| **SYS-266** | `CD_SPU_Cmd2` | `0x80097194` | `cd/CD_SPU_Cmd2.c` | CD SPU command variant 2: sets DAT_800ac654, writes regs | `system::hardware::cd_spu_cmd2` | `[ ]` |
| **SYS-267** | `CD_SPU_Init` | `0x80096BF0` | `cd/CD_SPU_Init.c` | CD SPU initializer: sets SPU RAM config, clears buffers | `system::hardware::cd_spu_init` | `[ ]` |
| **SYS-268** | `CD_SPU_Main` | `0x80099490` | `cd/CD_SPU_Main.c` | CD SPU main: SPU RAM transfer controller | `system::hardware::cd_spu_main` | `[ ]` |
| **SYS-269** | `CD_SPU_Poll` | `0x800998E4` | `cd/CD_SPU_Poll.c` | CD SPU poll: scans DAT_800ac604+0xC table, checks DAT_800ac590 bitmask | `system::hardware::cd_spu_poll` | `[ ]` |
| **SYS-270** | `CD_SPU_Read` | `0x80096E70` | `cd/CD_SPU_Read.c` | CD SPU reader: reads SPU RAM via DAT_800ac604+0x1AE | `system::hardware::cd_spu_read` | `[ ]` |
| **SYS-271** | `CD_SPU_Transfer` | `0x80098DE0` | `cd/CD_SPU_Transfer.c` | CD SPU transfer: checks slot count, initiates DMA transfer | `system::hardware::cd_spu_transfer` | `[ ]` |
| **SYS-272** | `CD_SPU_Transfer2` | `0x80098810` | `cd/CD_SPU_Transfer2.c` | CD SPU transfer variant 2: writes to SPU RAM | `system::hardware::cd_spu_transfer2` | `[ ]` |
| **SYS-273** | `CD_SPU_Write` | `0x80098D30` | `cd/CD_SPU_Write.c` | CD/SPU write: writes param to DAT_800ac604+0x184 if buffer empty or bit 1 | `system::hardware::cd_spu_write` | `[ ]` |
| **SYS-274** | `CD_SPU_Write2` | `0x80098F90` | `cd/CD_SPU_Write2.c` | CD SPU write variant 2: writes to DAT_800ac604+0x1AA | `system::hardware::cd_spu_write2` | `[ ]` |
| **SYS-275** | `CD_SeekCmd` | `0x80096980` | `cd/CD_SeekCmd.c` | CD seek command: validates slot, calls FUN_800963d0 if active | `system::hardware::cd_seekcmd` | `[ ]` |
| **SYS-276** | `CD_SeekSetup` | `0x80085F5C` | `cd/CD_SeekSetup.c` | CD seek setup: configures seek params at 0x800AAD1C, validates | `system::hardware::cd_seeksetup` | `[ ]` |
| **SYS-277** | `CD_SeekToSector` | `0x8001CEB0` | `cd/CD_SeekToSector.c` | CD-ROM seek: moves laser to specific sector number, retries if needed | `system::hardware::cd_seektosector` | `[ ]` |
| **SYS-278** | `CD_SendCmdFlags` | `0x8008CC30` | `cd/CD_SendCmdFlags.c` | CD send command with flags: calls CD_SendCmdRetry2(0xE, data, 0) | `system::hardware::cd_sendcmdflags` | `[ ]` |
| **SYS-279** | `CD_SendCmdRetry` | `0x80089BAC` | `cd/CD_SendCmdRetry.c` | CD command with 3 retries: calls FUN_8008ac34 with fallback, restores callback on fail | `system::hardware::cd_sendcmdretry` | `[ ]` |
| **SYS-280** | `CD_SendCmdRetry2` | `0x80089CE8` | `cd/CD_SendCmdRetry2.c` | CD command retry variant 2: same as SendCmdRetry but 4th param=1 | `system::hardware::cd_sendcmdretry2` | `[ ]` |
| **SYS-281** | `CD_SetCallback` | `0x800865F0` | `cd/CD_SetCallback.c` | Sets CD event callback function pointer at 0x800ABE20 | `system::hardware::cd_setcallback` | `[ ]` |
| **SYS-282** | `CD_SetErrorCallback` | `0x80089B98` | `cd/CD_SetErrorCallback.c` | Sets CD error callback function at 0x800ABFC0 | `system::hardware::cd_seterrorcallback` | `[ ]` |
| **SYS-283** | `CD_SetEvent` | `0x8008C260` | `cd/CD_SetEvent.c` | CD event setter: calls FUN_80089b84 with DAT_800ac30c, zeros DAT_800ac308 | `system::hardware::cd_setevent` | `[ ]` |
| **SYS-284** | `CD_SetEventCallback` | `0x80089B84` | `cd/CD_SetEventCallback.c` | Sets CD event callback function at 0x800ABFBC | `system::hardware::cd_seteventcallback` | `[ ]` |
| **SYS-285** | `CD_SetFlag28` | `0x80096370` | `cd/CD_SetFlag28.c` | CD flag setter: DAT_80105d28 = param_1 | `system::hardware::cd_setflag28` | `[ ]` |
| **SYS-286** | `CD_SetFlagCD8` | `0x80096380` | `cd/CD_SetFlagCD8.c` | CD flag setter: DAT_80105cd8 = 1 | `system::hardware::cd_setflagcd8` | `[ ]` |
| **SYS-287** | `CD_SetMode` | `0x80099370` | `cd/CD_SetMode.c` | CD mode setter: sets DAT_800ac620=0 or 1 based on param, zeros counter | `system::hardware::cd_setmode` | `[ ]` |
| **SYS-288** | `CD_SetParams` | `0x8008D0F0` | `cd/CD_SetParams.c` | CD param setter: stores 3 params at 0x80102720/FC/1C | `system::hardware::cd_setparams` | `[ ]` |
| **SYS-289** | `CD_SetReady` | `0x80099450` | `cd/CD_SetReady.c` | CD ready setter: DAT_800ac638 = (param_1 != 1) | `system::hardware::cd_setready` | `[ ]` |
| **SYS-290** | `CD_SetRegBit` | `0x8009C784` | `cd/CD_SetRegBit.c` | CD register bit set/clear: toggles bit 0x08000000 on param_1 based on param_2 | `system::hardware::cd_setregbit` | `[ ]` |
| **SYS-291** | `CD_SetTimeout` | `0x80085C9C` | `cd/CD_SetTimeout.c` | Sets CD timeout value at 0x800ABDA8, returns previous value | `system::hardware::cd_settimeout` | `[ ]` |
| **SYS-292** | `CD_SetTimerCallback` | `0x80089FC8` | `cd/CD_SetTimerCallback.c` | Sets CD timer callback via 0x80085B80 with mode 3 | `system::hardware::cd_settimercallback` | `[ ]` |
| **SYS-293** | `CD_SetValidatedParam` | `0x800963A0` | `cd/CD_SetValidatedParam.c` | Validated setter: clamps param to [1,0x18), sets DAT_80105cec, returns value or -1 | `system::hardware::cd_setvalidatedparam` | `[ ]` |
| **SYS-294** | `CD_SetupEvent` | `0x80097414` | `cd/CD_SetupEvent.c` | CD event setup: branches on DAT_800ac620 flag, calls FUN_80097194 or FUN_80096e70 | `system::hardware::cd_setupevent` | `[ ]` |
| **SYS-295** | `CD_SetupFIFO` | `0x80097760` | `cd/CD_SetupFIFO.c` | CD FIFO setup: sets param_2=0x40001010, DAT_800ac668=0, configures transfer | `system::hardware::cd_setupfifo` | `[ ]` |
| **SYS-296** | `CD_SetupFileLoad` | `0x8008CEB0` | `cd/CD_SetupFileLoad.c` | CD file load setup: stores 5 params at 0x80102700-18, sets flags | `system::hardware::cd_setupfileload` | `[ ]` |
| **SYS-297** | `CD_SetupTransfer` | `0x80099150` | `cd/CD_SetupTransfer.c` | CD transfer setup: clamps size to 0x7EFF0, calls FUN_80097414, checks flag | `system::hardware::cd_setuptransfer` | `[ ]` |
| **SYS-298** | `CD_Sync` | `0x8008A6EC` | `cd/CD_Sync.c` | CD-ROM sync: waits for CD drive to complete operation with timeout | `system::hardware::cd_sync` | `[ ]` |
| **SYS-299** | `CD_SyncCheck` | `0x800993A0` | `cd/CD_SyncCheck.c` | CD sync/ready: checks flags, calls FUN_80080840, updates DAT_800ac594 | `system::hardware::cd_synccheck` | `[ ]` |
| **SYS-300** | `CD_SyncLoop` | `0x8008C960` | `cd/CD_SyncLoop.c` | CD sync loop: polls DAT_800ac308, waits for completion | `system::hardware::cd_syncloop` | `[ ]` |
| **SYS-301** | `CD_SyncSimple` | `0x80089B44` | `cd/CD_SyncSimple.c` | Wraps CD_Sync for simple sync calls | `system::hardware::cd_syncsimple` | `[ ]` |
| **SYS-302** | `CD_SyncWithTimeout` | `0x8008B4B8` | `cd/CD_SyncWithTimeout.c` | CD sync with timeout: polls timer, prints debug on timeout (0x3C0000 cycles), calls recovery | `system::hardware::cd_syncwithtimeout` | `[ ]` |
| **SYS-303** | `CD_Transfer` | `0x800991B0` | `cd/CD_Transfer.c` | CD data transfer: checks DAT_800ac620, setup DMA + IRQ | `system::hardware::cd_transfer` | `[ ]` |
| **SYS-304** | `CD_TransferCheck` | `0x800977C0` | `cd/CD_TransferCheck.c` | CD transfer checker: validates DAT_800ac594, checks DMA | `system::hardware::cd_transfercheck` | `[ ]` |
| **SYS-305** | `CD_Wrapper` | `0x8009A31C` | `cd/CD_Wrapper.c` | CD wrapper: calls FUN_8009a1f0 (simple dispatch) | `system::hardware::cd_wrapper` | `[ ]` |
| **SYS-306** | `CD_XA_Decode` | `0x80099F70` | `cd/CD_XA_Decode.c` | CD XA audio decoder: computes sample delta, handles ADPCM decode | `system::hardware::cd_xa_decode` | `[ ]` |
| **SYS-307** | `CD_XA_Main` | `0x80099970` | `cd/CD_XA_Main.c` | CD XA audio main: XA-ADPCM decode pipeline | `system::hardware::cd_xa_main` | `[ ]` |
| **SYS-308** | `MDEC_BufferCopy` | `0x8009C6E0` | `mdec/MDEC_BufferCopy.c` | MDEC buffer copy: copies 16 words from param_1 to DAT_800acf58 buffer | `system::hardware::mdec_buffercopy` | `[ ]` |
| **SYS-309** | `MDEC_CalcFrameSize` | `0x80088210` | `mdec/MDEC_CalcFrameSize.c` | Calculates MDEC frame size from header fields (e3, e9, ec) | `system::hardware::mdec_calcframesize` | `[ ]` |
| **SYS-310** | `MDEC_CallbackChain` | `0x80086DB4` | `mdec/MDEC_CallbackChain.c` | MDEC callback chain: iterates ptrs at 0x800ABEC0, calls each in sequence | `system::hardware::mdec_callbackchain` | `[ ]` |
| **SYS-311** | `MDEC_CallbackDispatch` | `0x80087E2C` | `mdec/MDEC_CallbackDispatch.c` | MDEC callback: calls function ptr at 0x800ABE4C, dispatches result via FUN_800887bc | `system::hardware::mdec_callbackdispatch` | `[ ]` |
| **SYS-312** | `MDEC_CallbackDispatch2` | `0x80087E64` | `mdec/MDEC_CallbackDispatch2.c` | MDEC callback variant 2: calls funct ptr + dispatch with 2 params via FUN_80088908 | `system::hardware::mdec_callbackdispatch2` | `[ ]` |
| **SYS-313** | `MDEC_CheckDMA` | `0x80086764` | `mdec/MDEC_CheckDMA.c` | MDEC DMA check: tests DAT_800abe98 flags, calls FUN_80086a80 if active | `system::hardware::mdec_checkdma` | `[ ]` |
| **SYS-314** | `MDEC_CheckState` | `0x800889F4` | `mdec/MDEC_CheckState.c` | MDEC state check: entity[0x53]/[0x46], calls funct ptr at DAT_800abe3c | `system::hardware::mdec_checkstate` | `[ ]` |
| **SYS-315** | `MDEC_CheckStatus` | `0x8009C85C` | `mdec/MDEC_CheckStatus.c` | MDEC status check variant: reads CD_GetReg, extracts status bits | `system::hardware::mdec_checkstatus` | `[ ]` |
| **SYS-316** | `MDEC_ClearFlag` | `0x80087A40` | `mdec/MDEC_ClearFlag.c` | MDEC flag clearer wrapper: calls FUN_8008695c | `system::hardware::mdec_clearflag` | `[ ]` |
| **SYS-317** | `MDEC_Cmd1` | `0x8008DDA0` | `mdec/MDEC_Cmd1.c` | MDEC command 1: calls FUN_8008dc00 with param | `system::hardware::mdec_cmd1` | `[ ]` |
| **SYS-318** | `MDEC_Cmd2` | `0x8008DD7C` | `mdec/MDEC_Cmd2.c` | MDEC command 2: calls FUN_8008dc00 with param (same as Cmd1) | `system::hardware::mdec_cmd2` | `[ ]` |
| **SYS-319** | `MDEC_CmdDecode` | `0x80088A54` | `mdec/MDEC_CmdDecode.c` | Sends MDEC decode command (0x43) with data pointer | `system::hardware::mdec_cmddecode` | `[ ]` |
| **SYS-320** | `MDEC_CmdReset` | `0x80088A74` | `mdec/MDEC_CmdReset.c` | Sends MDEC reset command (0x45), clears pointer | `system::hardware::mdec_cmdreset` | `[ ]` |
| **SYS-321** | `MDEC_CmdSetBS` | `0x80088AE8` | `mdec/MDEC_CmdSetBS.c` | Sends MDEC set bitstream command (0x4B) | `system::hardware::mdec_cmdsetbs` | `[ ]` |
| **SYS-322** | `MDEC_CmdSetIQ` | `0x80088A88` | `mdec/MDEC_CmdSetIQ.c` | Sends MDEC set IQ table command (0x4C) | `system::hardware::mdec_cmdsetiq` | `[ ]` |
| **SYS-323** | `MDEC_CmdSetScale` | `0x80088AA8` | `mdec/MDEC_CmdSetScale.c` | Sends MDEC set scale command (0x46) | `system::hardware::mdec_cmdsetscale` | `[ ]` |
| **SYS-324** | `MDEC_CmdSetSize` | `0x80088AC8` | `mdec/MDEC_CmdSetSize.c` | Sends MDEC set size command (0x47) | `system::hardware::mdec_cmdsetsize` | `[ ]` |
| **SYS-325** | `MDEC_Config` | `0x80086620` | `mdec/MDEC_Config.c` | MDEC configurator: sets DAT_800abe8c/88/70 based on param mode flags | `system::hardware::mdec_config` | `[ ]` |
| **SYS-326** | `MDEC_DMAProcess` | `0x80086EA4` | `mdec/MDEC_DMAProcess.c` | MDEC DMA processor: sets up DMA for MDEC data transfer | `system::hardware::mdec_dmaprocess` | `[ ]` |
| **SYS-327** | `MDEC_DMAStart2` | `0x80086A80` | `mdec/MDEC_DMAStart2.c` | MDEC DMA start variant 2: configures DMA for decode | `system::hardware::mdec_dmastart2` | `[ ]` |
| **SYS-328** | `MDEC_DataDecode` | `0x8008DA58` | `mdec/MDEC_DataDecode.c` | MDEC data decoder: reads bitstream from buffer, dispatches | `system::hardware::mdec_datadecode` | `[ ]` |
| **SYS-329** | `MDEC_DataRead` | `0x800870B4` | `mdec/MDEC_DataRead.c` | MDEC data reader: reads bitstream from entity[0x3C] data | `system::hardware::mdec_dataread` | `[ ]` |
| **SYS-330** | `MDEC_DecodeControl` | `0x800892A4` | `mdec/MDEC_DecodeControl.c` | MDEC decode controller: reads macroblock header, dispatches | `system::hardware::mdec_decodecontrol` | `[ ]` |
| **SYS-331** | `MDEC_DecodeFrame` | `0x80088E88` | `mdec/MDEC_DecodeFrame.c` | MDEC frame decoder: processes full frame, dispatches blocks | `system::hardware::mdec_decodeframe` | `[ ]` |
| **SYS-332** | `MDEC_DecodeMain` | `0x800876A0` | `mdec/MDEC_DecodeMain.c` | MDEC decode main: full decode pipeline controller | `system::hardware::mdec_decodemain` | `[ ]` |
| **SYS-333** | `MDEC_DecodeProcess` | `0x80089194` | `mdec/MDEC_DecodeProcess.c` | MDEC decode processor: reads bitstream at entity[0x3C], processes blocks | `system::hardware::mdec_decodeprocess` | `[ ]` |
| **SYS-334** | `MDEC_DecodeStep` | `0x80089508` | `mdec/MDEC_DecodeStep.c` | MDEC decode step: entity[0x46] state, processes macroblock | `system::hardware::mdec_decodestep` | `[ ]` |
| **SYS-335** | `MDEC_FrameReady` | `0x800867CC` | `mdec/MDEC_FrameReady.c` | MDEC frame ready check: tests DAT_800abe9c flags, sets DAT_800abea0 | `system::hardware::mdec_frameready` | `[ ]` |
| **SYS-336** | `MDEC_GetAndClearFlag` | `0x8008695C` | `mdec/MDEC_GetAndClearFlag.c` | MDEC flag get+clear: returns DAT_800abea0 then sets to 0 | `system::hardware::mdec_getandclearflag` | `[ ]` |
| **SYS-337** | `MDEC_GetParam` | `0x80087CB0` | `mdec/MDEC_GetParam.c` | MDEC param getter: returns entity[0xE9] or entity[0xEC] based on sign | `system::hardware::mdec_getparam` | `[ ]` |
| **SYS-338** | `MDEC_GetStatus` | `0x80087BB8` | `mdec/MDEC_GetStatus.c` | MDEC status getter: returns status byte from entity at offset | `system::hardware::mdec_getstatus` | `[ ]` |
| **SYS-339** | `MDEC_Init` | `0x8009C800` | `mdec/MDEC_Init.c` | MDEC init wrapper: calls FUN_8009ca60 | `system::hardware::mdec_init` | `[ ]` |
| **SYS-340** | `MDEC_InitCallbacks` | `0x80089160` | `mdec/MDEC_InitCallbacks.c` | MDEC callback table init: sets function ptrs at 0x800ABE50/54/58 | `system::hardware::mdec_initcallbacks` | `[ ]` |
| **SYS-341** | `MDEC_InitDecode` | `0x80087EAC` | `mdec/MDEC_InitDecode.c` | Initializes MDEC decode: gets frame buffer, calls setup | `system::hardware::mdec_initdecode` | `[ ]` |
| **SYS-342** | `MDEC_InitDecode2` | `0x80088248` | `mdec/MDEC_InitDecode2.c` | MDEC decode init variant 2: sets frame buffer, calls callback if ready | `system::hardware::mdec_initdecode2` | `[ ]` |
| **SYS-343** | `MDEC_InitHW` | `0x80087A60` | `mdec/MDEC_InitHW.c` | MDEC hardware init: zeros flag, enables IRQ, sets up DMA, calls callbacks | `system::hardware::mdec_inithw` | `[ ]` |
| **SYS-344** | `MDEC_InitHWImpl` | `0x80086970` | `mdec/MDEC_InitHWImpl.c` | MDEC hardware init impl: IRQ enable, DMA setup, callback chain | `system::hardware::mdec_inithwimpl` | `[ ]` |
| **SYS-345** | `MDEC_InitSystem` | `0x80088B00` | `mdec/MDEC_InitSystem.c` | MDEC system init: zeros flags, calls init funcs, sets up DMA | `system::hardware::mdec_initsystem` | `[ ]` |
| **SYS-346** | `MDEC_Main` | `0x8008D110` | `mdec/MDEC_Main.c` | MDEC main: full MDEC decode controller (201L) | `system::hardware::mdec_main` | `[ ]` |
| **SYS-347** | `MDEC_Process` | `0x8008CCB4` | `mdec/MDEC_Process.c` | MDEC process wrapper: calls FUN_8008d110 | `system::hardware::mdec_process` | `[ ]` |
| **SYS-348** | `MDEC_ProcessData` | `0x800875DC` | `mdec/MDEC_ProcessData.c` | MDEC data processor: checks DAT_800abe84, reads data via callback entity[0x3C] | `system::hardware::mdec_processdata` | `[ ]` |
| **SYS-349** | `MDEC_ProcessFrame` | `0x80087530` | `mdec/MDEC_ProcessFrame.c` | MDEC frame processor: calls decode callbacks on entity[0xC] data | `system::hardware::mdec_processframe` | `[ ]` |
| **SYS-350** | `MDEC_QueueCmd` | `0x8008DA2C` | `mdec/MDEC_QueueCmd.c` | MDEC command queue: appends param_2 words to MDEC cmd buffer at param_1 | `system::hardware::mdec_queuecmd` | `[ ]` |
| **SYS-351** | `MDEC_SetFlag` | `0x80089788` | `mdec/MDEC_SetFlag.c` | MDEC flag setter: DAT_800abef0 = 1 if zero | `system::hardware::mdec_setflag` | `[ ]` |
| **SYS-352** | `MDEC_SetFrameBuffer` | `0x80087F00` | `mdec/MDEC_SetFrameBuffer.c` | Sets MDEC frame buffer pointer and status byte | `system::hardware::mdec_setframebuffer` | `[ ]` |
| **SYS-353** | `MDEC_SetParam` | `0x80089620` | `mdec/MDEC_SetParam.c` | MDEC param setter: stores param + scratchpad value at 0x801026E0/E4 | `system::hardware::mdec_setparam` | `[ ]` |
| **SYS-354** | `MDEC_SetParam2` | `0x80087D84` | `mdec/MDEC_SetParam2.c` | MDEC param setter 2: sets entity[0xEA] or entity[0xEB] based on param sign | `system::hardware::mdec_setparam2` | `[ ]` |
| **SYS-355** | `MDEC_SetupCallback` | `0x800887BC` | `mdec/MDEC_SetupCallback.c` | MDEC callback setup: checks ready, sets entity[0x46]=1, assigns 2 callbacks | `system::hardware::mdec_setupcallback` | `[ ]` |
| **SYS-356** | `MDEC_SetupCallback2` | `0x80088908` | `mdec/MDEC_SetupCallback2.c` | MDEC callback setup variant: sets callbacks + entity[0x51/0x52/0x53] params | `system::hardware::mdec_setupcallback2` | `[ ]` |
| **SYS-357** | `MDEC_SetupDecode` | `0x80087AEC` | `mdec/MDEC_SetupDecode.c` | MDEC decode setup: checks frame flags, sets up decode params | `system::hardware::mdec_setupdecode` | `[ ]` |
| **SYS-358** | `MDEC_SetupOut` | `0x8009CA60` | `mdec/MDEC_SetupOut.c` | MDEC output setup: syncs out, sets DMA regs at 0x800AD09C/078/070/074 | `system::hardware::mdec_setupout` | `[ ]` |
| **SYS-359** | `MDEC_SetupTransfer` | `0x8009C9D0` | `mdec/MDEC_SetupTransfer.c` | MDEC transfer setup: syncs in, sets DMA regs at 0x800AD09C-06C | `system::hardware::mdec_setuptransfer` | `[ ]` |
| **SYS-360** | `MDEC_Start` | `0x80087A80` | `mdec/MDEC_Start.c` | MDEC start: disables IRQ, BIOS stubs, enables IRQ | `system::hardware::mdec_start` | `[ ]` |
| **SYS-361** | `MDEC_StartDMA` | `0x80086A3C` | `mdec/MDEC_StartDMA.c` | MDEC DMA start: IRQ disable, BIOS call, IRQ enable | `system::hardware::mdec_startdma` | `[ ]` |
| **SYS-362** | `MDEC_StateMachine` | `0x80087F1C` | `mdec/MDEC_StateMachine.c` | MDEC decoder state machine: state 2=reset, 3=set IQ, 4=set size via entity[0x46] | `system::hardware::mdec_statemachine` | `[ ]` |
| **SYS-363** | `MDEC_StateMachine2` | `0x8008831C` | `mdec/MDEC_StateMachine2.c` | MDEC state machine variant 2: entity[0x46] state 3/4 calls MDEC funcs | `system::hardware::mdec_statemachine2` | `[ ]` |
| **SYS-364** | `MDEC_StateMachine3` | `0x80087FA0` | `mdec/MDEC_StateMachine3.c` | MDEC state machine variant 3: entity[0x46]=3/4 states | `system::hardware::mdec_statemachine3` | `[ ]` |
| **SYS-365** | `MDEC_SwapAllBuffers` | `0x80088CC8` | `mdec/MDEC_SwapAllBuffers.c` | MDEC buffer swap loop: iterates 0xF0-stride buffers, swaps cmds until all done | `system::hardware::mdec_swapallbuffers` | `[ ]` |
| **SYS-366** | `MDEC_SwapCommand` | `0x80088DBC` | `mdec/MDEC_SwapCommand.c` | Swaps MDEC command bytes: saves 0x37 to 0x38, clears 0x37 | `system::hardware::mdec_swapcommand` | `[ ]` |
| **SYS-367** | `MDEC_SyncDispatch` | `0x8009C820` | `mdec/MDEC_SyncDispatch.c` | MDEC sync dispatch: param=0 calls SyncOut, else calls SyncIn (swapped) | `system::hardware::mdec_syncdispatch` | `[ ]` |
| **SYS-368** | `MDEC_SyncIn` | `0x8009CAEC` | `mdec/MDEC_SyncIn.c` | MDEC input sync: polls bit 0x20000000 with timeout, calls timeout error on fail | `system::hardware::mdec_syncin` | `[ ]` |
| **SYS-369** | `MDEC_SyncOut` | `0x8009CB80` | `mdec/MDEC_SyncOut.c` | MDEC output sync: polls bit 0x1000000 with timeout, calls timeout error on fail | `system::hardware::mdec_syncout` | `[ ]` |
| **SYS-370** | `MDEC_WaitDMA` | `0x8008732C` | `mdec/MDEC_WaitDMA.c` | MDEC DMA wait: polls DAT_800abe9c word[4] bit until clear, checks timeout | `system::hardware::mdec_waitdma` | `[ ]` |
| **SYS-371** | `MDEC_WaitReady` | `0x800873BC` | `mdec/MDEC_WaitReady.c` | MDEC busy-wait: polls bit 1 at 0x800ABE9C+4 until set | `system::hardware::mdec_waitready` | `[ ]` |
| **SYS-372** | `MDEC_WaitVSync` | `0x80089640` | `mdec/MDEC_WaitVSync.c` | MDEC VSync wait: polls _DAT_1f801120 vs _DAT_801026e0, handles timeout | `system::hardware::mdec_waitvsync` | `[ ]` |
| **SYS-373** | `Mem_Compare` | `0x8009A340` | `memory/Mem_Compare.c` | Memory compare: returns 0 if first param_2 bytes match, else difference | `system::hardware::mem_compare` | `[ ]` |
| **SYS-374** | `Mem_Copy` | `0x8009A3E0` | `memory/Mem_Copy.c` | Memory copy: byte-by-byte memcpy, returns destination pointer | `system::hardware::mem_copy` | `[ ]` |
| **SYS-375** | `Mem_CopyN` | `0x8009AE10` | `memory/Mem_CopyN.c` | Memory copy N bytes: strncpy-like, copies up to param_3 bytes from param_2 to param_1 | `system::hardware::mem_copyn` | `[ ]` |
| **SYS-376** | `Mem_Move` | `0x8009B940` | `memory/Mem_Move.c` | Memory move: copies up to param_3 bytes from param_2 to param_1 (non-overlapping) | `system::hardware::mem_move` | `[ ]` |
| **SYS-377** | `Mem_Set_2` | `0x80083AF8` | `memory/Mem_Set_2.c` | Memory set: fills param_3 bytes with value param_2 starting at param_1 | `system::hardware::mem_set_2` | `[ ]` |
| **SYS-378** | `Mem_Zero` | `0x800861BC` | `memory/Mem_Zero.c` | Memory zero: memset param_2 bytes to 0 starting at param_1 | `system::hardware::mem_zero` | `[ ]` |
| **SYS-379** | `Mem_Zero2` | `0x80086320` | `memory/Mem_Zero2.c` | Memory zero variant 2: memset to 0 (duplicate) | `system::hardware::mem_zero2` | `[ ]` |
| **SYS-380** | `Mem_Zero3` | `0x800865C8` | `memory/Mem_Zero3.c` | Memory zero variant 3: memset to 0 (duplicate) | `system::hardware::mem_zero3` | `[ ]` |
| **SYS-381** | `Texture_Decompress` | `0x80044D8C` | `texture/Texture_Decompress.c` | Texture decompressor: LZ-like with 8-slot ring buffer. Byte format: 5-bit count + 3-bit mode | `system::hardware::texture_decompress` | `[ ]` |
| **SYS-382** | `Texture_LoadData` | `0x800450BC` | `texture/Texture_LoadData.c` | Texture data load: DMA transfer from 0x800A3ED8 table, switches on param_2 mode | `system::hardware::texture_loaddata` | `[ ]` |
| **SYS-383** | `Texture_LoadPack` | `0x80044E84` | `texture/Texture_LoadPack.c` | Loads a texture pack: iterates textures, decompresses, uploads to VRAM | `system::hardware::texture_loadpack` | `[ ]` |
| **SYS-384** | `Texture_LoadUI` | `0x80067DA8` | `texture/Texture_LoadUI.c` | Loads UI textures to VRAM pages based on game state (3 variants) | `system::hardware::texture_loadui` | `[ ]` |
| **SYS-385** | `Texture_Process` | `0x80044F58` | `texture/Texture_Process.c` | Texture processor: reads texture flags, dispatches upload/decode | `system::hardware::texture_process` | `[ ]` |
| **SYS-386** | `Texture_TransferToVRAM` | `0x80044CD4` | `texture/Texture_TransferToVRAM.c` | Sets up VRAM texture transfer: callback setup, address calc, event trigger | `system::hardware::texture_transfertovram` | `[ ]` |
| **SYS-387** | `Texture_Upload` | `0x800452C0` | `texture/Texture_Upload.c` | Texture uploader: sends texture data to VRAM via DMA | `system::hardware::texture_upload` | `[ ]` |
| **SYS-388** | `Texture_UploadVRAM` | `0x8004514C` | `texture/Texture_UploadVRAM.c` | Texture VRAM upload: DMA transfer from 0x80157000 to VRAM, calls FUN_80044f58 | `system::hardware::texture_uploadvram` | `[ ]` |
| **SYS-389** | `Input_InitSystem` | `0x80074BC4` | `input/Input_InitSystem.c` | Initializes input/pad system: resets flag, calls FUN_8001cf2c, FUN_80074b44, FUN_80074e48 | `system::hardware::input_initsystem` | `[ ]` |
| **SYS-390** | `Pad_InitConfig` | `0x8007B2C0` | `input/Pad_InitConfig.c` | Pad config init: sets scratchpad input flags 0x8000/4000/2000/1000 based on param | `system::hardware::pad_initconfig` | `[ ]` |
| **SYS-391** | `Pad_InitReset` | `0x8001CF2C` | `input/Pad_InitReset.c` | Controller init/reset: resets pad state, waits for acknowledge from hardware | `system::hardware::pad_initreset` | `[ ]` |
| **SYS-392** | `Pad_Init_2` | `0x8001CBA8` | `input/Pad_Init_2.c` | Pad/controller init: sets up input config, handles 0xFF default case | `system::hardware::pad_init_2` | `[ ]` |
| **SYS-393** | `Pad_Update` | `0x8001D7C4` | `input/Pad_Update.c` | Pad/input updater: checks pad type, applies rumble/button flags | `system::hardware::pad_update` | `[ ]` |
| **SYS-394** | `Math_ApproachAngle_2` | `0x800776F8` | `math/Math_ApproachAngle_2.c` | Angle approach: steps param_1 toward param_2 by ±param_3, handles wrap | `system::hardware::math_approachangle_2` | `[ ]` |
| **SYS-395** | `Math_Atan` | `0x80084A80` | `math/Math_Atan.c` | Math arctangent: uses lookup table, handles multiple quadrants | `system::hardware::math_atan` | `[ ]` |
| **SYS-396** | `Math_Atan2` | `0x80085690` | `math/Math_Atan2.c` | Arctangent using lookup table at 0x800AA490 | `system::hardware::math_atan2` | `[ ]` |
| **SYS-397** | `Math_Atan2_2` | `0x80084EB0` | `math/Math_Atan2_2.c` | Math atan2 variant 2: uses table at 0x800A6490 for negative inputs | `system::hardware::math_atan2_2` | `[ ]` |
| **SYS-398** | `Math_Atan2_3` | `0x80084D10` | `math/Math_Atan2_3.c` | Math atan2 variant 3: uses table at 0x800A6490, different quadrant handling | `system::hardware::math_atan2_3` | `[ ]` |
| **SYS-399** | `Math_CalcAngle2D` | `0x800782B0` | `math/Math_CalcAngle2D.c` | Calculates angle between two 2D points using Math_Atan2 | `system::hardware::math_calcangle2d` | `[ ]` |
| **SYS-400** | `Math_Clamp` | `0x8006CE74` | `math/Math_Clamp.c` | Math clamp: clamps value to range [-param2, +param2] | `system::hardware::math_clamp` | `[ ]` |
| **SYS-401** | `Math_CompareAngle` | `0x80077768` | `math/Math_CompareAngle.c` | Angle comparison: checks if (a-b-0x400)&0xFFF is in range, with direction flag | `system::hardware::math_compareangle` | `[ ]` |
| **SYS-402** | `Math_Cos` | `0x80083E80` | `math/Math_Cos.c` | Subrutina de Math_Cos (math/Math_Cos.c) | `system::hardware::math_cos` | `[ ]` |
| **SYS-403** | `Math_CosGTE` | `0x80083F50` | `math/Math_CosGTE.c` | Math cos via GTE: piecewise cosine from table 0x800A5AF0 using GTE coprocessor | `system::hardware::math_cosgte` | `[ ]` |
| **SYS-404** | `Math_Div8Round` | `0x8004D7EC` | `math/Math_Div8Round.c` | Divide by 8 with rounding: (param+7)>>3 + param | `system::hardware::math_div8round` | `[ ]` |
| **SYS-405** | `Math_InitVec3` | `0x8007B2AC` | `math/Math_InitVec3.c` | Initializes 3D vector: zeros XY, sets Z=0x1000 (default scale) | `system::hardware::math_initvec3` | `[ ]` |
| **SYS-406** | `Math_Lerp` | `0x80070F90` | `math/Math_Lerp.c` | Math linear interpolate: computes (a-b)*scale, returns interpolated value | `system::hardware::math_lerp` | `[ ]` |
| **SYS-407** | `Math_Random` | `0x8009A450` | `math/Math_Random.c` | LCG pseudo-random number generator: seed=seed*0x41c64e6d+0x3039, returns high 16 bits | `system::hardware::math_random` | `[ ]` |
| **SYS-408** | `Math_RandomChance` | `0x80032A88` | `math/Math_RandomChance.c` | Random probability check: returns random value shifted by N bits (1 in 2^N chance) | `system::hardware::math_randomchance` | `[ ]` |
| **SYS-409** | `Math_RandomCurved` | `0x80070698` | `math/Math_RandomCurved.c` | Curved random: r = (rand() & (n-1))^2 / n with random sign, for biased distribution | `system::hardware::math_randomcurved` | `[ ]` |
| **SYS-410** | `Math_RandomRange` | `0x80032A44` | `math/Math_RandomRange.c` | Random integer in range [min, max) using LCG generator | `system::hardware::math_randomrange` | `[ ]` |
| **SYS-411** | `Math_Sin` | `0x80083EBC` | `math/Math_Sin.c` | Math sin lookup: piecewise sin from table at 0x800A5AF0, handles quadrants | `system::hardware::math_sin` | `[ ]` |
| **SYS-412** | `Math_Sin2` | `0x800851F0` | `math/Math_Sin2.c` | Math sin variant 2: different table lookup path | `system::hardware::math_sin2` | `[ ]` |
| **SYS-413** | `Math_Sqrt` | `0x80077FB0` | `math/Math_Sqrt.c` | Integer square root via binary search algorithm | `system::hardware::math_sqrt` | `[ ]` |
| **SYS-414** | `Math_SqrtGTE` | `0x80084080` | `math/Math_SqrtGTE.c` | Math sqrt via GTE: sets GTE reg, reads result, handles special case 0x20 | `system::hardware::math_sqrtgte` | `[ ]` |
| **SYS-415** | `Engine_DispatchInit` | `0x8006C77C` | `engine/Engine_DispatchInit.c` | Level-specific init dispatch from function table at 0x800A4AF8 | `system::hardware::engine_dispatchinit` | `[ ]` |
| **SYS-416** | `Engine_DispatchInit2` | `0x8006C7C4` | `engine/Engine_DispatchInit2.c` | Second level init dispatch from function table at 0x800A4B50 | `system::hardware::engine_dispatchinit2` | `[ ]` |
| **SYS-417** | `Engine_DispatchLevel` | `0x80022A80` | `engine/Engine_DispatchLevel.c` | Dispatches level-specific update function from table at 0x8009D1D4 by game state | `system::hardware::engine_dispatchlevel` | `[ ]` |
| **SYS-418** | `Engine_DispatchLevelDraw` | `0x80024CF4` | `engine/Engine_DispatchLevelDraw.c` | Dispatches level-specific draw function from table at 0x8009D22C by game state | `system::hardware::engine_dispatchleveldraw` | `[ ]` |
| **SYS-419** | `Engine_DispatchOverlay` | `0x80074F24` | `engine/Engine_DispatchOverlay.c` | Overlay dispatcher: uses game state, looks up overlay ID from tables at 0x800A4F50/68 | audio::AudioPlayer (BGM Track 04_01) | [x] |
| **SYS-420** | `Engine_DispatchStateUpdate` | `0x8003D0BC` | `engine/Engine_DispatchStateUpdate.c` | Subrutina de Engine_DispatchStateUpdate (engine/Engine_DispatchStateUpdate.c) | `system::hardware::engine_dispatchstateupdate` | `[ ]` |
| **SYS-421** | `Engine_DrawPool4_Type1` | `0x80025744` | `engine/Engine_DrawPool4_Type1.c` | Draws Pool 4 entity using FUN_8007e1b8 | `system::hardware::engine_drawpool4_type1` | `[ ]` |
| **SYS-422** | `Engine_DrawPool4_Type2` | `0x80025934` | `engine/Engine_DrawPool4_Type2.c` | Draws Pool 4 entity using FUN_8007e6dc | `system::hardware::engine_drawpool4_type2` | `[ ]` |
| **SYS-423** | `Engine_DrawPool4_Type3` | `0x80025B78` | `engine/Engine_DrawPool4_Type3.c` | Draws Pool 4 entity using FUN_8007e938 (special primitive) | `system::hardware::engine_drawpool4_type3` | `[ ]` |
| **SYS-424** | `Engine_ExecuteGameLoop` | `0x8003F9A8` | `engine/Engine_ExecuteGameLoop.c` | Subrutina de Engine_ExecuteGameLoop (engine/Engine_ExecuteGameLoop.c) | `system::hardware::engine_executegameloop` | `[ ]` |
| **SYS-425** | `Engine_HandleState` | `0x8003DF04` | `engine/Engine_HandleState.c` | Subrutina de Engine_HandleState (engine/Engine_HandleState.c) | `system::hardware::engine_handlestate` | `[ ]` |
| **SYS-426** | `Engine_InitEntity` | `0x800798F8` | `engine/Engine_InitEntity.c` | Engine entity initializer: inits pools, clears lists | `system::hardware::engine_initentity` | `[ ]` |
| **SYS-427** | `Engine_InitPool` | `0x8007B18C` | `engine/Engine_InitPool.c` | Engine pool initializer: calls init funcs, clears entity pools | `system::hardware::engine_initpool` | `[ ]` |
| **SYS-428** | `Engine_InitState` | `0x80079464` | `engine/Engine_InitState.c` | Engine state init: resets frame counter, sets globals, zeros sprite flags | `system::hardware::engine_initstate` | `[ ]` |
| **SYS-429** | `Engine_LoadOverlay` | `0x80075024` | `engine/Engine_LoadOverlay.c` | Simple overlay loader: param=5 -> 0x13, else 0x14, calls Sys_OverlayDispatch | `system::hardware::engine_loadoverlay` | `[ ]` |
| **SYS-430** | `Engine_LoadOverlayEntry` | `0x8001D71C` | `engine/Engine_LoadOverlayEntry.c` | Loads overlay by index: indexes tables at 0x8009D110, checks pad flag, calls load | `system::hardware::engine_loadoverlayentry` | `[ ]` |
| **SYS-431** | `Engine_Loop` | `0x8003F898` | `engine/Engine_Loop.c` | Engine main loop: processes events, updates state, calls subsystems | `system::hardware::engine_loop` | `[ ]` |
| **SYS-432** | `Engine_Main` | `0x8003EBE0` | `engine/Engine_Main.c` | Engine main loop: processes frame, updates subsystems, draws | `system::hardware::engine_main` | `[ ]` |
| **SYS-433** | `Engine_OverlayCall` | `0x8007BE18` | `engine/Engine_OverlayCall.c` | Engine overlay call: switch on _DAT_1f800138[0x50], calls overlay funcs | `system::hardware::engine_overlaycall` | `[ ]` |
| **SYS-434** | `Engine_OverlayLoad` | `0x8001D41C` | `engine/Engine_OverlayLoad.c` | Engine overlay loader: switch on param, loads overlays | `system::hardware::engine_overlayload` | `[ ]` |
| **SYS-435** | `Engine_PoolUpdate` | `0x80025588` | `engine/Engine_PoolUpdate.c` | Engine pool updater: checks DAT_800ed05a, updates pools | `system::hardware::engine_poolupdate` | `[ ]` |
| **SYS-436** | `Engine_Render3DSprites` | `0x8003F024` | `engine/Engine_Render3DSprites.c` | Iterates array at 0x800ec188 and renders 3D sprites via GPU_Render3DSprite | `system::hardware::engine_render3dsprites` | `[ ]` |
| **SYS-437** | `Engine_RenderCheck` | `0x8005229C` | `engine/Engine_RenderCheck.c` | Engine render check: validates sprite buffer, inits MDEC | `system::hardware::engine_rendercheck` | `[ ]` |
| **SYS-438** | `Engine_ResetState` | `0x80050A0C` | `engine/Engine_ResetState.c` | Engine state reset: zeros 5 globals, sets DAT_1f800235=2 | `system::hardware::engine_resetstate` | `[ ]` |
| **SYS-439** | `Engine_ResetStateBuffer` | `0x8007982C` | `engine/Engine_ResetStateBuffer.c` | Subrutina de Engine_ResetStateBuffer (engine/Engine_ResetStateBuffer.c) | `system::hardware::engine_resetstatebuffer` | `[ ]` |
| **SYS-440** | `Engine_Update2` | `0x8003E030` | `engine/Engine_Update2.c` | Engine update variant 2: checks DAT_800a3b0c, updates subsystems | `system::hardware::engine_update2` | `[ ]` |
| **SYS-441** | `Engine_UpdateAll` | `0x8003FA44` | `engine/Engine_UpdateAll.c` | Main update: runs all entity loops (active, bg, player, obj, npc) + FX update | `system::hardware::engine_updateall` | `[ ]` |
| **SYS-442** | `Engine_UpdateEntities` | `0x8003FA1C` | `engine/Engine_UpdateEntities.c` | Calls EntityLoop_Player then EntityLoop_Active for entity updates | `system::hardware::engine_updateentities` | `[ ]` |
| **SYS-443** | `Engine_UpdateInputState` | `0x80016598` | `engine/Engine_UpdateInputState.c` | Subrutina de Engine_UpdateInputState (engine/Engine_UpdateInputState.c) | `system::hardware::engine_updateinputstate` | `[ ]` |
| **SYS-444** | `Engine_UpdateMain` | `0x80038A00` | `engine/Engine_UpdateMain.c` | Engine update main: full frame update pipeline | `system::hardware::engine_updatemain` | `[ ]` |
| **SYS-445** | `Engine_UpdatePool4` | `0x80025D98` | `engine/Engine_UpdatePool4.c` | Updates and draws entities in Pool 4 (camera/HUD), calls draw variants | `system::hardware::engine_updatepool4` | `[ ]` |
| **SYS-446** | `Engine_UpdateSprites` | `0x800788AC` | `engine/Engine_UpdateSprites.c` | Engine sprite update: checks DAT_1f80019a flag, decrements counter, updates globals | `system::hardware::engine_updatesprites` | `[ ]` |
| **SYS-447** | `BIOS_CRC` | `0x8009C3F4` | `system/BIOS_CRC.c` | BIOS CRC/checksum: computes 0x20-byte blocks, compares | `system::hardware::bios_crc` | `[ ]` |
| **SYS-448** | `BIOS_CallA0` | `0x800861E8` | `system/BIOS_CallA0.c` | BIOS call stub: jumps to 0xA0 | `system::hardware::bios_calla0` | `[ ]` |
| **SYS-449** | `BIOS_CallA0_2` | `0x800858F0` | `system/BIOS_CallA0_2.c` | BIOS call stub: jumps to 0xA0 | `system::hardware::bios_calla0_2` | `[ ]` |
| **SYS-450** | `BIOS_CallC0` | `0x80085B10` | `system/BIOS_CallC0.c` | BIOS call stub: jumps to 0xC0 | `system::hardware::bios_callc0` | `[ ]` |
| **SYS-451** | `BIOS_CallIndirect` | `0x8009BF20` | `system/BIOS_CallIndirect.c` | BIOS indirect call: calls function ptr at DAT_80105f30 | `system::hardware::bios_callindirect` | `[ ]` |
| **SYS-452** | `BIOS_CallIndirect2` | `0x8009BF34` | `system/BIOS_CallIndirect2.c` | BIOS indirect call 2: calls function ptr at DAT_80105f34 | `system::hardware::bios_callindirect2` | `[ ]` |
| **SYS-453** | `BIOS_CopyData` | `0x8009C18C` | `system/BIOS_CopyData.c` | BIOS data copy: copies data from DAT_8009c0e4 to BIOS struct+0x9C8 | `system::hardware::bios_copydata` | `[ ]` |
| **SYS-454** | `BIOS_CopyData2` | `0x8009C1FC` | `system/BIOS_CopyData2.c` | BIOS data copy 2: copies words from DAT_8009c060 to DAT_0000df80 | `system::hardware::bios_copydata2` | `[ ]` |
| **SYS-455** | `BIOS_CopyToEvent` | `0x8009C230` | `system/BIOS_CopyToEvent.c` | BIOS copy: copies data from DAT_8009c2a0 to BIOS struct+0x70, calls finish functions | `system::hardware::bios_copytoevent` | `[ ]` |
| **SYS-456** | `BIOS_Delay` | `0x8009BE34` | `system/BIOS_Delay.c` | BIOS delay: spins 9 iterations, zeros MDEC word, returns 0 | `system::hardware::bios_delay` | `[ ]` |
| **SYS-457** | `BIOS_EnterCritical` | `0x80080820` | `system/BIOS_EnterCritical.c` | BIOS call stub: jumps to 0xA0 (EnterCriticalSection) | `system::hardware::bios_entercritical` | `[ ]` |
| **SYS-458** | `BIOS_Handler` | `0x8009BA10` | `system/BIOS_Handler.c` | BIOS exception handler: saves all registers to stack, dispatches | `system::hardware::bios_handler` | `[ ]` |
| **SYS-459** | `BIOS_InitIRQ` | `0x8009BB10` | `system/BIOS_InitIRQ.c` | BIOS IRQ init: calls BIOS_B0, IRQ off, checks CD status, enables | `system::hardware::bios_initirq` | `[ ]` |
| **SYS-460** | `BIOS_InitSeq` | `0x8009BD1C` | `system/BIOS_InitSeq.c` | BIOS init sequence: calls BIOS_B0, BIOS_B0(0), getter, returns 1 | `system::hardware::bios_initseq` | `[ ]` |
| **SYS-461** | `BIOS_InitSequence2` | `0x8009BD4C` | `system/BIOS_InitSequence2.c` | BIOS init sequence 2: calls indirect + BIOS_B0 + init + clears global | `system::hardware::bios_initsequence2` | `[ ]` |
| **SYS-462** | `BIOS_MDECInit` | `0x8009BDFC` | `system/BIOS_MDECInit.c` | BIOS MDEC init: disables IRQ, calls BIOS stub, enables IRQ | `system::hardware::bios_mdecinit` | `[ ]` |
| **SYS-463** | `BIOS_MDECSetup` | `0x8009BD84` | `system/BIOS_MDECSetup.c` | BIOS MDEC setup: IRQ off, sets MDEC callbacks at 0x80105F1C/20, IRQ on | `system::hardware::bios_mdecsetup` | `[ ]` |
| **SYS-464** | `BIOS_MemTest` | `0x8009C2B0` | `system/BIOS_MemTest.c` | BIOS memory test: fills 128-byte buffer, validates pattern | `system::hardware::bios_memtest` | `[ ]` |
| **SYS-465** | `BIOS_ResetRegion` | `0x8009BF48` | `system/BIOS_ResetRegion.c` | BIOS reset: zeros 0xB words at BIOS struct+0x594, calls FUN_800858f0 | `system::hardware::bios_resetregion` | `[ ]` |
| **SYS-466** | `BIOS_Seq2` | `0x8009BBB4` | `system/BIOS_Seq2.c` | BIOS sequence: calls BIOS_B0 stub then FUN_8009c230 | `system::hardware::bios_seq2` | `[ ]` |
| **SYS-467** | `BIOS_Seq3` | `0x8009BB7C` | `system/BIOS_Seq3.c` | BIOS sequence 3: disable IRQ, BIOS_B0, BIOS_B0(0), enable IRQ | `system::hardware::bios_seq3` | `[ ]` |
| **SYS-468** | `BIOS_Seq4` | `0x8009BBFC` | `system/BIOS_Seq4.c` | BIOS sequence 4: BIOS_ZeroRegion + IRQ off + BIOS_ResetRegion + IRQ on + B0 + MDEC init | `system::hardware::bios_seq4` | `[ ]` |
| **SYS-469** | `BIOS_Seq5` | `0x8009BC8C` | `system/BIOS_Seq5.c` | BIOS sequence 5: same as Seq4 pattern with different MDEC setup call | `system::hardware::bios_seq5` | `[ ]` |
| **SYS-470** | `BIOS_SetupEvent` | `0x8009C0F8` | `system/BIOS_SetupEvent.c` | BIOS event setup: copies 5 words from DAT_8009c0d0 to computed BIOS address | `system::hardware::bios_setupevent` | `[ ]` |
| **SYS-471** | `BIOS_Syscall0` | `0x80080890` | `system/BIOS_Syscall0.c` | BIOS syscall wrapper: syscall(0) | `system::hardware::bios_syscall0` | `[ ]` |
| **SYS-472** | `BIOS_Syscall0_2` | `0x800808A0` | `system/BIOS_Syscall0_2.c` | BIOS syscall wrapper: syscall(0) | `system::hardware::bios_syscall0_2` | `[ ]` |
| **SYS-473** | `BIOS_Syscall_A0_80083B20` | `0x80083B20` | `system/BIOS_Syscall_A0_80083B20.c` | BIOS syscall 0xA0 (SetRCnt) stub | `system::hardware::bios_syscall_a0_80083b20` | `[ ]` |
| **SYS-474** | `BIOS_Syscall_B0_80080830` | `0x80080830` | `system/BIOS_Syscall_B0_80080830.c` | BIOS syscall 0xB0 (_96_remove) stub | `system::hardware::bios_syscall_b0_80080830` | `[ ]` |
| **SYS-475** | `BIOS_Syscall_B0_80080840` | `0x80080840` | `system/BIOS_Syscall_B0_80080840.c` | BIOS syscall 0xB0 (_96_remove) stub | `system::hardware::bios_syscall_b0_80080840` | `[ ]` |
| **SYS-476** | `BIOS_Syscall_B0_80080850` | `0x80080850` | `system/BIOS_Syscall_B0_80080850.c` | BIOS syscall 0xB0 (_96_remove) stub | `system::hardware::bios_syscall_b0_80080850` | `[ ]` |
| **SYS-477** | `BIOS_Syscall_B0_80080860` | `0x80080860` | `system/BIOS_Syscall_B0_80080860.c` | BIOS syscall 0xB0 (_96_remove) stub | `system::hardware::bios_syscall_b0_80080860` | `[ ]` |
| **SYS-478** | `BIOS_Syscall_B0_80080870` | `0x80080870` | `system/BIOS_Syscall_B0_80080870.c` | BIOS syscall 0xB0 (_96_remove) stub | `system::hardware::bios_syscall_b0_80080870` | `[ ]` |
| **SYS-479** | `BIOS_Syscall_B0_80080880` | `0x80080880` | `system/BIOS_Syscall_B0_80080880.c` | BIOS syscall 0xB0 (_96_remove) stub | `system::hardware::bios_syscall_b0_80080880` | `[ ]` |
| **SYS-480** | `BIOS_Syscall_B0_800808E0` | `0x800808E0` | `system/BIOS_Syscall_B0_800808E0.c` | BIOS syscall 0xB0 (_96_remove) stub | `system::hardware::bios_syscall_b0_800808e0` | `[ ]` |
| **SYS-481** | `BIOS_Syscall_B0_80080920` | `0x80080920` | `system/BIOS_Syscall_B0_80080920.c` | BIOS syscall 0xB0 (_96_remove) stub | `system::hardware::bios_syscall_b0_80080920` | `[ ]` |
| **SYS-482** | `BIOS_Syscall_B0_80080BE0` | `0x80080BE0` | `system/BIOS_Syscall_B0_80080BE0.c` | BIOS syscall 0xB0 (_96_remove) stub | `system::hardware::bios_syscall_b0_80080be0` | `[ ]` |
| **SYS-483** | `BIOS_Syscall_B0_80086200` | `0x80086200` | `system/BIOS_Syscall_B0_80086200.c` | BIOS syscall 0xB0 (_96_remove) stub | `system::hardware::bios_syscall_b0_80086200` | `[ ]` |
| **SYS-484** | `BIOS_Syscall_B0_80086210` | `0x80086210` | `system/BIOS_Syscall_B0_80086210.c` | BIOS syscall 0xB0 (_96_remove) stub | `system::hardware::bios_syscall_b0_80086210` | `[ ]` |
| **SYS-485** | `BIOS_Syscall_B0_80086220` | `0x80086220` | `system/BIOS_Syscall_B0_80086220.c` | BIOS syscall 0xB0 (_96_remove) stub | `system::hardware::bios_syscall_b0_80086220` | `[ ]` |
| **SYS-486** | `BIOS_Syscall_B0_800899F0` | `0x800899F0` | `system/BIOS_Syscall_B0_800899F0.c` | BIOS syscall 0xB0 (_96_remove) stub | `system::hardware::bios_syscall_b0_800899f0` | `[ ]` |
| **SYS-487** | `BIOS_Syscall_B0_80098F80` | `0x80098F80` | `system/BIOS_Syscall_B0_80098F80.c` | BIOS syscall 0xB0 (_96_remove) stub | `system::hardware::bios_syscall_b0_80098f80` | `[ ]` |
| **SYS-488** | `BIOS_Syscall_B0_8009BAF0` | `0x8009BAF0` | `system/BIOS_Syscall_B0_8009BAF0.c` | BIOS syscall 0xB0 (_96_remove) stub | `system::hardware::bios_syscall_b0_8009baf0` | `[ ]` |
| **SYS-489** | `BIOS_Syscall_B0_8009BB00` | `0x8009BB00` | `system/BIOS_Syscall_B0_8009BB00.c` | BIOS syscall 0xB0 (_96_remove) stub | `system::hardware::bios_syscall_b0_8009bb00` | `[ ]` |
| **SYS-490** | `BIOS_Syscall_B0_8009BEE0` | `0x8009BEE0` | `system/BIOS_Syscall_B0_8009BEE0.c` | BIOS syscall 0xB0 (_96_remove) stub | `system::hardware::bios_syscall_b0_8009bee0` | `[ ]` |
| **SYS-491** | `BIOS_Syscall_B0_8009BEF0` | `0x8009BEF0` | `system/BIOS_Syscall_B0_8009BEF0.c` | BIOS syscall 0xB0 (_96_remove) stub | `system::hardware::bios_syscall_b0_8009bef0` | `[ ]` |
| **SYS-492** | `BIOS_Syscall_B0_8009BF00` | `0x8009BF00` | `system/BIOS_Syscall_B0_8009BF00.c` | BIOS syscall 0xB0 (_96_remove) stub | `system::hardware::bios_syscall_b0_8009bf00` | `[ ]` |
| **SYS-493** | `BIOS_Syscall_B0_8009BF10` | `0x8009BF10` | `system/BIOS_Syscall_B0_8009BF10.c` | BIOS syscall 0xB0 (_96_remove) stub | `system::hardware::bios_syscall_b0_8009bf10` | `[ ]` |
| **SYS-494** | `BIOS_Syscall_B0_8009C030` | `0x8009C030` | `system/BIOS_Syscall_B0_8009C030.c` | BIOS syscall 0xB0 (_96_remove) stub | `system::hardware::bios_syscall_b0_8009c030` | `[ ]` |
| **SYS-495** | `BIOS_Syscall_B0_8009C040` | `0x8009C040` | `system/BIOS_Syscall_B0_8009C040.c` | BIOS syscall 0xB0 (_96_remove) stub | `system::hardware::bios_syscall_b0_8009c040` | `[ ]` |
| **SYS-496** | `BIOS_Syscall_B0_8009C050` | `0x8009C050` | `system/BIOS_Syscall_B0_8009C050.c` | BIOS syscall 0xB0 (_96_remove) stub | `system::hardware::bios_syscall_b0_8009c050` | `[ ]` |
| **SYS-497** | `BIOS_Syscall_B0_8009C600` | `0x8009C600` | `system/BIOS_Syscall_B0_8009C600.c` | BIOS syscall 0xB0 (_96_remove) stub | `system::hardware::bios_syscall_b0_8009c600` | `[ ]` |
| **SYS-498** | `BIOS_Syscall_B0_8009C610` | `0x8009C610` | `system/BIOS_Syscall_B0_8009C610.c` | BIOS syscall 0xB0 (_96_remove) stub | `system::hardware::bios_syscall_b0_8009c610` | `[ ]` |
| **SYS-499** | `BIOS_Syscall_C0_800873F0` | `0x800873F0` | `system/BIOS_Syscall_C0_800873F0.c` | BIOS syscall 0xC0 stub | `system::hardware::bios_syscall_c0_800873f0` | `[ ]` |
| **SYS-500** | `BIOS_Syscall_C0_80087400` | `0x80087400` | `system/BIOS_Syscall_C0_80087400.c` | BIOS syscall 0xC0 stub | `system::hardware::bios_syscall_c0_80087400` | `[ ]` |
| **SYS-501** | `BIOS_ZeroRegion` | `0x8009BFC0` | `system/BIOS_ZeroRegion.c` | BIOS zero region: zeros 9 words at BIOS struct+0x62C, calls FUN_800858f0 + FUN_800808a0 | `system::hardware::bios_zeroregion` | `[ ]` |
| **SYS-502** | `IRQ_Disable` | `0x80085810` | `system/IRQ_Disable.c` | IRQ disable: saves return addr, calls BIOS to disable interrupts | `system::hardware::irq_disable` | `[ ]` |
| **SYS-503** | `IRQ_Dispatch` | `0x80086288` | `system/IRQ_Dispatch.c` | IRQ handler dispatch: iterates callback table at 0x800ABDC0, calls active handlers | `system::hardware::irq_dispatch` | `[ ]` |
| **SYS-504** | `Sys_Call` | `0x8001CF00` | `system/Sys_Call.c` | Generic system call wrapper: passes command packet to kernel at 0x80099490 | `system::hardware::sys_call` | `[ ]` |
| **SYS-505** | `Sys_CallWithParams` | `0x800521F4` | `system/Sys_CallWithParams.c` | Calls system function at 0x800521F4 with 4 byte parameters | `system::hardware::sys_callwithparams` | `[ ]` |
| **SYS-506** | `Sys_CheckVSync` | `0x8001CF94` | `system/Sys_CheckVSync.c` | Checks GPU VSync/interrupt state and triggers frame sync if needed | `system::hardware::sys_checkvsync` | `[ ]` |
| **SYS-507** | `Sys_ClearEvent` | `0x80052078` | `system/Sys_ClearEvent.c` | Clears system event: resets event handler state | `system::hardware::sys_clearevent` | `[ ]` |
| **SYS-508** | `Sys_GPUSync` | `0x8001DB38` | `system/Sys_GPUSync.c` | GPU sync wrapper: calls GPU sync and returns status | `system::hardware::sys_gpusync` | `[ ]` |
| **SYS-509** | `Sys_IncCounter` | `0x80026100` | `system/Sys_IncCounter.c` | Increments global counter at 0x800BF87E with upper limit cap | `system::hardware::sys_inccounter` | `[ ]` |
| **SYS-510** | `Sys_InitOverlay` | `0x8001CB00` | `system/Sys_InitOverlay.c` | Calls overlay init function at 0x8011534C then internal callback | `system::hardware::sys_initoverlay` | `[ ]` |
| **SYS-511** | `Sys_LoadBinary` | `0x8001D364` | `system/Sys_LoadBinary.c` | Binary segment loader: uses pointer tables at 0x8001005C, computes load address from DAT_1f800224 | `system::hardware::sys_loadbinary` | `[ ]` |
| **SYS-512** | `Sys_LoadOverlay` | `0x8001D2A8` | `system/Sys_LoadOverlay.c` | Loads overlay binary from CD: sets up params, calls CD read + overlay init | `system::hardware::sys_loadoverlay` | `[ ]` |
| **SYS-513** | `Sys_NoOp` | `0x8001CB98` | `system/Sys_NoOp.c` | Empty stub function - likely placeholder or unused vtable slot | `system::hardware::sys_noop` | `[ ]` |
| **SYS-514** | `Sys_NoOp2` | `0x80080930` | `system/Sys_NoOp2.c` | Empty stub function - likely unused vtable or placeholder slot | `system::hardware::sys_noop2` | `[ ]` |
| **SYS-515** | `Sys_OverlayDispatch` | `0x800750D8` | `system/Sys_OverlayDispatch.c` | Overlay dispatcher: 0xFF=pad test, 0xFE=init, else loads overlay via FUN_8001d364 | `system::hardware::sys_overlaydispatch` | `[ ]` |
| **SYS-516** | `Sys_PadRead` | `0x8001CE90` | `system/Sys_PadRead.c` | Controller pad read wrapper: calls low-level pad polling function | `system::hardware::sys_padread` | `[ ]` |
| **SYS-517** | `Sys_PlaySFX` | `0x8002369C` | `system/Sys_PlaySFX.c` | Sound effect trigger wrapper: calls Audio_PlaySoundEffect with preset params | `system::hardware::sys_playsfx` | `[ ]` |
| **SYS-518** | `Sys_RegisterEvent0` | `0x8009C898` | `system/Sys_RegisterEvent0.c` | Event register with code 0: calls FUN_80085b80(0, callback) | `system::hardware::sys_registerevent0` | `[ ]` |
| **SYS-519** | `Sys_RegisterEvent1` | `0x8009C8BC` | `system/Sys_RegisterEvent1.c` | Event register with code 1: calls FUN_80085b80(1, callback) | `system::hardware::sys_registerevent1` | `[ ]` |
| **SYS-520** | `Sys_RegisterEvent3` | `0x8009D06C` | `system/Sys_RegisterEvent3.c` | Event register with code 3: calls FUN_80085b80(3, callback) | `system::hardware::sys_registerevent3` | `[ ]` |
| **SYS-521** | `Sys_SetCallback` | `0x80051F14` | `system/Sys_SetCallback.c` | Sets system callback function and event mask from parameters | `system::hardware::sys_setcallback` | `[ ]` |
| **SYS-522** | `Sys_SetEvent` | `0x80052010` | `system/Sys_SetEvent.c` | Sets system event: writes event code to hardware register | `system::hardware::sys_setevent` | `[ ]` |
| **SYS-523** | `Sys_SetFlag10` | `0x8001CF78` | `system/Sys_SetFlag10.c` | Sets bit 4 (0x10) on global system flag at 0x800BE0E4 | `system::hardware::sys_setflag10` | `[ ]` |
| **SYS-524** | `Sys_TimeoutError` | `0x8009CC2C` | `system/Sys_TimeoutError.c` | Timeout error handler: prints '%s timeout', resets CD state regs at 0x800AD098 | `system::hardware::sys_timeouterror` | `[ ]` |
| **SYS-525** | `Sys_TriggerIRQ` | `0x80051F80` | `system/Sys_TriggerIRQ.c` | Triggers interrupt request: writes code to 0x1F800138, calls 0x80080880 | `system::hardware::sys_triggerirq` | `[ ]` |
| **SYS-526** | `Sys_VSyncWait` | `0x80085A78` | `system/Sys_VSyncWait.c` | VSync wait with timeout: polls DAT_800abde0, prints 'VSync timeout' and calls BIOS on fail | `system::hardware::sys_vsyncwait` | `[ ]` |
| **SYS-527** | `System_Init` | `0x8001CC00` | `system/System_Init.c` | System init: calls BIOS init seq, clears 0x5C at 0x800BF498 | `system::hardware::system_init` | `[ ]` |
| **SYS-528** | `System_Init2` | `0x80050B08` | `system/System_Init2.c` | System init variant 2: calls MDEC+GPU+CD init sequence | `system::hardware::system_init2` | `[ ]` |
| **SYS-529** | `System_InitMain` | `0x8001CFC8` | `system/System_InitMain.c` | System main init: sets up memory, calls subsystem inits | `system::hardware::system_initmain` | `[ ]` |
| **SYS-530** | `System_Main` | `0x8001DC9C` | `system/System_Main.c` | System main: root initialization + main loop (464L) | `system::hardware::system_main` | `[ ]` |
| **SYS-531** | `System_Reset` | `0x8001D940` | `system/System_Reset.c` | System reset: clears pad state, calls init funcs, resets callbacks | `system::hardware::system_reset` | `[ ]` |
| **SYS-532** | `Timer_GetCounter` | `0x80085900` | `system/Timer_GetCounter.c` | Timer counter reader: polls root counter at 0x800AACAC, returns ticks | `system::hardware::timer_getcounter` | `[ ]` |
| **SYS-533** | `Render_ClearQueue` | `0x8004FB20` | `screen/Render_ClearQueue.c` | Clears render queue buffer at 0x800BF548 (700 bytes) with memset | `system::hardware::render_clearqueue` | `[ ]` |
| **SYS-534** | `Render_ProcessQueueItem` | `0x8004FB4C` | `screen/Render_ProcessQueueItem.c` | Subrutina de Render_ProcessQueueItem (screen/Render_ProcessQueueItem.c) | `system::hardware::render_processqueueitem` | `[ ]` |
| **SYS-535** | `Screen_Clear` | `0x800506D0` | `screen/Screen_Clear.c` | Screen clear/fill: writes zeros to 0x801FE000-0x801FFFFE (framebuffer region) | `system::hardware::screen_clear` | `[ ]` |
| **SYS-536** | `Screen_FadeTransition` | `0x8002655C` | `screen/Screen_FadeTransition.c` | Screen fade in/out transition: 4-phase fade with color ramp | `system::hardware::screen_fadetransition` | `[ ]` |
| **SYS-537** | `Screen_InitDisplay` | `0x80050738` | `screen/Screen_InitDisplay.c` | Screen display init: sets up 2 framebuffers at 0x800EA0BC/EC12C with 320x240 | `system::hardware::screen_initdisplay` | `[ ]` |
| **SYS-538** | `Screen_InitOverlay` | `0x800509B4` | `screen/Screen_InitOverlay.c` | Initializes screen overlay: sets GTE offset, calls render setup functions | `system::hardware::screen_initoverlay` | `[ ]` |
| **SYS-539** | `Screen_SetMode` | `0x800508A8` | `screen/Screen_SetMode.c` | Screen mode setup: configures display from DAT_800bfe56 + DAT_800bf870 state | `system::hardware::screen_setmode` | `[ ]` |
| **SYS-540** | `DMA_TransferAndWait` | `0x8001DB8C` | `misc/DMA_TransferAndWait.c` | DMA transfer with wait: sets up DMA callback FUN_8001db38, polls until complete | `system::hardware::dma_transferandwait` | `[ ]` |
| **SYS-541** | `Font_BuildChar` | `0x80039E80` | `misc/Font_BuildChar.c` | Builds a font character tile: converts char code to 8x16 pixel UV coordinates | `system::hardware::font_buildchar` | `[ ]` |
| **SYS-542** | `Func_Nop` | `0x800897F8` | `misc/Func_Nop.c` | Empty stub function - no operation, immediate return | `system::hardware::func_nop` | `[ ]` |
| **SYS-543** | `MC_Close` | `0x80096A70` | `misc/MC_Close.c` | Closes memory card file handle | `system::hardware::mc_close` | `[ ]` |
| **SYS-544** | `MC_Flush` | `0x80097730` | `misc/MC_Flush.c` | Flushes memory card write buffer | `system::hardware::mc_flush` | `[ ]` |
| **SYS-545** | `MC_GetFileSize` | `0x80096A40` | `misc/MC_GetFileSize.c` | Returns file size for memory card file handle | `system::hardware::mc_getfilesize` | `[ ]` |
| **SYS-546** | `MC_Init` | `0x80097678` | `misc/MC_Init.c` | Initializes memory card subsystem | `system::hardware::mc_init` | `[ ]` |
| **SYS-547** | `MC_Open` | `0x80097498` | `misc/MC_Open.c` | Opens memory card file by name | `system::hardware::mc_open` | `[ ]` |
| **SYS-548** | `MC_Read` | `0x800974FC` | `misc/MC_Read.c` | Reads data from memory card file | `system::hardware::mc_read` | `[ ]` |
| **SYS-549** | `MC_Seek` | `0x80097E10` | `misc/MC_Seek.c` | Seeks to position in memory card file | `system::hardware::mc_seek` | `[ ]` |
| **SYS-550** | `MC_Start` | `0x800976A0` | `misc/MC_Start.c` | Starts memory card access | `system::hardware::mc_start` | `[ ]` |
| **SYS-551** | `MC_Stop` | `0x800976C8` | `misc/MC_Stop.c` | Stops memory card access | `system::hardware::mc_stop` | `[ ]` |
| **SYS-552** | `MC_Write` | `0x800970EC` | `misc/MC_Write.c` | Writes data to memory card file | `system::hardware::mc_write` | `[ ]` |
| **SYS-553** | `Player_Update` | `0x800597AC` | `misc/Player_Update.c` | Subrutina de Player_Update (misc/Player_Update.c) | `system::hardware::player_update` | `[ ]` |
| **SYS-554** | `Sprite_Alloc1` | `0x80077EBC` | `misc/Sprite_Alloc1.c` | Sprite allocator: increments counter, allocs struct, increments again | `system::hardware::sprite_alloc1` | `[ ]` |
| **SYS-555** | `Sprite_Alloc2` | `0x80077E7C` | `misc/Sprite_Alloc2.c` | Sprite allocator variant 2: different counter at _DAT_1f800144 | `system::hardware::sprite_alloc2` | `[ ]` |
| **SYS-556** | `Sprite_Alloc3` | `0x80077EFC` | `misc/Sprite_Alloc3.c` | Sprite allocator variant 3: different counter at _DAT_1f80015c | `system::hardware::sprite_alloc3` | `[ ]` |
| **SYS-557** | `Video_InitDecoder` | `0x80075D58` | `misc/Video_InitDecoder.c` | Initializes MDEC video decoder: sets size params at 0x800BED7C from game config, calls init | `system::hardware::video_initdecoder` | `[ ]` |
| **SYS-558** | `Debug_PrintString` | `0x8009B9B0` | `debug/Debug_PrintString.c` | Debug string output: sends chars to CD queue via FUN_8009ae60, flushes at end | `system::hardware::debug_printstring` | `[ ]` |
| **SYS-559** | `Debug_Printf` | `0x8009A730` | `debug/Debug_Printf.c` | Debug printf: calls FUN_8009a770(1, fmt, args) for formatted output | `system::hardware::debug_printf` | `[ ]` |
| **SYS-560** | `Debug_PrintfMain` | `0x8009A770` | `debug/Debug_PrintfMain.c` | Debug printf main: formatted output engine (340L) | `system::hardware::debug_printfmain` | `[ ]` |

---

