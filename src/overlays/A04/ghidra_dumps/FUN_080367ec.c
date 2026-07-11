// FUN_080367ec

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080367ec(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  int iVar5;
  
  iVar5 = func_0x00116b48();
  if (iVar5 == 0) {
    return;
  }
  bVar1 = param_1[5];
  if (bVar1 == 1) {
    if (param_1[0x70] != -1) goto LAB_08036a9c;
    if (param_1[6] == '\0') {
      uVar4 = 3;
      if ((DAT_800bf8c9 != -1) && (uVar4 = 2, (DAT_800bfa07 & 2) == 0)) {
        DAT_800bfa07 = DAT_800bfa07 | 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      param_1[0x7a] = uVar4;
      func_0x00040d68(param_1,0x80141b28);
      param_1[0x70] = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (param_1[6] != '\x01') {
      halt_baddata();
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (param_1[0x2b] == '\x03') {
        func_0x00042354(1,1);
        func_0x00040d68(param_1,0x80141b18);
        param_1[0x70] = 2;
        param_1[6] = 0;
        param_1[5] = param_1[5] + '\x01';
        halt_baddata();
      }
      if (((DAT_800bfa0a & 0xf) < 2) && ((DAT_800bfa07 & 0x80) != 0)) {
        *param_1 = 2;
        uVar3 = _DAT_800ecf68;
        *(undefined4 *)(param_1 + 0x7c) = 0x80017fe8;
        *(undefined4 *)(param_1 + 0x3c) = uVar3;
        func_0x00041768(param_1,0xe2,4);
        param_1[6] = 0;
        param_1[5] = 2;
        halt_baddata();
      }
      goto LAB_08036a9c;
    }
    if (bVar1 != 2) {
      halt_baddata();
    }
    bVar1 = param_1[6];
    if (bVar1 == 1) {
      if (1 < (DAT_800bfa0a & 0xf)) {
        *(undefined2 *)(param_1 + 0x40) = 0;
        halt_baddata();
      }
      goto LAB_08036a9c;
    }
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        halt_baddata();
      }
      iVar5 = func_0x00041438(param_1,0x400,0x80);
      if (iVar5 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      goto LAB_08036a9c;
    }
    if (bVar1 == 2) {
      sVar2 = *(short *)(param_1 + 0x40);
      *(short *)(param_1 + 0x40) = sVar2 + 1;
      uVar3 = _DAT_800ecf90;
      if (0x3b < (short)(sVar2 + 1)) {
        *(undefined4 *)(param_1 + 0x7c) = 0x80144404;
        *(undefined4 *)(param_1 + 0x3c) = uVar3;
        func_0x00041768(param_1,4,8);
        param_1[6] = param_1[6] + '\x01';
        halt_baddata();
      }
      goto LAB_08036a9c;
    }
    if (bVar1 != 3) {
      halt_baddata();
    }
    iVar5 = func_0x00041438(param_1,0,0x80);
    if (iVar5 == 0) goto LAB_08036a9c;
    *param_1 = 9;
    func_0x00041768(param_1,param_1[0x7b],8);
  }
  param_1[5] = 0;
LAB_08036a9c:
  func_0x00041098(param_1);
  func_0x0004190c(param_1);
  return;
}

