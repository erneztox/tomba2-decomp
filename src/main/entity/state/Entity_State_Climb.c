/**
 * @brief Entity climb state: entity[6] dispatch, checks height/angle
 * @note Original: func_800660AC at 0x800660AC
 */
// Entity_State_Climb



void FUN_800660ac(int param_1)

{
  byte bVar1;
  short sVar2;
  char cVar3;
  int iVar4;
  
  iVar4 = FUN_80076d68();
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 == 1) {
    if (*(short *)(param_1 + 0x40) == 0xc) {
      FUN_80074590(0x26,0,0);
    }
    *(short *)(param_1 + 0x40) = *(short *)(param_1 + 0x40) + 1;
    if (iVar4 != 1) goto LAB_800661c0;
    FUN_80054d14(param_1,2,6);
    cVar3 = *(char *)(param_1 + 6);
    *(undefined2 *)(param_1 + 0x40) = 7;
  }
  else {
    if (1 < bVar1) {
      if ((bVar1 == 2) &&
         (sVar2 = *(short *)(param_1 + 0x40), *(short *)(param_1 + 0x40) = sVar2 + -1, sVar2 == 1))
      {
        if (DAT_1f800137 == '\x01') {
          DAT_800bf80e = DAT_1f800137;
        }
        *(undefined1 *)(param_1 + 5) = 0x22;
        *(undefined1 *)(param_1 + 6) = 0;
      }
      goto LAB_800661c0;
    }
    if (bVar1 != 0) goto LAB_800661c0;
    DAT_800bf80e = '\0';
    FUN_80054d14(param_1,199,3);
    cVar3 = *(char *)(param_1 + 6);
    *(undefined2 *)(param_1 + 0x40) = 0;
  }
  *(char *)(param_1 + 6) = cVar3 + '\x01';
LAB_800661c0:
  FUN_80065478(param_1,1);
  return;
}
