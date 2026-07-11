// FUN_08032478

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08032478(int param_1)

{
  byte bVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    *(undefined1 *)(param_1 + 1) = 1;
    func_0x00077e7c(param_1);
    sVar2 = func_0x00076d68(param_1);
    bVar1 = *(byte *)(param_1 + 5);
    *(short *)(param_1 + 0x60) = sVar2;
    if (bVar1 == 1) {
      if (DAT_1f800137 == '\0') {
        DAT_800bfa47 = 0x81;
        func_0x00040c00(0x40);
        *(undefined1 *)(param_1 + 5) = 0;
        halt_baddata();
      }
    }
    else if (bVar1 < 2) {
      if (bVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (DAT_800bfa4e == '\n') {
        *(undefined1 *)(param_1 + 5) = 2;
        *(undefined1 *)(param_1 + 6) = 0;
        uVar3 = func_0x0009a450();
        *(ushort *)(param_1 + 0x40) = uVar3 & 0xf;
        halt_baddata();
      }
      if (*(char *)(param_1 + 6) == '\0') {
        uVar3 = *(short *)(param_1 + 0x40) - 1;
        *(ushort *)(param_1 + 0x40) = uVar3;
        if ((int)((uint)uVar3 << 0x10) < 1) {
          uVar5 = func_0x0009a450();
          if ((uVar5 & 1) == 0) {
            uVar3 = func_0x0009a450(param_1);
            *(ushort *)(param_1 + 0x40) = uVar3 & 0xff;
            halt_baddata();
          }
          func_0x00077cfc(param_1,0x80149d08,2,2);
          func_0x0009a450();
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      else {
        if (*(char *)(param_1 + 6) != '\x01') {
          halt_baddata();
        }
        if ((sVar2 == 1) &&
           (uVar3 = *(short *)(param_1 + 0x40) - 1, *(ushort *)(param_1 + 0x40) = uVar3,
           (int)((uint)uVar3 << 0x10) < 1)) {
          func_0x00077cfc(param_1,0x80149d08,1,2);
          uVar3 = func_0x0009a450();
          *(ushort *)(param_1 + 0x40) = uVar3 & 0xff;
          *(undefined1 *)(param_1 + 6) = 0;
          halt_baddata();
        }
      }
    }
    else {
      if (bVar1 != 2) {
        halt_baddata();
      }
      func_0x00076d68(param_1);
      bVar1 = *(byte *)(param_1 + 6);
      if (bVar1 == 1) {
        sVar2 = *(short *)(param_1 + 0x32) + -6;
        *(short *)(param_1 + 0x32) = sVar2;
        if ((int)sVar2 <= *(short *)(param_1 + 0x62) + -0x40) {
          *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x62) + -0x40;
        }
        if (DAT_800bfa4e == '\x0f') {
          uVar3 = func_0x0009a450();
          *(ushort *)(param_1 + 0x40) = uVar3 & 0xf;
          *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
          halt_baddata();
        }
      }
      else if (bVar1 < 2) {
        if (bVar1 != 0) {
          halt_baddata();
        }
        uVar3 = *(short *)(param_1 + 0x40) - 1;
        *(ushort *)(param_1 + 0x40) = uVar3;
        if ((int)((uint)uVar3 << 0x10) < 1) {
          func_0x00077cfc(param_1,0x80149d08,0,4);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      else if (bVar1 == 2) {
        uVar3 = *(short *)(param_1 + 0x40) - 1;
        *(ushort *)(param_1 + 0x40) = uVar3;
        if ((int)((uint)uVar3 << 0x10) < 1) {
          *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
          halt_baddata();
        }
      }
      else {
        if (bVar1 != 3) {
          halt_baddata();
        }
        sVar2 = *(short *)(param_1 + 0x32) + 6;
        *(short *)(param_1 + 0x32) = sVar2;
        if (*(short *)(param_1 + 0x62) <= sVar2) {
          *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(param_1 + 0x62);
          *(undefined1 *)(param_1 + 5) = 0;
          *(undefined1 *)(param_1 + 6) = 0;
          func_0x00077cfc(param_1,0x80149d08,1,8);
        }
      }
    }
    func_0x000518fc(param_1);
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
      iVar4 = func_0x000519e0(param_1,0xf,_DAT_800ecfe8,0x8014184c);
      if (iVar4 != 0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecfec;
      *(undefined1 *)(param_1 + 0xb) = 0;
      *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
      if (*(char *)(param_1 + 3) == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(byte *)(param_1 + 0x5e) = DAT_800bf9f3 >> 4 & 4;
      if (*(char *)(param_1 + 0x5e) == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      func_0x00077e20(param_1,0x8a,0x60,0x50);
      *(undefined2 *)(param_1 + 0x56) = 0x800;
      *(undefined2 *)(param_1 + 0xbc) = 0x800;
      *(undefined2 *)(param_1 + 0xba) = 0x800;
      *(undefined2 *)(param_1 + 0xb8) = 0x800;
      func_0x00077c40(param_1,0x80149d08,1);
      *(undefined2 *)(param_1 + 0x54) = 0;
      *(undefined2 *)(param_1 + 0x58) = 0;
      *(ushort *)(param_1 + 0x40) = (ushort)*(byte *)(param_1 + 3) << 4;
      func_0x000518fc(param_1);
      if ((*(char *)(param_1 + 3) == '\0') && (DAT_800bf8f4 != -1)) {
        *(undefined1 *)(param_1 + 5) = 1;
      }
      *(undefined2 *)(param_1 + 0x62) = *(undefined2 *)(param_1 + 0x32);
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

