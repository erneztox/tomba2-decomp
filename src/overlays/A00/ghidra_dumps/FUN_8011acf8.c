// FUN_8011acf8

/* WARNING: Removing unreachable block (ram,0x80123e44) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_8011acf8(int param_1)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  int unaff_s3;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 == 1) {
    if (*(char *)(*(int *)(param_1 + 0x10) + 0x5f) != '\0') {
      sVar2 = *(short *)(param_1 + 0x92);
      sVar3 = sVar2 + *(short *)(param_1 + 0x96);
      *(short *)(param_1 + 0x92) = sVar3;
      *(short *)(param_1 + 0x6c) = *(short *)(param_1 + 0x6c) + sVar2;
      if (sVar3 < -0x2000) {
        *(undefined2 *)(param_1 + 0x92) = 0x2000;
        *(undefined2 *)(param_1 + 0x96) = 0xf800;
      }
      func_0x80051d90(*(undefined4 *)(*(int *)(param_1 + 0x10) + 0xc0),param_1 + 100,&DAT_1f8000c0);
      *(undefined2 *)(param_1 + 0x2e) = _DAT_1f8000c0;
      *(undefined2 *)(param_1 + 0x32) = _DAT_1f8000c2;
      *(undefined2 *)(param_1 + 0x36) = _DAT_1f8000c4;
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x6c) * 0x100;
      uVar4 = FUN_80123de8();
      return uVar4;
    }
    *(undefined1 *)(param_1 + 6) = 2;
    uVar4 = 1;
  }
  else if (bVar1 < 2) {
    uVar4 = 0;
    if (bVar1 == 0) {
      iVar5 = *(int *)(param_1 + 0x10);
      if ((*(char *)(iVar5 + 0x5f) != '\0') && (*(short *)(iVar5 + 0x62) != 0)) {
        *(undefined2 *)(param_1 + 0x92) = 0x2000;
        *(undefined1 *)(param_1 + 6) = 1;
        *(undefined2 *)(param_1 + 0x42) = 0;
        *(undefined2 *)(param_1 + 0x96) = 0xf800;
        uVar4 = *(undefined4 *)(iVar5 + 0xc0);
        *(undefined1 *)(unaff_s3 + 1) = 1;
        uVar4 = FUN_8012ce0c(uVar4,param_1 + 100);
        return uVar4;
      }
      return 0;
    }
  }
  else {
    uVar4 = 0;
    if (bVar1 == 2) {
      sVar2 = *(short *)(param_1 + 0x92);
      sVar3 = sVar2 + *(short *)(param_1 + 0x96);
      *(short *)(param_1 + 0x92) = sVar3;
      *(short *)(param_1 + 0x6c) = *(short *)(param_1 + 0x6c) + sVar2;
      if (sVar3 < -0x2000) {
        *(undefined1 *)(param_1 + 6) = 0;
        *(undefined2 *)(param_1 + 0x6c) = 0;
        return 0;
      }
      func_0x80051d90(*(undefined4 *)(*(int *)(param_1 + 0x10) + 0xc0),param_1 + 100,&DAT_1f8000c0);
      *(undefined2 *)(param_1 + 0x2e) = _DAT_1f8000c0;
      *(undefined2 *)(param_1 + 0x32) = _DAT_1f8000c2;
      uVar4 = 1;
      *(undefined2 *)(param_1 + 0x36) = _DAT_1f8000c4;
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x6c) * 0x100;
    }
  }
  return uVar4;
}

