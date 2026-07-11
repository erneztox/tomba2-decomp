// FUN_08023f80

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08023f80(undefined1 *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  param_1[8] = 4;
  cVar1 = '\x03';
  if (3 < _DAT_800ed098) {
    iVar5 = 0;
    param_1[9] = 4;
    param_1[0xd] = 4;
    param_1[0xb] = 0;
    if (param_1[8] != '\0') {
      do {
        iVar2 = func_0x0007aae8();
        iVar4 = (int)(short)iVar5;
        iVar3 = iVar4 * 8;
        *(int *)(param_1 + iVar4 * 4 + 0xc0) = iVar2;
        *(undefined2 *)(iVar2 + 6) = *(undefined2 *)(iVar3 + -0x7feccdac);
        **(undefined2 **)(param_1 + iVar4 * 4 + 0xc0) = *(undefined2 *)(iVar3 + -0x7feccdaa);
        *(undefined2 *)(*(int *)(param_1 + iVar4 * 4 + 0xc0) + 2) =
             *(undefined2 *)(iVar3 + -0x7feccda8);
        *(undefined2 *)(*(int *)(param_1 + iVar4 * 4 + 0xc0) + 4) =
             *(undefined2 *)(iVar3 + -0x7feccda6);
        *(undefined2 *)(*(int *)(param_1 + iVar4 * 4 + 0xc0) + 8) = 0;
        *(undefined2 *)(*(int *)(param_1 + iVar4 * 4 + 0xc0) + 10) = 0;
        *(undefined2 *)(*(int *)(param_1 + iVar4 * 4 + 0xc0) + 0xc) = 0;
        *(undefined1 *)(*(int *)(param_1 + iVar4 * 4 + 0xc0) + 0x3f) = 0x28;
        func_0x00051b04(*(undefined4 *)(param_1 + iVar4 * 4 + 0xc0),0xc,iVar4 + 0x2c);
        iVar5 = iVar5 + 1;
      } while (iVar5 * 0x10000 >> 0x10 < (int)(uint)(byte)param_1[8]);
    }
    if (0xc < DAT_800bf9d6) {
      param_1[0x5e] = 1;
      *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0xc) = 0;
      *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0xc) = 0;
      *(undefined2 *)(*(int *)(param_1 + 200) + 0xc) = 0;
      *(undefined2 *)(*(int *)(param_1 + 0xcc) + 0xc) = 0;
      param_1[5] = 10;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    param_1[0x5e] = 0;
    *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0xc) = 0x400;
    *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0xc) = 0xf800;
    *(undefined2 *)(*(int *)(param_1 + 200) + 0xc) = 0x800;
    *(undefined2 *)(*(int *)(param_1 + 0xcc) + 0xc) = 0xf800;
    param_1[5] = 0;
    *param_1 = 1;
    *(undefined2 *)(param_1 + 0x80) = 0xc0;
    *(undefined2 *)(param_1 + 0x82) = 0x180;
    *(undefined2 *)(param_1 + 0x84) = 0x4c0;
    *(undefined2 *)(param_1 + 0x86) = 0x4c0;
    cVar1 = param_1[4] + '\x01';
  }
  param_1[4] = cVar1;
  return;
}

