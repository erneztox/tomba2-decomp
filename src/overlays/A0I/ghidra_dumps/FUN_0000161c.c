// FUN_0000161c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000161c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_20 [2];
  short local_1e;
  short local_1a;
  short local_16;
  
  if (*(char *)(param_1 + 2) == '\0') {
    *(undefined2 *)(param_1 + 0x56) = 0;
    _DAT_1f8000ee = 0xf542;
    *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
    _DAT_1f8000d2 = 0xce4;
    _DAT_1f8000d6 = 0xf8f4;
    _DAT_1f8000da = 0xe74;
    *(byte *)(param_1 + 100) = *(byte *)(param_1 + 100) | 0x80;
  }
  else if (*(char *)(param_1 + 2) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (((DAT_800e7eaa == '\b') && (_DAT_800e7eb2 < -0x3200)) && (_DAT_800e7eae < 0xe82)) {
    _DAT_800e7eae = 0xe82;
    _DAT_800e7eb6 = 0x837;
  }
  *(short *)(param_1 + 10) = _DAT_800e7eae;
  *(short *)(param_1 + 0xe) = _DAT_800e7eb2 + -200;
  *(undefined2 *)(param_1 + 0x12) = _DAT_800e7eb6;
  func_0x0006e3f4(param_1,param_1 + 8);
  local_1e = 0xce4;
  local_16 = 0xe74;
  iVar1 = func_0x000782b0(auStack_20,(int)*(short *)(param_1 + 10),(int)*(short *)(param_1 + 0x12));
  iVar2 = (iVar1 + 0x800) * 0x10000 >> 0x10;
  iVar1 = func_0x00083f50(iVar2);
  iVar2 = func_0x00083e80(iVar2);
  local_1e = local_1e + (short)(iVar1 * 600 >> 0xc);
  local_16 = local_16 - (short)(iVar2 * 600 >> 0xc);
  local_1a = *(short *)(param_1 + 0xe) + 0x280;
  if (-0x70c < local_1a) {
    local_1a = -0x70c;
  }
  func_0x0006cec4(0x1f8000d0,auStack_20,0xe0);
  return;
}

