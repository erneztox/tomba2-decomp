// FUN_080431d4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_080431d4(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  short sVar4;
  ushort uVar5;
  
  iVar3 = _DAT_800bf844;
  bVar1 = *(byte *)(param_1 + 0x78);
  if (bVar1 == 1) {
    if (*(short *)(*(int *)(param_1 + 0x38) + 4) != 0) {
      func_0x000521f4(0,0,0xf0,8);
      *(undefined2 *)(param_1 + 0x72) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    goto LAB_08043340;
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      func_0x00041718(param_1,0x12,4);
      func_0x000440e4(&DAT_800e7e80,0x80b4,4);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (bVar1 == 2) {
    if ((*(ushort *)(param_1 + 0x72) & 3) == 0) {
      func_0x00074590(0x31,6,0);
    }
    sVar4 = *(short *)(param_1 + 0x72) + 1;
    *(short *)(param_1 + 0x72) = sVar4;
    if (sVar4 < 7) goto LAB_08043340;
    *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
  }
  else if (bVar1 == 3) {
    if (*(char *)(param_1 + 0x79) == '\x01') {
      func_0x000312d4(0x91a,_DAT_800bf844 + 0x2c,0xfffffff6);
      func_0x00051b04(*(undefined4 *)(iVar3 + 0xc0),0xc,0x6b);
      *(short *)(iVar3 + 0x2e) = *(short *)(param_1 + 0x48) + 0x32;
      *(undefined2 *)(iVar3 + 0x32) = *(undefined2 *)(param_1 + 0x4a);
      uVar2 = *(undefined2 *)(param_1 + 0x4c);
      *(undefined2 *)(iVar3 + 0x54) = 3000;
      *(undefined2 *)(iVar3 + 0x36) = uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
LAB_08043340:
    if (1 < *(byte *)(param_1 + 0x78)) {
      uVar5 = func_0x0009a450();
      *(ushort *)(iVar3 + 0x2e) = (*(short *)(param_1 + 0x48) + 7) - (uVar5 & 0xf);
      uVar5 = func_0x0009a450();
      *(ushort *)(iVar3 + 0x32) = (*(short *)(param_1 + 0x4a) + 7) - (uVar5 & 0xf);
      uVar5 = func_0x0009a450();
      *(ushort *)(iVar3 + 0x36) = (*(short *)(param_1 + 0x4c) + 7) - (uVar5 & 0xf);
    }
    return 0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

