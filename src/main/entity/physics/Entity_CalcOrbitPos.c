/**
 * @brief Orbit position: uses GTE cos/sin on entity[0x58] angle + entity[0x64] radius for offset from parent
 * @note Original: func_80063ECC at 0x80063ECC
 */
// Entity_CalcOrbitPos



void FUN_80063ecc(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = param_1->parent;
  iVar2 = FUN_80083f50((int)param_1->rot_z);
  *(short *)(param_1 + 0x32) =
       *(short *)(iVar5 + 0x30) + (short)(iVar2 * *(short *)(param_1 + 100) >> 0xc);
  iVar2 = FUN_80083e80((int)param_1->rot_z);
  sVar1 = *(short *)(param_1 + 100);
  iVar3 = FUN_80083e80((int)param_1->rot_y);
  iVar4 = (int)(short)(iVar2 * sVar1 >> 0xc);
  iVar2 = FUN_80083f50((int)param_1->rot_y);
  param_1->pos_y = iVar5->pos_x - (short)(iVar2 * iVar4 >> 0xc);
  param_1->pos_z = *(short *)(iVar5 + 0x34) + (short)(iVar3 * iVar4 >> 0xc);
  return;
}
