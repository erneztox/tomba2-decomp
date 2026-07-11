// A09_EntityState_CameraTrack - Entity state: tracks DAT_800bf860, camera follow

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

s32 A09_EntityState_CameraTrack(int param_1)

{
  u8 bVar1;
  int iVar2;
  short sVar3;
  
  iVar2 = _DAT_800bf860;
  bVar1 = param_1->sub_state;
  if (bVar1 == 1) {
    sVar3 = param_1->timer1 + -1;
    param_1->timer1 = sVar3;
    if (sVar3 == -1) {
      param_1->sub_state = param_1->sub_state + '\x01';
      _DAT_800bf864 = Entity_SpawnWithPos(0xa00,param_1 + 0x2c,0);
      param_1->timer1 = 0x1e;
    }
    else {
      *(short *)(iVar2 + 0x30) = *(short *)(iVar2 + 0x30) + 0x10;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      param_1->sub_state = 1;
      param_1->timer1 = 10;
      halt_baddata();
    }
  }
  else if (bVar1 == 2) {
    sVar3 = param_1->timer1 + -1;
    param_1->timer1 = sVar3;
    return sVar3 == -1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

