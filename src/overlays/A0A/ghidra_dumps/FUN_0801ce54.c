// FUN_0801ce54

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801ce54(int param_1)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    if (*(char *)(param_1 + 0x47) != '\x02') {
      if (*(char *)(param_1 + 0x2b) != '\0') {
        uVar3 = *(ushort *)(*(int *)(param_1 + 0xc0) + 0x3a) / 0x140;
        if (uVar3 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (4 < uVar3) {
          uVar3 = 4;
        }
        *(undefined2 *)(param_1 + 0x7c) = 0;
        *(short *)(param_1 + 0x7e) = (short)(uVar3 << 3);
        func_0x00074590(0x8d,0,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar2 = *(short *)(param_1 + 0x7c) + 0x1e0U & 0xfff;
      *(ushort *)(param_1 + 0x7c) = uVar2;
      if ((uVar2 < 0x1e0) && (*(short *)(param_1 + 0x7e) != 0)) {
        *(short *)(param_1 + 0x7e) = *(short *)(param_1 + 0x7e) + -8;
      }
    }
    func_0x00115c24(param_1);
    if (*(char *)(param_1 + 0x47) == '\x02') {
      *(short *)(param_1 + 0x54) = -_DAT_1f8000f0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar4 = *(int *)(param_1 + 0x10);
    *(short *)(param_1 + 0x56) = -_DAT_1f8000f2 - *(short *)(iVar4 + 0x56);
    func_0x00085480(param_1 + 0x54,param_1 + 0x98);
    func_0x00051d20(iVar4,param_1 + 0x88,param_1 + 0x90);
    *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(param_1 + 0x90);
    *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(param_1 + 0x92);
    *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x94);
    *(int *)(param_1 + 0xac) = (int)*(short *)(param_1 + 0x2e);
    *(int *)(param_1 + 0xb0) = (int)*(short *)(param_1 + 0x32);
    *(int *)(param_1 + 0xb4) = (int)*(short *)(param_1 + 0x36);
    func_0x00084360(iVar4 + 0x98,param_1 + 0x98);
    func_0x00051300(param_1);
    *(undefined1 *)(param_1 + 1) = 1;
    func_0x00077ebc(param_1);
    *(undefined1 *)(param_1 + 0x2b) = 0;
  }
  else {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          halt_baddata();
        }
        func_0x0007a624(param_1);
      }
      return;
    }
    if (bVar1 == 0) {
      func_0x00115418(param_1);
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

