// SOP_EntitySpawner2 (SOP_EntitySpawner2) - Entity spawner variant 2: spawns with camera shake, sets position/rotation

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SOP_EntitySpawner2(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    func_0x0007778c(param_1);
    func_0x0010b588(param_1);
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
      iVar2 = func_0x000519e0(param_1,0xf,_DAT_800ecfa0,0x8010cb08);
      if (iVar2 != 0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf68;
      func_0x00077c40(param_1,0x80017fe8,2);
      *(undefined2 *)(param_1 + 0x84) = 0x60;
      *(undefined1 *)(param_1 + 3) = 1;
      *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
      *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + -0x60;
      func_0x0010ae30();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

