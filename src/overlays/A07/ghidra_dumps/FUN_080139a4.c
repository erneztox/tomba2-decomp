// FUN_080139a4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080139a4(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 *puVar3;
  
  if (((*(short *)(param_1 + 0x16e) != 0) && (DAT_800bf80d == '\0')) &&
     (puVar3 = _DAT_1f800154, cVar1 = DAT_1f80015c, (*(ushort *)(param_1 + 0x17e) & 0x200) == 0)) {
joined_r0x08013a0c:
    DAT_1f800182 = cVar1;
    if (DAT_1f800182 != '\0') {
      pcVar2 = (char *)*puVar3;
      DAT_1f800182 = DAT_1f800182 + -1;
      puVar3 = puVar3 + 1;
      if (*pcVar2 != '\x01') goto LAB_08013a74;
      if ((byte)pcVar2[2] < 5) {
        func_0x00022060(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (pcVar2[2] != 5) {
        halt_baddata();
      }
      goto LAB_08013a8c;
    }
  }
  return;
LAB_08013a74:
  cVar1 = DAT_1f800182;
  if ((*pcVar2 == '\x05') && (pcVar2[2] == '\x05')) {
LAB_08013a8c:
    func_0x0010b6f4(param_1);
    cVar1 = DAT_1f800182;
  }
  goto joined_r0x08013a0c;
}

