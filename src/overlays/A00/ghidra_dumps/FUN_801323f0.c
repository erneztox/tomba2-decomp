// FUN_801323f0

/* WARNING: Control flow encountered bad instruction data */

void FUN_801323f0(void)

{
  int in_v1;
  int unaff_s0;
  undefined1 *unaff_s1;
  
  if (((int)(uint)*(byte *)(in_v1 + 0x1a3) >> ((byte)unaff_s1[3] & 0x1f) & 1U) != 0) {
    unaff_s1[0x5e] = 0;
    FUN_8013b3d8();
    return;
  }
  FUN_8013af18();
  func_0x80077c40();
  *unaff_s1 = 1;
  *(undefined2 *)(unaff_s1 + 0x80) = 400;
  *(undefined2 *)(unaff_s1 + 0x82) = 800;
  *(undefined2 *)(unaff_s1 + 0x84) = 0xb4;
  *(undefined2 *)(unaff_s1 + 0x86) = 0xb4;
  unaff_s1[0x29] = 0;
  unaff_s1[0x2b] = 0;
  unaff_s1[4] = unaff_s1[4] + '\x01';
  if (unaff_s1[0x5e] == '\0') {
    unaff_s1[5] = 4;
    *(undefined2 *)(unaff_s0 + 6) = 4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

