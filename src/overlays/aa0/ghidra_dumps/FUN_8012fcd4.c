// FUN_8012fcd4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

uint FUN_8012fcd4(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  uint uVar3;
  uint in_v1;
  uint extraout_v1;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  
  if ((DAT_800e7ff4 & 4) != 0) {
    in_v1 = (uint)*(byte *)(param_1 + 6);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(in_v1) {
    case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  bVar1 = *(byte *)(param_1 + 5);
  uVar6 = (uint)bVar1;
  iVar4 = 1;
  iVar5 = param_1;
  if (uVar6 == 1) {
    iVar4 = func_0x8005308c();
    if (iVar4 == 0) {
LAB_80130010:
      uVar6 = func_0x800735f4(param_1,0x47);
      return uVar6;
    }
    if ((DAT_800e7ff4 & 4) != 0) {
      *(undefined1 *)(param_1 + 5) = 0;
      uVar2 = func_0x80040b48(0x45);
      in_v1 = extraout_v1;
      goto LAB_80138fac;
    }
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
    *(undefined2 *)(param_1 + 0xb8) = *(undefined2 *)(param_1 + 0x60);
    *(undefined2 *)(param_1 + 0xba) = *(undefined2 *)(param_1 + 0x62);
    *(undefined2 *)(param_1 + 0xbc) = *(undefined2 *)(param_1 + 100);
    func_0x80042354(1,1);
    iVar4 = param_1;
    uVar7 = func_0x80040cdc(param_1,0,0x8014aa00);
    *(byte *)(param_1 + 0x70) = bVar1;
  }
  else {
    uVar2 = 2;
    if (1 < uVar6) {
      if (uVar6 == 2) {
        func_0x80041098(param_1);
        if (*(char *)(param_1 + 0x70) == -1) {
          func_0x80042310(param_1);
          *(undefined1 *)(param_1 + 5) = 0;
          *(undefined1 *)(param_1 + 0x46) = 0;
          *(undefined2 *)(param_1 + 0x60) = *(undefined2 *)(param_1 + 0xb8);
          *(undefined2 *)(param_1 + 0x62) = *(undefined2 *)(param_1 + 0xba);
          *(undefined2 *)(param_1 + 100) = *(undefined2 *)(param_1 + 0xbc);
        }
        goto LAB_80130010;
      }
      goto LAB_80138fac;
    }
    uVar2 = 0;
    if (uVar6 != 0) goto LAB_80138fac;
    if ((((DAT_800e7ff4 & 4) != 0) || (DAT_800bf8f9 != '\0')) ||
       (uVar3 = *(uint *)(param_1 + 0x28) & 0xff00ff00, uVar7 = CONCAT44(0xff00ff00,uVar3),
       uVar3 == 0)) goto LAB_80130010;
    *(undefined1 *)(param_1 + 5) = 1;
  }
  uVar2 = (undefined2)uVar7;
  in_v1 = (uint)((ulonglong)uVar7 >> 0x20) & 0xfff;
  iVar5 = iVar4;
LAB_80138fac:
  iVar4 = in_v1 - 0xc00;
  if (iVar4 < 0) {
    iVar4 = -iVar4;
  }
  *(undefined2 *)(param_1 + 0x4e) = uVar2;
  iVar5 = iVar5 + (0x400 - iVar4 >> 6) * -0x100;
  *(short *)(param_1 + 0x4e) = (short)iVar5;
  if (0 < iVar5 * 0x10000) {
    return uVar6;
  }
  *(undefined2 *)(param_1 + 0x4e) = 0;
  uVar6 = FUN_80142120();
  return uVar6;
}

