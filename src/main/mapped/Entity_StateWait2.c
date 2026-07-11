/**
 * @brief Entity wait state variant 2: entity[0x78] state machine
 * @note Original: func_80041C54 at 0x80041C54
 */
// Entity_StateWait2



undefined4 FUN_80041c54(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 0x78);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 == 3) {
          *(undefined4 *)(param_1 + 0x10) = 0;
          return 1;
        }
        return 0;
      }
      if (*(char *)(*(int *)(param_1 + 0x10) + 4) != '\x02') {
        return 0;
      }
      *(undefined1 *)(*(int *)(param_1 + 0x10) + 4) = 3;
      goto LAB_80041d2c;
    }
    if (bVar1 != 0) {
      return 0;
    }
    if (-1 < *(short *)(param_1 + 0x74)) {
      *(undefined1 *)(param_1 + 0x7a) = *(undefined1 *)(param_1 + 0x74);
    }
    *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
  }
  iVar2 = FUN_8007def8((int)*(short *)(param_1 + 0x72),*(undefined1 *)(param_1 + 0x7a),
                       (int)*(short *)(param_1 + 0x76));
  *(int *)(param_1 + 0x10) = iVar2;
  if (iVar2 == 0) {
    return 0;
  }
  if (*(ushort *)(param_1 + 0x76) - 1 < 2) {
    return 1;
  }
LAB_80041d2c:
  *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
  return 0;
}
