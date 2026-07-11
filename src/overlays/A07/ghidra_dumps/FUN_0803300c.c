// FUN_0803300c

/* WARNING: Control flow encountered bad instruction data */

void FUN_0803300c(undefined1 param_1)

{
  char cVar1;
  int in_v0;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *unaff_s0;
  int iVar4;
  
  if (*(char *)(in_v0 + -0x728) != '\0') {
    *unaff_s0 = param_1;
    *(undefined2 *)(unaff_s0 + 0x56) = 0;
    *(undefined2 *)(*(int *)(unaff_s0 + 0xc0) + 0xc) = 0;
    unaff_s0[0x5e] = param_1;
    unaff_s0[6] = 0;
    unaff_s0[5] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar4 = *(int *)(unaff_s0 + 0x10);
  cVar1 = *(char *)(iVar4 + 1);
  unaff_s0[1] = cVar1;
  if (cVar1 != '\0') {
    func_0x00077efc();
  }
  uVar2 = *(undefined4 *)(iVar4 + 0x30);
  uVar3 = *(undefined4 *)(iVar4 + 0x34);
  *(undefined4 *)(unaff_s0 + 0x2c) = *(undefined4 *)(iVar4 + 0x2c);
  *(undefined4 *)(unaff_s0 + 0x30) = uVar2;
  *(undefined4 *)(unaff_s0 + 0x34) = uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

