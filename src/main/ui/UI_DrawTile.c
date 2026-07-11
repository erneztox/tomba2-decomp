/**
 * @brief Draws a single UI tile primitive (0x2C/0x2E) at given rect position
 * @note Original: func_8004FFB4 at 0x8004FFB4
 */
// UI_DrawTile



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8004ffb4(short *param_1,undefined4 param_2,ushort param_3,int param_4)

{
  undefined1 *puVar1;
  uint *puVar2;
  undefined1 uVar3;
  ushort uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  uint *puVar7;
  
  puVar2 = _DAT_800bf544;
  puVar1 = (undefined1 *)((int)_DAT_800bf544 + 7);
  _DAT_800bf544 = _DAT_800bf544 + 10;
  *puVar1 = 0x2c;
  if ((param_3 & 0x80) != 0) {
    *(undefined1 *)((int)puVar2 + 7) = 0x2e;
  }
  if ((param_3 & 0x40) == 0) {
    uVar4 = ((param_3 & 0x1f) + 0x1f0) * 0x40 | 0x3e;
  }
  else {
    uVar4 = ((param_3 & 0x1f) + 0x1f0) * 0x40 | 0x3f;
  }
  *(ushort *)((int)puVar2 + 0xe) = uVar4;
  if ((param_3 & 0x20) == 0) {
    *(byte *)((int)puVar2 + 7) = *(byte *)((int)puVar2 + 7) | 1;
  }
  else {
    *(undefined1 *)((int)puVar2 + 6) = 0x40;
    *(undefined1 *)((int)puVar2 + 5) = 0x40;
    *(undefined1 *)(puVar2 + 1) = 0x40;
  }
  *(undefined2 *)((int)puVar2 + 0x16) = 0x5f;
  *(short *)(puVar2 + 2) = *param_1;
  *(short *)((int)puVar2 + 10) = param_1[1];
  *(short *)(puVar2 + 4) = *param_1 + param_1[2];
  *(short *)((int)puVar2 + 0x12) = param_1[1];
  *(short *)(puVar2 + 6) = *param_1;
  *(short *)((int)puVar2 + 0x1a) = param_1[1] + param_1[3];
  *(short *)(puVar2 + 8) = *param_1 + param_1[2];
  *(short *)((int)puVar2 + 0x22) = param_1[1] + param_1[3];
  switch(param_2) {
  case 0:
    uVar6 = 0xc0;
    uVar5 = 200;
    *(undefined1 *)((int)puVar2 + 0xd) = 0x88;
    *(undefined1 *)((int)puVar2 + 0x15) = 0x88;
    uVar3 = 0x90;
    goto LAB_8005015c;
  case 1:
    uVar6 = 0xf0;
    uVar5 = 0xf8;
    *(undefined1 *)((int)puVar2 + 0xd) = 0x88;
    *(undefined1 *)((int)puVar2 + 0x15) = 0x88;
    uVar3 = 0x90;
    goto LAB_8005015c;
  case 2:
    uVar6 = 0xd0;
    uVar3 = 0x89;
    uVar5 = 0xd8;
    break;
  case 3:
    uVar6 = 0xe0;
    uVar3 = 0x89;
    uVar5 = 0xe8;
    break;
  case 4:
    uVar6 = 0xd8;
    uVar3 = 0x88;
    uVar5 = 0xdf;
    break;
  default:
    goto switchD_800500e4_default;
  }
  *(undefined1 *)((int)puVar2 + 0xd) = uVar3;
  *(undefined1 *)((int)puVar2 + 0x15) = uVar3;
  uVar3 = 0x8f;
LAB_8005015c:
  *(undefined1 *)(puVar2 + 3) = uVar6;
  *(undefined1 *)(puVar2 + 5) = uVar5;
  *(undefined1 *)(puVar2 + 7) = uVar6;
  *(undefined1 *)((int)puVar2 + 0x1d) = uVar3;
  *(undefined1 *)(puVar2 + 9) = uVar5;
  *(undefined1 *)((int)puVar2 + 0x25) = uVar3;
switchD_800500e4_default:
  puVar7 = (uint *)(_DAT_800ed8c8 + param_4 * 4);
  *puVar2 = *puVar7 | 0x9000000;
  *puVar7 = (uint)puVar2;
  return;
}
