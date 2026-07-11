/**
 * @brief Entity behavior setter variant 2: entity[1]=1, tests entity[0x46]
 * @note Original: func_80068E68 at 0x80068E68
 */
// Entity_BehaviorSet2



void FUN_80068e68(int param_1)

{
  uint uVar1;
  
  *(undefined1 *)(param_1 + 1) = 1;
  if ((*(byte *)(param_1 + 0x46) & 8) == 0) {
    if ((*(byte *)(param_1 + 0x46) & 1) == 0) {
      *(undefined2 *)(param_1 + 0xbe) = 0;
      *(undefined1 *)(param_1 + 0x46) = 0;
    }
    else {
      *(undefined2 *)(param_1 + 0xbe) = 0x800;
      *(undefined1 *)(param_1 + 0x46) = 1;
    }
    *(undefined2 *)(param_1 + 0x6a) = 0;
  }
  else {
    *(undefined2 *)(param_1 + 0xbe) = 0x400;
    *(undefined1 *)(param_1 + 0x46) = 8;
    *(undefined2 *)(param_1 + 0x6a) = 0x400;
  }
  *(undefined2 *)(param_1 + 0x68) = *(undefined2 *)(param_1 + 0x56);
  *(undefined2 *)(param_1 + 0x40) = 0x78;
  *(undefined2 *)(param_1 + 0x42) = 0x1e;
  *(undefined2 *)(param_1 + 0x44) = 0x6e;
  *(undefined2 *)(param_1 + 0x82) = 200;
  *(undefined2 *)(param_1 + 0x86) = 200;
  *(undefined2 *)(param_1 + 0xb8) = 0x1000;
  *(undefined2 *)(param_1 + 0xba) = 0x1000;
  *(undefined2 *)(param_1 + 0xbc) = 0x1000;
  *(undefined2 *)(param_1 + 0x80) = 100;
  *(undefined2 *)(param_1 + 0x84) = 100;
  *(undefined1 *)(param_1 + 0x2b) = 2;
  *(undefined1 *)(param_1 + 0x5e) = 0;
  *(undefined1 *)(param_1 + 0x5f) = 0;
  if ((*(byte *)(param_1 + 3) & 0x80) == 0) {
    uVar1 = *(byte *)(param_1 + 3) & 0x7f;
    FUN_80077c40(param_1,*(undefined4 *)(&DAT_800a4a00 + uVar1 * 4),(&DAT_800a4a44)[uVar1]);
  }
  FUN_80069858(param_1,0,1);
  if ((*(byte *)(param_1 + 3) & 0x80) == 0) {
    FUN_800518fc(param_1);
  }
  else {
    FUN_800517f8(param_1);
  }
  *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
  return;
}
