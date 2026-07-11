// FUN_0801c3ec

/* WARNING: Control flow encountered bad instruction data */

void FUN_0801c3ec(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 == 1) {
    iVar2 = func_0x0007101c(param_1,0);
    func_0x00041098(param_1);
    if ((iVar2 != 0) && (*(char *)(param_1 + 0x70) == -1)) {
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    }
  }
  else if (((bVar1 < 2) && (bVar1 == 0)) && (DAT_800bf9d5 == '\x01')) {
    func_0x00070f00(param_1,0,0);
    func_0x00040d68(param_1,0x80132e34);
    *(undefined1 *)(param_1 + 0x70) = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x00070e60(param_1);
  func_0x0004190c(param_1);
  return;
}

