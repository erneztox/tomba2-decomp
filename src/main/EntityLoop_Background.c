#include "tomba.h"

extern void func_8003CCA4(Entity*);
extern void func_8003C2D4(Entity*);
extern void func_8003B704(Entity*);

/**
 * @brief Processes background entities each frame.
 * @note Original address: 0x8003EEC0
 */
void EntityLoop_Background(void) {
    Entity *entity;
    Entity *next;

    for (entity = g_BackgroundEntitiesList; entity != 0; entity = next) {
        next = entity->next;

        if (entity->active_flag == 0) {
            break;
        }

        switch (entity->action_id) {
            case 0:
            case 0xF:
                func_8003CCA4(entity);
                continue;

            case 1:
                func_8003CCA4(entity);
                break;

            case 0x10:
                func_8003C2D4(entity);
                if (entity->pad02 == 1) {
                    goto run_b704;
                }
                continue;

            case 0x20:
                entity->draw_func(entity);
                continue;

            default:
                continue;
        }

run_b704:
        func_8003B704(entity);
    }
}
