// FUN_0002300c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0002318c) */
/* WARNING: Removing unreachable block (ram,0x000231d0) */
/* WARNING: Removing unreachable block (ram,0x000231b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002300c(void)

{
  byte bVar1;
  short sVar2;
  uint in_v0;
  int iVar3;
  ushort uVar4;
  uint in_v1;
  char *unaff_s0;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  
  if ((in_v1 + (uint)((ulonglong)in_v1 * (ulonglong)in_v0 >> 0x24) * -0x14 & 0xffff) == 0) {
    func_0x00074590(0x86,0,0);
  }
  if (*(short *)(unaff_s0 + 0x36) < 0x3840) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x0012a714();
  func_0x0012a80c();
  if (unaff_s0[0x29] != '\0') {
    iVar3 = (int)*(short *)(unaff_s0 + 0x44);
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    if (0x1800 < iVar3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((_DAT_1f80017c & 0xf) == 0) {
      in_stack_00000010._2_2_ = *(undefined2 *)(unaff_s0 + 0x2e);
      in_stack_00000014._2_2_ = *(short *)(unaff_s0 + 0x32) + 0x50;
      in_stack_00000018._2_2_ = *(undefined2 *)(unaff_s0 + 0x36);
      FUN_0003116c(0x502,&stack0x00000010,0xffffffce);
    }
  }
  bVar1 = unaff_s0[0x5f];
  if (((bVar1 & 0x80) != 0) || ((bVar1 != 0 && ((bVar1 & 1) == unaff_s0[0xbe])))) {
    *unaff_s0 = '\x02';
    unaff_s0[4] = '\x02';
    unaff_s0[6] = '\0';
    if ((unaff_s0[0x5f] & 0x80U) != 0) {
      unaff_s0[5] = '\x03';
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    unaff_s0[5] = '\x02';
    if (unaff_s0[0xbe] == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    unaff_s0[0x2b] = (char)(*(ushort *)(unaff_s0 + 0x60) >> 4);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*unaff_s0 == '\x01') {
    if (*(short *)(unaff_s0 + 0x36) < 0x2b5c) {
      unaff_s0[5] = unaff_s0[5] + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar3 = (int)*(short *)(unaff_s0 + 0x44);
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    if (((0x2dff < iVar3) && ((ushort)(*(short *)(unaff_s0 + 0x36) + 0xd11fU) < 0x9c)) &&
       (0xff < *(short *)(unaff_s0 + 0x62))) {
      unaff_s0[5] = unaff_s0[5] + '\x01';
      sVar2 = *(short *)(unaff_s0 + 0x44);
      uVar4 = sVar2 + 0x1000;
      *(ushort *)(unaff_s0 + 0x44) = uVar4;
      *(short *)(unaff_s0 + 0x4a) = sVar2 + -0x1000;
      if (-1 < (int)((uint)uVar4 << 0x10)) {
        unaff_s0[0x44] = '\0';
        unaff_s0[0x45] = '\0';
      }
      unaff_s0[0x62] = '\0';
      unaff_s0[99] = '\0';
      unaff_s0[0xbf] = '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  unaff_s0[0x5e] = '\0';
  unaff_s0[0x5f] = '\0';
  unaff_s0[0x29] = '\0';
  if (unaff_s0[1] == '\x01') {
    func_0x00077e7c();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar3 = func_0x0007778c();
  if (iVar3 != 0) {
    func_0x000517f8();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

