// FUN_080109fc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080109fc(void)

{
  ushort uVar1;
  int iVar2;
  byte bVar3;
  short sVar4;
  
  iVar2 = _DAT_1f800138;
  uVar1 = *(ushort *)(_DAT_1f800138 + 0x4a);
  if (uVar1 == 1) {
    if ((_DAT_1f80017c & 0x10) != 0) {
      func_0x00079374(0x100,0x20,0,0x8010624c,0);
    }
    if (DAT_800bf870 == '\x03') {
      func_0x00106ee4();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x00106e28();
    sVar4 = *(short *)(_DAT_1f800138 + 0x5a);
    *(short *)(_DAT_1f800138 + 0x5a) = sVar4 + -1;
    if ((sVar4 != 1) && (sVar4 = func_0x000524b4(0), sVar4 == 0)) {
      return;
    }
    *(short *)(_DAT_1f800138 + 0x4a) = *(short *)(_DAT_1f800138 + 0x4a) + 1;
  }
  else if (uVar1 < 2) {
    if (uVar1 == 0) {
      *(undefined2 *)(_DAT_1f800138 + 0x4a) = 1;
      *(undefined2 *)(iVar2 + 0x5a) = 900;
      func_0x0007a8e0();
      DAT_800bf870 = *(char *)((uint)*(byte *)(_DAT_1f800138 + 0x6e) * 4 + -0x7fef88f4);
      DAT_800bf89c = 4;
      func_0x00044bd4(0x800452c0,DAT_800bf870,1);
      func_0x0007b18c();
      func_0x000796dc();
      func_0x000263e8();
      func_0x00072a78();
      func_0x00075240();
      func_0x000783dc();
      func_0x00078610();
      func_0x00079464(*(undefined1 *)(_DAT_1f800138 + 0x6e));
      DAT_1f80019a = 1;
      bVar3 = *(char *)(_DAT_1f800138 + 0x6e) + 1;
      *(byte *)(_DAT_1f800138 + 0x6e) = bVar3;
      if (bVar3 < 3) {
        return;
      }
      *(undefined1 *)(_DAT_1f800138 + 0x6e) = 0;
    }
  }
  else if (uVar1 == 2) {
    func_0x00074bc4();
    DAT_1f80019a = 0;
    *(undefined2 *)(_DAT_1f800138 + 0x48) = 0;
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

