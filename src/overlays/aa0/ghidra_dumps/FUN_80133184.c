// FUN_80133184

void FUN_80133184(void)

{
  byte bVar1;
  byte in_v0;
  char *pcVar2;
  int iVar3;
  byte *in_a3;
  int *unaff_s0;
  int unaff_s1;
  undefined2 *unaff_s2;
  int unaff_s3;
  undefined2 uStack00000010;
  undefined2 uStack00000012;
  undefined2 uStack00000014;
  undefined2 uStack00000016;
  
  while( true ) {
    *in_a3 = in_v0 - 1;
    if ((int)((uint)(byte)(in_v0 - 1) << 0x18) < 1) {
      pcVar2 = (char *)*unaff_s0;
      if (*pcVar2 == -1) {
        *unaff_s0 = (int)pcVar2 - (uint)(byte)pcVar2[1];
      }
      iVar3 = *(int *)(unaff_s2 + -3);
      bVar1 = *(byte *)*unaff_s0;
      *in_a3 = ((byte *)*unaff_s0)[1];
      uStack00000010 = unaff_s2[-1];
      uStack00000012 = *unaff_s2;
      uStack00000014 = 0x10;
      uStack00000016 = 1;
      func_0x80081218(&stack0x00000010,iVar3 + (uint)bVar1 * 0x20);
      *unaff_s0 = *unaff_s0 + 2;
    }
    unaff_s1 = unaff_s1 + 1;
    unaff_s2 = unaff_s2 + 6;
    unaff_s0 = unaff_s0 + 3;
    if (0 < unaff_s1) break;
    in_a3 = (byte *)(unaff_s1 + unaff_s3);
    in_v0 = *in_a3;
  }
  return;
}

