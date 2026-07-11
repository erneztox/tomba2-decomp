// A09_CameraZoomControl - Camera zoom control: adjusts fov via entity field_0xc4

/* WARNING: Control flow encountered bad instruction data */

undefined4 A09_CameraZoomControl(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc4);
  if (*(short *)(iVar1 + 10) != 0) {
    *(short *)(iVar1 + 10) = *(short *)(iVar1 + 10) + -0x40;
    *(short *)(*(int *)(param_1 + 200) + 10) = *(short *)(*(int *)(param_1 + 200) + 10) + 0x40;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x00074590(0x18,0xfffffff4,0);
  return 1;
}

