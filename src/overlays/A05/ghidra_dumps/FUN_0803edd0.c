// FUN_0803edd0

/* WARNING: Control flow encountered bad instruction data */

void FUN_0803edd0(int param_1)

{
  undefined2 uVar1;
  byte bVar2;
  ushort uVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined2 *puVar6;
  uint uVar7;
  undefined2 *puVar8;
  
  bVar2 = *(byte *)(param_1 + 4);
  puVar8 = (undefined2 *)(param_1 + 0x50);
  if (bVar2 != 1) {
    if (1 < bVar2) {
      if (bVar2 < 4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      return;
    }
    if (bVar2 != 0) {
      halt_baddata();
    }
    bVar2 = func_0x0009a450();
    *(byte *)(param_1 + 3) = bVar2 & 3;
    iVar5 = 0;
    puVar4 = puVar8;
    do {
      puVar4[2] = 0;
      puVar4[1] = 0;
      *puVar4 = 0;
      iVar5 = iVar5 + 1;
      puVar4 = puVar4 + 4;
    } while (iVar5 < 7);
    *(undefined1 *)(param_1 + 4) = 1;
    bVar2 = func_0x0009a450();
    *(byte *)(param_1 + 5) = bVar2 & 1;
    *(undefined1 *)(param_1 + 7) = 0;
  }
  uVar7 = *(byte *)(param_1 + 7) + 1;
  puVar4 = puVar8 + (uint)*(byte *)(param_1 + 7) * 4;
  if (6 < uVar7) {
    uVar7 = 0;
  }
  *(char *)(param_1 + 7) = (char)uVar7;
  bVar2 = *(char *)(param_1 + 5) + 2;
  *(byte *)(param_1 + 5) = bVar2;
  if (bVar2 < 0x17) {
    if (0xf < bVar2) {
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar6 = (undefined2 *)
             ((uint)*(byte *)(param_1 + 3) * 0x80 + (uint)*(byte *)(param_1 + 5) * 8 + -0x7febff90);
    *puVar4 = *puVar6;
    uVar3 = func_0x0009a450();
    puVar4[1] = puVar6[1] + (uVar3 & 0xff) + -0xb2;
    uVar1 = puVar6[2];
    puVar4[3] = 0x80;
    puVar4[2] = uVar1;
    puVar8[uVar7 * 4] = 0;
    *(undefined1 *)(param_1 + 1) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 4) = 2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

