// A09_CameraZoomIn - Camera zoom in: sets DAT_800e8076=0x80, e8078=0x400

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

s32 A09_CameraZoomIn(int param_1)

{
  if (param_1->sub_state == '\0') {
    param_1->sub_state = 1;
    Entity_CopyStateData(1);
    _DAT_800e8076 = 0x80;
    _g_CameraZoom = 0x400;
    _DAT_800e8074 = _DAT_801003f8 * 5;
    _DAT_800e8042 = param_1->pos_y;
    _DAT_800e8046 = *(short *)(param_1 + 0x32) + 0x140;
    _DAT_800e804a = param_1->pos_z + -400;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_1->sub_state != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return DAT_800e806e == '\x03';
}

