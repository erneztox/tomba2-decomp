// FUN_8010ccc0

void FUN_8010ccc0(undefined2 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined2 param_5)

{
  byte bVar1;
  undefined2 in_v0;
  undefined2 in_v1;
  char *pcVar2;
  byte *pbVar3;
  int *unaff_s0;
  int unaff_s1;
  undefined2 *unaff_s2;
  undefined2 *puVar4;
  int unaff_s3;
  undefined2 uStack00000012;
  undefined2 uStack00000014;
  undefined2 uStack00000016;
  
  do {
    uStack00000016 = 1;
    uStack00000012 = in_v1;
    uStack00000014 = in_v0;
    func_0x80081218(param_1,param_2);
    *unaff_s0 = *unaff_s0 + 2;
    do {
      puVar4 = unaff_s2;
      unaff_s1 = unaff_s1 + 1;
      unaff_s2 = puVar4 + 6;
      unaff_s0 = unaff_s0 + 3;
      if (0xb < unaff_s1) {
        return;
      }
      pbVar3 = (byte *)(unaff_s1 + unaff_s3);
      bVar1 = *pbVar3;
      *pbVar3 = bVar1 - 1;
    } while (0 < (int)((uint)(byte)(bVar1 - 1) << 0x18));
    pcVar2 = (char *)*unaff_s0;
    if (*pcVar2 == -1) {
      *unaff_s0 = (int)pcVar2 - (uint)(byte)pcVar2[1];
    }
    param_1 = &param_5;
    param_2 = *(int *)(puVar4 + 3);
    bVar1 = *(byte *)*unaff_s0;
    *pbVar3 = ((byte *)*unaff_s0)[1];
    param_5 = puVar4[5];
    param_2 = param_2 + (uint)bVar1 * 0x20;
    in_v1 = *unaff_s2;
    in_v0 = 0x10;
  } while( true );
}

