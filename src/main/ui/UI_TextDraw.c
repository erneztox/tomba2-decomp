/**
 * @brief UI text drawer: formats text with escape codes, draws to screen
 * @note Original: func_8004EE88 at 0x8004EE88
 */
// UI_TextDraw



void FUN_8004ee88(int param_1)

{
  undefined4 *puVar1;
  ushort uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  uVar2 = *(short *)(param_1 + 8) - 1;
  *(ushort *)(param_1 + 8) = uVar2;
  iVar6 = 0;
  if (0 < (int)((uint)uVar2 << 0x10)) {
    iVar8 = 0x8c;
    iVar7 = param_1;
    do {
      puVar4 = (undefined4 *)(param_1 + iVar8 + 0xc);
      puVar1 = (undefined4 *)(iVar7 + 0xc);
      do {
        puVar5 = puVar1;
        puVar3 = puVar4;
        uVar9 = puVar3->flags;
        uVar10 = puVar3->kind;
        uVar11 = puVar3->sub_type;
        *puVar5 = *puVar3;
        puVar5->flags = uVar9;
        puVar5->kind = uVar10;
        puVar5->sub_type = uVar11;
        puVar4 = puVar3 + 4;
        puVar1 = puVar5 + 4;
      } while (puVar4 != (undefined4 *)(param_1 + iVar8 + 0x8c));
      iVar8 = iVar8 + 0x8c;
      uVar9 = puVar3->behavior_state;
      uVar10 = puVar3->action_state;
      puVar5->state = *puVar4;
      puVar5->behavior_state = uVar9;
      puVar5->action_state = uVar10;
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + 0x8c;
    } while (iVar6 < *(short *)(param_1 + 8));
  }
  FUN_8004ee50(param_1 + iVar6 * 0x8c + 0xc);
  return;
}
