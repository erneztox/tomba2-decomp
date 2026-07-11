/**
 * @brief Audio channel scanner: iterates channel table, updates active channels
 * @note Original: func_800905E0 at 0x800905E0
 */
// Audio_ScanChannels



void FUN_800905e0(ushort param_1,short param_2,char param_3,undefined1 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)(&DAT_80104c30 + ((int)((uint)param_1 << 0x10) >> 0xe));
  iVar2 = param_2 * 0xb0;
  puVar1 = (undefined4 *)(*piVar3 + iVar2);
  *puVar1 = puVar1[1];
  puVar1[2] = puVar1[1];
  puVar1[3] = puVar1[1];
  *(uint *)(iVar2 + *piVar3 + 0x98) = *(uint *)(iVar2 + *piVar3 + 0x98) & 0xfffffdff;
  *(uint *)(iVar2 + *piVar3 + 0x98) = *(uint *)(iVar2 + *piVar3 + 0x98) & 0xfffffffb;
  *(undefined1 *)(puVar1 + 8) = param_4;
  if (param_3 == '\x01') {
    *(uint *)(iVar2 + *piVar3 + 0x98) = *(uint *)(iVar2 + *piVar3 + 0x98) | 1;
    *(undefined1 *)(puVar1 + 5) = 1;
    *(undefined1 *)((int)puVar1 + 0x21) = 0;
    FUN_80095530((int)(short)(param_1 | param_2 << 8),*(undefined2 *)(puVar1 + 0x16),
                 *(undefined2 *)((int)puVar1 + 0x5a),1);
  }
  else if (param_3 == '\0') {
    *(uint *)(iVar2 + *piVar3 + 0x98) = *(uint *)(iVar2 + *piVar3 + 0x98) | 2;
  }
  return;
}
