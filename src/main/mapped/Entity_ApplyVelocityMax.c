/**
 * @brief Applies velocity with cap: entity[0x4A] capped at 0x2800, updates Y pos, advances timer
 * @note Original: func_80066538 at 0x80066538
 */
// Entity_ApplyVelocityMax



void FUN_80066538(int param_1)

{
  ushort uVar1;
  short sVar2;
  
  uVar1 = *(short *)(param_1 + 0x58) + 0x40;
  *(ushort *)(param_1 + 0x58) = uVar1;
  if (0 < (int)((uint)uVar1 << 0x10)) {
    *(undefined1 *)(param_1 + 0x144) = 1;
    *(undefined2 *)(param_1 + 0x58) = 0;
  }
  FUN_80076d68(param_1);
  FUN_80056b48(param_1,1);
  FUN_80055d5c(param_1);
  FUN_800541f4(param_1,3);
  sVar2 = *(short *)(param_1 + 0x4a) + 0x400;
  *(short *)(param_1 + 0x4a) = sVar2;
  if (0x2800 < sVar2) {
    *(undefined2 *)(param_1 + 0x4a) = 0x2800;
  }
  *(short *)(param_1 + 0x40) = *(short *)(param_1 + 0x40) + 1;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x100;
  FUN_8005444c();
  return;
}
