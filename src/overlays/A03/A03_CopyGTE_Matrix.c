// A03_CopyGTE_Matrix - Copies GTE matrix (0x98-0xa6) from parent entity

/* WARNING: Control flow encountered bad instruction data */

void A03_CopyGTE_Matrix(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_1->parent;
  *(s16 *)(param_1 + 0x98) = *(s16 *)(iVar3 + 0x98);
  *(s16 *)(param_1 + 0x9e) = *(s16 *)(iVar3 + 0x9e);
  *(s16 *)(param_1 + 0xa4) = *(s16 *)(iVar3 + 0xa4);
  *(s16 *)(param_1 + 0x9a) = *(s16 *)(iVar3 + 0x9a);
  *(s16 *)(param_1 + 0xa0) = *(s16 *)(iVar3 + 0xa0);
  *(s16 *)(param_1 + 0xa6) = *(s16 *)(iVar3 + 0xa6);
  *(s16 *)(param_1 + 0x9c) = *(s16 *)(iVar3 + 0x9c);
  *(s16 *)(param_1 + 0xa2) = *(s16 *)(iVar3 + 0xa2);
  *(s16 *)(param_1 + 0xa8) = *(s16 *)(iVar3 + 0xa8);
  GTE_LoadScaleMatrix(0x1f800000,(int)param_1->scale_x,(int)param_1->scale_y,
                  (int)param_1->scale_z);
  GTE_MulMatrix4(0x1f800000,param_1 + 0x98);
  iVar4 = 0;
  param_1->pos_y =
       iVar3->pos_y -
       (short)((int)*(short *)(param_1 + 0x9a) * (int)param_1->bounds_min_y >> 0xc);
  *(short *)(param_1 + 0x32) =
       *(short *)(iVar3 + 0x32) -
       (short)((int)*(short *)(param_1 + 0xa0) * (int)param_1->bounds_min_y >> 0xc);
  sVar1 = iVar3->pos_z;
  param_1->pos_y =
       param_1->pos_y + (short)(*(short *)(param_1 + 0x98) * 0x25 >> 0xb);
  param_1->pos_z =
       sVar1 - (short)((int)*(short *)(param_1 + 0xa6) * (int)param_1->bounds_min_y >> 0xc);
  *(short *)(param_1 + 0x32) =
       *(short *)(param_1 + 0x32) + (short)(*(short *)(param_1 + 0x9e) * 0x25 >> 0xb);
  param_1->pos_z =
       param_1->pos_z + (short)(*(short *)(param_1 + 0xa4) * 0x25 >> 0xb);
  GTE_MulMatrixVec(param_1 + 0x98,param_1 + 0x88,param_1 + 0xac);
  param_1->projected_y = param_1->projected_y + (int)*(short *)(param_1 + 0x32);
  param_1->projected_x = param_1->projected_x + (int)param_1->pos_y;
  param_1->projected_z = param_1->projected_z + (int)param_1->pos_z;
  iVar3 = param_1;
  if (param_1->counter1 != '\0') {
    do {
      iVar2 = iVar3->sprite_ptr1;
      sVar1 = *(short *)(iVar2 + 6);
      GTE_LoadScaleMatrix(0x1f800000,(int)*(short *)(iVar2 + 0x38),(int)*(short *)(iVar2 + 0x3a),
                      (int)*(short *)(iVar2 + 0x3c));
      GTE_LoadRotMatrixFromSVec(iVar3->sprite_ptr1 + 8,0x1f800020);
      GTE_ComposeMatrix(0x1f800020,0x1f800000,0x1f800040);
      if (sVar1 < 0) {
        GTE_ComposeMatrix(param_1 + 0x98,0x1f800040,iVar3->sprite_ptr1 + 0x18);
        GTE_MulMatrix(iVar3->sprite_ptr1,iVar3->sprite_ptr1 + 0x2c);
        *(int *)(iVar3->sprite_ptr1 + 0x2c) =
             *(int *)(iVar3->sprite_ptr1 + 0x2c) + param_1->projected_x;
        *(int *)(iVar3->sprite_ptr1 + 0x30) =
             *(int *)(iVar3->sprite_ptr1 + 0x30) + param_1->projected_y;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      iVar2 = param_1 + sVar1 * 4;
      GTE_ComposeMatrix(iVar2->sprite_ptr1 + 0x18,0x1f800040,iVar3->sprite_ptr1 + 0x18);
      GTE_MulMatrix(iVar3->sprite_ptr1,iVar3->sprite_ptr1 + 0x2c);
      *(int *)(iVar3->sprite_ptr1 + 0x2c) =
           *(int *)(iVar3->sprite_ptr1 + 0x2c) + *(int *)(iVar2->sprite_ptr1 + 0x2c);
      *(int *)(iVar3->sprite_ptr1 + 0x30) =
           *(int *)(iVar3->sprite_ptr1 + 0x30) + *(int *)(iVar2->sprite_ptr1 + 0x30);
      *(int *)(iVar3->sprite_ptr1 + 0x34) =
           *(int *)(iVar3->sprite_ptr1 + 0x34) + *(int *)(iVar2->sprite_ptr1 + 0x34);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar4 < (int)(uint)param_1->counter1);
  }
  return;
}

