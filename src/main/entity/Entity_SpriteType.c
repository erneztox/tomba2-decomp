/**
 * @brief Entity sprite type lookup: switch on param & 0x7F, returns type
 * @note Original: func_80038F7C at 0x80038F7C
 */
// Entity_SpriteType



s32 FUN_80038f7c(uint param_1)

{
  s32 bVar1;
  s32 uVar2;
  
  bVar1 = (param_1 & 0x80) != 0;
  if (bVar1) {
    param_1 = param_1 & 0x7f;
  }
  if (param_1 == 0x17) {
    uVar2 = 0xdb;
    if (bVar1) {
      uVar2 = 0x13d;
    }
  }
  else if (param_1 == 0x18) {
    uVar2 = 0xdc;
    if (bVar1) {
      uVar2 = 0x13e;
    }
  }
  else if (param_1 == 0x19) {
    uVar2 = 0xde;
    if (bVar1) {
      uVar2 = 0x140;
    }
  }
  else if (param_1 == 0x1a) {
    uVar2 = 0xdf;
    if (bVar1) {
      uVar2 = 0x141;
    }
  }
  else if (param_1 == 0x1b) {
    uVar2 = 0xdd;
    if (bVar1) {
      uVar2 = 0x13f;
    }
  }
  else {
    uVar2 = 0xe0;
    if (bVar1) {
      uVar2 = 0x142;
    }
  }
  return uVar2;
}
