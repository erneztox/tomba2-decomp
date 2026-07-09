// FUN_8012f990

/* WARNING: Control flow encountered bad instruction data */

int FUN_8012f990(int param_1)

{
  char cVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  int unaff_s2;
  short unaff_s3;
  undefined8 uVar7;
  
  uVar7 = func_0x80072ddc(param_1,3,4,10);
  iVar6 = (int)((ulonglong)uVar7 >> 0x20);
  iVar4 = (int)uVar7;
  if (iVar4 == 0) {
    return -0x7fed0000;
  }
  *(undefined4 *)(iVar4 + 0x1c) = 0x80136d9c;
  *(undefined2 *)(iVar4 + 0x2e) = *(undefined2 *)(param_1 + 0x2e);
  *(undefined2 *)(iVar4 + 0x32) = *(undefined2 *)(param_1 + 0x32);
  *(undefined2 *)(iVar4 + 0x36) = *(undefined2 *)(param_1 + 0x36);
  puVar5 = &LAB_800c0000;
  if (*(char *)(param_1 + 3) == '\0') {
    puVar5 = (undefined1 *)0x3;
    if (DAT_800bf89c != '\x02') {
      *(undefined1 *)(iVar4 + 3) = 0;
      return 3;
    }
    *(undefined1 *)(iVar4 + 3) = 3;
    iVar6 = 2;
  }
  else {
    *(char *)(iVar4 + 3) = *(char *)(param_1 + 3);
  }
  iVar6 = func_0x800781e0((int)*(short *)(unaff_s2 + 0x2e) - (int)*(short *)(puVar5 + 0x160),
                          (int)*(short *)(unaff_s2 + 0x36) - (int)*(short *)(iVar6 + 0x164));
  if (0x13f < iVar6) {
    unaff_s3 = 1;
  }
  if ((*(ushort *)(unaff_s2 + 0x62) & 1) == 0) {
    *(int *)(unaff_s2 + 0x2c) =
         *(int *)(unaff_s2 + 0x2c) +
         (int)*(short *)(unaff_s2 + 0x48) * (int)*(short *)(unaff_s2 + 0x4e);
    *(int *)(unaff_s2 + 0x34) =
         *(int *)(unaff_s2 + 0x34) +
         (int)*(short *)(unaff_s2 + 0x4c) * (int)*(short *)(unaff_s2 + 0x4e);
    cVar1 = *(char *)(unaff_s2 + 0x5f);
    if (cVar1 == '\0') {
      bVar3 = false;
    }
    else {
      if (cVar1 != '\x03') {
        uVar2 = *(ushort *)(unaff_s2 + 0x62);
      }
      else {
        uVar2 = *(ushort *)(unaff_s2 + 0x62);
      }
      bVar3 = cVar1 == '\x03';
      if ((uVar2 & 1) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    if (bVar3) {
      unaff_s3 = -1;
    }
    *(short *)(unaff_s2 + 0x32) = *(short *)(unaff_s2 + 0x32) + 0x10;
    FUN_801406e4();
    if ((((unaff_s3 == 0) && (*(char *)(unaff_s2 + 0x66) == -0x7f)) &&
        (*(char *)(unaff_s2 + 0x29) == '\0')) && (*(char *)(unaff_s2 + 4) == '\x01')) {
      *(undefined4 *)(unaff_s2 + 4) = 0x20501;
    }
    return (int)unaff_s3;
  }
  iVar6 = FUN_801419dc();
  return iVar6;
}

