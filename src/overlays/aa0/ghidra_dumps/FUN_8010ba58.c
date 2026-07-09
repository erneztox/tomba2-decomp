// FUN_8010ba58

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8010ba58(int param_1,int param_2)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = (uint)*(byte *)(param_2 + 8);
  iVar5 = 2;
  iVar4 = param_2 + 8;
  if (2 < (int)(uVar2 - 1)) {
    do {
      iVar3 = *(int *)(iVar4 + 0xc0);
      if (*(short *)(iVar3 + 0x16) == 2) {
        return;
      }
      if (iVar5 == uVar2 - 2) {
        if (*(short *)(*(int *)(param_2 + (uVar2 - 1) * 4 + 0xc0) + 0x16) != 0) goto LAB_8010bb14;
        iVar3 = func_0x80023d48(param_1,param_2,iVar3,*(char *)(param_1 + 2) == '\x03');
        if (iVar3 != 0) {
          *(undefined1 *)(param_2 + 0x29) = 1;
          uVar1 = func_0x80077768((int)_DAT_1f80009c,(int)*(short *)(param_1 + 0x56),1);
          *(undefined1 *)(param_2 + 0x47) = uVar1;
          FUN_80114ad8();
          return;
        }
      }
      else {
        iVar3 = *(int *)(iVar4 + 0xc0);
LAB_8010bb14:
        iVar3 = func_0x80023870(param_1,param_2,iVar3);
        if (iVar3 != 0) {
          return;
        }
      }
      uVar2 = (uint)*(byte *)(param_2 + 8);
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar5 < (int)(uVar2 - 1));
  }
  return;
}

