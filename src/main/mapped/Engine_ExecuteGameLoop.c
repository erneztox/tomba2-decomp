)
/**
 * @brief Byte-matching decompilation
 * @note Original: func_8003F9A8 at 0x8003F9A8
 */
// Engine_ExecuteGameLoop

extern int D_800F2418;

extern void GPU_ProcessRenderQueue(void);
extern void Engine_UpdateInputState(void);
extern void EntityLoop_Player(void);
extern void EntityLoop_Background_Draw(void);
extern void EntityLoop_Object(void);
extern void EntityLoop_NPC(void);
extern void Engine_DispatchStateUpdate(void*);
extern void EntityFX_Update(void);
extern void Engine_HandleState(void);
extern void EntityLoop_Active(void);
extern void EntityLoop_Background(void);

/**
 * @brief Main game loop body — runs every frame.
 *
 * Executes all per-frame subsystems in order:
 *   1. GPU_FlushOrderTable   - flush rendering
 *   2. Player_Update         - player input/state
 *   3. EntityLoop_Player     - player entity behaviour (D_800E7E80)
 *   4. EntityLoop_Background - background entity processing (g_BackgroundEntitiesList)
 *   5. EntityLoop_Object     - object entity processing (scratch-OT list)
 *   6. EntityLoop_NPC        - NPC entity processing
 *   7. EntityLoop_Background_Draw - background rendering pass
 *   8. Engine_DispatchStateUpdate - per-state update dispatcher
 *   9. EntityFX_Update       - particle/FX slots
 *  10. Engine_HandleState    - engine sub-state machine
 *  11. EntityLoop_Active     - active entity processing (g_ActiveEntitiesList)
 *
 * @note Original address: 0x8003F9A8
 */
void Engine_ExecuteGameLoop(void) {
    GPU_ProcessRenderQueue();
    Engine_UpdateInputState();
    EntityLoop_Background_Draw();
    EntityLoop_Background();
    EntityLoop_Player();
    EntityLoop_Object();
    EntityLoop_NPC();
    Engine_DispatchStateUpdate(&D_800F2418);
    EntityFX_Update();
    Engine_HandleState();
    EntityLoop_Active();
}
