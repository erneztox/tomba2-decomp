)
/**
 * @brief Byte-matching decompilation
 * @note Original: func_8003BB50 at 0x8003BB50
 */
// EntityLoop_Object

extern Entity* D_800F2410[];

extern void func_8003CCA4(Entity*);
extern void func_80122974(Entity*, s32);
extern void func_8002AE0C(Entity*, s32, s32);
extern void func_8003C2D4(Entity*);
extern void func_8003C464(Entity*);
extern void func_8003C5F8(Entity*);
extern void func_8003C788(Entity*);

/**
 * @brief Processes object entities from the scratchpad ordering table.
 * @note Original address: 0x8003BB50
 */
void EntityLoop_Object(void) {
    s16 count;
    Entity* entity;
    Entity** entityList;
    s32 arg1;
    
    if (*(u8*)0x1F800136 == 0) {
        s16 old144 = *(s16*)0x1F800144;
        Entity** old13C = *(Entity***)0x1F80013C;
        *(s16*)0x1F800144 = 0;
        *(Entity***)0x1F80013C = D_800F2410;
        *(s16*)0x1F800146 = old144;
        *(Entity***)0x1F800140 = old13C;
    }
    
    count = *(s16*)0x1F800146;
    entityList = *(Entity***)0x1F800140;
    
    while (count != 0) {
        entity = *entityList;
        entityList++;
        count--;
        
        if (entity->active_flag != 0) {
            if (entity->action_id < 0x90) { // Safety check or optimization for jumptable? Wait, ASM does sltiu v0, v1, 0x90
                switch (entity->action_id) {
                    case 0x00:
                    case 0x0F:
                    case 0x40:
                    case 0x4F:
                    case 0x80:
                    case 0x8F:
                        func_8003CCA4(entity);
                        if ((entity->action_id & 0x40) != 0) {
                            arg1 = 0x50;
                            func_8002AE0C(entity, arg1, 0);
                        } else if ((entity->action_id & 0x80) != 0) {
                            arg1 = *(s16*)((u8*)entity + 0x80);
                            func_8002AE0C(entity, arg1, 0);
                        }
                        break;
                    case 0x01:
                    case 0x41:
                    case 0x81:
                        func_80122974(entity, 0x50); // Ghidra: func_80122974(iVar5); Wait, ASM passes 0x50 in a1!
                        if ((entity->action_id & 0x40) != 0) {
                            arg1 = 0x50;
                            func_8002AE0C(entity, arg1, 0);
                        } else if ((entity->action_id & 0x80) != 0) {
                            arg1 = *(s16*)((u8*)entity + 0x80);
                            func_8002AE0C(entity, arg1, 0);
                        }
                        break;
                    case 0x10:
                        func_8003C2D4(entity);
                        break;
                    case 0x11:
                        func_8003C464(entity);
                        break;
                    case 0x12:
                        func_8003C5F8(entity);
                        break;
                    case 0x13:
                        func_8003C788(entity);
                        break;
                    case 0x15:
                        func_8003C2D4(entity);
                        // fallthrough
                    case 0x16:
                        (*(EntityActionFunc*)((u8*)entity + 0x7C))(entity);
                        break;
                    case 0x20:
                        (*(EntityActionFunc*)((u8*)entity + 0x18))(entity);
                        break;
                }
            }
        }
    }
}
