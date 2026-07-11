// FUN_08043048

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08043048(int param_1)

{
  byte bVar1;
  int iVar2;
  ushort uVar3;
  
  iVar2 = _DAT_800bf844;
  bVar1 = *(byte *)(param_1 + 0x78);
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        func_0x00041718(param_1,0x11,4);
        func_0x000440e4(&DAT_800e7e80,0x80b4,4);
        *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
        halt_baddata();
      }
    }
    else if (bVar1 == 2) {
      uVar3 = func_0x0009a450();
      *(ushort *)(iVar2 + 0x2e) = (*(short *)(param_1 + 0x48) + 7) - (uVar3 & 0xf);
      uVar3 = func_0x0009a450();
      *(ushort *)(iVar2 + 0x32) = (*(short *)(param_1 + 0x4a) + 7) - (uVar3 & 0xf);
      uVar3 = func_0x0009a450();
      *(ushort *)(iVar2 + 0x36) = (*(short *)(param_1 + 0x4c) + 7) - (uVar3 & 0xf);
      if (*(char *)(param_1 + 0x79) != '\x01') {
        return 0;
      }
      *(undefined2 *)(iVar2 + 0x2e) = *(undefined2 *)(param_1 + 0x48);
      *(undefined2 *)(iVar2 + 0x32) = *(undefined2 *)(param_1 + 0x4a);
      *(undefined2 *)(iVar2 + 0x36) = *(undefined2 *)(param_1 + 0x4c);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(short *)(*(int *)(param_1 + 0x38) + 4) == 0) {
    return 0;
  }
  func_0x000521f4(0,0,0xa0,4);
  if (*(short *)(param_1 + 0x72) != 0) {
    func_0x00074590(0xf,5,0);
    *(undefined1 *)(param_1 + 0x78) = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

