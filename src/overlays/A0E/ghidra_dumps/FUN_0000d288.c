// FUN_0000d288

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000d288(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = _DAT_1f80024c;
  if (DAT_1f800246 == '\0') {
    *(undefined1 *)(param_1 + 5) = 0;
    *(undefined1 *)(param_1 + 6) = 0;
    *(undefined1 *)(param_1 + 7) = 2;
    *(undefined2 *)(param_1 + 100) = 0;
    *(undefined2 *)(param_1 + 0x56) = *(undefined2 *)(param_1 + 0x62);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar2 = func_0x000782b0(param_1 + 0x2c,(int)_DAT_1f800160,(int)_DAT_1f800164);
  uVar1 = func_0x000776f8((iVar2 + -0x400) * 0x10000 >> 0x10,(int)*(short *)(param_1 + 0x56),0x80);
  *(undefined2 *)(param_1 + 0x56) = uVar1;
  uVar1 = func_0x000776f8(0,(int)*(short *)(*(int *)(param_1 + 0xc0) + 8),0x80);
  *(undefined2 *)(*(int *)(param_1 + 0xc0) + 8) = uVar1;
  func_0x001156f4(param_1);
  if (*(char *)(param_1 + 0x29) != '\0') {
    uVar4 = 0x88;
    if (*(short *)(iVar3 + 0x6e) == 1) {
      uVar4 = 0x89;
    }
    func_0x00074590(uVar4,0,0);
    *(undefined1 *)(param_1 + 6) = 0;
    *(undefined2 *)(param_1 + 100) = 0;
    *(undefined1 *)(param_1 + 7) = 3;
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
  }
  iVar3 = func_0x00083e80((int)*(short *)(param_1 + 0x60));
  *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x7c) + (short)(iVar3 >> 4);
  *(ushort *)(param_1 + 0x60) = *(short *)(param_1 + 0x60) + 0x40U & 0xfff;
  return;
}

