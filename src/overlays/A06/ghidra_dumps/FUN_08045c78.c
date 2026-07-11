// FUN_08045c78

/* WARNING: Control flow encountered bad instruction data */

void FUN_08045c78(int param_1)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  ushort uVar4;
  short sVar5;
  short *psVar6;
  short *psVar7;
  int iVar8;
  
  bVar1 = *(byte *)(param_1 + 4);
  psVar7 = (short *)(param_1 + 0x50);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar8 = 0;
    if (bVar1 != 0) {
      halt_baddata();
    }
    psVar6 = (short *)(param_1 + 0x56);
    sVar5 = *(short *)(param_1 + 0x2c);
    sVar2 = *(short *)(param_1 + 0x2e);
    sVar3 = *(short *)(param_1 + 0x30);
    *(undefined2 *)(param_1 + 0x4e) = 7;
    do {
      uVar4 = func_0x0009a450();
      *psVar7 = sVar5 + (uVar4 & 0x3ff) + -0x200;
      uVar4 = func_0x0009a450();
      psVar6[-2] = sVar2 + (uVar4 & 0x3ff) + -0x200;
      uVar4 = func_0x0009a450();
      psVar6[-1] = sVar3 + (uVar4 & 0x3ff) + -0x200;
      uVar4 = func_0x0009a450();
      iVar8 = iVar8 + 1;
      *psVar6 = (uVar4 & 0x1ff) + 0x100;
      psVar6 = psVar6 + 4;
      psVar7 = psVar7 + 4;
    } while (iVar8 * 0x10000 >> 0x10 < 7);
    *(undefined4 *)(param_1 + 4) = 1;
    func_0x00031220(0x70d,param_1 + 0x2c,0);
  }
  iVar8 = func_0x0009a450();
  *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + (char)(iVar8 >> 10);
  sVar5 = func_0x0002b278(param_1);
  if (*(char *)(param_1 + 7) < '\0') {
    *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + -0x80;
  }
  else {
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x38);
    if (*(int *)(param_1 + 0x38) == 0) {
      *(undefined1 *)(param_1 + 4) = 2;
    }
    else {
      if (sVar5 != 0) {
        return;
      }
      func_0x00031780(param_1);
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

