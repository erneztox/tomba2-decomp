// FUN_80117484

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_80117484(byte *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  ushort *puVar4;
  ushort *unaff_s3;
  int unaff_s4;
  
  *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf90;
  iVar2 = func_0x800519e0(param_1,0xf,_DAT_800ecf94,0x8013581c);
  if (iVar2 == 0) {
    func_0x80040cdc(param_1,0x801393c0,0x80137124);
    if (DAT_800bf910 == -1) {
      param_1[0x5e] = 1;
      param_1[0x6c] = 0x50;
      param_1[0x6d] = 0;
      param_1[0x6e] = 0;
      param_1[0x6f] = 0;
      param_1[0x7c] = 0;
      param_1[0x7d] = 0;
      param_1[0x7e] = 0;
      param_1[0x7f] = 0;
      param_1[0x7a] = 0;
      param_1[0x7b] = 0;
      param_1[0x40] = 0;
      param_1[0x41] = 0;
      param_1[0x42] = 0;
      param_1[0x43] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      puVar4 = *(ushort **)((uint)param_1[3] * 4 + -0x7fec86dc);
      if (param_1[0x47] != 3) {
        puVar4 = puVar4 + (uint)param_1[0x47] * 0xb;
      }
      iVar2 = func_0x8007aae8(param_1,0);
      *(int *)(param_1 + 0xc0) = iVar2;
      *(undefined2 *)(iVar2 + 6) = 0xffff;
      **(undefined2 **)(param_1 + 0xc0) = 0;
      *(undefined2 *)(*(int *)(param_1 + 0xc0) + 4) = 0;
      *(undefined2 *)(*(int *)(param_1 + 0xc0) + 8) = 0;
      *(undefined2 *)(*(int *)(param_1 + 0xc0) + 10) = 0;
      *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0xc) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0xc0) + 0x40) = 0;
      *(ushort *)(param_1 + 0x88) = *puVar4;
      *(ushort *)(param_1 + 0x8a) = puVar4[1];
      *(ushort *)(param_1 + 0x8c) = puVar4[2];
      *(ushort *)(param_1 + 0x54) = puVar4[3];
      *(ushort *)(param_1 + 0x56) = puVar4[4];
      *(ushort *)(param_1 + 0x58) = puVar4[5];
      *(ushort *)(*(int *)(param_1 + 0xc0) + 0x3a) = puVar4[6];
      *(ushort *)(param_1 + 0x80) = puVar4[7];
      *(ushort *)(param_1 + 0x82) = puVar4[8];
      *(ushort *)(param_1 + 0x84) = puVar4[9];
      bVar1 = param_1[0x47];
      uVar3 = (uint)bVar1;
      *(ushort *)(param_1 + 0x86) = puVar4[10];
      if (uVar3 == 2) {
        *(ushort *)(*(int *)(param_1 + 0xc0) + 2) =
             *(ushort *)(*(int *)(param_1 + 0xc0) + 0x3a) >> 1;
        if (*(short *)(param_1 + 0x82) != 0) {
LAB_80120678:
          param_1[0x4a] = 0;
          param_1[0x4b] = 0;
          param_1[0x50] = 0;
          param_1[0x51] = 2;
          *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x16) =
               *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x3a);
          *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x12) = 0;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
          switch(param_1[3]) {
          case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          default:
            *(undefined2 *)(param_1 + 0x78) = *(undefined2 *)(*(int *)(param_1 + 0xc0) + 2);
            FUN_801291f4();
            return;
          }
        }
        *param_1 = bVar1;
      }
      else {
        if (uVar3 == 0) {
          *(undefined2 *)(*(int *)(param_1 + 0xc0) + 2) = 0x140;
          uVar3 = 0;
          goto LAB_801295f4;
        }
        if (uVar3 != 1) {
          *(undefined2 *)(*(int *)(param_1 + 0xc0) + 2) = 0x140;
          goto LAB_80120678;
        }
        *(undefined2 *)(*(int *)(param_1 + 0xc0) + 2) = 0x140;
        *(ushort *)(param_1 + 0x70) = *(short *)(*(int *)(param_1 + 0xc0) + 0x3a) + puVar4[-5];
      }
      while (FUN_80130d9c(uVar3), puVar4 < unaff_s3) {
        uVar3 = (uint)*puVar4;
        puVar4 = puVar4 + 1;
LAB_801295f4:
        uVar3 = FUN_80130838(unaff_s4 + uVar3 * 4 + 4);
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    param_1[0x5e] = 0;
    func_0x80041718(param_1,0xd,0);
    param_1[0x56] = 0;
    param_1[0x57] = 8;
    *param_1 = 9;
    param_1[0x80] = 0xb4;
    param_1[0x81] = 0;
    param_1[0x82] = 0x68;
    param_1[0x83] = 1;
    param_1[0x84] = 0x78;
    param_1[0x85] = 0;
    param_1[0x54] = 0;
    param_1[0x55] = 0;
    param_1[0x58] = 0;
    param_1[0x59] = 0;
    param_1[0xb] = 0;
    param_1[0x86] = 0xf0;
    param_1[0x87] = 0;
    param_1[0x2b] = 0;
    param_1[0x29] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[4] = param_1[4] + 1;
  }
  return;
}

