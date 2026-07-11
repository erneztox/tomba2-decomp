// FUN_08012544

/* WARNING: Control flow encountered bad instruction data */

void FUN_08012544(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 == 1) {
    func_0x00041098(param_1);
    if (*(char *)(param_1 + 0x70) == -1) {
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
    }
  }
  else if (((bVar1 < 2) && (bVar1 == 0)) && (iVar2 = func_0x0010b11c(), iVar2 != 0)) {
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
    func_0x00040cdc(param_1,0x8001b860,0x8010cab8);
    *(undefined1 *)(param_1 + 0x70) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

