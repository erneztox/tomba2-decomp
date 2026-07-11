// FUN_8011a010

undefined4 FUN_8011a010(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int in_v1;
  int extraout_v1;
  int iVar4;
  int iVar5;
  int iVar6;
  int unaff_s5;
  
  bVar1 = *(byte *)(param_1 + 6);
  iVar6 = 1;
  if (bVar1 == 1) {
    *(undefined1 *)(param_1 + 6) = 2;
    func_0x80040cdc(param_1,&DAT_8014e4ec,0x801494fc);
    *(undefined1 *)(param_1 + 0x70) = 1;
    uVar3 = FUN_80123088();
    return uVar3;
  }
  if (bVar1 < 2) {
    cVar2 = '\0';
    if (bVar1 == 0) {
      if (*(char *)(param_1 + 0x2b) != '\x03') {
        return 0;
      }
      *(undefined1 *)(param_1 + 6) = 1;
      func_0x80042354(1,1);
      DAT_800bf9b5 = 1;
      uVar3 = FUN_80123088();
      return uVar3;
    }
  }
  else {
    cVar2 = '\0';
    if (bVar1 == 2) {
      func_0x80041098(param_1);
      if (*(char *)(param_1 + 0x70) != -1) {
        return 0;
      }
      func_0x80042310();
      func_0x80040b48(0x42);
      cVar2 = '\x01';
      DAT_800bf9b5 = 2;
      in_v1 = extraout_v1;
    }
  }
  *(char *)(unaff_s5 + 6) = cVar2 + '\x01';
  if (1 < in_v1 + -2) {
    iVar4 = unaff_s5 + 8;
    do {
      iVar5 = *(int *)(iVar4 + 0xc0);
      *(undefined2 *)(iVar5 + 2) = 0xf448;
      *(undefined2 *)(iVar5 + 0x12) = 0;
      *(undefined2 *)(iVar5 + 0x10) = 1;
      *(undefined2 *)(iVar5 + 0x16) = 0;
      *(undefined2 *)(iVar5 + 0x14) = 0x40;
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar6 < (int)(*(byte *)(unaff_s5 + 8) - 2));
  }
  *(undefined2 *)(unaff_s5 + 0x40) = 2;
  *(undefined2 *)(unaff_s5 + 0x42) = 0;
  *(undefined1 *)(unaff_s5 + 0x2b) = 0;
  *(undefined2 *)(unaff_s5 + 0x60) = 0;
  uVar3 = FUN_8012c6ac();
  return uVar3;
}

