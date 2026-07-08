
void FUN_80017cdc(void)

{
  undefined2 uVar1;
  int unaff_s0;
  int unaff_s1;
  
  *(undefined2 *)(unaff_s1 + 0x6a) = *(undefined2 *)(unaff_s0 + 0x1a);
  *(undefined2 *)(unaff_s1 + 0x6c) = *(undefined2 *)(unaff_s0 + 0x1c);
  uVar1 = 0x20;
  *(undefined2 *)(unaff_s1 + 0x6e) = *(undefined2 *)(unaff_s0 + 0x1e);
  do {
    *(undefined2 *)(unaff_s1 + 0x68) = uVar1;
    *(undefined2 *)(unaff_s1 + 0x6a) = *(undefined2 *)(unaff_s0 + 0xc);
    *(undefined2 *)(unaff_s1 + 0x6c) = *(undefined2 *)(unaff_s0 + 0xe);
    *(undefined2 *)(unaff_s1 + 0x6e) = *(undefined2 *)(unaff_s0 + 0x10);
    *(undefined2 *)(unaff_s1 + 0x70) = *(undefined2 *)(unaff_s0 + 8);
    *(undefined2 *)(unaff_s1 + 0x72) = *(undefined2 *)(unaff_s0 + 8);
    *(undefined2 *)(unaff_s1 + 0x74) = *(undefined2 *)(unaff_s0 + 8);
    uVar1 = 0x14;
    *(undefined2 *)(unaff_s1 + 0x76) = *(undefined2 *)(unaff_s0 + 8);
  } while( true );
}

