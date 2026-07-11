/**
 * @brief Audio channel key handler: looks up channel, calls voice funcs
 * @note Original: func_80091970 at 0x80091970
 */
// Audio_ChannelKey



#include "tomba.h"
void FUN_80091970(ushort param_1,short param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  piVar2 = (int *)(&DAT_80104c30 + ((int)((uint)param_1 << 0x10) >> 0xe));
  iVar1 = param_2 * 0xb0;
  puVar4 = (undefined4 *)(*piVar2 + iVar1);
  puVar4[0x26] = puVar4[0x26] & 0xfffffffe;
  *(uint *)(iVar1 + *piVar2 + 0x98) = *(uint *)(iVar1 + *piVar2 + 0x98) & 0xfffffffd;
  *(uint *)(iVar1 + *piVar2 + 0x98) = *(uint *)(iVar1 + *piVar2 + 0x98) & 0xfffffff7;
  *(uint *)(iVar1 + *piVar2 + 0x98) = *(uint *)(iVar1 + *piVar2 + 0x98) & 0xfffffbff;
  *(uint *)(iVar1 + *piVar2 + 0x98) = *(uint *)(iVar1 + *piVar2 + 0x98) | 4;
  FUN_80095b90((int)(short)(param_1 | param_2 << 8));
  FUN_800931a0();
  iVar1 = 0;
  puVar4->behavior_state = 0;
  puVar4[0x22] = 0;
  puVar4->sub_action = 0;
  puVar4->action_state = 0;
  *(undefined1 *)((int)puVar4 + 0x19) = 0;
  *(undefined1 *)((int)puVar4 + 0x1e) = 0;
  *(undefined1 *)((int)puVar4 + 0x1a) = 0;
  *(undefined1 *)((int)puVar4 + 0x1b) = 0;
  *(undefined1 *)((int)puVar4 + 0x1f) = 0;
  *(undefined1 *)((int)puVar4 + 0x17) = 0;
  *(undefined1 *)((int)puVar4 + 0x21) = 0;
  puVar4->sub_action = 0;
  *(undefined1 *)((int)puVar4 + 0x1d) = 0;
  *(undefined1 *)((int)puVar4 + 0x15) = 0;
  *(undefined1 *)((int)puVar4 + 0x16) = 0;
  puVar4[0x24] = puVar4[0x21];
  puVar4[0x25] = puVar4[0x23];
  *(undefined2 *)(puVar4 + 0x15) = *(undefined2 *)((int)puVar4 + 0x56);
  *puVar4 = puVar4->flags;
  puVar4->kind = puVar4->flags;
  puVar3 = puVar4;
  do {
    *(char *)((int)puVar4 + iVar1 + 0x37) = (char)iVar1;
    *(undefined1 *)((int)puVar4 + iVar1 + 0x27) = 0x40;
    *(undefined2 *)(puVar3 + 0x18) = 0x7f;
    iVar1 = iVar1 + 1;
    puVar3 = (undefined4 *)((int)puVar3 + 2);
  } while (iVar1 < 0x10);
  *(undefined2 *)(puVar4 + 0x17) = 0x7f;
  *(undefined2 *)((int)puVar4 + 0x5e) = 0x7f;
  return;
}
