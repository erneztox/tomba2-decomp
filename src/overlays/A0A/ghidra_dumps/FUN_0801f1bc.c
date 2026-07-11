// FUN_0801f1bc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801f1bc(undefined1 *param_1)

{
  short sVar1;
  ushort uVar2;
  ushort uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  
  bVar4 = param_1[4];
  if (bVar4 != 1) {
    if (1 < bVar4) {
      if (3 < bVar4) {
        return;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar4 != 0) {
      halt_baddata();
    }
    func_0x00118038(param_1);
    halt_baddata();
  }
  if (param_1[3] != '\0') {
    if (DAT_1f800259 == '\0') {
      if (DAT_800bf809 == '\0') {
        if (*(short *)(param_1 + 0x78) == 0) goto LAB_0801f5ac;
        sVar1 = *(short *)(param_1 + 0x40);
        *(short *)(param_1 + 0x40) = sVar1 + 1;
        if (0x12 < (short)(sVar1 + 1)) {
          *param_1 = 2;
        }
        sVar1 = *(short *)(param_1 + 0x62);
        *(short *)(param_1 + 0x62) = sVar1 + *(short *)(param_1 + 0x42);
        if (*(short *)(param_1 + 100) < (short)(sVar1 + *(short *)(param_1 + 0x42))) {
          *(undefined2 *)(param_1 + 0x62) = *(undefined2 *)(param_1 + 100);
        }
        *(short *)(param_1 + 0x84) = *(short *)(param_1 + 0x62);
        *(short *)(param_1 + 0x86) = *(short *)(param_1 + 0x62) + 0x28;
      }
      param_1[1] = 1;
      func_0x00077e7c(param_1);
      halt_baddata();
    }
LAB_0801f580:
    param_1[4] = 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(short *)(_DAT_1f80024c + 4) == 0x102) goto LAB_0801f580;
  if (DAT_800bf809 != '\0') {
    return;
  }
  sVar1 = *(short *)(param_1 + 0x40);
  *(short *)(param_1 + 0x40) = sVar1 + -1;
  if (sVar1 == 1) {
    *(undefined2 *)(param_1 + 0x40) = 5;
    func_0x001185fc(param_1,(int)*(short *)(param_1 + 0x42));
    sVar1 = *(short *)(param_1 + 0x42);
    *(short *)(param_1 + 0x42) = sVar1 + 1;
    if (0x14 < (short)(sVar1 + 1)) goto LAB_0801f5ac;
  }
  iVar5 = func_0x00083f50((int)*(short *)(param_1 + 100));
  iVar5 = iVar5 * *(short *)(param_1 + 0x44) >> 0xc;
  iVar6 = func_0x00083e80((int)*(short *)(param_1 + 100));
  if (param_1[0x46] != '\0') {
    iVar5 = -iVar5;
  }
  *(int *)(param_1 + 0x30) =
       *(int *)(param_1 + 0x30) + (iVar6 * *(short *)(param_1 + 0x44) >> 0xc) * 0x100;
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + *(short *)(param_1 + 0x48) * iVar5;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + *(short *)(param_1 + 0x4c) * iVar5;
  func_0x00041ac0(param_1);
  if (param_1[6] == '\0') {
    uVar2 = *(ushort *)(param_1 + 0x86);
    uVar3 = *(ushort *)(param_1 + 0x84);
    param_1[0x5f] = 0;
    if (param_1[0x46] == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar6 = (int)((*(ushort *)(param_1 + 0x60) + 0x800) * 0x10000) >> 0x10;
    iVar5 = func_0x00045cac(param_1,0x3c,(int)(((uint)uVar2 - (uint)uVar3) * 0x10000) >> 0x10,iVar6)
    ;
    if ((iVar5 != 0) ||
       (iVar5 = func_0x00045cac(param_1,0x3c,
                                (int)(short)-((short)((uint)uVar2 - (uint)uVar3) + 0x28),iVar6),
       iVar5 != 0)) {
      param_1[0x5f] = 1;
    }
    param_1[0x29] = 0;
    if (param_1[0x46] == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    bVar4 = func_0x000455c0(param_1,0,
                            (int)(((uint)*(ushort *)(param_1 + 0x86) -
                                  (uint)*(ushort *)(param_1 + 0x84)) * 0x10000) >> 0x10,
                            (int)((*(ushort *)(param_1 + 0x60) + 0x800) * 0x10000) >> 0x10);
    param_1[0x29] = bVar4;
    if (bVar4 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    param_1[0x29] = bVar4 & 1;
    if ((bVar4 & 1) != 0) {
      *(undefined2 *)(param_1 + 100) = 0;
      param_1[6] = param_1[6] + '\x01';
      halt_baddata();
    }
    return;
  }
  uVar2 = *(ushort *)(param_1 + 0x86);
  uVar3 = *(ushort *)(param_1 + 0x84);
  param_1[0x5f] = 0;
  if (param_1[0x46] == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar6 = (int)((*(ushort *)(param_1 + 0x60) + 0x800) * 0x10000) >> 0x10;
  iVar5 = func_0x00045cac(param_1,0x3c,(int)(((uint)uVar2 - (uint)uVar3) * 0x10000) >> 0x10,iVar6);
  if ((iVar5 == 0) &&
     (iVar5 = func_0x00045cac(param_1,0x3c,(int)(short)-((short)((uint)uVar2 - (uint)uVar3) + 0x28),
                              iVar6), iVar5 == 0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  param_1[0x5f] = 1;
  sVar1 = *(short *)(param_1 + 0x66);
  *(short *)(param_1 + 0x66) = sVar1 + 1;
  if ((short)(sVar1 + 1) < 6) {
    func_0x00048894(param_1);
    *(short *)(param_1 + 0x32) =
         _DAT_1f8001a4 - (*(short *)(param_1 + 0x86) - *(short *)(param_1 + 0x84));
    halt_baddata();
  }
LAB_0801f5ac:
  param_1[4] = 2;
  halt_baddata();
}

