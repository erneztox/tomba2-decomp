// FUN_8012e2bc

/* WARNING: Removing unreachable block (ram,0x80137b14) */

void FUN_8012e2bc(int param_1)

{
  ushort uVar1;
  int in_v0;
  undefined4 uVar2;
  ushort *unaff_s1;
  ushort *unaff_s3;
  int unaff_s4;
  
  if (in_v0 != 0) {
    *(undefined1 *)(*(int *)(unaff_s1 + (*(byte *)((int)unaff_s1 + 9) - 1) * 2 + 0x60) + 0x3e) = 4;
    *(undefined1 *)(*(int *)(unaff_s1 + (*(byte *)((int)unaff_s1 + 9) - 1) * 2 + 0x60) + 0x3f) = 0;
    unaff_s1[0x21] = 5;
    unaff_s1[0x35] = 1;
    unaff_s1[0x36] = 1;
    *(char *)(unaff_s1 + 3) = (char)unaff_s1[3] + '\x01';
    FUN_80140ad8();
    return;
  }
  *(undefined1 *)(*(int *)(unaff_s1 + (*(byte *)((int)unaff_s1 + 9) - 1) * 2 + 0x60) + 0x3e) = 0;
  while( true ) {
    uVar2 = FUN_8013fb88(param_1 + 4);
    FUN_8013fe58(uVar2);
    if (unaff_s3 <= unaff_s1) break;
    uVar1 = *unaff_s1;
    unaff_s1 = unaff_s1 + 1;
    param_1 = unaff_s4 + (uint)uVar1 * 4;
  }
  return;
}

