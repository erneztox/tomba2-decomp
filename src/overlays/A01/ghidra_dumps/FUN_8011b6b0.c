// FUN_8011b6b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8011b6b0(int *param_1,undefined4 param_2,undefined4 param_3,byte *param_4)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  char *pcVar4;
  int unaff_s1;
  int unaff_s3;
  
  bVar1 = *(byte *)((int)param_1 + 5);
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        *(short *)((int)param_1 + 0x32) = *(short *)((int)param_1 + 0x32) + -10;
        param_4 = &DAT_800e8008;
        _DAT_800e8076 = _DAT_800e8076 + -7;
        _DAT_800e8046 = _DAT_800e8046 + -0xb;
        if (*(short *)((int)param_1 + 0x8a) <= *(short *)((int)param_1 + 0x32)) {
          return;
        }
        *(undefined2 *)((int)param_1 + 0x32) = *(undefined2 *)((int)param_1 + 0x8a);
        *(char *)((int)param_1 + 5) = *(char *)((int)param_1 + 5) + '\x01';
        DAT_800e807e = 1;
        func_0x80074590(0x8b,0,0);
      }
    }
    else if (bVar1 == 2) goto LAB_8011b7d8;
    do {
      *param_4 = *(byte *)(*param_1 + 1);
      func_0x80081218();
      *param_1 = *param_1 + 2;
      do {
        unaff_s1 = unaff_s1 + 1;
        param_1 = param_1 + 3;
        if (0 < unaff_s1) {
          return;
        }
        param_4 = (byte *)(unaff_s1 + unaff_s3);
        bVar1 = *param_4;
        *param_4 = bVar1 - 1;
      } while (0 < (int)((uint)(byte)(bVar1 - 1) << 0x18));
      pcVar4 = (char *)*param_1;
      if (*pcVar4 == -1) {
        *param_1 = (int)pcVar4 - (uint)(byte)pcVar4[1];
      }
    } while( true );
  }
  func_0x80040c00(0xb);
  iVar3 = func_0x80072ddc(param_1,0,4,0x18);
  if (iVar3 != 0) {
    *(undefined4 *)(iVar3 + 0x1c) = 0x8012b324;
    *(undefined1 *)(iVar3 + 3) = 0;
    sVar2 = *(short *)((int)param_1 + 0x2e);
    *(undefined2 *)(iVar3 + 0x32) = 0xe840;
    *(short *)(iVar3 + 0x2e) = sVar2 + -0x96;
    *(undefined2 *)(iVar3 + 0x36) = *(undefined2 *)((int)param_1 + 0x36);
  }
  *(undefined2 *)((int)param_1 + 0x42) = 0x10;
  *(char *)((int)param_1 + 5) = *(char *)((int)param_1 + 5) + '\x01';
LAB_8011b7d8:
  sVar2 = *(short *)((int)param_1 + 0x42) + -1;
  *(short *)((int)param_1 + 0x42) = sVar2;
  if (sVar2 == -1) {
    func_0x80042310();
    DAT_800e807e = 0;
    func_0x8006e1e4();
    *(undefined1 *)((int)param_1 + 0x5e) = 2;
    *(undefined1 *)((int)param_1 + 5) = 0;
    *(undefined1 *)((int)param_1 + 6) = 0;
  }
  return;
}

