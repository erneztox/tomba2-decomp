// A0I_DialogHandler - Dialog/text script handler: reads pointer table, iterates strings

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void A0I_DialogHandler(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  *(s16 *)(param_1 + 8) = 0;
  pcVar4 = *(char **)(param_2 * 4 + -0x7fef3584);
  if (*pcVar4 != -1) {
    pcVar3 = pcVar4 + 0xc;
    do {
      if ((param_2 == 0) || (*(short *)(param_1 + 8) < 0xf)) {
        if ((pcVar3[-2] != '\0') && (pcVar3[-2] == '\x01')) {
          _DAT_800bf810 = *(s16 *)(pcVar3 + -8);
          _DAT_800bf812 = *(s16 *)(pcVar3 + -6);
          _DAT_800bf814 = *(s16 *)(pcVar3 + -4);
        }
        iVar2 = Entity_SpawnChild(param_1,*pcVar4,pcVar3[-0xb],pcVar3[-10]);
        if (iVar2 != 0) {
          *(int *)(iVar2 + 0x2c) = (int)*(short *)(pcVar3 + -8) << 0x10;
          iVar2->pos_y_fixed = (int)*(short *)(pcVar3 + -6) << 0x10;
          iVar2->scale_y = (int)*(short *)(pcVar3 + -4) << 0x10;
          cVar1 = pcVar3[-9];
          iVar2->rot_x = 0;
          iVar2->rot_y = 0;
          iVar2->rot_z = 0;
          iVar2->sub_type = cVar1;
          *(s32 *)(iVar2 + 0x1c) = *(s32 *)pcVar3;
          if (param_2 != 0) {
            *(int *)(param_1 + *(short *)(param_1 + 8) * 4 + 0xc) = iVar2;
            *(short *)(param_1 + 8) = *(short *)(param_1 + 8) + 1;
          }
        }
      }
      pcVar4 = pcVar4 + 0x10;
      pcVar3 = pcVar3 + 0x10;
    } while (*pcVar4 != -1);
  }
  return;
}

