// FUN_08033998

/* WARNING: Control flow encountered bad instruction data */

void FUN_08033998(int param_1,int param_2)

{
  ushort uVar1;
  short sVar2;
  
  if (param_2 != 0) {
    func_0x00051b04(*(undefined4 *)(param_1 + 0xc0),0xc,DAT_80141ab4);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  sVar2 = *(short *)(param_1 + 0x40) + -1;
  if (*(short *)(param_1 + 0x40) == 0) {
    func_0x00051b04(*(undefined4 *)(param_1 + 0xc0),0xc,
                    (&DAT_80141ab4)[*(byte *)(*(short *)(param_1 + 0xe) + -0x7febe544)]);
    uVar1 = *(short *)(param_1 + 0xe) + 1U & 0xf;
    *(ushort *)(param_1 + 0xe) = uVar1;
    if (uVar1 != 0) {
      return;
    }
    uVar1 = func_0x0009a450();
    sVar2 = (uVar1 & 0x3f) + 10;
  }
  *(short *)(param_1 + 0x40) = sVar2;
  return;
}

