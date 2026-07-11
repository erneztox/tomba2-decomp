/**
 * @brief CD SPU transfer variant 2: writes to SPU RAM
 * @note Original: func_80098810 at 0x80098810
 */
// CD_SPU_Transfer2



void FUN_80098810(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  bVar1 = uVar2 == 0;
  if ((bVar1) || ((uVar2 & 1) != 0)) {
    *(short *)(DAT_800ac604 + 0x1c0) = (short)param_1->flags;
  }
  if ((bVar1) || ((uVar2 & 2) != 0)) {
    *(undefined2 *)(DAT_800ac604 + 0x1c2) = *(undefined2 *)((int)param_1 + 6);
  }
  if ((bVar1) || ((uVar2 & 4) != 0)) {
    *(short *)(DAT_800ac604 + 0x1c4) = (short)param_1->kind;
  }
  if ((bVar1) || ((uVar2 & 8) != 0)) {
    *(undefined2 *)(DAT_800ac604 + 0x1c6) = *(undefined2 *)((int)param_1 + 10);
  }
  if ((bVar1) || ((uVar2 & 0x10) != 0)) {
    *(short *)(DAT_800ac604 + 0x1c8) = (short)param_1->sub_type;
  }
  if ((bVar1) || ((uVar2 & 0x20) != 0)) {
    *(undefined2 *)(DAT_800ac604 + 0x1ca) = *(undefined2 *)((int)param_1 + 0xe);
  }
  if ((bVar1) || ((uVar2 & 0x40) != 0)) {
    *(short *)(DAT_800ac604 + 0x1cc) = (short)param_1->state;
  }
  if ((bVar1) || ((uVar2 & 0x80) != 0)) {
    *(undefined2 *)(DAT_800ac604 + 0x1ce) = *(undefined2 *)((int)param_1 + 0x12);
  }
  if ((bVar1) || ((uVar2 & 0x100) != 0)) {
    *(short *)(DAT_800ac604 + 0x1d0) = (short)param_1->behavior_state;
  }
  if ((bVar1) || ((uVar2 & 0x200) != 0)) {
    *(undefined2 *)(DAT_800ac604 + 0x1d2) = *(undefined2 *)((int)param_1 + 0x16);
  }
  if ((bVar1) || ((uVar2 & 0x400) != 0)) {
    *(short *)(DAT_800ac604 + 0x1d4) = (short)param_1->action_state;
  }
  if ((bVar1) || ((uVar2 & 0x800) != 0)) {
    *(undefined2 *)(DAT_800ac604 + 0x1d6) = *(undefined2 *)((int)param_1 + 0x1a);
  }
  if ((bVar1) || ((uVar2 & 0x1000) != 0)) {
    *(short *)(DAT_800ac604 + 0x1d8) = (short)param_1->sub_action;
  }
  if ((bVar1) || ((uVar2 & 0x2000) != 0)) {
    *(undefined2 *)(DAT_800ac604 + 0x1da) = *(undefined2 *)((int)param_1 + 0x1e);
  }
  if ((bVar1) || ((uVar2 & 0x4000) != 0)) {
    *(short *)(DAT_800ac604 + 0x1dc) = (short)param_1->counter1;
  }
  if ((bVar1) || ((uVar2 & 0x8000) != 0)) {
    *(undefined2 *)(DAT_800ac604 + 0x1de) = *(undefined2 *)((int)param_1 + 0x22);
  }
  if ((bVar1) || ((uVar2 & 0x10000) != 0)) {
    *(short *)(DAT_800ac604 + 0x1e0) = (short)param_1->counter2;
  }
  if ((bVar1) || ((uVar2 & 0x20000) != 0)) {
    *(undefined2 *)(DAT_800ac604 + 0x1e2) = *(undefined2 *)((int)param_1 + 0x26);
  }
  if ((bVar1) || ((uVar2 & 0x40000) != 0)) {
    *(short *)(DAT_800ac604 + 0x1e4) = (short)param_1[10];
  }
  if ((bVar1) || ((uVar2 & 0x80000) != 0)) {
    *(undefined2 *)(DAT_800ac604 + 0x1e6) = *(undefined2 *)((int)param_1 + 0x2a);
  }
  if ((bVar1) || ((uVar2 & 0x100000) != 0)) {
    *(short *)(DAT_800ac604 + 0x1e8) = (short)param_1->render_flags;
  }
  if ((bVar1) || ((uVar2 & 0x200000) != 0)) {
    *(undefined2 *)(DAT_800ac604 + 0x1ea) = *(undefined2 *)((int)param_1 + 0x2e);
  }
  if ((bVar1) || ((uVar2 & 0x400000) != 0)) {
    *(short *)(DAT_800ac604 + 0x1ec) = (short)param_1[0xc];
  }
  if ((bVar1) || ((uVar2 & 0x800000) != 0)) {
    *(undefined2 *)(DAT_800ac604 + 0x1ee) = *(undefined2 *)((int)param_1 + 0x32);
  }
  if ((bVar1) || ((uVar2 & 0x1000000) != 0)) {
    *(short *)(DAT_800ac604 + 0x1f0) = (short)param_1->sprite_flags;
  }
  if ((bVar1) || ((uVar2 & 0x2000000) != 0)) {
    *(undefined2 *)(DAT_800ac604 + 0x1f2) = *(undefined2 *)((int)param_1 + 0x36);
  }
  if ((bVar1) || ((uVar2 & 0x4000000) != 0)) {
    *(short *)(DAT_800ac604 + 500) = (short)param_1[0xe];
  }
  if ((bVar1) || ((uVar2 & 0x8000000) != 0)) {
    *(undefined2 *)(DAT_800ac604 + 0x1f6) = *(undefined2 *)((int)param_1 + 0x3a);
  }
  if ((bVar1) || ((uVar2 & 0x10000000) != 0)) {
    *(short *)(DAT_800ac604 + 0x1f8) = (short)param_1[0xf];
  }
  if ((bVar1) || ((uVar2 & 0x20000000) != 0)) {
    *(undefined2 *)(DAT_800ac604 + 0x1fa) = *(undefined2 *)((int)param_1 + 0x3e);
  }
  if ((bVar1) || ((uVar2 & 0x40000000) != 0)) {
    *(short *)(DAT_800ac604 + 0x1fc) = (short)param_1[0x10];
  }
  if ((bVar1) || ((int)uVar2 < 0)) {
    *(undefined2 *)(DAT_800ac604 + 0x1fe) = *(undefined2 *)((int)param_1 + 0x42);
  }
  return;
}
