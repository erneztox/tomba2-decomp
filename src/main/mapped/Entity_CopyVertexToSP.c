/**
 * @brief Copies processed vertex to scratchpad
 * @note Original address: 0x8003B220
 */
// Entity_CopyVertexToSP

void Entity_CopyVertexToSP(short *param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  short sVar2;
  
  *(undefined4 *)param_1 = param_2;
  *param_1 = *param_1 + (short)*(char *)(param_3 + 0xe);
  sVar2 = param_1[1] + (short)*(char *)(param_3 + 0xf);
  param_1[1] = sVar2;
  bVar1 = *(byte *)(param_3 + 10);
  param_1[5] = sVar2;
  param_1[8] = *param_1;
  param_1[4] = *param_1 + (ushort)bVar1;
  bVar1 = *(byte *)(param_3 + 0xb);
  param_1[0xe] = 0;
  param_1[10] = 0;
  param_1[6] = 0;
  param_1[2] = 0;
  *param_1 = *param_1 * 5;
  param_1[8] = param_1[8] * 5;
  param_1[9] = param_1[1] + (ushort)bVar1;
  param_1[0xc] = param_1[4];
  param_1[4] = param_1[4] * 5;
  param_1[0xd] = param_1[9];
  param_1[0xc] = param_1[0xc] * 5;
  param_1[1] = param_1[1] * 5;
  param_1[5] = param_1[5] * 5;
  param_1[9] = param_1[9] * 5;
  param_1[0xd] = param_1[0xd] * 5;
  return;
}

