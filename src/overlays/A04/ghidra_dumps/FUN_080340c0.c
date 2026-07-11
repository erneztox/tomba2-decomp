// FUN_080340c0

/* WARNING: Control flow encountered bad instruction data */

void FUN_080340c0(int param_1)

{
  short sVar1;
  int iVar2;
  ushort uVar3;
  
  func_0x0004766c();
  func_0x0004954c(param_1,(int)*(short *)(param_1 + 100),0);
  *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + *(short *)(param_1 + 0x4a);
  if ((*(char *)(param_1 + 0x29) == '\0') &&
     (iVar2 = func_0x00049250(param_1,0,(int)*(short *)(param_1 + 0x66)), iVar2 == 0)) {
    func_0x0012f41c(param_1,0,0);
    *(undefined1 *)(param_1 + 5) = 1;
    *(undefined1 *)(param_1 + 6) = 0;
    *(undefined2 *)(param_1 + 0x72) = 0;
  }
  else if (*(char *)(param_1 + 6) == '\0') {
    func_0x0012f298(param_1);
  }
  else if (*(char *)(param_1 + 6) == '\x01') {
    if (((*(char *)(param_1 + 1) != '\0') && (*(short *)(param_1 + 0x42) != 0)) &&
       (*(short *)(*(int *)(param_1 + 0x38) + 4) == 1)) {
      uVar3 = (ushort)DAT_1f800207;
      *(undefined2 *)(param_1 + 0x42) = 0;
      if ((*(short *)(param_1 + 0x74) <= (short)uVar3) &&
         ((short)uVar3 <= *(short *)(param_1 + 0x76))) {
        func_0x00074590(0x90,0,0);
      }
    }
    sVar1 = *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x40) = sVar1 + -1;
    if (sVar1 == 1) {
      *(undefined1 *)(param_1 + 6) = 0;
    }
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

