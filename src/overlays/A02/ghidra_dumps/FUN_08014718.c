// FUN_08014718

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08014718(undefined1 *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  short sVar5;
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
  func_0x0010b2d0(param_1);
  func_0x0010a8d0(param_1);
  func_0x00054e80(param_1,0);
  iVar2 = func_0x00083f50((int)*(short *)(param_1 + 0x56));
  sVar5 = *(short *)(param_1 + 0x44);
  iVar3 = func_0x00083e80((int)*(short *)(param_1 + 0x56));
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + (iVar2 * sVar5 >> 4);
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) - (iVar3 * *(short *)(param_1 + 0x44) >> 4);
  _DAT_1f8000c0 = 0;
  _DAT_1f8000c2 = *(undefined2 *)(param_1 + 0x62);
  _DAT_1f8000c4 = 0;
  func_0x001258a4(param_1 + 0x2c);
  func_0x00076d68(param_1);
  bVar1 = false;
  if ((_DAT_800e7e68 & _DAT_1f800174) != 0) {
    iVar2 = func_0x0010b068(param_1);
    bVar1 = true;
    if (iVar2 == 0) {
      bVar1 = false;
    }
    else if (iVar2 == 1) {
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
  if (!bVar1) {
    cVar4 = param_1[0x149];
    if (cVar4 != '\x02') goto LAB_080148c8;
    param_1[5] = 0;
    param_1[6] = 0;
    if (param_1[0x165] != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x00054d14(param_1,2,8);
  }
  cVar4 = param_1[0x149];
LAB_080148c8:
  if ((cVar4 == '\x04') && ((_DAT_1f80017c & 3) == 0)) {
    local_1e = *(undefined2 *)(param_1 + 0x2e);
    local_1a = *(short *)(param_1 + 0x32) + *(short *)(param_1 + 0x84);
    local_16 = *(undefined2 *)(param_1 + 0x36);
    iVar2 = func_0x0003116c(0x35,auStack_20,0xffffffa6);
    if (iVar2 != 0) {
      *(byte *)(iVar2 + 0x28) = *(byte *)(iVar2 + 0x28) | 0x80;
    }
  }
  func_0x0010aec4(param_1);
  func_0x0010b634(param_1);
  if (param_1[0x29] != '\0') {
    if (0x1e00 < *(short *)(param_1 + 0x50)) {
      func_0x00074590(3,0,0);
    }
    *(undefined2 *)(param_1 + 0x50) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  sVar5 = *(short *)(param_1 + 0x50);
  *(short *)(param_1 + 0x50) = sVar5 + 0x800;
  if (0x3000 < (short)(sVar5 + 0x800)) {
    *(undefined2 *)(param_1 + 0x50) = 0x3000;
  }
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x50) * 0x100;
  if (((byte)param_1[5] < 2) && (((int)*(short *)(param_1 + 0x6a) & 0xf000U) == 0x1000)) {
    iVar2 = (int)(((uint)*(ushort *)(param_1 + 0x56) * -0x10 + -0x8000) * 0x10000) >> 0x10;
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    if (iVar2 < 0x2001) {
      param_1[5] = 5;
      param_1[6] = 0;
      param_1[7] = 0;
    }
  }
  if (param_1[5] == '\x01') {
    if (param_1[4] != '\x04') {
      sVar5 = 0x6c;
      if (((int)*(short *)(param_1 + 0x17e) & 0x8000U) != 0) {
        sVar5 = 0x82;
      }
      if ((((ushort)(sVar5 + *(short *)(param_1 + 0x2e) + -0x2300) <= (ushort)(sVar5 << 1)) &&
          (*(ushort *)(param_1 + 0x36) - 0x2937 < 0x9f)) &&
         ((ushort)(*(short *)(param_1 + 0x32) + 0xdacU) < 0x141)) {
        _DAT_1f8001c6 = 1;
        param_1[5] = 6;
        param_1[6] = 0;
        param_1[7] = 0;
      }
    }
    DAT_800bf81e = 1;
  }
  return;
}

