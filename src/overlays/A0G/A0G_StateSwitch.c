// A0G_StateSwitch - Player state switch (8 cases on g_PlayerEntity)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void A0G_StateSwitch(void)

{
  char cVar1;
  uint uVar2;
  u8 *pbVar3;
  u8 *pbVar4;
  s32 *puVar5;
  
  func_0x0002288c(&g_PlayerEntity);
  if (g_PlayerEntity < 8) {
                    /* WARNING: Could not emulate address calculation at 0x08010950 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)g_PlayerEntity * 4 + -0x7fef7060))();
    return;
  }
  Entity_BehaviorList2(&g_PlayerEntity);
  puVar5 = _DAT_1f80013c;
  DAT_1f800182 = DAT_1f800144;
  while (DAT_1f800182 != '\0') {
    pbVar3 = (u8 *)*puVar5;
    DAT_1f800182 = DAT_1f800182 + -1;
    puVar5 = puVar5 + 1;
    if ((*pbVar3 & 1) != 0) {
      if (pbVar3[0xc] == 9) {
        func_0x00109180(&g_PlayerEntity);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (pbVar3->kind == 8) {
        Entity_CheckTarget(&g_PlayerEntity);
      }
    }
  }
  DAT_1f800182 = '\0';
  puVar5 = _DAT_1f800148;
  cVar1 = DAT_1f800150;
  if (_DAT_800e7fd8 < 2) {
    while (DAT_1f800182 = cVar1, DAT_1f800182 != '\0') {
      pbVar3 = (u8 *)*puVar5;
      DAT_1f800182 = DAT_1f800182 + -1;
      puVar5 = puVar5 + 1;
      cVar1 = DAT_1f800182;
      if (((*pbVar3 & 1) != 0) && (uVar2 = pbVar3->kind - 0xc, uVar2 < 0x14)) {
                    /* WARNING: Could not emulate address calculation at 0x08010b5c */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(uVar2 * 4 + -0x7fef6ff0))();
        return;
      }
    }
  }
  Entity_BGUpdate();
  pbVar3 = _DAT_800f2738;
  if (_DAT_1f800144 != 0) {
    for (; pbVar3 != (u8 *)0x0; pbVar3 = *(u8 **)(pbVar3 + 0x24)) {
      if (((*pbVar3 & 1) != 0) && (pbVar3->move_mode == 0)) {
        puVar5 = _DAT_1f80013c;
        DAT_1f800182 = DAT_1f800144;
        while (DAT_1f800182 != '\0') {
          pbVar4 = (u8 *)*puVar5;
          DAT_1f800182 = DAT_1f800182 + -1;
          puVar5 = puVar5 + 1;
          if (((*pbVar4 & 1) != 0) && (pbVar4->kind == 8)) {
            Entity_CalcRoute(pbVar3,pbVar4,0x100);
          }
        }
      }
    }
  }
  func_0x0010978c();
  func_0x00109378();
  func_0x0010959c();
  func_0x001096e0();
  if (((DAT_800bf816 != '\0') && ((DAT_800e7fc5 & 1) == 0)) &&
     ((int)_DAT_800bf812 - (int)_DAT_800e7ee2 <= (int)_g_CameraPosY)) {
    _g_CameraPosY = _DAT_800bf812 - _DAT_800e7ee2;
    func_0x00022c78(&g_PlayerEntity);
  }
  return;
}

