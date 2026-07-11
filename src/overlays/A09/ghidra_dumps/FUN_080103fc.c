// FUN_080103fc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080103fc(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  
  puVar6 = _DAT_1f800148;
  DAT_1f800182 = DAT_1f800150;
  while( true ) {
    while( true ) {
      do {
        if (DAT_1f800182 == '\0') {
          return;
        }
        pbVar5 = (byte *)*puVar6;
        DAT_1f800182 = DAT_1f800182 + -1;
        puVar6 = puVar6 + 1;
      } while ((*pbVar5 & 1) == 0);
      bVar1 = pbVar5[2];
      if (bVar1 == 0x12) {
        func_0x0002311c(param_1,pbVar5);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (0x12 < bVar1) break;
      if (bVar1 == 0xc) {
        func_0x00020868(param_1,pbVar5);
        halt_baddata();
      }
      if (((0xb < bVar1) && (bVar1 < 0x10)) && (0xd < bVar1)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    if (bVar1 == 0x65) {
      func_0x00109078(param_1,pbVar5);
      halt_baddata();
    }
    if (bVar1 < 0x66) break;
    if (bVar1 == 0x66) {
      func_0x0001fc50(param_1,pbVar5);
      halt_baddata();
    }
    if (bVar1 != 0x67) {
      halt_baddata();
    }
    iVar2 = (int)(((uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(pbVar5 + 0x2e)) * 0x10000)
            >> 0x10;
    iVar3 = (int)(((uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(pbVar5 + 0x36)) * 0x10000)
            >> 0x10;
    uVar4 = func_0x00084080(iVar2 * iVar2 + iVar3 * iVar3);
    if (((int)(uVar4 & 0xffff) <= *(short *)(param_1 + 0x80) + 200) &&
       ((int)((uint)*(ushort *)(param_1 + 0x84) +
              ((uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(pbVar5 + 0x32)) + 0x140 &
             0xffff) <= *(short *)(param_1 + 0x86) + 0x140)) {
      pbVar5[0x29] = 1;
      func_0x0001f830(param_1,pbVar5);
    }
  }
  if (bVar1 == 0x1f) {
    func_0x00023764(param_1,pbVar5);
    halt_baddata();
  }
  halt_baddata();
}

