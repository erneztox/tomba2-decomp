// FUN_080183fc

/* WARNING: Control flow encountered bad instruction data */

void FUN_080183fc(int param_1,int param_2)

{
  short sVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = func_0x0001f650(param_1,param_2,*(undefined4 *)(param_2 + 0xc0));
  if ((((iVar3 == 1) && (DAT_1f800137 == '\0')) && (*(char *)(param_1 + 0x16a) == '\b')) &&
     ((*(ushort *)(param_1 + 0x17e) & 0x30) != 0)) {
    if (*(byte *)(param_1 + 0x147) == (*(byte *)(param_1 + 0x5f) & 1)) {
      *(undefined2 *)(param_1 + 0x156) = 0x28;
      sVar1 = *(short *)(param_2 + 0x80);
      *(undefined1 *)(param_1 + 0x164) = 1;
      *(undefined1 *)(param_1 + 0x15c) = 0;
      *(int *)(param_1 + 0x158) = param_2;
      *(short *)(param_1 + 0x152) = sVar1 + *(short *)(param_1 + 0x80) + -0xc;
      uVar4 = *(undefined4 *)(param_2 + 0xc0);
      *(undefined1 *)(param_1 + 5) = 4;
      *(undefined1 *)(param_1 + 0x145) = 0;
      *(undefined1 *)(param_1 + 0x144) = 0;
      *(undefined2 *)(param_1 + 0x44) = 0;
      *(undefined1 *)(param_1 + 6) = 0;
      *(undefined1 *)(param_1 + 7) = 0;
      *(undefined4 *)(param_1 + 0x10) = uVar4;
      DAT_800bf81e = 0;
      func_0x00074590(5,0,0);
      DAT_1f800182 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar2 = 0xec00;
    if (*(byte *)(param_1 + 0x147) == 0) {
      uVar2 = 0x1400;
    }
    *(undefined2 *)(param_1 + 0x44) = uVar2;
  }
  return;
}

