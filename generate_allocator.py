template = """
extern u8 {count_var};
extern Entity* {head_var};

Entity* {func_name}(Entity* target, u8 param_2, int mode, int list_id)
{{
    Entity* entity = {head_var};
    Entity* next_free;
    Entity** tail_ptr;
    Entity** head_ptr;

{delegate_check}

    if ({count_check}) {{
        return 0;
    }}

    {count_var}--;
    next_free = entity->next;

    if (list_id == 1) {{
        head_ptr = &g_ActiveEntitiesList;
        tail_ptr = &D_800F239C;
    }} else if (list_id < 2 || list_id != 2) {{
        head_ptr = &g_InactiveEntitiesList;
        tail_ptr = &D_800F23A8;
    }} else {{
        head_ptr = &g_BackgroundEntitiesList;
        tail_ptr = &D_800F23A0;
    }}

    if (mode != 1) {{
        if (mode > 1) {{
            if (mode == 2) {{
                if (target->next != 0) {{
                    tail_ptr = (Entity**)&entity->next;
                    {head_var} = next_free;
                    *tail_ptr = target->next;
                    target->next->prev = entity;
                    target->next = entity;
                    entity->prev = target;
                    goto initialize;
                }}
            }} else if (mode == 3) {{
                entity->next = 0;
                entity->prev = *tail_ptr;
                
                if (*tail_ptr == 0) {{
                    *head_ptr = entity;
                }} else {{
                    (*tail_ptr)->next = entity;
                }}
                *tail_ptr = entity;
                {head_var} = next_free;
                goto initialize;
            }}
            goto initialize;
        }}
        
        if (mode == 0) {{
            if (target->prev != 0) {{
                tail_ptr = (Entity**)&entity->prev;
                {head_var} = next_free;
                *tail_ptr = target->prev;
                target->prev->next = entity;
                target->prev = entity;
                entity->next = target;
                goto initialize;
            }}
        }}
        goto initialize;
    }}

    entity->prev = 0;
    entity->next = *head_ptr;
    
    if (*head_ptr == 0) {{
        *tail_ptr = entity;
    }} else {{
        (*head_ptr)->prev = entity;
    }}
    *head_ptr = entity;
    {head_var} = next_free;

initialize:
    {head_var} = next_free;
    ((u8*)entity)[10] = (u8)list_id;
    ((u8*)entity)[0] = 2;
    ((u8*)entity)[0xC] = param_2;

    return entity;
}}
"""

pools = [
    {
        "func_name": "func_80079C3C",
        "head_var": "D_800E8098",
        "count_var": "D_800E7E7C",
        "delegate_check": "",
        "count_check": "D_800E7E7C < 3"
    },
    {
        "func_name": "func_80079DDC",
        "head_var": "D_800E80A0",
        "count_var": "D_800E7E7D",
        "delegate_check": "    if (D_800E80A0 == 0) {\n        return func_80079F90(target, param_2, mode, list_id);\n    }\n",
        "count_check": "D_800E80A0 == 0"  # Ghidra didn't show count check for Pool 1... Wait, let's use head_var == 0
    },
    {
        "func_name": "func_80079F90",
        "head_var": "D_800F2398",
        "count_var": "D_800ED8CC",
        "delegate_check": "",
        "count_check": "D_800F2398 == 0"
    },
    {
        "func_name": "func_8007A12C",
        "head_var": "D_800ED8D4",
        "count_var": "D_800ED8C5",
        "delegate_check": "",
        "count_check": "D_800ED8D4 == 0"
    },
    {
        "func_name": "func_8007A2C8",
        "head_var": "D_800ED8D0",
        "count_var": "D_800ED8C4",
        "delegate_check": "",
        "count_check": "D_800ED8D0 == 0"
    }
]

header = """#include "tomba.h"
#include "include_asm.h"

extern Entity* g_ActiveEntitiesList;       // 0x800F2624
extern Entity* D_800F239C;                 // Active Tail
extern Entity* g_InactiveEntitiesList;     // 0x800FB168
extern Entity* D_800F23A8;                 // Inactive Tail
extern Entity* g_BackgroundEntitiesList;   // 0x800F2738
extern Entity* D_800F23A0;                 // Background Tail

"""

with open("src/main/Entity_Allocator.c", "w") as f:
    f.write(header)
    for p in pools:
        f.write(template.format(**p))
    f.write('\nINCLUDE_ASM("asm/nonmatchings/main/Entity_Allocator", func_8007A980);\n')
