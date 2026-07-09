// FUN_80123c94

void FUN_80123c94(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int in_v1;
  int iVar1;
  int unaff_s2;
  int unaff_s3;
  
  for (; *(undefined4 *)(in_v1 + -4) = param_1, unaff_s2 < 4; unaff_s2 = unaff_s2 + 1) {
    iVar1 = unaff_s3 + param_2;
    param_2 = param_2 + 4;
    in_v1 = *(int *)(param_3 + 0x7e74);
    param_1 = *(undefined4 *)(iVar1 + 0xc0);
    *(short *)(param_4 + -0x2f68) = *(short *)(param_4 + -0x2f68) + 1;
    *(int *)(param_3 + 0x7e74) = in_v1 + -4;
  }
  *(char *)(unaff_s3 + 9) = *(char *)(unaff_s3 + 9) + -4;
  *(char *)(unaff_s3 + 8) = *(char *)(unaff_s3 + 8) + -4;
  FUN_8012ce0c();
  return;
}

