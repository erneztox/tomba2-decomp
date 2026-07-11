// FUN_08035e2c

/* WARNING: Control flow encountered bad instruction data */

void FUN_08035e2c(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 == 1) {
    if ((DAT_800bf9c0 & 0x80) == 0) goto LAB_08035f48;
    iVar5 = 0;
    iVar4 = param_1;
    if (*(char *)(param_1 + 8) != '\0') {
      do {
        iVar3 = func_0x000310f4(0x615,0);
        if (iVar3 != 0) {
          *(undefined1 *)(iVar3 + 3) = 0;
          *(byte *)(iVar3 + 0x28) = *(byte *)(iVar3 + 0x28) | 0x80;
          *(undefined2 *)(iVar3 + 0x50) = *(undefined2 *)(*(int *)(iVar4 + 0xc0) + 0x2c);
          *(short *)(iVar3 + 0x52) = *(short *)(*(int *)(iVar4 + 0xc0) + 0x30) + -100;
          uVar2 = *(undefined2 *)(*(int *)(iVar4 + 0xc0) + 0x34);
          *(undefined2 *)(iVar3 + 0x58) = 0x3d80;
          *(undefined2 *)(iVar3 + 0x5a) = 0xe118;
          *(undefined2 *)(iVar3 + 0x5c) = 0x2882;
          *(undefined2 *)(iVar3 + 0x54) = uVar2;
          func_0x00074590(0x38,0xd,0);
        }
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + 4;
      } while (iVar5 < (int)(uint)*(byte *)(param_1 + 8));
    }
  }
  else {
    if ((1 < bVar1) || (bVar1 != 0)) goto LAB_08035f48;
    if (DAT_800bf926 == '\0') {
      *(undefined1 *)(param_1 + 5) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  *(undefined1 *)(param_1 + 5) = 99;
LAB_08035f48:
  func_0x000517f8(param_1);
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

