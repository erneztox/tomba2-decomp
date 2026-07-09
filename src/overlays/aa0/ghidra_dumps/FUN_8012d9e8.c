// FUN_8012d9e8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8012d9e8(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  short *psVar1;
  int iVar2;
  int in_v1;
  int *in_t1;
  int iVar3;
  undefined2 *puVar4;
  int unaff_s2;
  int iVar5;
  int iStackX_8;
  
  if (in_v1 == 0) {
    if (_DAT_800ed098 < 4) {
      *(undefined1 *)(unaff_s2 + 4) = 3;
    }
    else {
      *(undefined1 *)(unaff_s2 + 8) = 4;
      *(undefined1 *)(unaff_s2 + 9) = 4;
      *(undefined1 *)(unaff_s2 + 0xb) = 3;
      iVar5 = 0;
      *(undefined1 *)(unaff_s2 + 0xd) = 0;
      *(char *)(unaff_s2 + 4) = *(char *)(unaff_s2 + 4) + '\x01';
      if (*(char *)(unaff_s2 + 8) != '\0') {
        puVar4 = (undefined2 *)&DAT_8014a7e4;
        iVar3 = unaff_s2;
        do {
          iVar5 = iVar5 + 1;
          iVar2 = func_0x8007aae8();
          *(int *)(iVar3 + 0xc0) = iVar2;
          *(undefined2 *)(iVar2 + 6) = *puVar4;
          **(undefined2 **)(iVar3 + 0xc0) = puVar4[1];
          *(undefined2 *)(*(int *)(iVar3 + 0xc0) + 2) = puVar4[2];
          *(undefined2 *)(*(int *)(iVar3 + 0xc0) + 4) = puVar4[3];
          *(undefined4 *)(*(int *)(iVar3 + 0xc0) + 8) = 0;
          *(undefined4 *)(*(int *)(iVar3 + 0xc0) + 0xc) = 0;
          param_1 = *(int *)(iVar3 + 0xc0);
          psVar1 = puVar4 + 4;
          puVar4 = puVar4 + 5;
          func_0x80051b04(param_1,0xc,(int)*psVar1);
          iVar3 = iVar3 + 4;
        } while (iVar5 < (int)(uint)*(byte *)(unaff_s2 + 8));
      }
      *(undefined2 *)(unaff_s2 + 0x60) = 0xf;
      *(undefined2 *)(unaff_s2 + 0x62) = 0x3bbf;
      *(undefined2 *)(unaff_s2 + 100) = 0x70f0;
      *(undefined2 *)(unaff_s2 + 0x66) = 0x70f8;
      *(undefined2 *)(unaff_s2 + 0x68) = 0x88f0;
      *(undefined2 *)(unaff_s2 + 0x6a) = 0x88f8;
      *(undefined2 *)(unaff_s2 + 0x6c) = 0x28;
      *(undefined2 *)(unaff_s2 + 0x6e) = 0;
      *(undefined2 *)(unaff_s2 + 0xba) = 0xf0;
      *(undefined2 *)(unaff_s2 + 0x50) = 0;
      *(undefined1 *)(unaff_s2 + 0x2b) = 0;
    }
  }
  if (param_4 <= param_1) {
    FUN_8013fd98();
    return;
  }
  if (param_4 <= iStackX_8) {
    *in_t1 = iStackX_8 >> 2;
    FUN_8013fdb8();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

