// FUN_8011c8a0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_8011c8a0(undefined1 *param_1)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  
  bVar1 = param_1[4];
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      if (bVar1 != 0) goto LAB_8012612c;
      iVar3 = func_0x80051b70(param_1,0xc,*(undefined1 *)((byte)param_1[3] + 0x801374c4));
      if (iVar3 == 0) {
        param_1[4] = param_1[4] + '\x01';
        param_1[0x28] = param_1[0x28] | 0x80;
        if ((&DAT_801374d4)[(byte)param_1[3]] != '\0') {
          param_1[0x2a] = (&DAT_801374d4)[(byte)param_1[3]];
          uVar4 = (uint)(byte)param_1[3];
          *(short *)(param_1 + 0x60) =
               *(short *)((uint)(byte)param_1[3] * 0xc + -0x7fec8b1c) - *(short *)(param_1 + 0x2e);
          *(undefined2 *)(param_1 + 0x62) = *(undefined2 *)(uVar4 * 0xc + -0x7fec8b1a);
          *(short *)(param_1 + 100) =
               *(short *)(uVar4 * 0xc + -0x7fec8b18) - *(short *)(param_1 + 0x36);
          param_1[0x5f] = *(undefined1 *)(uVar4 * 0xc + -0x7fec8b16);
          uVar2 = *(ushort *)(uVar4 * 0xc + -0x7fec8b14);
          *(ushort *)(param_1 + 0x82) = uVar2;
          iVar3 = (uint)uVar2 << 0x10;
          *(short *)(param_1 + 0x80) = (short)((iVar3 >> 0x10) - (iVar3 >> 0x1f) >> 1);
          uVar2 = *(ushort *)(uVar4 * 0xc + -0x7fec8b12);
          *param_1 = 1;
          *(ushort *)(param_1 + 0x86) = uVar2;
          iVar3 = (uint)uVar2 << 0x10;
          *(short *)(param_1 + 0x84) = (short)((iVar3 >> 0x10) - (iVar3 >> 0x1f) >> 1);
        }
        param_1[0x29] = 0;
        *(undefined2 *)(param_1 + 0x50) = 0;
        *(undefined2 *)(param_1 + 0x5a) = *(undefined2 *)(param_1 + 0x56);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
        switch(param_1[3]) {
        case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
    }
    else if (bVar1 != 2) {
      if (bVar1 != 3) goto LAB_8012612c;
      func_0x8007a624(param_1);
    }
    return;
  }
  puVar5 = param_1;
  if (DAT_800bf816 == '\0') {
    func_0x8007778c();
  }
  else if (DAT_800bf817 == param_1[3]) {
    func_0x80077ebc(param_1);
    FUN_80125d2c();
    return;
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(param_1[3]) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_1[1] != '\0') {
    puVar5 = param_1;
    func_0x800517f8();
  }
  param_1[0x29] = 0;
  param_1 = puVar5;
LAB_8012612c:
  param_1[6] = 0;
  FUN_8012f188();
  return;
}

