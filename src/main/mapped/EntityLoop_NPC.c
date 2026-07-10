)
/**
 * @brief Byte-matching decompilation
 * @note Original: func_8003BCF4 at 0x8003BCF4
 */
// EntityLoop_NPC

extern u8 D_800BF870[];
extern Entity* D_800F26C8[];

extern void func_8003CCA4(Entity*);
extern void func_801341E8(Entity*);
extern void func_80123C14(Entity*);
extern void func_80129114(Entity*);
extern void func_80120D2C(Entity*);
extern void func_8011AD44(Entity*);
extern void func_80115338(Entity*);
extern void func_80117984(Entity*);
extern void func_80136748(Entity*);
extern void func_8003C2D4(Entity*);
extern void func_8003C464(Entity*);

/**
 * @brief Processes NPC entities based on current game state.
 * @note Original address: 0x8003BCF4
 */
void EntityLoop_NPC(void) {
    s16 count;
    Entity* entity;
    Entity** entityList;
    
    if (*(u8*)0x1F800136 == 0) {
        s16 old150 = *(s16*)0x1F800150;
        Entity** old148 = *(Entity***)0x1F800148;
        *(s16*)0x1F800150 = 0;
        *(Entity***)0x1F800148 = D_800F26C8;
        *(s16*)0x1F800152 = old150;
        *(Entity***)0x1F80014C = old148;
    }
    
    count = *(s16*)0x1F800152;
    entityList = *(Entity***)0x1F80014C;
    
    while (count != 0) {
        entity = *entityList;
        entityList++;
        count--;
        
        if (entity->active_flag != 0) {
            switch (entity->action_id) {
                case 0x00:
                case 0x0F:
                    func_8003CCA4(entity);
                    break;
                case 0x01:
                    if (D_800BF870[0] == 0x00) {
                        func_801341E8(entity);
                    } else if (D_800BF870[0] == 0x06) {
                        func_80123C14(entity);
                    }
                    break;
                case 0x02:
                    if (D_800BF870[0] == 0x01) {
                        func_80129114(entity);
                    } else if (D_800BF870[0] == 0x06) {
                        func_80120D2C(entity);
                    } else if (D_800BF870[0] == 0x07) {
                        func_8011AD44(entity);
                    } else if (D_800BF870[0] == 0x0A) {
                        func_80115338(entity);
                    } else if (D_800BF870[0] == 0x0F) {
                        func_80117984(entity);
                    }
                    break;
                case 0x03:
                    func_80136748(entity);
                    break;
                case 0x10:
                    func_8003C2D4(entity);
                    break;
                case 0x17:
                    (*(EntityActionFunc*)((u8*)entity + 0x7C))(entity);
                    // fallthrough
                case 0x11:
                    func_8003C464(entity);
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
