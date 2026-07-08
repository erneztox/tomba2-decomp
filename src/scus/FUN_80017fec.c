
void FUN_80017fec(uint *param_1,uint *param_2)

{
  *param_2 = *param_2 & 0xff000000 | *param_1 & 0xffffff;
  *param_1 = *param_1 & 0xff000000 | (uint)param_2 & 0xffffff;
  return;
}

