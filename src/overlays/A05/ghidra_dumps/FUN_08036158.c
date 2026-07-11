// FUN_08036158

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08036158(int param_1,undefined4 param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  short sVar4;
  undefined4 uVar5;
  
  uVar5 = 0x2f;
  if (*(char *)(param_1 + 0x5e) != '\0') {
    uVar2 = func_0x0009a450(param_1,param_2,0x2f);
    uVar5 = 0x30;
    if ((uVar2 & 1) != 0) {
      uVar5 = 0x2f;
    }
  }
  iVar3 = func_0x00051b70(param_1,0xc,uVar5);
  if (iVar3 != 0) {
    return;
  }
  if (*(char *)(param_1 + 0x5e) == '\0') {
    *(undefined2 *)(param_1 + 0x32) = 0xccb1;
    sVar4 = _DAT_1f800164 + 0x52;
    *(short *)(param_1 + 0x2e) = _DAT_1f800160 + -0x3e;
    *(short *)(param_1 + 0x36) = sVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(char *)(param_1 + 0x5e) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined2 *)(param_1 + 0x2e) = 0x313f;
  uVar1 = func_0x0009a450();
  *(ushort *)(param_1 + 0x32) = (uVar1 & 0xff) + 0xcf2c;
  *(undefined2 *)(param_1 + 0x36) = 0x40ee;
  func_0x0009a450();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

