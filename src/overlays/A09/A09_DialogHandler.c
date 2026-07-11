// A09_DialogHandler - Dialog/text script handler: reads string table

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void A09_DialogHandler(int param_1,int param_2)

{
  u8 bVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  
  *(s16 *)(param_1 + 8) = 0;
  pcVar5 = *(char **)(param_2 * 4 + -0x7fef1fbc);
  if (*pcVar5 != -1) {
    pcVar4 = pcVar5 + 0xc;
    do {
      if ((param_2 == 0) || (*(short *)(param_1 + 8) < 0xf)) {
        bVar1 = pcVar4[-2];
        if (bVar1 == 1) {
          _DAT_800bf814 = *(s16 *)(pcVar4 + -4);
          _DAT_800bf812 = *(s16 *)(pcVar4 + -6);
          _DAT_800bf810 = *(s16 *)(pcVar4 + -8);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (1 < bVar1) {
          if (bVar1 != 2) {
            halt_baddata();
          }
          if (((int)(uint)DAT_800bfa3d >> ((u8)pcVar4[-9] & 0x1f) & 1U) != 0) goto LAB_0801108c;
        }
        iVar3 = Entity_SpawnChild(param_1,*pcVar5,pcVar4[-0xb],pcVar4[-10]);
        if (iVar3 != 0) {
          *(int *)(iVar3 + 0x2c) = (int)*(short *)(pcVar4 + -8) << 0x10;
          iVar3->pos_y_fixed = (int)*(short *)(pcVar4 + -6) << 0x10;
          iVar3->scale_y = (int)*(short *)(pcVar4 + -4) << 0x10;
          cVar2 = pcVar4[-9];
          iVar3->rot_x = 0;
          iVar3->rot_y = 0;
          iVar3->rot_z = 0;
          iVar3->sub_type = cVar2;
          *(s32 *)(iVar3 + 0x1c) = *(s32 *)pcVar4;
          if (param_2 != 0) {
            *(int *)(param_1 + *(short *)(param_1 + 8) * 4 + 0xc) = iVar3;
            *(short *)(param_1 + 8) = *(short *)(param_1 + 8) + 1;
          }
        }
      }
LAB_0801108c:
      pcVar5 = pcVar5 + 0x10;
      pcVar4 = pcVar4 + 0x10;
    } while (*pcVar5 != -1);
  }
  return;
}

