#include "tomba.h"

extern u8 DAT_800bf870;
extern int DAT_1f8000f8;

// External functions
extern void func_8003CCA4(Entity*);
extern void func_8003F174(Entity*, int);
extern void Entity_UpdateMovement(Entity*);
extern void func_8012A43C(Entity*);
extern void func_80039F4C(Entity*);
extern void func_801295B4(Entity*);
extern void func_80129114(Entity*);
extern void func_8013DD58(Entity*);
extern void func_800726D4(Entity*);
extern void func_8003C2D4(Entity*);
extern void func_8003C464(Entity*);
extern void func_8003C5F8(Entity*);
extern void func_8003C788(Entity*);
extern void func_8011BE5C(Entity*);
extern void func_8003B054(u8*, int, int);
extern void func_80084660(void*);
extern void func_80084690(void*);
extern void func_8003B320(u8*, void*, int);

void EntityLoop_Active(void) {
    Entity* entity;
    Entity* next;
    
    for (entity = g_ActiveEntitiesList; entity != 0; entity = next) {
        next = entity->next;
        if (entity->active_flag != 0) {
            switch (entity->action_id) {
                case 0x00:
                case 0x0F:
                    func_8003CCA4(entity);
                    break;
                case 0x01:
                    func_8003F174(entity, 0);
                    break;
                case 0x02:
                    Entity_UpdateMovement(entity);
                    break;
                case 0x03:
                    func_8012A43C(entity);
                    break;
                case 0x04:
                    func_80039F4C(entity);
                    break;
                case 0x05:
                    func_801295B4(entity);
                    break;
                case 0x06:
                    func_80129114(entity);
                    break;
                case 0x07:
                    func_8013DD58(entity);
                    break;
                case 0x08:
                    func_800726D4(entity);
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
                case 0x14:
                    if (DAT_800bf870 == 4) {
                        func_8011BE5C(entity);
                    } else {
                        s16** p38 = (s16**)entity->unknown_38;
                        if (p38 != 0) {
                            int p3c = *(int*)((char*)entity + 0x3C);
                            s16 val = *(s16*)(p3c + (**p38) * 4 + 2);
                            
                            // auStack_60 is at sp + 0x10, local_38 is at sp + 0x38
                            u8 auStack_60[40];
                            s16 local_38[12];
                            u8 pad[8];
                            
                            func_8003B054(auStack_60, p3c + val, 0);
                            
                            // Manual unroll to force lhu/sh instead of lwl/lwr
                            local_38[0] = *(s16*)((char*)entity + 0x60);
                            local_38[1] = *(s16*)((char*)entity + 0x62);
                            local_38[2] = *(s16*)((char*)entity + 0x64);
                            local_38[3] = *(s16*)((char*)entity + 0x66);
                            local_38[4] = *(s16*)((char*)entity + 0x68);
                            local_38[5] = *(s16*)((char*)entity + 0x6A);
                            local_38[6] = *(s16*)((char*)entity + 0x6C);
                            local_38[7] = *(s16*)((char*)entity + 0x6E);
                            local_38[8] = *(s16*)((char*)entity + 0x70);
                            local_38[9] = *(s16*)((char*)entity + 0x72);
                            local_38[10] = *(s16*)((char*)entity + 0x74);
                            local_38[11] = *(s16*)((char*)entity + 0x76);
                            
                            func_80084660(&DAT_1f8000f8);
                            func_80084690(&DAT_1f8000f8);
                            func_8003B320(auStack_60, local_38, 0x10);
                        }
                    }
                    break;
                case 0x20:
                    entity->draw_func(entity);
                    break;
            }
        }
    }
}
