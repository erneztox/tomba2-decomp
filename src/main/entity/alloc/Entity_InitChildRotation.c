/**
 * @brief Step 2: init child rotation/animation from data (stride 0x2C)
 * @note Original: func_80026DD8 at 0x80026DD8
 */
// Entity_InitChildRotation



int FUN_80026dd8(int param_1,int param_2,int param_3,int param_4)

{
  undefined1 *puVar1;
  
  if (param_4 < (int)(uint)*(ushort *)(param_2 + 2)) {
    puVar1 = (undefined1 *)(param_4 * 0x2c + param_3);
    *(byte *)(param_1 + 0x33) = puVar1->sub_type & 2 | 0x24;
    *(undefined1 *)(param_1 + 0x34) = puVar1->counter1;
    *(undefined1 *)(param_1 + 0x35) = puVar1->counter2;
    *(undefined1 *)(param_1 + 0x38) = puVar1[0xc];
    *(undefined1 *)(param_1 + 0x39) = puVar1->sprite_flags;
    *(undefined1 *)(param_1 + 0x3c) = puVar1[0x10];
    *(undefined1 *)(param_1 + 0x3d) = puVar1[0x11];
    *(undefined2 *)(param_1 + 0x3a) = puVar1->anim_timer;
    param_1->pos_z = *(undefined2 *)(puVar1 + 10);
    *(undefined1 *)(param_1 + 0x30) = *puVar1;
    *(undefined1 *)(param_1 + 0x31) = puVar1->flags;
    *(undefined1 *)(param_1 + 0x32) = puVar1->kind;
    return 0;
  }
  return param_3 + (uint)*(ushort *)(param_2 + 2) * 0x2c;
}
