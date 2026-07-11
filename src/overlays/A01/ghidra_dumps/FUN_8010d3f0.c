// FUN_8010d3f0

/* WARNING: Removing unreachable block (ram,0x8010d5bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8010d3f0(undefined1 *param_1)

{
  short sVar1;
  undefined2 uVar2;
  short sVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  undefined1 *puVar8;
  
  puVar8 = param_1 + 0x60;
  iVar4 = func_0x800519e0(param_1,0x12,_DAT_800ecfc4,0x8013597c);
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecfc8;
    func_0x80077c40(param_1,0x80139b24,0);
    *(undefined2 *)(param_1 + 0x4e) = 0;
    *(undefined2 *)(param_1 + 0x50) = 0;
    if ((byte)param_1[3] < 5) {
                    /* WARNING: Jumptable at 0x8010d478 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(&DAT_80109824 + (uint)(byte)param_1[3] * 4))();
      return;
    }
    *(undefined2 *)(param_1 + 0x74) = *(undefined2 *)(param_1 + 0x2e);
    *(undefined2 *)(param_1 + 0x76) = *(undefined2 *)(param_1 + 0x36);
    func_0x8004766c(param_1);
    func_0x80049674(param_1);
    uVar2 = _DAT_1f8001a0;
    param_1[0x68] = 0;
    iVar4 = (int)_DAT_1f800160;
    iVar6 = (int)_DAT_1f800164;
    *(undefined2 *)(param_1 + 0x66) = 0;
    *(undefined2 *)(param_1 + 0x72) = 0;
    *(undefined2 *)(param_1 + 100) = uVar2;
    sVar1 = *(short *)(param_1 + 100);
    puVar5 = param_1 + 0x2c;
    sVar3 = func_0x800782b0(puVar5,iVar4,iVar6);
    uVar7 = ((sVar1 - sVar3) + 0x400U & 0xfff) < 0x801 ^ 1;
    if (uVar7 != 0) {
      if (puVar5 == (undefined1 *)0x0) {
        if (DAT_800bf9fa != '\x19') {
          param_1[1] = 1;
          func_0x80077e7c(param_1);
          if (param_1[1] != '\0') {
            func_0x80041098(param_1);
            func_0x8004190c(param_1);
          }
          return;
        }
        func_0x80040d68(param_1,0x80136ce0);
        param_1[0x70] = 2;
        param_1[5] = param_1[5] + '\x01';
        func_0x80051d20(param_1 + 0x60);
      }
      *(undefined2 *)(param_1 + 0x8e) = *(undefined2 *)(param_1 + 0xc0);
      *(undefined2 *)(param_1 + 0x92) = *(undefined2 *)(uVar7 + 2);
      *(undefined2 *)(param_1 + 0x96) = *(undefined2 *)(uVar7 + 4);
      *(undefined2 *)(param_1 + 0xb6) = *(undefined2 *)(param_1 + 0xb6);
      func_0x800517f8(puVar8);
      if (((*(short *)(param_1 + 0x6e) == 5) && ((DAT_800bfa06 & 1) == 0)) &&
         (iVar4 = func_0x80072ddc(puVar8,0,2,0x1e), iVar4 != 0)) {
        *(undefined4 *)(iVar4 + 0x1c) = 0x801236cc;
        *(undefined1 *)(iVar4 + 3) = 0;
        *puVar8 = 3;
      }
      return;
    }
    *(ushort *)(param_1 + 0x66) = *(ushort *)(param_1 + 0x66) & 0xfffe;
    *(undefined2 *)(param_1 + 0x56) = *(undefined2 *)(param_1 + 100);
    *(undefined2 *)(param_1 + 0x54) = 0;
    *(undefined2 *)(param_1 + 0x58) = 0;
    param_1[0x1b] = param_1[0x1b] & 0xbf;
    param_1[0x6a] = param_1[3];
    *param_1 = 1;
    *(undefined2 *)(param_1 + 0xbc) = 0x1000;
    *(undefined2 *)(param_1 + 0xba) = 0x1000;
    *(undefined2 *)(param_1 + 0xb8) = 0x1000;
    *(undefined2 *)(param_1 + 0x80) = 0x38;
    *(undefined2 *)(param_1 + 0x82) = 0x70;
    *(undefined2 *)(param_1 + 0x84) = 0x8c;
    *(undefined2 *)(param_1 + 0x86) = 0xf0;
    *(undefined2 *)(param_1 + 0x60) = 0;
    *(undefined2 *)(param_1 + 0x62) = 0;
    iVar4 = func_0x80072ddc(param_1,3,2,0x22);
    *(int *)(param_1 + 0x10) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(iVar4 + 0x1c) = 0x80133d74;
      *(undefined1 *)(iVar4 + 3) = 0;
      *(undefined1 **)(iVar4 + 0x10) = param_1;
    }
  }
  return;
}

