/**
 * @brief GTE vector transform: loads matrix from param_2, transforms param_1 vector
 * @note Original: func_80084520 at 0x80084520
 */
// GTE_TransformVec



uint * FUN_80084520(uint *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *param_2;
  iVar2 = param_2->flags;
  iVar3 = param_2->kind;
  *param_1 = (short)*param_1 * iVar1 >> 0xc & 0xffffU |
             (((int)*param_1 >> 0x10) * iVar2 >> 0xc) << 0x10;
  param_1->flags = (short)param_1->flags * iVar3 >> 0xc & 0xffffU |
               (((int)param_1->flags >> 0x10) * iVar1 >> 0xc) << 0x10;
  param_1->kind = (short)param_1->kind * iVar2 >> 0xc & 0xffffU |
               (((int)param_1->kind >> 0x10) * iVar3 >> 0xc) << 0x10;
  param_1->sub_type = (short)param_1->sub_type * iVar1 >> 0xc & 0xffffU |
               (((int)param_1->sub_type >> 0x10) * iVar2 >> 0xc) << 0x10;
  param_1->state = (short)param_1->state * iVar3 >> 0xc;
  return param_1;
}
