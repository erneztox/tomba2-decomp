// OPN_SpawnEntity (OPN_SpawnEntity) - Entity spawner: pool 0, type 3, subtype 0x10, behavior 0x8012DA04

/* WARNING: Control flow encountered bad instruction data */

undefined4 OPN_SpawnEntity(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = func_0x00072ddc(param_1,0,3,0x10);
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 3) = 1;
    *(undefined4 *)(iVar1 + 0x1c) = 0x8012da04;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}

