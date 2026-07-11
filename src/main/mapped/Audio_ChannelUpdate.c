/**
 * @brief Audio channel updater: processes channel, updates voice
 * @note Original: func_8009121C at 0x8009121C
 */
// Audio_ChannelUpdate



void FUN_8009121c(ushort param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  piVar4 = (int *)(&DAT_80104c30 + ((int)((uint)param_1 << 0x10) >> 0xe));
  iVar3 = (short)param_2 * 0xb0;
  puVar5 = (undefined4 *)(*piVar4 + iVar3);
  cVar1 = *(char *)((int)puVar5 + 0x21) + '\x01';
  *(char *)((int)puVar5 + 0x21) = cVar1;
  if (*(char *)(puVar5 + 8) == '\0') {
    puVar5[0x22] = 0;
    *(undefined1 *)(puVar5 + 7) = 0;
    puVar5[0x24] = 0;
    if ((*(uint *)(iVar3 + *piVar4 + 0x98) & 0x400) == 0) {
      *puVar5 = puVar5[1];
    }
    else {
      *puVar5 = puVar5[3];
    }
  }
  else if (cVar1 < *(char *)(puVar5 + 8)) {
    puVar5[0x22] = 0;
    *(undefined1 *)(puVar5 + 7) = 0;
    puVar5[0x24] = 0;
    if ((*(uint *)(iVar3 + *piVar4 + 0x98) & 0x400) == 0) {
      uVar2 = puVar5[1];
      *puVar5 = puVar5[1];
    }
    else {
      uVar2 = puVar5[3];
      *puVar5 = puVar5[3];
    }
    puVar5[2] = uVar2;
  }
  else {
    *(uint *)(iVar3 + *piVar4 + 0x98) = *(uint *)(iVar3 + *piVar4 + 0x98) & 0xfffffffe;
    *(uint *)(iVar3 + *piVar4 + 0x98) = *(uint *)(iVar3 + *piVar4 + 0x98) & 0xfffffff7;
    *(uint *)(iVar3 + *piVar4 + 0x98) = *(uint *)(iVar3 + *piVar4 + 0x98) & 0xfffffffd;
    *(uint *)(iVar3 + *piVar4 + 0x98) = *(uint *)(iVar3 + *piVar4 + 0x98) | 0x200;
    *(uint *)(iVar3 + *piVar4 + 0x98) = *(uint *)(iVar3 + *piVar4 + 0x98) | 4;
    *(undefined1 *)(puVar5 + 5) = 0;
    if ((*(uint *)(iVar3 + *piVar4 + 0x98) & 0x400) == 0) {
      puVar5[2] = puVar5[1];
    }
    else {
      puVar5[2] = puVar5[3];
    }
    if (*(char *)((int)puVar5 + 0x22) != -1) {
      *(undefined1 *)(puVar5 + 5) = 0;
      FUN_80091810((int)*(char *)((int)puVar5 + 0x22),(int)*(char *)((int)puVar5 + 0x23));
      FUN_80095b90((int)(short)(param_1 | (ushort)(param_2 << 8)));
    }
    FUN_80095b90((int)(short)(param_1 | (ushort)(param_2 << 8)));
    puVar5[0x24] = (int)*(short *)(puVar5 + 0x15);
  }
  return;
}
