// FUN_08036c54

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08036d84) */
/* WARNING: Removing unreachable block (ram,0x08036e64) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08036c54(int param_1)

{
  undefined2 uVar1;
  byte bVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  
  func_0x0004766c();
  bVar2 = *(byte *)(param_1 + 6);
  if (bVar2 != 1) {
    if (1 < bVar2) {
      if (bVar2 != 2) {
        halt_baddata();
      }
      if (*(char *)(param_1 + 7) == '\0') {
        func_0x00049760(param_1);
        uVar1 = _DAT_1f8001a0;
        *(undefined2 *)(param_1 + 0x62) = 0;
        *(undefined2 *)(param_1 + 0x58) = 0;
        *(undefined2 *)(param_1 + 0x60) = uVar1;
        if (*(char *)(param_1 + 0xbe) == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        *(short *)(param_1 + 100) = *(short *)(param_1 + 0x60) + 8;
        *(ushort *)(param_1 + 100) = *(ushort *)(param_1 + 100) & 0xfff;
        *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
      }
      else if (*(char *)(param_1 + 7) != '\x01') {
        halt_baddata();
      }
      iVar5 = func_0x0004139c(param_1 + 0x56,(int)*(short *)(param_1 + 100),0x80);
      if (iVar5 != 0) {
        uVar1 = *(undefined2 *)(param_1 + 100);
        *(undefined2 *)(param_1 + 100) = 0xffff;
        *(undefined2 *)(param_1 + 0x56) = uVar1;
        *(char *)(param_1 + 0xbe) = '\x01' - *(char *)(param_1 + 0xbe);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      goto LAB_08036e84;
    }
    if (bVar2 != 0) {
      halt_baddata();
    }
    func_0x00041768(param_1,1,4);
    *(undefined2 *)(param_1 + 0x62) = 0;
    *(undefined2 *)(param_1 + 0x58) = 0;
    uVar3 = func_0x0009a450();
    *(ushort *)(param_1 + 0x40) = (uVar3 & 0x1f) + 0xf;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
  if (*(char *)(param_1 + 1) == '\0') {
    *(undefined1 *)(param_1 + 5) = 6;
    *(undefined1 *)(param_1 + 6) = 0;
  }
  else {
    iVar5 = func_0x0013b738(param_1,&DAT_800e7eac,1);
    if (iVar5 < 2) {
      *(undefined2 *)(param_1 + 0x40) = 0;
    }
    uVar3 = *(short *)(param_1 + 0x40) - 1;
    *(ushort *)(param_1 + 0x40) = uVar3;
    if (-1 < (int)((uint)uVar3 << 0x10)) {
LAB_08036e84:
      sVar4 = *(short *)(param_1 + 0x42) + 0x1f;
      *(short *)(param_1 + 0x42) = sVar4;
      iVar5 = func_0x00083e80((int)sVar4);
      *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + (short)(iVar5 >> 10);
      return;
    }
    bVar2 = func_0x0012faf0(param_1);
    if (bVar2 < 3) {
      *(undefined1 *)(param_1 + 6) = 0;
      *(byte *)(param_1 + 5) = bVar2;
    }
    else {
      if (bVar2 != 3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(undefined1 *)(param_1 + 6) = 0;
      uVar6 = func_0x0013b7dc(param_1);
      if (uVar6 == *(byte *)(param_1 + 0xbe)) {
        *(undefined1 *)(param_1 + 5) = 3;
      }
      else {
        *(undefined1 *)(param_1 + 5) = 1;
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

