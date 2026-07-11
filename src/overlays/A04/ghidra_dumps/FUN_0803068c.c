// FUN_0803068c

/* WARNING: Control flow encountered bad instruction data */

void FUN_0803068c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_30 [32];
  
  func_0x000518fc();
  iVar3 = 0;
  iVar2 = param_1;
  if (*(char *)(param_1 + 9) != '\0') {
    do {
      if ((int)(uint)*(byte *)(param_1 + 8) <= iVar3) break;
      func_0x00051794(auStack_30);
      func_0x000847f0(*(int *)(iVar2 + 0xc0) + 8,auStack_30);
      iVar1 = (int)*(short *)(*(int *)(iVar2 + 0xc0) + 6);
      if (iVar1 == -1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      func_0x00084110(*(int *)(param_1 + iVar1 * 4 + 0xc0) + 0x18,auStack_30,
                      *(int *)(iVar2 + 0xc0) + 0x18);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < (int)(uint)*(byte *)(param_1 + 9));
  }
  iVar3 = 0;
  iVar2 = param_1;
  if (*(char *)(param_1 + 8) != '\0') {
    do {
      iVar1 = *(int *)(iVar2 + 0xc0);
      iVar3 = iVar3 + 1;
      func_0x000517bc(auStack_30,(int)*(short *)(iVar1 + 0x38),(int)*(short *)(iVar1 + 0x3a),
                      (int)*(short *)(iVar1 + 0x3c));
      func_0x00084250(*(int *)(iVar2 + 0xc0) + 0x18,auStack_30);
      iVar2 = iVar2 + 4;
    } while (iVar3 < (int)(uint)*(byte *)(param_1 + 8));
  }
  return;
}

