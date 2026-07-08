
void FUN_8001d6e4(uint param_1,undefined4 param_2,int param_3,uint param_4,undefined4 param_5,
                 char param_6)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = param_1 * 0x10;
  uVar2 = *(uint *)(iVar4 + 0x1f801088);
  while ((uVar2 & 0x1000000) != 0) {
    if (iVar3 == 0x10000) {
                    /* WARNING: Subroutine does not return */
      FUN_8001e5ec(s_DrawSync__d_____80010a20 + 4,*(undefined4 *)(iVar4 + 0x1f801088));
    }
    iVar3 = iVar3 + 1;
    uVar2 = *(uint *)(iVar4 + 0x1f801088);
  }
  if (param_6 != '\x01') {
    *(byte *)(DAT_80026cd4 + 2) = *(byte *)(DAT_80026cd4 + 2) & ~(byte)(1 << (param_1 & 0x1f));
    iVar3 = param_1 * 0x10;
    *DAT_80026cd0 = *DAT_80026cd0 | 1 << (param_1 * 4 + 3 & 0x1f);
    *(undefined4 *)(iVar3 + 0x1f801080) = param_2;
    *(uint *)(iVar3 + 0x1f801084) = param_3 << 0x10 | param_4;
    bVar1 = *DAT_80026cb8;
    while ((bVar1 & 0x40) == 0) {
      bVar1 = *DAT_80026cb8;
    }
    *(undefined4 *)(iVar3 + 0x1f801088) = param_5;
    return;
  }
  FUN_8001ceb8((uint)*(byte *)(DAT_80026cd4 + 2),
               ((uint)*(byte *)(DAT_80026cd4 + 2) | 1 << (param_1 & 0x1f)) + param_1 * 0x8000);
  FUN_8001c7f4();
  return;
}

