/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

// Entity state machine - 4 estados (0-3)
// param_1 = entity pointer
// [6] = state machine current state
// [0x14a] = flags
void FUN_8010185c(byte *param_1)
{
  short sVar1;
  undefined4 *puVar2;
  char cVar3;
  char cVar4;
  undefined2 uVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  byte *unaff_s3;
  int unaff_s5;
  undefined4 *unaff_s6;
  
  func_0x80076d68();
  bVar6 = param_1[6];
  if (bVar6 != 1) {
    if (1 < bVar6) {
      if (bVar6 == 2) {
        func_0x80055e28(param_1,1);
        if ((param_1[0x14a] & 2) == 0) {
          func_0x80054d14(param_1,0xdb,6);
          if ((_DAT_800e7e68 & _DAT_1f800170) == 0) {
            func_0x80056878(param_1,param_1[0x14a],0);
            FUN_8010a33c(param_1,0);
            func_0x80056b48(param_1,1);
            func_0x80055d5c(param_1);
            func_0x80055390(param_1);
            param_1[0x16c] = 0;
            param_1[0x16d] = 0;
            param_1[0x6a] = 0;
            param_1[0x6b] = 0;
            iVar7 = func_0x800489e4(param_1,(int)*(short *)(param_1 + 0x32));
            uVar5 = _DAT_1f8001a8;
            if (iVar7 != 0) {
              *(undefined2 *)(param_1 + 0x6a) = _DAT_1f8001a6;
              *(undefined2 *)(param_1 + 0x16c) = uVar5;
            }
            if ((uint)_DAT_1f80017c % 0xf != 0) {
              return;
            }
            FUN_8010ac04(0x33,0);
            return;
          }
          bVar6 = 0;
          param_1[0x40] = 8;
          param_1[0x41] = 0;
          param_1[0x42] = 1;
          param_1[0x43] = 0;
          param_1[6] = param_1[6] + 1;
        }
        else {
          func_0x80054d14(param_1,0xdc,6);
          bVar6 = param_1[6] - 1;
          param_1[6] = bVar6;
        }
        // ... (truncated by Ghidra)
      }
      // ... states 3+
    }
    // ... state 0 init
  }
  // ... state 1
}
