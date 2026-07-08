
void FUN_80013248(void)

{
  undefined2 uVar1;
  uint uVar2;
  undefined2 *puVar3;
  undefined2 *in_a3;
  int unaff_s0;
  int iVar4;
  short *unaff_s1;
  byte *unaff_s2;
  int unaff_s3;
  uint unaff_s4;
  int unaff_s5;
  undefined2 unaff_s6;
  uint unaff_s7;
  short unaff_s8;
  undefined4 uStack00000018;
  short in_stack_00000040;
  
  do {
    unaff_s0 = unaff_s0 + 1;
    unaff_s2 = unaff_s2 + 1;
    if ((int)(uint)(byte)(&DAT_8002545c)[DAT_800384a4 * 0xc] <= unaff_s0) {
      do {
        iVar4 = 0;
        do {
          uStack00000018 = *(undefined4 *)unaff_s1;
          FUN_800137e0(&stack0x00000010);
          iVar4 = iVar4 + 1;
          *unaff_s1 = *unaff_s1 + 1;
        } while (iVar4 < 2);
        unaff_s3 = unaff_s3 + 1;
        *unaff_s1 = unaff_s8;
        unaff_s1[1] = unaff_s1[1] + 1;
        if (0xe < unaff_s3) {
          unaff_s1[1] = in_stack_00000040;
          return;
        }
        in_a3 = (undefined2 *)&stack0x00000020;
        unaff_s0 = 0;
      } while ((&DAT_8002545c)[DAT_800384a4 * 0xc] == '\0');
    }
    uVar2 = unaff_s7 & 0xffff;
    if (unaff_s5 <= (int)uVar2) {
      puVar3 = in_a3;
      do {
        in_a3 = puVar3 + 1;
        uVar1 = 0;
        if (((int)(uint)*unaff_s2 >> (uVar2 & 0x1f) & 1U) != 0) {
          uVar1 = unaff_s6;
        }
        uVar2 = uVar2 - 1;
        *puVar3 = uVar1;
        puVar3 = in_a3;
      } while ((int)(unaff_s4 & 0xffff) <= (int)uVar2);
    }
  } while( true );
}

