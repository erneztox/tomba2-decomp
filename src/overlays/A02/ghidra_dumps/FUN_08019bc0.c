// FUN_08019bc0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08019bc0(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  
  if (((*(short *)(param_1 + 0x16e) != 0) && (DAT_800bf80d == '\0')) &&
     (uVar3 = 0, puVar5 = _DAT_1f800154, cVar2 = DAT_1f80015c,
     (*(ushort *)(param_1 + 0x17e) & 0x200) == 0)) {
    while( true ) {
      do {
        DAT_800bf80d = uVar3;
        if (cVar2 == '\0') {
          DAT_1f800182 = cVar2;
          return;
        }
        pcVar4 = (char *)*puVar5;
        DAT_1f800182 = cVar2 + -1;
        puVar5 = puVar5 + 1;
        uVar3 = DAT_800bf80d;
        cVar2 = DAT_1f800182;
      } while (*pcVar4 != '\x01');
      bVar1 = pcVar4[2];
      if (bVar1 < 5) break;
      if (bVar1 != 5) {
        halt_baddata();
      }
      func_0x00111d24(param_1);
      uVar3 = DAT_800bf80d;
      cVar2 = DAT_1f800182;
    }
    func_0x00022060(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

