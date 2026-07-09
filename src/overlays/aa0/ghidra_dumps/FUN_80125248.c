// FUN_80125248

/* WARNING: Removing unreachable block (ram,0x80137b14) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80125248(int param_1)

{
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  ushort *puVar5;
  ushort *unaff_s3;
  int unaff_s4;
  
  uVar4 = (uint)*(byte *)(param_1 + 5);
  puVar5 = *(ushort **)(param_1 + 0x10);
  uVar2 = 1;
  if (uVar4 == 0) {
    *(undefined1 *)(param_1 + 5) = 1;
    *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf80;
    func_0x80077b38(param_1,0x8014c808,0xe);
    *(undefined2 *)(param_1 + 0x60) = 0xff38;
    *(undefined2 *)(param_1 + 0x62) = 0x30;
    *(undefined2 *)(param_1 + 100) = 0;
  }
  else if (uVar4 != 1) {
    for (; (int)unaff_s3 <= (int)(uVar2 - 2); unaff_s3 = (ushort *)((int)unaff_s3 + 1)) {
      *(undefined1 *)(*(int *)(uVar4 + 0xc4) + 0x3e) = 0;
      uVar2 = (uint)*(byte *)((int)puVar5 + 9);
      uVar4 = uVar4 + 4;
    }
    if (*(char *)((int)puVar5 + 3) == '\0') {
      *(undefined1 *)(*(int *)(puVar5 + (*(byte *)((int)puVar5 + 9) - 1) * 2 + 0x60) + 0x3e) = 0;
      while( true ) {
        uVar3 = FUN_8013fb88(param_1 + 4);
        FUN_8013fe58(uVar3);
        if (unaff_s3 <= puVar5) break;
        uVar1 = *puVar5;
        puVar5 = puVar5 + 1;
        param_1 = unaff_s4 + (uint)uVar1 * 4;
      }
      return;
    }
    *(undefined1 *)(*(int *)(puVar5 + (*(byte *)((int)puVar5 + 9) - 1) * 2 + 0x60) + 0x3e) = 4;
    *(undefined1 *)(*(int *)(puVar5 + (*(byte *)((int)puVar5 + 9) - 1) * 2 + 0x60) + 0x3f) = 0;
    puVar5[0x21] = 5;
    puVar5[0x35] = 1;
    puVar5[0x36] = 1;
    *(char *)(puVar5 + 3) = (char)puVar5[3] + '\x01';
    FUN_80140ad8();
    return;
  }
  func_0x8004bd64(param_1,2,0,*(undefined4 *)(puVar5 + 0x68),param_1 + 0x60);
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)((int)puVar5 + 1);
  if (DAT_800bf9b5 == '\x06') {
    func_0x8004d4c4(0x23,1);
    func_0x8004b0d8(param_1);
    *(undefined1 *)(param_1 + 4) = 3;
  }
  return;
}

