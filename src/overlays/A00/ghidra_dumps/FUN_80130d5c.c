// FUN_80130d5c

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_80130d5c(int param_1,int param_2)

{
  short in_v0;
  short sVar1;
  undefined4 uVar2;
  int in_v1;
  int iVar3;
  int iVar4;
  uint uVar5;
  int in_t0;
  uint in_t1;
  int in_t2;
  uint in_t3;
  int unaff_s0;
  
  do {
    *(short *)(param_1 + 0xc) = in_v0 + -0x80;
    *(ushort *)(*(int *)(in_v1 + 0xc0) + 0xc) = *(ushort *)(*(int *)(in_v1 + 0xc0) + 0xc) & 0xfff;
    do {
      *(short *)(*(int *)(param_2 + 0xc0) + 0x16) = (short)in_t3;
      uVar5 = in_t1 - 1;
      if (0x400 < *(short *)(*(int *)(param_2 + 0xc0) + 0xc)) {
        uVar2 = FUN_80139dec();
        return uVar2;
      }
LAB_80130e74:
      in_t1 = uVar5;
      sVar1 = (short)in_t1;
      if (sVar1 < 2) {
LAB_80130e8c:
        if (0 < *(short *)(*(int *)(in_t0 + 0xd4) + 0x16)) {
          *(undefined2 *)(*(int *)(in_t0 + 200) + 0x16) = 1;
          uVar2 = FUN_80139e5c();
          return uVar2;
        }
        *(undefined2 *)(*(int *)(in_t0 + 200) + 0x16) = 0;
        return 0;
      }
      iVar4 = (int)sVar1;
      param_2 = in_t0 + iVar4 * 4;
      iVar3 = *(int *)(param_2 + 0xc0);
      if (*(int *)(iVar3 + 0x30) + 0x30 < (int)*(short *)(in_t0 + 100)) goto LAB_80130e8c;
      uVar5 = in_t1 & 1;
      if (*(short *)(iVar3 + 0x16) == in_t2) goto LAB_80130e70;
      if (uVar5 != 0) goto code_r0x80130cfc;
      *(short *)(iVar3 + 0xc) = *(short *)(iVar3 + 0xc) + 0x80;
      *(ushort *)(*(int *)(param_2 + 0xc0) + 0xc) =
           *(ushort *)(*(int *)(param_2 + 0xc0) + 0xc) & 0xfff;
    } while (iVar4 == *(byte *)(in_t0 + 8) - 1);
    in_v1 = in_t0 + (iVar4 + 1) * 4;
    param_1 = *(int *)(in_v1 + 0xc0);
    in_v0 = *(short *)(param_1 + 0xc);
  } while( true );
code_r0x80130cfc:
  if (uVar5 != in_t3) {
    *(short *)(unaff_s0 + 0x4e) = sVar1 + -1;
    FUN_801406e4();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(short *)(iVar3 + 0xc) = *(short *)(iVar3 + 0xc) + -0x80;
  *(ushort *)(*(int *)(param_2 + 0xc0) + 0xc) = *(ushort *)(*(int *)(param_2 + 0xc0) + 0xc) & 0xfff;
  if (iVar4 != *(byte *)(in_t0 + 8) - 1) {
    iVar3 = in_t0 + (iVar4 + 1) * 4;
    iVar4 = *(int *)(iVar3 + 0xc0);
    *(short *)(iVar4 + 0xc) = *(short *)(iVar4 + 0xc) + 0x80;
    iVar3 = *(int *)(iVar3 + 0xc0);
    *(ushort *)(iVar3 + 0xc) = *(ushort *)(iVar3 + 0xc) & 0xfff;
  }
  *(short *)(*(int *)(param_2 + 0xc0) + 0x16) = (short)uVar5;
  uVar5 = in_t1 - 1;
  if (*(short *)(*(int *)(param_2 + 0xc0) + 0xc) < 0xc00) {
    *(undefined2 *)(*(int *)(param_2 + 0xc0) + 0xc) = 0xc00;
    *(short *)(*(int *)(param_2 + 0xc0) + 0x16) = (short)in_t2;
    *(short *)(in_t0 + 0x66) = *(short *)(in_t0 + 0x66) + -0x30;
LAB_80130e70:
    uVar5 = in_t1 - 1;
  }
  goto LAB_80130e74;
}

