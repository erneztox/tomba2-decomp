// FUN_80129dbc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80129dbc(int param_1)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  *(short *)(*(int *)(param_1 + 0xc0) + 0x38) =
       *(short *)(*(int *)(param_1 + 0xc0) + 0x38) + *(short *)(param_1 + 0x4e);
  *(short *)(*(int *)(param_1 + 0xc0) + 0x3a) =
       *(short *)(*(int *)(param_1 + 0xc0) + 0x3a) + *(short *)(param_1 + 0x50);
  uVar3 = (uint)*(byte *)(param_1 + 6);
  iVar4 = 0;
  if (uVar3 == 0) {
    uVar3 = (uint)*(ushort *)(*(int *)(param_1 + 0xc0) + 0x38);
    if ((int)*(short *)(param_1 + 100) <= (int)uVar3) {
      *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x38) = *(undefined2 *)(param_1 + 100);
      *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x3a) = *(undefined2 *)(param_1 + 0x66);
      FUN_80133610(param_1,1);
      *(undefined1 *)(param_1 + 5) = 3;
      *(undefined1 *)(param_1 + 6) = 1;
      FUN_80132e90();
      return;
    }
    iVar2 = 0;
    if (0xdff < uVar3) {
      sVar1 = *(short *)(param_1 + 0x6a);
      iVar4 = 4;
      if (sVar1 != 0) {
        *(undefined2 *)(param_1 + 0x6a) = 0;
        goto LAB_80132e94;
      }
    }
  }
  else {
    sVar1 = 1;
    if (uVar3 != 1) {
LAB_80132e94:
      *(char *)(iVar4 + 5) = (char)sVar1 + '\x01';
      iVar2 = func_0x8003116c(uVar3,&stack0xfffffff0,0xffffffce);
      *(byte *)(iVar2 + 0x28) = *(byte *)(iVar2 + 0x28) | 0x80;
      iVar2 = func_0x8003116c(0x24,&stack0xfffffff0,0xffffffce);
      *(byte *)(iVar2 + 0x28) = *(byte *)(iVar2 + 0x28) | 0x80;
      func_0x80027144(*(undefined4 *)(*(int *)(iVar4 + 0xc0) + 0x40),&stack0xfffffff0,0x800,8);
      func_0x80074590(0xc,0,0);
      return;
    }
    uVar3 = (uint)*(ushort *)(*(int *)(param_1 + 0xc0) + 0x38);
    if ((int)uVar3 <= (int)*(short *)(param_1 + 100)) {
      *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x38) = *(undefined2 *)(param_1 + 100);
      *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x3a) = *(undefined2 *)(param_1 + 0x66);
      FUN_80133610(param_1,1);
      *(undefined1 *)(param_1 + 5) = 3;
      *(undefined1 *)(param_1 + 6) = 0;
      FUN_80132e90();
      return;
    }
    iVar2 = 0;
    if ((uVar3 < 0xe00) && (*(short *)(param_1 + 0x6a) == 0)) {
      *(ushort *)(param_1 + 0x6a) = (ushort)*(byte *)(param_1 + 6);
      iVar2 = 5;
    }
  }
  if (iVar2 != 0) {
    func_0x80051b04(*(undefined4 *)(param_1 + 0xc0),0xc);
  }
  *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x3c) =
       *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x38);
  FUN_80133774(param_1);
  FUN_80133700(param_1);
  return;
}

