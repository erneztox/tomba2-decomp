#include "tomba.h"
#include "include_asm.h"

extern u8 D_800BF870[];

extern Entity* D_800F2738[];

extern void func_8003CCA4(Entity*);
extern void func_8003C2D4(Entity*);
extern void func_8003C464(Entity*);
extern void func_8003C5F8(Entity*);
extern void func_8003C788(Entity*);
extern void func_8010FC70(Entity*);
extern void func_8004CC88(Entity*);

void EntityLoop_Background_Draw(void) {
    Entity* entity;
    s32 count;
    Entity** entityList;
    
    if (*(u8*)0x1F800136 == 0) {
        s16 old15C = *(s16*)0x1F80015C;
        Entity** old154 = *(Entity***)0x1F800154;
        *(s16*)0x1F80015C = 0;
        *(Entity***)0x1F800154 = D_800F2738;
        *(s16*)0x1F80015E = old15C;
        *(Entity***)0x1F800158 = old154;
    }
    
    count = *(s16*)0x1F80015E;
    entityList = *(Entity***)0x1F800158;
    
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
                case 0x1F:
                    if (D_800BF870[0] == 0x14) {
                        func_8010FC70(entity);
                    } else {
                        func_8004CC88(entity);
                    }
                    break;
            }
        }
    }
}
