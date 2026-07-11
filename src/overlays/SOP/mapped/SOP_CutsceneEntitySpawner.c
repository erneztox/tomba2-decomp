// SOP_CutsceneEntitySpawner (SOP_CutsceneEntitySpawner) - Cutscene entity spawner: 4-state machine, sets up animation and camera

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SOP_CutsceneEntitySpawner(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    func_0x0007778c(param_1);
    bVar1 = *(byte *)(param_1 + 5);
    if (bVar1 == 1) {
      func_0x00041098(param_1);
      if (*(char *)(param_1 + 0x70) == -1) {
        *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
      }
    }
    else if (((bVar1 < 2) && (bVar1 == 0)) && (iVar2 = func_0x0010b11c(param_1), iVar2 != 0)) {
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
      func_0x00040cdc(param_1,0x8001b860,0x8010cab8);
      *(undefined1 *)(param_1 + 0x70) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x0004190c(param_1);
    func_0x000518fc(param_1);
  }
  else {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          halt_baddata();
        }
        func_0x0007a624(param_1);
      }
      return;
    }
    if (bVar1 == 0) {
      iVar2 = func_0x000519e0(param_1,0xc,_DAT_800ecf98,0x800a4bc8);
      if (iVar2 != 0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf9c;
      func_0x00077c40(param_1,0x8001b860,0);
      *(undefined2 *)(param_1 + 0xb8) = 0;
      *(undefined2 *)(param_1 + 0xba) = 0;
      *(undefined2 *)(param_1 + 0xbc) = 0;
      *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
      *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + -0x8c;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

