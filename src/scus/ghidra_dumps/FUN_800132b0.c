
void FUN_800132b0(void)

{
  short in_v0;
  undefined2 uVar1;
  uint uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  int iVar5;
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
  
  while( true ) {
    unaff_s3 = unaff_s3 + 1;
    *unaff_s1 = unaff_s8;
    unaff_s1[1] = in_v0 + 1;
    if (0xe < unaff_s3) break;
    puVar4 = (undefined2 *)&stack0x00000020;
    iVar5 = 0;
    if ((&DAT_8002545c)[DAT_800384a4 * 0xc] != '\0') {
      do {
        uVar2 = unaff_s7 & 0xffff;
        if (unaff_s5 <= (int)uVar2) {
          puVar3 = puVar4;
          do {
            puVar4 = puVar3 + 1;
            uVar1 = 0;
            if (((int)(uint)*unaff_s2 >> (uVar2 & 0x1f) & 1U) != 0) {
              uVar1 = unaff_s6;
            }
            uVar2 = uVar2 - 1;
            *puVar3 = uVar1;
            puVar3 = puVar4;
          } while ((int)(unaff_s4 & 0xffff) <= (int)uVar2);
        }
        iVar5 = iVar5 + 1;
        unaff_s2 = unaff_s2 + 1;
      } while (iVar5 < (int)(uint)(byte)(&DAT_8002545c)[DAT_800384a4 * 0xc]);
    }
    iVar5 = 0;
    do {
      uStack00000018 = *(undefined4 *)unaff_s1;
      FUN_800137e0(&stack0x00000010);
      iVar5 = iVar5 + 1;
      *unaff_s1 = *unaff_s1 + 1;
    } while (iVar5 < 2);
    in_v0 = unaff_s1[1];
  }
  unaff_s1[1] = in_stack_00000040;
  return;
}

