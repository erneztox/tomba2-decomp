// FUN_0802180c

/* WARNING: Control flow encountered bad instruction data */

void FUN_0802180c(int param_1,char param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = func_0x0009a450();
  iVar4 = (uVar2 & 3) + 2;
  while( true ) {
    iVar3 = func_0x00072ddc(0,0,3,0x11);
    if (iVar3 == 0) {
      return;
    }
    *(undefined4 *)(iVar3 + 0x1c) = 0x8011a564;
    uVar1 = func_0x0009a450();
    *(short *)(iVar3 + 0x40) = (short)iVar4;
    *(char *)(iVar3 + 3) = param_2;
    if (param_2 == '\x01') break;
    *(undefined2 *)(iVar3 + 0x2e) = *(undefined2 *)(param_1 + 2);
    *(ushort *)(iVar3 + 0x32) = *(short *)(param_1 + 6) - (uVar1 & 0xf0);
    iVar4 = iVar4 + -1;
    *(ushort *)(iVar3 + 0x36) = *(short *)(param_1 + 10) + (uVar1 & 0xf0);
    if (iVar4 < 0) {
      return;
    }
  }
  *(byte *)(iVar3 + 0x28) = *(byte *)(iVar3 + 0x28) | 0x80;
  *(undefined2 *)(iVar3 + 0x2e) = *(undefined2 *)(param_1 + 2);
  *(ushort *)(iVar3 + 0x32) = *(short *)(param_1 + 6) - (uVar1 & 0x3f);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

