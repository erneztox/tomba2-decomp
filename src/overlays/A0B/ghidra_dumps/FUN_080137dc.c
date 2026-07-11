// FUN_080137dc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080137dc(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    sVar2 = func_0x000782b0(param_1 + 0x2c,(int)_DAT_1f8000d2,(int)_DAT_1f8000da);
    *(short *)(param_1 + 0x56) = sVar2 + -0x400;
    func_0x0007778c(param_1);
    if (*(char *)(param_1 + 5) == '\0') {
      func_0x0004bd64(param_1,0,_DAT_800e7f5c,_DAT_800e7f50,0);
    }
    else if (*(char *)(param_1 + 5) == '\x01') {
      sVar2 = *(short *)(param_1 + 0x4a) + -0x200;
      *(short *)(param_1 + 0x4a) = sVar2;
      if (sVar2 < -0x3000) {
        *(undefined2 *)(param_1 + 0x4a) = 0xd000;
      }
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x100;
      if (*(char *)(param_1 + 1) == '\0') {
        *(undefined1 *)(param_1 + 4) = 3;
        func_0x0006e1c0(7);
        *(undefined1 *)(_DAT_1f800248 + 5) = 2;
      }
      else {
        func_0x000517f8(param_1);
      }
    }
  }
  else {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 == 0) {
      iVar3 = func_0x00051b70(param_1,0xc,*(undefined4 *)((DAT_800bf870 - 10) * 4 + -0x7fee5ad4));
      if (iVar3 != 0) {
        return;
      }
      *(undefined2 *)(param_1 + 0x54) = 0;
      *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
      sVar2 = func_0x000782b0(param_1 + 0x2c,(int)_DAT_1f8000d2,(int)_DAT_1f8000da);
      *(short *)(param_1 + 0x56) = sVar2 + -0x400;
      *(undefined2 *)(param_1 + 0x58) = 0;
      *(undefined2 *)(param_1 + 0x4a) = 0;
      **(undefined2 **)(param_1 + 0xc0) = 0x28;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

