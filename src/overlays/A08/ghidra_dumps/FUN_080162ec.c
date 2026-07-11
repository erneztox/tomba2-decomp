// FUN_080162ec

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080162ec(int param_1)

{
  if ((DAT_800bf816 == '\0') || (*(char *)(param_1 + 0x16b) != '\b')) {
    func_0x0010b328(param_1);
  }
  else if (((*(byte *)(param_1 + 0x145) & 1) == 0) &&
          ((int)_DAT_800bf812 - (int)*(short *)(param_1 + 0x62) <= (int)*(short *)(param_1 + 0x32)))
  {
    *(short *)(param_1 + 0x32) = _DAT_800bf812 - *(short *)(param_1 + 0x62);
    func_0x00022c78(param_1);
    *(byte *)(param_1 + 0x29) = *(byte *)(param_1 + 0x29) | 0x80;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((DAT_1f800137 == '\0') && (DAT_800bf80f == '\0')) {
    func_0x0010b104(param_1);
  }
  return;
}

