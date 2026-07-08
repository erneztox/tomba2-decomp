#include "tomba.h"

extern BehaviorLink D_800A20B4;

void func_80028E10(Entity* entity, u32 id)
{
    BehaviorLink* link_array;
    BehaviorLink* selected_link;
    u8 type_id = (u8)id;
    
    switch (id >> 8) {
    case 1:
        entity->unknown_03 = type_id | 0x80;
        link_array = (BehaviorLink*)0x8014bd54;
        break;
    case 2:
        entity->unknown_03 = type_id | 0x80;
        link_array = (BehaviorLink*)0x8013882c;
        break;
    case 3:
        entity->unknown_03 = type_id | 0x80;
        link_array = (BehaviorLink*)0x801389e4;
        break;
    case 4:
        entity->unknown_03 = type_id | 0x80;
        link_array = (BehaviorLink*)0x8011bc4c;
        break;
    case 5:
        entity->unknown_03 = type_id | 0x80;
        link_array = (BehaviorLink*)0x80143c1c;
        break;
    case 6:
        entity->unknown_03 = type_id | 0x80;
        link_array = (BehaviorLink*)0x8014034c;
        break;
    case 7:
        entity->unknown_03 = type_id | 0x80;
        link_array = (BehaviorLink*)0x8014c868;
        break;
    case 8:
        entity->unknown_03 = type_id | 0x80;
        link_array = (BehaviorLink*)0x80132de0;
        break;
    case 9:
        entity->unknown_03 = type_id | 0x80;
        link_array = (BehaviorLink*)0x80145138;
        break;
    case 10:
        entity->unknown_03 = type_id | 0x80;
        link_array = (BehaviorLink*)0x8010e578;
        break;
    case 11:
        entity->unknown_03 = type_id | 0x80;
        link_array = (BehaviorLink*)0x8011eb94;
        break;
    case 12:
        entity->unknown_03 = type_id | 0x80;
        link_array = (BehaviorLink*)0x8011c09c;
        break;
    case 13:
        entity->unknown_03 = type_id | 0x80;
        link_array = (BehaviorLink*)0x8011dcb8;
        break;
    case 14:
        entity->unknown_03 = type_id | 0x80;
        link_array = (BehaviorLink*)0x8011cbd8;
        break;
    case 15:
        entity->unknown_03 = type_id | 0x80;
        link_array = (BehaviorLink*)0x8011cf0c;
        break;
    case 16:
        entity->unknown_03 = type_id | 0x80;
        link_array = (BehaviorLink*)0x801208d4;
        break;
    case 17:
        entity->unknown_03 = type_id | 0x80;
        link_array = (BehaviorLink*)0x8010d5d8;
        break;
    case 18:
        entity->unknown_03 = type_id | 0x80;
        link_array = (BehaviorLink*)0x8010c65c;
        break;
    case 19:
        entity->unknown_03 = type_id | 0x80;
        link_array = (BehaviorLink*)0x8010cacc;
        break;
    case 20:
        entity->unknown_03 = type_id | 0x80;
        link_array = (BehaviorLink*)0x8010d8ac;
        break;
    case 21:
        entity->unknown_03 = type_id | 0x80;
        link_array = (BehaviorLink*)0x8011fc0c;
        break;
    case 22:
        entity->unknown_03 = type_id | 0x80;
        link_array = (BehaviorLink*)0x801158a0;
        break;
    default:
        entity->unknown_03 = type_id;
        link_array = &D_800A20B4;
        break;
    }
    
    selected_link = &link_array[id & 0xFF];
    
    entity->unknown_0B = 0x20;
    
    entity->update_func = selected_link->update_func;
    entity->draw_func = selected_link->draw_func;
    
    if (selected_link->extra_data != 0) {
        entity->unknown_44 = selected_link->extra_data->unknown_44;
        entity->unknown_46 = selected_link->extra_data->unknown_46;
        entity->unknown_38 = (void*)((u8*)selected_link->extra_data + 4);
    }
}

