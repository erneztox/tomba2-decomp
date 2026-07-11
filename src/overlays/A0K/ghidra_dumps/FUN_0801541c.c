// FUN_0801541c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801541c(undefined1 *param_1)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  char cVar4;
  undefined1 auStack_18 [2];
  undefined2 local_16;
  short local_12;
  undefined2 local_e;
  
  if (param_1[6] == '\0') {
    *(undefined2 *)(param_1 + 0x40) = 7;
    *(undefined2 *)(param_1 + 0x42) = 0;
    param_1[7] = 0;
    param_1[6] = param_1[6] + '\x01';
  }
  else if (param_1[6] != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x0010c160(param_1);
  func_0x0010b760(param_1);
  func_0x00054e80(param_1,0);
  func_0x0010c674(param_1,0);
  func_0x00076d68(param_1);
  bVar2 = false;
  if ((_DAT_800e7e68 & _DAT_1f800174) != 0) {
    iVar3 = func_0x0010bef8(param_1);
    bVar2 = true;
    if (iVar3 == 0) {
      bVar2 = false;
    }
    else if (iVar3 == 1) {
      *param_1 = 3;
      param_1[4] = 4;
      param_1[5] = 0x25;
      param_1[6] = 0;
      _DAT_1f800166 = 0;
      _DAT_1f800190 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  if (!bVar2) {
    cVar4 = param_1[0x149];
    if (cVar4 != '\x02') goto LAB_08015560;
    param_1[5] = 0;
    param_1[6] = 0;
    if (param_1[0x165] != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x00054d14(param_1,2,8);
  }
  cVar4 = param_1[0x149];
LAB_08015560:
  if ((cVar4 == '\x04') && ((_DAT_1f80017c & 3) != 0)) {
    local_16 = *(undefined2 *)(param_1 + 0x2e);
    local_12 = *(short *)(param_1 + 0x32) + *(short *)(param_1 + 0x84);
    local_e = *(undefined2 *)(param_1 + 0x36);
    iVar3 = func_0x0003116c(0x35,auStack_18,0xffffffa6);
    if (iVar3 != 0) {
      *(byte *)(iVar3 + 0x28) = *(byte *)(iVar3 + 0x28) | 0x80;
    }
  }
  func_0x0010bd54(param_1);
  func_0x0010c4c4(param_1);
  if (param_1[0x29] != '\0') {
    if (0x1400 < *(short *)(param_1 + 0x50)) {
      func_0x00074590(3,0,0);
    }
    *(undefined2 *)(param_1 + 0x50) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  sVar1 = *(short *)(param_1 + 0x50);
  *(short *)(param_1 + 0x50) = sVar1 + 0x360;
  if (0x3e00 < (short)(sVar1 + 0x360)) {
    *(undefined2 *)(param_1 + 0x50) = 0x3e00;
  }
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x50) * 0x100;
  if (param_1[5] == '\x01') {
    DAT_800bf81e = 1;
  }
  return;
}

