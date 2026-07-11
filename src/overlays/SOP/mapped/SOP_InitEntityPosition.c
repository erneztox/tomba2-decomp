// SOP_InitEntityPosition (SOP_InitEntityPosition) - Initializes entity position (16000, 0xF0D0, 0x4EB5) and sprite attributes

undefined4 SOP_InitEntityPosition(int param_1)

{
  *(undefined2 *)(param_1 + 0x2e) = 16000;
  *(undefined2 *)(param_1 + 0x32) = 0xf0d0;
  *(undefined2 *)(param_1 + 0x36) = 0x4eb5;
  *(undefined2 *)(param_1 + 0x56) = 0x800;
  func_0x00077c40(param_1,0x8001b860,0);
  return 1;
}

