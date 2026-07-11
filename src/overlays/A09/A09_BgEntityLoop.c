// A09_BgEntityLoop - Background entity list iterator

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void A09_BgEntityLoop(int param_1)

{
  u8 bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  u8 *pbVar5;
  s32 *puVar6;
  
  puVar6 = _DAT_1f800148;
  DAT_1f800182 = DAT_1f800150;
  while( true ) {
    while( true ) {
      do {
        if (DAT_1f800182 == '\0') {
          return;
        }
        pbVar5 = (u8 *)*puVar6;
        DAT_1f800182 = DAT_1f800182 + -1;
        puVar6 = puVar6 + 1;
      } while ((*pbVar5 & 1) == 0);
      bVar1 = pbVar5->kind;
      if (bVar1 == 0x12) {
        Entity_CallInit(param_1,pbVar5);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (0x12 < bVar1) break;
      if (bVar1 == 0xc) {
        Entity_CollisionResponse(param_1,pbVar5);
        halt_baddata();
      }
      if (((0xb < bVar1) && (bVar1 < 0x10)) && (0xd < bVar1)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    if (bVar1 == 0x65) {
      func_0x00109078(param_1,pbVar5);
      halt_baddata();
    }
    if (bVar1 < 0x66) break;
    if (bVar1 == 0x66) {
      Entity_CalcAngle7(param_1,pbVar5);
      halt_baddata();
    }
    if (bVar1 != 0x67) {
      halt_baddata();
    }
    iVar2 = (int)(((uint)param_1->pos_y - (uint)pbVar5->pos_y) * 0x10000)
            >> 0x10;
    iVar3 = (int)(((uint)param_1->pos_z - (uint)pbVar5->pos_z) * 0x10000)
            >> 0x10;
    uVar4 = Math_SqrtGTE(iVar2 * iVar2 + iVar3 * iVar3);
    if (((int)(uVar4 & 0xffff) <= param_1->bounds_min_x + 200) &&
       ((int)((uint)param_1->bounds_min_y +
              ((uint)*(u16 *)(param_1 + 0x32) - (uint)*(u16 *)(pbVar5 + 0x32)) + 0x140 &
             0xffff) <= param_1->bounds_max_y + 0x140)) {
      pbVar5->collision_state = 1;
      Entity_CalcAngle16(param_1,pbVar5);
    }
  }
  if (bVar1 == 0x1f) {
    Entity_SetAnimFlag(param_1,pbVar5);
    halt_baddata();
  }
  halt_baddata();
}

