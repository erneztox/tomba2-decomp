// FUN_08016fdc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08016fdc(undefined1 *param_1)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  undefined1 auStack_20 [2];
  undefined2 local_1e;
  short local_1a;
  undefined2 local_16;
  
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
  func_0x0010dab4(param_1);
  func_0x0010d0b4(param_1);
  func_0x00054e80(param_1,0);
  iVar3 = func_0x00083f50((int)*(short *)(param_1 + 0x56));
  sVar1 = *(short *)(param_1 + 0x44);
  iVar4 = func_0x00083e80((int)*(short *)(param_1 + 0x56));
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + (iVar3 * sVar1 >> 4);
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) - (iVar4 * *(short *)(param_1 + 0x44) >> 4);
  _DAT_1f8000c0 = 0;
  if (1 < (byte)param_1[0x29] - 2) {
    _DAT_1f8000c2 = *(undefined2 *)(param_1 + 0x62);
    _DAT_1f8000c4 = 0;
    func_0x0012ee08(param_1 + 0x2c,&DAT_1f8000c0,0);
  }
  func_0x00076d68(param_1);
  bVar2 = false;
  if ((_DAT_800e7e68 & _DAT_1f800174) != 0) {
    iVar3 = func_0x0010d84c(param_1);
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
    cVar5 = param_1[0x149];
    if (cVar5 != '\x02') goto LAB_080171a8;
    param_1[5] = 0;
    param_1[6] = 0;
    if (param_1[0x165] != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x00054d14(param_1,2,8);
  }
  cVar5 = param_1[0x149];
LAB_080171a8:
  if ((cVar5 == '\x04') && ((_DAT_1f80017c & 3) == 0)) {
    local_1e = *(undefined2 *)(param_1 + 0x2e);
    local_1a = *(short *)(param_1 + 0x32) + *(short *)(param_1 + 0x84);
    local_16 = *(undefined2 *)(param_1 + 0x36);
    iVar3 = func_0x0003116c(0x35,auStack_20,0xffffffa6);
    if (iVar3 != 0) {
      *(byte *)(iVar3 + 0x28) = *(byte *)(iVar3 + 0x28) | 0x80;
    }
  }
  func_0x0010d6a8(param_1);
  func_0x0010df90(param_1);
  if (param_1[0x29] != '\0') {
    if (0x1400 < *(short *)(param_1 + 0x50)) {
      func_0x00074590(3,0,0);
    }
    *(undefined2 *)(param_1 + 0x50) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  sVar1 = *(short *)(param_1 + 0x50);
  *(short *)(param_1 + 0x50) = sVar1 + 0x800;
  if (0x3000 < (short)(sVar1 + 0x800)) {
    *(undefined2 *)(param_1 + 0x50) = 0x3000;
  }
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x50) * 0x100;
  if (param_1[5] == '\x01') {
    DAT_800bf81e = 1;
  }
  return;
}

