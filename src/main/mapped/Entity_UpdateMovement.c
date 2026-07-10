)
/**
 * @brief Byte-matching decompilation
 * @note Original: func_8003EF9C at 0x8003EF9C
 */
// Entity_UpdateMovement

extern u8 *D_800BF544;
extern void func_8003F07C(Entity*, int);
extern void GPU_ModulateOTColors(Entity*, u8*, u8*);

/**
 * @brief Updates an entity's movement and animation.
 *
 * Reads the movement mode from the low nibble of entity offset 0xD.
 *  - 0: position update only (via func_8003F07C)
 *  - 2: position update + animation/OT snapshot (via GPU_ModulateOTColors)
 *  - other: skip
 *
 * @param entity The entity to update.
 * @note Original address: 0x8003EF9C
 */
void Entity_UpdateMovement(Entity *entity) {
    int is_idle = (entity->action_id ^ 0xF) < 1;
    u8 *ot_before;

    switch (entity->move_mode & 0xF) {
        case 0:
            func_8003F07C(entity, is_idle);
            break;
        case 2:
            ot_before = D_800BF544;
            func_8003F07C(entity, is_idle);
            GPU_ModulateOTColors(entity, ot_before, D_800BF544);
            break;
    }
}
