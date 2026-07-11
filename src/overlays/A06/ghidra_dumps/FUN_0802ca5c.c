// FUN_0802ca5c

/* WARNING: Control flow encountered bad instruction data */

bool FUN_0802ca5c(int param_1)

{
  byte bVar1;
  int iVar2;
  ushort *puVar3;
  ushort *puVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  
  bVar1 = *(byte *)(param_1 + 0x78);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        halt_baddata();
      }
      *(char *)(param_1 + 0x18) = *(char *)(param_1 + 0x18) + -8;
      *(char *)(param_1 + 0x19) = *(char *)(param_1 + 0x19) + -8;
      *(char *)(param_1 + 0x1a) = *(char *)(param_1 + 0x1a) + -8;
      return *(char *)(param_1 + 0x18) == '\0';
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    *(undefined1 *)(param_1 + 0x78) = 1;
    *(undefined2 *)(param_1 + 0xe) = 0;
  }
  if (0xb < *(short *)(param_1 + 0xe)) {
    *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
    *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) | 3;
    func_0x00074590(0x90,0,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar3 = *(ushort **)(*(int *)(param_1 + 0xc0) + 0x40);
  uVar7 = (uint)*puVar3;
  iVar2 = *(int *)(*(short *)(param_1 + 0xe) * 4 + -0x7feb913c);
  iVar6 = 0;
  if (uVar7 != 0) {
    pbVar5 = &DAT_80147824;
    puVar3 = puVar3 + 0x18;
    do {
      puVar4 = (ushort *)(iVar2 + (uint)*pbVar5 * 6);
      puVar3[-8] = *puVar4;
      puVar3[-7] = puVar4[1];
      puVar3[-6] = puVar4[2];
      puVar4 = (ushort *)(iVar2 + (uint)pbVar5[1] * 6);
      puVar3[-4] = *puVar4;
      puVar3[-3] = puVar4[1];
      puVar3[-5] = puVar4[2];
      puVar4 = (ushort *)(iVar2 + (uint)pbVar5[2] * 6);
      puVar3[-2] = *puVar4;
      iVar6 = iVar6 + 1;
      puVar3[-1] = puVar4[1];
      pbVar5 = pbVar5 + 3;
      *puVar3 = puVar4[2];
      puVar3 = puVar3 + 0x12;
    } while (iVar6 < (int)uVar7);
  }
  *(short *)(param_1 + 0xe) = *(short *)(param_1 + 0xe) + 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

