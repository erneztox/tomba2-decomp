// FUN_8010185c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

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
        do {
          unaff_s6 = unaff_s6 + 1;
          puVar2 = _DAT_1f800148;
          cVar4 = DAT_1f800182;
          if ((bVar6 & 1) != 0) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
            switch(param_1[2]) {
            case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
          }
          while (cVar3 = DAT_1f800150, _DAT_1f800148 = puVar2, DAT_1f800150 = cVar3, cVar4 == '\0')
          {
            do {
              unaff_s3 = *(byte **)(unaff_s3 + 0x24);
              if (unaff_s3 == (byte *)0x0) {
                return;
              }
            } while (((*unaff_s3 & 1) == 0) || (unaff_s3[0x2b] != 0));
            *(char *)(unaff_s5 + 0x182) = cVar3;
            unaff_s6 = puVar2;
            puVar2 = _DAT_1f800148;
            cVar4 = cVar3;
          }
          param_1 = (byte *)*unaff_s6;
          *(char *)(unaff_s5 + 0x182) = *(char *)(unaff_s5 + 0x182) + -1;
          bVar6 = *param_1;
        } while( true );
      }
      if (bVar6 != 3) {
        FUN_8010ac0c();
        return;
      }
      func_0x80076d68(param_1);
      func_0x80055e28(param_1,1);
      if ((param_1[0x14a] & 2) == 0) {
        if ((_DAT_800e7e68 & _DAT_1f800170) != 0) {
          sVar1 = *(short *)(param_1 + 0x42);
          param_1[0x40] = 8;
          param_1[0x41] = 0;
          *(short *)(param_1 + 0x42) = sVar1 + 1;
          FUN_8010ab34(param_1,param_1[0x14a],(int)(short)(sVar1 + 1));
          return;
        }
        func_0x80056878(param_1,param_1[0x14a],0);
        sVar1 = *(short *)(param_1 + 0x40);
        *(short *)(param_1 + 0x40) = sVar1 + -1;
        if (sVar1 == 1) {
          param_1[6] = param_1[6] - 1;
        }
        FUN_8010a33c(param_1,1);
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
        uVar8 = (uint)_DAT_1f80017c;
        if ((uVar8 + (uVar8 / 7 + (uVar8 - uVar8 / 7 >> 1) >> 2) * -7 & 0xffff) != 0) {
          return;
        }
        func_0x80074590(0x33,0,0);
        return;
      }
      func_0x80054d14(param_1,0xdc,6);
      param_1[6] = 1;
      func_0x80056878(param_1,param_1[0x14a],0);
      FUN_8010ab6c(param_1);
      return;
    }
    if (bVar6 != 0) {
      FUN_8010ac0c();
      return;
    }
    param_1[0x16a] = 0;
    param_1[0x50] = 0;
    param_1[0x51] = 0;
    param_1[0x17b] = 1;
    param_1[0x58] = 0;
    param_1[0x59] = 0;
    param_1[0x145] = 0;
    func_0x80053d90(param_1);
    param_1[0x181] = 1;
    param_1[0x146] = 0;
    param_1[7] = 0;
    param_1[6] = param_1[6] + 1;
    func_0x80054d14(param_1,0xdc,4);
  }
  func_0x80055e28(param_1,1);
  if ((param_1[0x14a] & 2) == 0) {
    param_1[6] = param_1[6] + 1;
    FUN_8010a8ec();
    return;
  }
  if ((param_1[0x149] & 2) != 0) {
    func_0x80054d14(param_1,0xdd,6);
  }
  func_0x80056878(param_1,param_1[0x14a],0);
  func_0x80056b48(param_1,1);
  func_0x80055d5c(param_1);
  FUN_8010a33c(param_1,0);
  func_0x80055390(param_1);
  param_1[0x16c] = 0;
  param_1[0x16d] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  iVar7 = func_0x800489e4(param_1,(int)*(short *)(param_1 + 0x32));
  uVar5 = _DAT_1f8001a8;
  if (iVar7 == 0) {
    return;
  }
  *(undefined2 *)(param_1 + 0x6a) = _DAT_1f8001a6;
  *(undefined2 *)(param_1 + 0x16c) = uVar5;
  FUN_8010ac0c();
  return;
}

