// FUN_08036a68

void FUN_08036a68(void)

{
  int in_v0;
  int iVar1;
  undefined4 uVar2;
  undefined1 *unaff_s0;
  int unaff_s1;
  
  uVar2 = *(undefined4 *)(unaff_s1 + 100);
  *(int *)(unaff_s0 + 0x7c) = in_v0 + -0x25e4;
  *(undefined4 *)(unaff_s0 + 0x3c) = uVar2;
  *(undefined2 *)(unaff_s0 + 0x74) = *(undefined2 *)(unaff_s0 + 0x2e);
  *(undefined2 *)(unaff_s0 + 0x76) = *(undefined2 *)(unaff_s0 + 0x32);
  *(undefined2 *)(unaff_s0 + 0x6a) = *(undefined2 *)(unaff_s0 + 0x36);
  unaff_s0[0x2a] = 0;
  *(undefined2 *)(unaff_s0 + 0x2e) = *(undefined2 *)(unaff_s0 + 0x74);
  *(undefined2 *)(unaff_s0 + 0x32) = *(undefined2 *)(unaff_s0 + 0x76);
  *(undefined2 *)(unaff_s0 + 0x36) = *(undefined2 *)(unaff_s0 + 0x6a);
  func_0x000518fc();
  func_0x00041718();
  *unaff_s0 = 2;
  *(undefined2 *)(unaff_s0 + 0x80) = 0x60;
  *(undefined2 *)(unaff_s0 + 0x82) = 0xc0;
  *(undefined2 *)(unaff_s0 + 0x84) = 0xa0;
  *(undefined2 *)(unaff_s0 + 0x86) = 0x100;
  func_0x00041ac0();
  *(undefined2 *)(unaff_s0 + 0x62) = 0;
  *(undefined2 *)(unaff_s0 + 0x54) = 0;
  func_0x0004130c();
  unaff_s0[0x5f] = 0;
  unaff_s0[0x29] = 0;
  unaff_s0[0x2b] = 0;
  unaff_s0[0xbf] = 0;
  iVar1 = func_0x00136c10();
  *(int *)(unaff_s0 + 0x10) = iVar1;
  if (iVar1 != 0) {
    unaff_s0[5] = 5;
    unaff_s0[7] = 0;
    unaff_s0[6] = 0;
    unaff_s0[4] = 1;
  }
  return;
}

