// FUN_8011a4ac

/* WARNING: Control flow encountered bad instruction data */

void FUN_8011a4ac(undefined4 param_1,undefined4 param_2)

{
  byte bVar1;
  undefined2 uVar2;
  int in_v0;
  int iVar3;
  undefined4 uVar4;
  undefined2 *extraout_v1;
  undefined2 *puVar5;
  undefined1 *unaff_s0;
  uint uVar6;
  undefined1 unaff_s5;
  int unaff_s6;
  undefined8 uVar7;
  
  uVar7 = func_0x800519e0(param_1,param_2,*(undefined4 *)(in_v0 + -0x304c),0x80135894);
  puVar5 = (undefined2 *)((ulonglong)uVar7 >> 0x20);
  if ((int)uVar7 != 0) {
    return;
  }
  unaff_s0[0xb] = 0x40;
  *unaff_s0 = 9;
  *(undefined2 *)(unaff_s0 + 0x80) = 0xaa;
  *(undefined2 *)(unaff_s0 + 0x82) = 0x154;
  *(undefined2 *)(unaff_s0 + 0x84) = 0x90;
  *(undefined2 *)(unaff_s0 + 0x86) = 0xf0;
  bVar1 = unaff_s0[3];
  uVar6 = (uint)bVar1;
  unaff_s0[0x2b] = 0;
  unaff_s0[0x29] = 0;
  *(undefined2 *)(unaff_s0 + 0x58) = 0;
  *(undefined2 *)(unaff_s0 + 0x56) = 0;
  *(undefined2 *)(unaff_s0 + 0x54) = 0;
  unaff_s0[4] = unaff_s0[4] + '\x01';
  if (uVar6 == 0) {
    *(undefined4 *)(unaff_s0 + 0x2c) = 0x316a0000;
    *(undefined4 *)(unaff_s0 + 0x30) = 0xef520000;
    *(undefined4 *)(unaff_s0 + 0x34) = 0x3d540000;
    unaff_s0[0x2a] = 0xf;
    *(undefined2 *)(unaff_s0 + 0x56) = 0x400;
    *(undefined2 *)(unaff_s0 + 0x40) = 0;
    uVar2 = func_0x80051b04(*(undefined4 *)(unaff_s0 + ((byte)unaff_s0[9] - 1) * 4 + 0xc0),1,0x12);
    puVar5 = extraout_v1;
  }
  else {
    uVar2 = 1;
    if (uVar6 == 1) {
      uVar7 = func_0x8007a980(1,5,0);
      puVar5 = (undefined2 *)((ulonglong)uVar7 >> 0x20);
      iVar3 = (int)uVar7;
      if (iVar3 != 0) {
        *(undefined1 *)(iVar3 + 2) = 3;
        *(undefined2 *)(iVar3 + 0x2e) = 0x2fee;
        *(undefined2 *)(iVar3 + 0x32) = 0xef98;
        *(undefined2 *)(iVar3 + 0x36) = 0x3f16;
        *(undefined4 *)(iVar3 + 0x1c) = 0x80112100;
        *(byte *)(iVar3 + 3) = bVar1;
        *(byte *)(iVar3 + 0x28) = *(byte *)(iVar3 + 0x28) | 0x80;
        *unaff_s0 = 2;
        *(undefined4 *)(unaff_s0 + 0x2c) = 0x30700000;
        *(undefined4 *)(unaff_s0 + 0x30) = 0xef520000;
        *(undefined4 *)(unaff_s0 + 0x34) = 0x3a340000;
        unaff_s0[0x2a] = 0xf;
        *(undefined2 *)(unaff_s0 + 0x56) = 0xc00;
        uVar4 = FUN_8012b654();
        *(undefined4 *)(unaff_s0 + 0x14) = uVar4;
        func_0x80041718();
        *(undefined1 *)(unaff_s6 + 0x5e) = unaff_s5;
        return;
      }
      uVar2 = 2;
      unaff_s0[4] = 2;
    }
  }
  *puVar5 = uVar2;
  *(undefined2 *)(*(int *)(unaff_s0 + 0xc0) + 2) = *(undefined2 *)(uVar6 + 4);
  *(undefined2 *)(*(int *)(unaff_s0 + 0xc0) + 4) = *(undefined2 *)(uVar6 + 6);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

