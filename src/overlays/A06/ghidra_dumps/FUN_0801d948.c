// FUN_0801d948

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801d948(int param_1)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  int iVar5;
  
  *(undefined1 *)(param_1 + 8) = 3;
  iVar5 = 0;
  if (_DAT_800ed098 < 3) {
    *(undefined1 *)(param_1 + 4) = 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined1 *)(param_1 + 9) = 3;
  *(undefined1 *)(param_1 + 0xd) = 4;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined2 *)(param_1 + 0x54) = 0;
  *(undefined2 *)(param_1 + 0x56) = 0x800;
  *(undefined2 *)(param_1 + 0x58) = 0;
  if (*(char *)(param_1 + 8) != '\0') {
    puVar4 = (undefined2 *)&DAT_80144cd4;
    iVar3 = param_1;
    do {
      iVar5 = iVar5 + 1;
      iVar2 = func_0x0007aae8();
      *(int *)(iVar3 + 0xc0) = iVar2;
      *(undefined2 *)(iVar2 + 6) = *puVar4;
      **(undefined2 **)(iVar3 + 0xc0) = puVar4[1];
      *(undefined2 *)(*(int *)(iVar3 + 0xc0) + 2) = puVar4[2];
      *(undefined2 *)(*(int *)(iVar3 + 0xc0) + 4) = puVar4[3];
      *(undefined2 *)(*(int *)(iVar3 + 0xc0) + 8) = 0;
      *(undefined2 *)(*(int *)(iVar3 + 0xc0) + 10) = 0;
      *(undefined2 *)(*(int *)(iVar3 + 0xc0) + 0xc) = 0;
      psVar1 = puVar4 + 4;
      puVar4 = puVar4 + 5;
      func_0x00051b04(*(undefined4 *)(iVar3 + 0xc0),0xc,(int)*psVar1);
      iVar3 = iVar3 + 4;
    } while (iVar5 < (int)(uint)*(byte *)(param_1 + 8));
  }
  *(short *)(param_1 + 0x8a) = *(short *)(param_1 + 0x32);
  *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + -500;
  *(undefined2 *)(*(int *)(param_1 + 0xc0) + 8) = 0xff00;
  *(undefined2 *)(*(int *)(param_1 + 0xc4) + 8) = 0x100;
  *(undefined2 *)(*(int *)(param_1 + 200) + 8) = 0x100;
  _DAT_800bf864 = param_1;
  if (DAT_800bf8d5 == -1) {
    func_0x0013aef0(param_1);
    *(undefined2 *)(param_1 + 0x32) = 0xe080;
    *(undefined2 *)(*(int *)(param_1 + 0xc0) + 8) = 0;
    *(undefined2 *)(*(int *)(param_1 + 0xc4) + 8) = 0;
    *(undefined2 *)(*(int *)(param_1 + 200) + 8) = 0;
    *(undefined1 *)(param_1 + 5) = 99;
  }
  iVar5 = func_0x00072ddc(param_1,1,4,0x17);
  if (iVar5 != 0) {
    *(undefined4 *)(iVar5 + 0x1c) = 0x80120fb4;
    *(undefined1 *)(iVar5 + 3) = 1;
    *(byte *)(iVar5 + 0x28) = *(byte *)(iVar5 + 0x28) | 0x80;
    *(undefined2 *)(iVar5 + 0x2e) = *(undefined2 *)(param_1 + 0x2e);
    *(undefined2 *)(iVar5 + 0x32) = *(undefined2 *)(param_1 + 0x32);
    *(undefined2 *)(iVar5 + 0x36) = *(undefined2 *)(param_1 + 0x36);
  }
  return;
}

