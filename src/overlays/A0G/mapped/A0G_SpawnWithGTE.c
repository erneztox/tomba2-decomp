// A0G_SpawnWithGTE - Spawn entity with GTE position: sets DAT_1f8000d2/da/ee

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void A0G_SpawnWithGTE(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 2) == '\0') {
    *(undefined2 *)(param_1 + 0x56) = 0;
    _DAT_1f8000ee = 0xf92a;
    *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
    _DAT_1f8000d2 = 0xd69;
    _DAT_1f8000da = 0xe74;
    _DAT_1f8000d6 = _DAT_800e7eb2 + -0xdc;
  }
  else if (*(char *)(param_1 + 2) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x0006e3f4(param_1,0x800e7eac);
  iVar1 = _DAT_800e7eb6 - 0xed8;
  if (iVar1 * 0x10000 < 0) {
    iVar1 = 0;
  }
  _DAT_1f8000da = 0xe74 - (short)(((iVar1 << 0x10) >> 0x10) - ((iVar1 << 0x10) >> 0x1f) >> 1);
  _DAT_1f8000d6 = _DAT_800e7eb2 + -0xdc;
  return;
}

