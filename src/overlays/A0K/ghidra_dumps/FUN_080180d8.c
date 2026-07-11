// FUN_080180d8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080180d8(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    if ((*(char *)(param_1 + 3) == '\0') && (DAT_800bf871 < 4)) {
      func_0x00110d40(param_1);
      *(undefined1 *)(param_1 + 1) = 1;
      func_0x000517f8(param_1);
      if ((*(short *)(param_1 + 0x60) == 0) && (DAT_800bf8fc == -1)) {
        func_0x00051b04(*(undefined4 *)(param_1 + 0xd4),0xc,8);
        func_0x00051b04(*(undefined4 *)(param_1 + 0xd8),0xc,8);
        *(short *)(param_1 + 0x60) = *(short *)(param_1 + 0x60) + 1;
        halt_baddata();
      }
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        *(undefined1 *)(param_1 + 8) =
             *(undefined1 *)((uint)*(byte *)(param_1 + 3) * 2 + -0x7fee35d0);
        if (_DAT_800ed098 < (short)(ushort)*(byte *)(param_1 + 8)) {
          *(undefined1 *)(param_1 + 4) = 3;
        }
        else {
          *(byte *)(param_1 + 9) = *(byte *)(param_1 + 8);
          *(undefined1 *)(param_1 + 0xd) = 4;
          *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
          *(undefined1 *)(param_1 + 0xb) = 0;
          *(undefined2 *)(param_1 + 0x54) = 0;
          *(undefined2 *)(param_1 + 0x58) = 0;
          puVar3 = *(undefined2 **)((uint)*(byte *)(param_1 + 3) * 4 + -0x7fee35d4);
          iVar5 = 0;
          iVar4 = param_1;
          if (*(char *)(param_1 + 8) != '\0') {
            do {
              iVar5 = iVar5 + 1;
              iVar2 = func_0x0007aae8();
              *(int *)(iVar4 + 0xc0) = iVar2;
              *(undefined2 *)(iVar2 + 6) = *puVar3;
              **(undefined2 **)(iVar4 + 0xc0) = puVar3[1];
              *(undefined2 *)(*(int *)(iVar4 + 0xc0) + 2) = puVar3[2];
              *(undefined2 *)(*(int *)(iVar4 + 0xc0) + 4) = puVar3[3];
              *(undefined2 *)(*(int *)(iVar4 + 0xc0) + 8) = puVar3[4];
              *(undefined2 *)(*(int *)(iVar4 + 0xc0) + 10) = puVar3[5];
              *(undefined2 *)(*(int *)(iVar4 + 0xc0) + 0xc) = puVar3[6];
              func_0x00051b04(*(undefined4 *)(iVar4 + 0xc0),0xc,(int)(short)puVar3[7]);
              puVar3 = puVar3 + 8;
              *(undefined1 *)(*(int *)(iVar4 + 0xc0) + 0x3f) = 0;
              iVar4 = iVar4 + 4;
            } while (iVar5 < (int)(uint)*(byte *)(param_1 + 8));
          }
          if (*(char *)(param_1 + 3) != '\0') {
            return;
          }
          *(undefined1 *)(param_1 + 0xbf) = 1;
          *(undefined2 *)(param_1 + 0x56) = 0;
          *(undefined1 *)(*(int *)(param_1 + 0xc4) + 0x3f) = 0x10;
          *(undefined1 *)(*(int *)(param_1 + 200) + 0x3f) = 0x10;
          *(undefined1 *)(*(int *)(param_1 + 0xcc) + 0x3f) = 0x10;
          if (DAT_800bf8fc == -1) {
            func_0x00051b04(*(undefined4 *)(param_1 + 0xd4),0xc,8);
            func_0x00051b04(*(undefined4 *)(param_1 + 0xd8),0xc,8);
            *(undefined2 *)(param_1 + 0x60) = 1;
          }
          else {
            *(undefined2 *)(param_1 + 0x60) = 0;
          }
        }
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        halt_baddata();
      }
      func_0x0007a624(param_1);
    }
  }
  return;
}

