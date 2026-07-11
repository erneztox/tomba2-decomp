/**
 * @brief Particle effect entity: random velocity, deceleration, timed life
 * @note Original: func_80027254 at 0x80027254
 */
// Entity_Behavior_Particle



void FUN_80027254(int param_1)

{
  byte bVar1;
  short sVar2;
  ushort uVar3;
  short sVar4;
  undefined *puVar5;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    *(ushort *)(param_1 + 0xc) = *(ushort *)(param_1 + 0xc) - (*(ushort *)(param_1 + 0xc) >> 7);
    *(short *)(param_1 + 0x1e) = *(short *)(param_1 + 0x1e) + *(short *)(param_1 + 0x10);
    *(short *)(param_1 + 0x26) = *(short *)(param_1 + 0x26) + *(short *)(param_1 + 0x14);
    *(short *)(param_1 + 0x28) = *(short *)(param_1 + 0x28) + *(short *)(param_1 + 0x16);
    *(short *)(param_1 + 0x2a) = *(short *)(param_1 + 0x2a) + *(short *)(param_1 + 10);
    sVar2 = *(short *)(param_1 + 0x12);
    *(short *)(param_1 + 0x2c) = *(short *)(param_1 + 0x2c) + *(short *)(param_1 + 0x1a);
    sVar4 = *(short *)(param_1 + 0x12) + *(short *)(param_1 + 0x18);
    *(short *)(param_1 + 0x12) = sVar4;
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + sVar2 * 0x100;
    if ((*(short *)(param_1 + 0x2e) + 0x800 < (int)sVar4) ||
       (sVar2 = *(short *)(param_1 + 8), *(short *)(param_1 + 8) = sVar2 + -1, sVar2 == 1)) {
      *(undefined1 *)(param_1 + 4) = 3;
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      *(undefined1 *)(param_1 + 4) = 1;
      sVar2 = (*(byte *)(param_1 + 2) & 1) + 2;
      *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_1 + 0x33);
      *(short *)(param_1 + 0x14) = sVar2;
      *(short *)(param_1 + 0x10) = sVar2;
      uVar3 = FUN_8009a450();
      *(ushort *)(param_1 + 0x10) = *(short *)(param_1 + 0x10) + (uVar3 & 3);
      uVar3 = FUN_8009a450();
      *(ushort *)(param_1 + 0x14) = *(short *)(param_1 + 0x14) + (uVar3 & 3);
      if ((*(byte *)(param_1 + 1) & 1) == 0) {
        *(undefined2 *)(param_1 + 8) = 0x30;
        if ((*(byte *)(param_1 + 1) & 2) == 0) {
          puVar5 = &DAT_8009d53c;
        }
        else {
          puVar5 = &DAT_8009d54c;
        }
        *(short *)(param_1 + 0x10) =
             *(short *)(param_1 + 0x10) * 4 * *(short *)(puVar5 + (*(byte *)(param_1 + 2) & 7) * 2);
        *(short *)(param_1 + 0x14) =
             *(short *)(param_1 + 0x14) * 4 *
             *(short *)(puVar5 + (*(byte *)(param_1 + 2) + 6 & 7) * 2);
        uVar3 = FUN_8009a450();
        *(ushort *)(param_1 + 0x12) = (((uVar3 & 3) + 1) * -8 + -0x20) * 0x100;
        *(undefined2 *)(param_1 + 0x18) = 0x300;
      }
      else {
        *(undefined2 *)(param_1 + 8) = 0x18;
        *(undefined2 *)(param_1 + 0x12) = 0xe000;
        *(undefined2 *)(param_1 + 0x18) = 0x400;
        if ((*(byte *)(param_1 + 1) & 2) == 0) {
          puVar5 = &DAT_8009d53c;
        }
        else {
          puVar5 = &DAT_8009d54c;
        }
        *(short *)(param_1 + 0x10) =
             *(short *)(param_1 + 0x10) * 2 * *(short *)(puVar5 + (*(byte *)(param_1 + 2) & 7) * 2);
        *(short *)(param_1 + 0x14) =
             *(short *)(param_1 + 0x14) * 2 *
             *(short *)(puVar5 + (*(byte *)(param_1 + 2) + 6 & 7) * 2);
      }
      sVar2 = (*(ushort *)(param_1 + 0x10) | *(ushort *)(param_1 + 0x14)) * 0x14;
      *(short *)(param_1 + 0x1a) = sVar2;
      *(short *)(param_1 + 10) = sVar2;
      *(short *)(param_1 + 0x16) = sVar2;
      *(short *)(param_1 + 0x16) =
           sVar2 * *(short *)(&DAT_8009d55c + (uint)*(byte *)(param_1 + 2) * 2);
      *(short *)(param_1 + 10) =
           *(short *)(param_1 + 10) * *(short *)(&DAT_8009d56c + (uint)*(byte *)(param_1 + 2) * 2);
      sVar2 = *(short *)(&DAT_8009d57c + (uint)*(byte *)(param_1 + 2) * 2);
      *(undefined2 *)(param_1 + 0x28) = 0;
      *(undefined2 *)(param_1 + 0x2a) = 0;
      *(undefined2 *)(param_1 + 0x2c) = 0;
      *(short *)(param_1 + 0x2e) = -*(short *)(param_1 + 0x12);
      *(short *)(param_1 + 0x1a) = *(short *)(param_1 + 0x1a) * sVar2;
    }
  }
  else if ((bVar1 != 2) && (bVar1 == 3)) {
    FUN_8007b2ac(param_1);
  }
  return;
}
