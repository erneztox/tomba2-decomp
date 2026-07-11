// FUN_80117310

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80117310(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *unaff_s1;
  short unaff_s2;
  
  puVar6 = (undefined1 *)0x0;
  if ((_DAT_1f800162 < -1999) && (puVar6 = (undefined1 *)0xa0, 0x7ff < param_1)) {
    FUN_801202dc();
    return;
  }
  iVar5 = (int)unaff_s2;
  iVar3 = (int)(short)puVar6;
  if (iVar5 < iVar3) {
    FUN_80120364();
    return;
  }
  if (iVar5 < iVar3 * 2) {
    FUN_80120364();
    return;
  }
  if (iVar5 < iVar3 * 3) {
    func_0x8009a450();
    return;
  }
  iVar2 = 0;
  puVar4 = &DAT_80150000;
  while( true ) {
    *(short *)(iVar2 + 0x3a) = (short)(iVar3 * 2);
    iVar5 = iVar5 + 1;
    if ((int)(uint)(byte)puVar6[8] <= iVar5) break;
    iVar2 = *(int *)(puVar4 + 0xc4);
    puVar4 = puVar4 + 4;
  }
  *puVar6 = (char)unaff_s1;
  puVar6[0x29] = 0;
  puVar6[0x5e] = 0;
  puVar6[4] = 1;
  *(short *)(puVar6 + 0x32) = (short)puVar4 + 0x84;
  puVar6[3] = 0;
  iVar3 = FUN_8013a730(puVar6);
  *(int *)(puVar6 + 0x10) = iVar3;
  *(short *)(unaff_s1 + 0x40) = (short)(iVar3 - 1U);
  if ((iVar3 - 1U & 0xffff) == 0) {
    *unaff_s1 = 2;
    unaff_s1[6] = unaff_s1[6] + '\x01';
  }
  FUN_8013b024();
  uVar1 = func_0x800518fc();
  unaff_s1[0x29] = 0;
  unaff_s1[0x2b] = 0;
  *(undefined2 *)(puVar6 + 6) = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

