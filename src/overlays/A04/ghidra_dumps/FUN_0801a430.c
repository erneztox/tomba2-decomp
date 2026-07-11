// FUN_0801a430

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801a430(byte *param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  param_1[0x160] = 0;
  if (param_3 == 0) {
    if (((param_4 == 0) && ((_DAT_800bfe56 & 0x10) == 0)) &&
       ((*(ushort *)(param_1 + 0x17e) & 0x40) == 0)) {
      bVar1 = param_1[7];
      if (bVar1 == 1) {
        func_0x00076d68(param_1);
        *(short *)(param_1 + 0x42) = *(short *)(param_1 + 0x42) + *(short *)(param_1 + 0x154);
        if (param_1[0x15c] == param_1[0x147]) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        *(short *)(param_1 + 0x56) = *(short *)(param_1 + 0x56) + *(short *)(param_1 + 0x154);
        bVar2 = false;
        if (0x800 < *(short *)(param_1 + 0x42)) {
          if (param_1[0x147] == 0) {
            param_1[0x147] = 1;
            param_1[0x149] = 3;
            param_1[0x14a] = 3;
            *(short *)(param_1 + 0x56) = *(short *)(param_1 + 0x140) + 0x800;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          param_1[0x147] = 0;
          param_1[0x149] = 2;
          param_1[0x14a] = 2;
          *(undefined2 *)(param_1 + 0x56) = *(undefined2 *)(param_1 + 0x140);
          bVar2 = true;
          param_1[0x42] = 0;
          param_1[0x43] = 0;
          param_1[7] = 3;
          param_1[0x154] = 0;
          param_1[0x155] = 0;
          *param_1 = *param_1 & 3;
        }
        if (bVar2) {
          func_0x00062a30(param_1,param_2,0x85);
        }
        else {
          func_0x00062a30(param_1,param_2,0x45);
        }
      }
      else if (bVar1 < 2) {
        if (bVar1 == 0) {
          func_0x00063098(param_1);
          func_0x00076d68(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      else {
        if (bVar1 == 2) {
          param_1[7] = 0;
          param_1[0x154] = 0;
          param_1[0x155] = 0;
          param_1[0x5e] = 0;
          param_1[0x42] = 0;
          param_1[0x43] = 0;
          *param_1 = *param_1 | 4;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (bVar1 == 3) {
          func_0x00054d14(param_1,0x3d,0);
          func_0x00062a30(param_1,param_2,0x85);
          if ((_DAT_1f80017c & 3) == 0) {
            func_0x00074590(0x27,0xfffffffd,0xffffffba);
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          func_0x00076d68(param_1);
        }
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (param_1[7] < 7) {
                    /* WARNING: Could not emulate address calculation at 0x0801a660 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)param_1[7] * 4 + -0x7fef63a4))();
      return;
    }
  }
  iVar5 = *(int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x158) != 0) {
    iVar4 = (int)((*(ushort *)(param_1 + 0x56) + 0x800) * 0x10000) >> 0x10;
    iVar3 = func_0x00083f50(iVar4);
    *(short *)(param_1 + 0x2e) =
         *(short *)(iVar5 + 0x2c) + (short)(iVar3 * *(short *)(param_1 + 0x152) >> 0xc);
    iVar3 = func_0x00083e80(iVar4);
    *(short *)(param_1 + 0x36) =
         *(short *)(iVar5 + 0x34) - (short)(iVar3 * *(short *)(param_1 + 0x152) >> 0xc);
  }
  *(short *)(param_1 + 0x32) = *(short *)(iVar5 + 0x30) + *(short *)(param_1 + 0x156);
  return;
}

