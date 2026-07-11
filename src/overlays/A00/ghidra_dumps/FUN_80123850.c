// FUN_80123850

/* WARNING: Control flow encountered bad instruction data */

void FUN_80123850(void)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  int in_v0;
  int iVar4;
  short sVar5;
  undefined2 uVar6;
  int in_v1;
  short *unaff_s0;
  int iVar7;
  int unaff_s1;
  int unaff_s2;
  short sStack00000012;
  short sStack00000016;
  short in_stack_00000018;
  short sStack0000001a;
  short in_stack_0000001c;
  
  *(char *)(in_v1 + 0x3f) = (char)in_v0;
  *(short *)(unaff_s1 + 0x2e) =
       *(short *)(unaff_s1 + 0x2e) - (short)(in_v0 * (in_v1 + -2) * 6 >> 0xc);
  iVar4 = func_0x80083e80((int)*(short *)(unaff_s1 + 0x56));
  *(short *)(unaff_s1 + 0x36) =
       *(short *)(unaff_s1 + 0x36) -
       (short)((int)(iVar4 * (*(byte *)(unaff_s2 + 0x168) - 2) * 6) >> 0xc);
  *(short *)(unaff_s1 + 0x48) = -*(short *)(unaff_s2 + 0x58);
  sVar5 = *unaff_s0;
  if ((*(short *)(unaff_s1 + 0x2e) < *unaff_s0) ||
     (sVar5 = unaff_s0[1], unaff_s0[1] < *(short *)(unaff_s1 + 0x2e))) {
    *(short *)(unaff_s1 + 0x2e) = sVar5;
  }
  if (*(short *)(unaff_s1 + 0x36) < unaff_s0[2]) {
    *(short *)(unaff_s1 + 0x36) = unaff_s0[2];
    bVar1 = *(byte *)((int)unaff_s0 + 5);
    if (bVar1 == 1) {
      sStack00000012 = unaff_s0[0x16];
      sStack00000016 = unaff_s0[0x17] + -0x8c;
      sStack0000001a = unaff_s0[0x18];
      iVar4 = func_0x8003116c(8,&stack0x00000010,0);
      if (iVar4 != 0) {
        *(char *)(iVar4 + 0x28) = (char)unaff_s0[0x14];
      }
      *(char *)((int)unaff_s0 + 5) = *(char *)((int)unaff_s0 + 5) + '\x01';
    }
    else {
      if (((1 < bVar1) || (bVar1 != 0)) ||
         (cVar2 = *(char *)(unaff_s1 + 4) + '\x01', *(char *)(unaff_s1 + 4) = cVar2, cVar2 < '\x06')
         ) {
        return;
      }
      *(undefined1 *)((int)unaff_s0 + 5) = 1;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (unaff_s0[3] < *(short *)(unaff_s1 + 0x36)) {
    *(short *)(unaff_s1 + 0x36) = unaff_s0[3];
  }
  if (*(byte *)(unaff_s2 + 0x168) < 3) {
    *(undefined2 *)(*(int *)(unaff_s1 + 0x10) + 0x40) = 1;
    *(undefined1 *)(unaff_s1 + 6) = 3;
  }
  if (*(byte *)(unaff_s1 + 3) < 2) {
    if (*(char *)(unaff_s2 + 0x147) != '\0') {
      sVar5 = -*(short *)(unaff_s2 + 0x58);
      *(short *)(*(int *)(unaff_s1 + 0xc0) + 0xc) = sVar5;
      *(short *)(*(int *)(unaff_s1 + 0xc4) + 0xc) = sVar5;
      uVar6 = (undefined2)(sVar5 * -3 >> 1);
      *(undefined2 *)(*(int *)(unaff_s1 + 200) + 0xc) = uVar6;
      *(undefined2 *)(*(int *)(unaff_s1 + 0xcc) + 0xc) = uVar6;
      in_stack_00000018 = unaff_s0[0x27];
      sStack0000001a = unaff_s0[0x28];
      in_stack_0000001c = unaff_s0[0x29];
      FUN_8013dd34(&stack0x00000010,&stack0x00000018);
      func_0x8003cca4();
      return;
    }
    sVar5 = *(short *)(unaff_s2 + 0x58);
    uVar6 = *(undefined2 *)(unaff_s2 + 0x58);
    *(undefined2 *)(*(int *)(unaff_s1 + 0xc0) + 0xc) = uVar6;
    *(undefined2 *)(*(int *)(unaff_s1 + 0xc4) + 0xc) = uVar6;
    uVar6 = (undefined2)(sVar5 * -3 >> 1);
    *(undefined2 *)(*(int *)(unaff_s1 + 200) + 0xc) = uVar6;
    *(undefined2 *)(*(int *)(unaff_s1 + 0xcc) + 0xc) = uVar6;
  }
  iVar7 = *(int *)(unaff_s1 + 0x10);
  *(undefined2 *)(unaff_s1 + 0x4a) = 0x32;
  iVar4 = func_0x80083e80((int)*(short *)(unaff_s1 + 0x48));
  *(short *)(unaff_s1 + 0x32) =
       *(short *)(unaff_s1 + 0x60) + (short)(iVar4 * *(short *)(unaff_s1 + 0x4a) >> 0xc);
  *(undefined2 *)(iVar7 + 0x4e) = *(undefined2 *)(unaff_s1 + 0x2e);
  *(short *)(iVar7 + 0x50) = *(short *)(unaff_s1 + 0x32) + 0x3c;
  *(undefined2 *)(iVar7 + 0x52) = *(undefined2 *)(unaff_s1 + 0x36);
  uVar3 = *(short *)(unaff_s1 + 0x42) - 1;
  *(ushort *)(unaff_s1 + 0x42) = uVar3;
  if ((int)((uint)uVar3 << 0x10) < 0) {
    *(undefined2 *)(unaff_s1 + 0x42) = 10;
    func_0x80074590(0x97,0,0);
    return;
  }
  return;
}

