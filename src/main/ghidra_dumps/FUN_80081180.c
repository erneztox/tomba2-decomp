
void FUN_80081180(undefined4 param_1,uint param_2,uint param_3,uint param_4)

{
  FUN_80080fd4(s_ClearImage2_8001bf20,param_1);
  (**(code **)(PTR_PTR_800a5998 + 8))
            (*(undefined4 *)(PTR_PTR_800a5998 + 0xc),param_1,8,
             (param_4 & 0xff) << 0x10 | (param_3 & 0xff) << 8 | 0x80000000 | param_2 & 0xff);
  return;
}

