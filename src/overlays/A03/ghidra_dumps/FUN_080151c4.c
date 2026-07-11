// FUN_080151c4

/* WARNING: Control flow encountered bad instruction data */

void FUN_080151c4(int param_1)

{
  short sVar1;
  undefined2 uVar2;
  int iVar3;
  undefined1 auStack_38 [32];
  undefined1 auStack_18 [8];
  
  *(byte *)(param_1 + 0x72) = *(byte *)(param_1 + 0x72) & 0xf1;
  *(short *)(param_1 + 0x40) = *(short *)(param_1 + 0x40) + 1;
  if (*(uint *)(param_1 + 0x60) < 0x80111ba9) {
    *(undefined2 *)(param_1 + 0x6c) = 0x8d0;
    *(undefined2 *)(param_1 + 0x6e) = 0;
    *(undefined2 *)(param_1 + 0x70) = 0;
    *(undefined2 *)(param_1 + 0x76) = 0;
    *(byte *)(param_1 + 0x72) = *(byte *)(param_1 + 0x72) | 1;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    func_0x0010cf6c(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(short *)(param_1 + 0x6e) = *(short *)(param_1 + 0x6e) >> 1;
  *(short *)(param_1 + 0x70) = *(short *)(param_1 + 0x70) >> 1;
  *(short *)(param_1 + 0x6c) =
       *(short *)(param_1 + 0x6c) + (short)(0x3c0 - *(short *)(param_1 + 0x6c) >> 6);
  if (*(short *)(param_1 + 0x76) < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (0 < *(short *)(param_1 + 0x76)) {
    *(short *)(param_1 + 0x76) = *(short *)(param_1 + 0x76) + -1;
  }
  if ((DAT_800bf908 == -1) && (DAT_800bf907 == -1)) {
    func_0x0010d988(param_1);
    uVar2 = 0x8d0;
    if (0x8cf < *(short *)(param_1 + 0x6c)) {
      if (0x3510 < *(short *)(param_1 + 0x6c)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      goto LAB_08015344;
    }
  }
  else {
    func_0x0010d1f4(param_1);
    uVar2 = 0x8d0;
    if (0x8cf < *(short *)(param_1 + 0x6c)) {
      if (*(short *)(param_1 + 0x6c) < 0x1a81) goto LAB_08015344;
      uVar2 = 0x1a80;
    }
  }
  *(undefined2 *)(param_1 + 0x6c) = uVar2;
LAB_08015344:
  if (DAT_800bf80d == '\0') {
    if (0x554 < (ushort)(*(short *)(param_1 + 0x6e) + 0x2aaU)) {
      *(undefined1 *)(param_1 + 7) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((*(byte *)(param_1 + 0x72) & 1) != 0) {
      if ((((int)*(short *)(*(int *)(param_1 + 0x60) + 6) & 0x8000U) != 0) &&
         (iVar3 = func_0x0010c060(*(int *)(param_1 + 0x60),*(short *)(param_1 + 0x6a) + -1000,
                                  auStack_18,auStack_38),
         ((int)*(short *)(iVar3 + 6) & 0x8000U) != 0)) {
        *(undefined1 *)(param_1 + 7) = 1;
        DAT_800bf80d = '\x01';
      }
    }
  }
  *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(param_1 + 0xac);
  *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(param_1 + 0xb0);
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xb4);
  sVar1 = *(short *)(param_1 + 0x6c) >> 2;
  *(short *)(*(int *)(param_1 + 0xc4) + 0xc) = *(short *)(*(int *)(param_1 + 0xc4) + 0xc) + sVar1;
  *(short *)(*(int *)(param_1 + 200) + 0xc) = *(short *)(*(int *)(param_1 + 200) + 0xc) + sVar1;
  *(short *)(*(int *)(param_1 + 0xcc) + 0xc) = *(short *)(*(int *)(param_1 + 0xcc) + 0xc) + sVar1;
  *(short *)(*(int *)(param_1 + 0xd0) + 0xc) = *(short *)(*(int *)(param_1 + 0xd0) + 0xc) + sVar1;
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 1) = 1;
    func_0x00077ebc(param_1);
  }
  func_0x00051300(param_1);
  func_0x0010c948(param_1);
  return;
}

