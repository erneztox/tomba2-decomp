// FUN_8011a290

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8011a290(int param_1,undefined1 *param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint in_v1;
  
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 == 1) {
    if (*(char *)(param_1 + 0x70) != -1) goto LAB_8011a3e8;
    param_2 = (undefined1 *)0x8013735c;
    func_0x80040d68(param_1,0x8013735c);
    uVar2 = 2;
    *(undefined1 *)(param_1 + 0x70) = 2;
    *(undefined2 *)(param_1 + 0x40) = 0;
    in_v1 = *(byte *)(param_1 + 5) + 1;
    *(char *)(param_1 + 5) = (char)in_v1;
  }
  else if (bVar1 < 2) {
    uVar2 = 0x1f800000;
    if (bVar1 == 0) {
      if ((_DAT_1f800164 < 0x3d54) || (iVar3 = func_0x8005308c(), iVar3 == 0)) goto LAB_8011a3e8;
      if (*(int *)(param_1 + 0x14) != 0) {
        *(undefined1 *)(*(int *)(param_1 + 0x14) + 4) = 3;
      }
      func_0x80042354(1,1);
      param_2 = (undefined1 *)0x801372ac;
      func_0x80040d68(param_1,0x801372ac);
      in_v1 = 2;
      *(undefined1 *)(param_1 + 0x70) = 2;
      uVar2 = *(byte *)(param_1 + 5) + 1;
      *(char *)(param_1 + 5) = (char)uVar2;
    }
  }
  else {
    uVar2 = 0xff;
    if (bVar1 == 2) {
      if (*(char *)(param_1 + 0x70) == -1) {
        if (*(short *)(param_1 + 0x40) == 0) {
          param_2 = &DAT_801374a4;
          func_0x80040d68(param_1);
          *(undefined1 *)(param_1 + 0x70) = 2;
          *(short *)(param_1 + 0x40) = *(short *)(param_1 + 0x40) + 1;
          in_v1 = (uint)(byte)param_2[5];
          uVar2 = 1;
          if (in_v1 == 0) {
            if (DAT_800bf9fa == '\x17') {
              *param_2 = 2;
              *(short *)(param_2 + 0x2e) =
                   (short)((*(int *)(_DAT_800e7f50 + 0x2c) + *(int *)(_DAT_800e7f5c + 0x2c)) / 2);
              *(short *)(param_2 + 0x32) =
                   (short)((*(int *)(_DAT_800e7f50 + 0x30) + *(int *)(_DAT_800e7f5c + 0x30)) / 2);
              *(short *)(param_2 + 0x36) =
                   (short)((*(int *)(_DAT_800e7f50 + 0x34) + *(int *)(_DAT_800e7f5c + 0x34)) / 2);
              FUN_8012c3f8();
              return;
            }
            *param_2 = 1;
            *(undefined4 *)(param_2 + 0x2c) = 0x46e60000;
            *(undefined4 *)(param_2 + 0x30) = 0xe53e0000;
            *(undefined4 *)(param_2 + 0x34) = 0x23400000;
            param_2[5] = param_2[5] + '\x01';
            goto LAB_8012345c;
          }
          goto LAB_80123384;
        }
        FUN_8012b2d8(param_1);
        FUN_8011fb2c(param_1,3);
        *(undefined1 *)(param_1 + 4) = 2;
      }
      *(undefined1 *)(param_1 + 1) = 1;
      func_0x80077e7c(param_1);
LAB_8011a3e8:
      func_0x80041098(param_1);
      func_0x8004190c(param_1);
      return;
    }
  }
LAB_80123384:
  if (in_v1 != uVar2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
LAB_8012345c:
  func_0x8007778c(param_2);
  return;
}

