// FUN_80111d40

/* WARNING: Removing unreachable block (ram,0x80123e44) */

undefined4 FUN_80111d40(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_v1;
  uint uVar3;
  
  uVar3 = 0;
  do {
    if (((int)(uint)*(byte *)(param_1 + 0x5f) >> (uVar3 & 0x1f) & 1U) != 0) {
      iVar1 = FUN_8011c610(param_1,uVar3 + 4);
      if (iVar1 != 0) {
        *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) | 0x80;
        DAT_800bf9e3 = DAT_800bf9e3 | (byte)(1 << (uVar3 + 4 & 0x1f));
        *(char *)(param_1 + 0x5f) = *(char *)(param_1 + 0x5f) - (char)(1 << (uVar3 & 0x1f));
        func_0x8004d604(0x2a,1);
        *(undefined2 *)(param_1 + 0x96) = 1;
        DAT_800bf871 = 1;
        uVar2 = FUN_8012ce0c(*(undefined4 *)(extraout_v1 + 0xc0));
        return uVar2;
      }
    }
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 3);
  return 0;
}

