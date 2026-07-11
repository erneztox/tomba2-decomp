// GAME_EventDispatch (GAME_EventDispatch) - Event/sequence dispatch: processes event results, manages camera events

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GAME_EventDispatch(void)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *(ushort *)(_DAT_1f800138 + 0x50);
  if (uVar1 == 2) {
    *(undefined2 *)(_DAT_1f800138 + 0x50) = 3;
    func_0x00050894(0);
    DAT_1f800136 = 2;
    func_0x0007ac6c();
  }
  else if (uVar1 < 3) {
    *(ushort *)(_DAT_1f800138 + 0x50) = uVar1 + 1;
  }
  else if (uVar1 == 3) {
    iVar3 = func_0x000346bc();
    iVar2 = _DAT_1f800138;
    if (iVar3 != 0) {
      *(undefined2 *)(_DAT_1f800138 + 0x50) = 0;
      *(undefined1 *)(iVar2 + 0x6b) = 0;
      DAT_1f800136 = 0;
      DAT_800bf819 = 8;
      func_0x00050970();
    }
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

