// FUN_08047378

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08047378(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  char local_30 [32];
  
  iVar3 = (uint)*(byte *)(param_1 + 0x46) * 900;
  func_0x0009a5b0(*(undefined4 *)(param_1 + 0xc),_DAT_800a29ac);
  pcVar8 = local_30;
  *(undefined2 *)(param_1 + 0x18) = 0x56;
  *(undefined1 *)(*(int *)(param_1 + 0xc) + 2) = 0x20;
  pcVar5 = (char *)(*(int *)(param_1 + 0xc) + 3);
  iVar4 = *(int *)(iVar3 + -0x7ff41238);
  do {
    iVar1 = iVar4 / 10;
    iVar4 = iVar4 % 10;
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    *pcVar8 = (char)iVar4 + '0';
    pcVar8 = pcVar8 + 1;
    iVar4 = iVar1;
  } while (iVar1 != 0);
  iVar4 = (int)pcVar8 - (int)local_30;
  while (iVar4 < 0) {
    *pcVar8 = DAT_8010a4cc;
    pcVar8[1] = DAT_8010a4cd;
    pcVar8 = pcVar8 + 1;
    iVar4 = (int)pcVar8 - (int)local_30;
  }
  while (pcVar8 = pcVar8 + -1, local_30 <= pcVar8) {
    *pcVar5 = *pcVar8;
    pcVar5 = pcVar5 + 1;
  }
  *pcVar5 = '\n';
  func_0x0009a5b0(pcVar5 + 1,_DAT_800a29b0);
  pcVar8 = pcVar5 + 0x12;
  pcVar7 = local_30;
  uVar6 = (uint)*(ushort *)(iVar3 + -0x7ff41240);
  do {
    uVar2 = (int)uVar6 / 10;
    iVar4 = (int)uVar6 % 10;
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    *pcVar7 = (char)iVar4 + '0';
    pcVar7 = pcVar7 + 1;
    uVar6 = uVar2;
  } while (uVar2 != 0);
  iVar4 = (int)pcVar7 - (int)local_30;
  while (iVar4 < 3) {
    *pcVar7 = DAT_8010a4cc;
    pcVar7[1] = DAT_8010a4cd;
    pcVar7 = pcVar7 + 1;
    iVar4 = (int)pcVar7 - (int)local_30;
  }
  while (pcVar7 = pcVar7 + -1, local_30 <= pcVar7) {
    *pcVar8 = *pcVar7;
    pcVar8 = pcVar8 + 1;
  }
  pcVar5 = pcVar5 + 0x16;
  pcVar8 = local_30;
  uVar6 = (uint)*(ushort *)(iVar3 + -0x7ff4123e);
  do {
    uVar2 = (int)uVar6 / 10;
    iVar4 = (int)uVar6 % 10;
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    *pcVar8 = (char)iVar4 + '0';
    pcVar8 = pcVar8 + 1;
    uVar6 = uVar2;
  } while (uVar2 != 0);
  iVar4 = (int)pcVar8 - (int)local_30;
  while (iVar4 < 3) {
    *pcVar8 = DAT_8010a4cc;
    pcVar8[1] = DAT_8010a4cd;
    pcVar8 = pcVar8 + 1;
    iVar4 = (int)pcVar8 - (int)local_30;
  }
  while (pcVar8 = pcVar8 + -1, local_30 <= pcVar8) {
    *pcVar5 = *pcVar8;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 0x1a) = 0xffff;
  **(undefined1 **)(param_1 + 0x10) = 0;
  return;
}

