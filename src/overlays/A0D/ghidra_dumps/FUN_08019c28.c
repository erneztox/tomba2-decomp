// FUN_08019c28

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08019c60) */
/* WARNING: Removing unreachable block (ram,0x08019c64) */
/* WARNING: Removing unreachable block (ram,0x00112c84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08019c28(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 local_40;
  undefined4 local_3c [9];
  
  puVar2 = &local_40;
  puVar1 = (undefined4 *)&DAT_801091f0;
  do {
    uVar3 = puVar1[1];
    uVar4 = puVar1[2];
    uVar5 = puVar1[3];
    *puVar2 = *puVar1;
    puVar2[1] = uVar3;
    puVar2[2] = uVar4;
    puVar2[3] = uVar5;
    puVar1 = puVar1 + 4;
    puVar2 = puVar2 + 4;
  } while (puVar1 != (undefined4 *)&DAT_80109210);
  *puVar2 = _DAT_80109210;
  setCopControlWord(2,0xa800,0);
  setCopControlWord(2,0xb000,0);
  setCopControlWord(2,0xb800,0);
  iVar6 = 0;
  _DAT_1f800090 = 0;
  do {
    func_0x000318a0(param_1 + 0x2c,local_3c + (*(byte *)(param_1 + 7) - 1),param_1 + 0x48);
    func_0x00027768(0x8011b4c0,
                    *(undefined1 *)((int)local_3c + (uint)*(byte *)(param_1 + 7) * 4 + -1),
                    (int)*(short *)(param_1 + 0x32),0);
    iVar6 = iVar6 + 1;
    *(short *)(param_1 + 0x4a) = *(short *)(param_1 + 0x4a) + 0x400;
  } while (iVar6 < 4);
  return;
}

