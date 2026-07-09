// FUN_8010b5b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8010b5b0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  
  uVar1 = (uint)*(byte *)(param_2 + 8);
  iVar4 = 2;
  puVar3 = (undefined1 *)(param_2 + 8);
  if (2 < (int)(uVar1 - 1)) {
    do {
      iVar2 = *(int *)(puVar3 + 0xc0);
      if (*(short *)(iVar2 + 0x16) == 2) {
        return;
      }
      if (iVar4 == uVar1 - 2) {
        if (*(short *)(*(int *)(param_2 + (uVar1 - 1) * 4 + 0xc0) + 0x16) != 0) goto LAB_8010b660;
        iVar2 = func_0x80022e04(param_1,param_2);
        if (iVar2 != 0) {
          *(undefined1 *)(param_2 + 0x29) = 1;
          iVar2 = (int)_DAT_1f80009c;
          iVar4 = func_0x80077768(iVar2,(int)*(short *)(param_1 + 0x56),1);
          *(char *)(param_2 + 0x47) = (char)iVar4;
          if (iVar2 == iVar4) {
            func_0x8007a624(puVar3);
            return;
          }
          *(short *)(puVar3 + 100) = (short)iVar4;
          func_0x80077b38(puVar3,0x8014c808,0x17);
          *(undefined2 *)(puVar3 + 0x44) = 0x800;
          *puVar3 = 1;
          *(undefined2 *)(puVar3 + 0x80) = 0x1e;
          *(undefined2 *)(puVar3 + 0x82) = 0x3c;
          *(undefined2 *)(puVar3 + 0x84) = 0x3c;
          *(undefined2 *)(puVar3 + 0x86) = 0x5a;
          puVar3[5] = 2;
          puVar3[6] = 4;
          return;
        }
      }
      else {
        iVar2 = *(int *)(puVar3 + 0xc0);
LAB_8010b660:
        iVar2 = func_0x8001f650(param_1,param_2,iVar2);
        if (iVar2 != 0) {
          return;
        }
      }
      uVar1 = (uint)*(byte *)(param_2 + 8);
      iVar4 = iVar4 + 1;
      puVar3 = puVar3 + 4;
    } while (iVar4 < (int)(uVar1 - 1));
  }
  return;
}

