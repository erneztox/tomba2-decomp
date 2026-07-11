// FUN_080153cc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_080153cc(int param_1)

{
  undefined2 uVar1;
  bool bVar2;
  int iVar3;
  undefined2 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar3 = func_0x0007a980(2,3,1);
  if (iVar3 != 0) {
    *(undefined1 *)(iVar3 + 2) = 0x29;
    *(undefined1 *)(iVar3 + 0x1a) = 0x80;
    *(undefined1 *)(iVar3 + 0x19) = 0x80;
    *(undefined1 *)(iVar3 + 0x18) = 0x80;
    *(undefined1 *)(iVar3 + 3) = 0;
    *(undefined1 *)(iVar3 + 0x1b) = 0;
    *(byte *)(iVar3 + 0xd) = *(byte *)(iVar3 + 0xd) | 1;
    bVar2 = 2 < _DAT_800ed098;
    *(undefined4 *)(iVar3 + 0x1c) = 0x8010e5ec;
    if (bVar2) {
      DAT_1f80025b = 1;
      *(undefined1 *)(iVar3 + 9) = 3;
      *(undefined1 *)(iVar3 + 8) = 3;
      *(undefined2 *)(iVar3 + 0x2e) = *(undefined2 *)(*(int *)(param_1 + 0xdc) + 0x2c);
      iVar7 = 0;
      *(undefined2 *)(iVar3 + 0x32) = *(undefined2 *)(*(int *)(param_1 + 0xdc) + 0x30);
      uVar1 = *(undefined2 *)(*(int *)(param_1 + 0xdc) + 0x34);
      *(undefined2 *)(iVar3 + 0x8a) = 0xffce;
      *(undefined2 *)(iVar3 + 0x54) = 0;
      *(undefined2 *)(iVar3 + 0x56) = 0;
      *(undefined2 *)(iVar3 + 0x58) = 0;
      *(undefined2 *)(iVar3 + 0x88) = 0;
      *(undefined2 *)(iVar3 + 0x8c) = 0;
      *(undefined2 *)(iVar3 + 0xb8) = 0x1000;
      *(undefined2 *)(iVar3 + 0xba) = 0x1000;
      *(undefined2 *)(iVar3 + 0xbc) = 0x1000;
      *(undefined2 *)(iVar3 + 0x36) = uVar1;
      if (*(char *)(iVar3 + 9) != '\0') {
        iVar6 = 0x20;
        iVar8 = iVar3;
        do {
          puVar4 = (undefined2 *)func_0x0007aae8();
          *(undefined2 **)(iVar8 + 0xc0) = puVar4;
          if (iVar7 == 0) {
            puVar4[3] = 0xffff;
            *puVar4 = 0;
            puVar4[1] = 0;
            puVar4[2] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          iVar5 = param_1 + iVar6;
          puVar4[3] = 0;
          *puVar4 = **(undefined2 **)(iVar5 + 0xc0);
          puVar4[1] = *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 2);
          puVar4[2] = *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 4);
          iVar5 = param_1 + iVar6;
          puVar4[0x1c] = *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 0x38);
          puVar4[0x1d] = *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 0x3a);
          uVar1 = *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 0x3c);
          puVar4[4] = 0;
          puVar4[5] = 0;
          puVar4[6] = 0;
          puVar4[0x1e] = uVar1;
          iVar6 = iVar6 + 4;
          *(undefined4 *)(puVar4 + 0x20) = *(undefined4 *)(*(int *)(iVar5 + 0xc0) + 0x40);
          iVar7 = iVar7 + 1;
          iVar8 = iVar8 + 4;
        } while (iVar7 < (int)(uint)*(byte *)(iVar3 + 9));
      }
      *(undefined4 *)(*(int *)(iVar3 + 0xc4) + 0x40) = _DAT_800bf864;
      *(undefined4 *)(*(int *)(iVar3 + 200) + 0x40) = 0;
      _DAT_800bf860 = *(undefined4 *)(*(int *)(param_1 + 0xe0) + 0x40);
      _DAT_800bf868 = *(undefined4 *)(*(int *)(param_1 + 0xe8) + 0x40);
      *(undefined4 *)(*(int *)(param_1 + 0xe0) + 0x40) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0xe8) + 0x40) = 0;
      return iVar3;
    }
    *(undefined1 *)(iVar3 + 4) = 3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

