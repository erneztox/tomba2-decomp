// FUN_08019efc

uint FUN_08019efc(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  *(undefined2 *)(param_1 + 8) = 0;
  pbVar5 = *(byte **)(param_2 * 4 + -0x7fed73b8);
  uVar2 = 0x800c0000;
  if (*pbVar5 != 0xff) {
    pbVar4 = pbVar5 + 0xc;
    do {
      if ((param_2 == 0) || (*(short *)(param_1 + 8) < 0xf)) {
        if (pbVar4[-2] < 0xd) {
                    /* WARNING: Could not emulate address calculation at 0x08019fa4 */
                    /* WARNING: Treating indirect jump as call */
          uVar2 = (**(code **)((uint)pbVar4[-2] * 4 + -0x7fef6c18))();
          return uVar2;
        }
        iVar3 = func_0x00072ddc(param_1,*pbVar5,pbVar4[-0xb],pbVar4[-10]);
        if (iVar3 != 0) {
          *(int *)(iVar3 + 0x2c) = (int)*(short *)(pbVar4 + -8) << 0x10;
          *(int *)(iVar3 + 0x30) = (int)*(short *)(pbVar4 + -6) << 0x10;
          *(int *)(iVar3 + 0x34) = (int)*(short *)(pbVar4 + -4) << 0x10;
          bVar1 = pbVar4[-9];
          *(undefined2 *)(iVar3 + 0x54) = 0;
          *(undefined2 *)(iVar3 + 0x56) = 0;
          *(undefined2 *)(iVar3 + 0x58) = 0;
          *(byte *)(iVar3 + 3) = bVar1;
          *(undefined4 *)(iVar3 + 0x1c) = *(undefined4 *)pbVar4;
          if (param_2 != 0) {
            *(int *)(param_1 + *(short *)(param_1 + 8) * 4 + 0xc) = iVar3;
            *(short *)(param_1 + 8) = *(short *)(param_1 + 8) + 1;
          }
        }
      }
      pbVar5 = pbVar5 + 0x10;
      uVar2 = (uint)*pbVar5;
      pbVar4 = pbVar4 + 0x10;
    } while (uVar2 != 0xff);
  }
  return uVar2;
}

