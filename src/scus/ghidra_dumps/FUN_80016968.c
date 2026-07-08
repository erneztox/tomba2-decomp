
int FUN_80016968(int *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  
  if (*param_1 != 0x10) {
    return 0;
  }
  puVar3 = (uint *)(param_1 + 2);
  *param_2 = param_1[1];
  iVar1 = FUN_80013140();
  if (iVar1 == 2) {
                    /* WARNING: Subroutine does not return */
    FUN_8001e5ec(&DAT_80010364,0x10);
  }
  iVar1 = FUN_80013140();
  if (iVar1 == 2) {
                    /* WARNING: Subroutine does not return */
    FUN_8001e5ec(&DAT_80010370,*param_2);
  }
  iVar1 = FUN_80013140();
  if (iVar1 == 2) {
                    /* WARNING: Subroutine does not return */
    FUN_8001e5ec(&DAT_8001037c,puVar3);
  }
  if ((*param_2 & 8) != 0) {
    uVar2 = *puVar3;
    param_2[1] = (uint)(param_1 + 3);
    param_2[2] = (uint)(param_1 + 5);
    iVar1 = FUN_80016248(uVar2 >> 2);
    return iVar1;
  }
  param_2[1] = 0;
  param_2[2] = 0;
  uVar2 = *puVar3;
  param_2[3] = (uint)(param_1 + 3);
  param_2[4] = (uint)(param_1 + 5);
  return (uVar2 >> 2) + 2;
}

