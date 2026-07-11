// FUN_80110a40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80110a40(int param_1,uint param_2,char param_3)

{
  undefined2 uVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  int unaff_s0;
  
  if (*(byte *)(param_1 + 0x46) != param_2) {
    *(char *)(param_1 + 0x46) = (char)param_2;
    if (param_2 != 0xd) {
      if ((int)param_2 < 0xe) {
        if (param_2 == 5) {
          sVar2 = *(short *)(unaff_s0 + 0x32);
        }
        else {
          sVar2 = 4;
        }
LAB_80119a58:
        uVar4 = (uint)*(ushort *)(unaff_s0 + 0x72);
        *(ushort *)(param_1 + 0x2e) = sVar2 + *(ushort *)(unaff_s0 + 0x72);
        uVar1 = *(undefined2 *)(unaff_s0 + 0x36);
        *(undefined2 *)(param_1 + 0x30) = uVar1;
        *(undefined2 *)(uVar4 + 0x3a) = uVar1;
        *(undefined2 *)(uVar4 + 0x3e) = 0xe4d5;
        *(undefined2 *)(uVar4 + 0x42) = 0x35a3;
        FUN_8012ba48();
        return;
      }
      if ((param_2 != 0xf) && (param_2 != 0x11)) {
        sVar2 = 4;
        goto LAB_80119a58;
      }
    }
    *(int *)(*(int *)(param_1 + 0xc4) + 0x40) = _DAT_800ecfc4 + *(int *)(_DAT_800ecfc4 + 0x4c);
    if (param_3 == '\0') {
      func_0x80077c40(param_1,0x80139b24,param_2);
      if ((*(char *)(unaff_s0 + 0xbf) == '\0') && (*(char *)(unaff_s0 + 0x5e) == '\0')) {
        iVar3 = func_0x8003116c(0x203,0,0);
        if (iVar3 != 0) {
          *(int *)(iVar3 + 0x10) = unaff_s0;
          *(int *)(unaff_s0 + 0x10) = iVar3;
          *(undefined2 *)(iVar3 + 0x2c) = *(undefined2 *)(unaff_s0 + 0x2e);
          *(short *)(iVar3 + 0x2e) = *(short *)(unaff_s0 + 0x32) + *(short *)(unaff_s0 + 0x72);
          *(undefined2 *)(iVar3 + 0x30) = *(undefined2 *)(unaff_s0 + 0x36);
          *(int *)(iVar3 + 0x34) = *(short *)(unaff_s0 + 0x6a) * 0x10000 + 0x100;
          *(undefined1 *)(unaff_s0 + 0x5e) = 1;
          FUN_80122acc();
          return;
        }
        *(undefined4 *)(unaff_s0 + 0x10) = 0;
        *(undefined1 *)(unaff_s0 + 0x5e) = 0;
      }
      return;
    }
    func_0x80077cfc(param_1,0x80139b24,param_2,param_3);
  }
  return;
}

