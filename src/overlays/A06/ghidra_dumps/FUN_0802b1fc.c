// FUN_0802b1fc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0802b1fc(undefined1 *param_1)

{
  byte bVar1;
  undefined2 uVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  ushort uVar6;
  undefined2 *puVar7;
  short *psVar8;
  undefined1 *puVar9;
  int iVar10;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    if ((DAT_800bf873 == '\0') && ((byte)param_1[3] < 5)) {
                    /* WARNING: Could not emulate address calculation at 0x0802b5a8 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)(byte)param_1[3] * 4 + -0x7fef62ec))();
      return;
    }
    iVar10 = func_0x00124bcc(param_1);
    if (iVar10 == 0) {
      return;
    }
    param_1[1] = 1;
    func_0x00077ebc(param_1);
    func_0x00051c8c(param_1);
    if (*(short *)(param_1 + 0x7c) != 0) {
      _DAT_800e7eb2 =
           _DAT_800e7eb2 +
           (*(short *)(*(int *)(param_1 + ((byte)param_1[9] - 1) * 4 + 0xc0) + 0x30) -
           *(short *)(param_1 + 0x78));
    }
    *(undefined2 *)(param_1 + 0x78) =
         *(undefined2 *)(*(int *)(param_1 + ((byte)param_1[9] - 1) * 4 + 0xc0) + 0x30);
  }
  else {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          halt_baddata();
        }
        func_0x0007a624(param_1);
      }
      return;
    }
    if (bVar1 == 0) {
      uVar4 = (uint)(byte)param_1[3];
      *(ushort *)(param_1 + 0x74) = (ushort)(byte)param_1[3];
      if (uVar4 < 0x14) {
        uVar2 = *(undefined2 *)(uVar4 * 2 + -0x7febacf4);
        param_1[3] = 0;
        *(undefined2 *)(param_1 + 0x60) = uVar2;
      }
      else if (uVar4 < 0x1e) {
        uVar2 = *(undefined2 *)((uVar4 - 0x14) * 2 + -0x7febacd4);
        param_1[3] = 1;
        *(undefined2 *)(param_1 + 0x60) = uVar2;
      }
      else if (uVar4 < 0x28) {
        uVar2 = *(undefined2 *)((uVar4 - 0x1e) * 2 + -0x7febaccc);
        param_1[3] = 2;
        *(undefined2 *)(param_1 + 0x60) = uVar2;
      }
      else {
        if (0x31 < uVar4) {
          param_1[3] = 4;
          *(undefined2 *)(param_1 + 0x54) = 0;
          *(undefined2 *)(param_1 + 0x56) = 0;
          *(undefined2 *)(param_1 + 0x58) = 0x800;
          param_1[8] = *(undefined1 *)((uint)(byte)param_1[3] * 2 + -0x7febad00);
          if (_DAT_800ed098 < (short)(ushort)(byte)param_1[8]) {
            param_1[4] = 3;
            halt_baddata();
          }
          param_1[9] = param_1[8];
          param_1[4] = param_1[4] + '\x01';
          param_1[0xd] = 0;
          param_1[0xb] = 0;
          puVar7 = *(undefined2 **)((uint)(byte)param_1[3] * 4 + -0x7febad14);
          iVar10 = 0;
          puVar9 = param_1;
          if (param_1[8] != '\0') {
            do {
              iVar10 = iVar10 + 1;
              iVar5 = func_0x0007aae8();
              *(int *)(puVar9 + 0xc0) = iVar5;
              *(undefined2 *)(iVar5 + 6) = *puVar7;
              **(undefined2 **)(puVar9 + 0xc0) = puVar7[1];
              *(undefined2 *)(*(int *)(puVar9 + 0xc0) + 2) = puVar7[2];
              *(undefined2 *)(*(int *)(puVar9 + 0xc0) + 4) = puVar7[3];
              *(undefined2 *)(*(int *)(puVar9 + 0xc0) + 8) = 0;
              *(undefined2 *)(*(int *)(puVar9 + 0xc0) + 10) = 0;
              psVar8 = puVar7 + 4;
              *(undefined2 *)(*(int *)(puVar9 + 0xc0) + 0xc) = 0;
              puVar7 = puVar7 + 5;
              func_0x00051b04(*(undefined4 *)(puVar9 + 0xc0),0xc,(int)*psVar8);
              puVar9 = puVar9 + 4;
            } while (iVar10 < (int)(uint)(byte)param_1[8]);
          }
          uVar3 = 1;
          if (2 < (byte)param_1[3]) {
            uVar3 = 2;
          }
          *param_1 = uVar3;
          uVar6 = *(ushort *)(param_1 + 0x58);
          *(undefined2 *)(param_1 + 0x58) = 0;
          if (((byte)param_1[3] - 2 < 2) && (param_1[0xbf] = DAT_800bfa10, DAT_800bfa10 != '\0')) {
            uVar6 = uVar6 + 0x800;
          }
          if ((uVar6 & 0xfff) != 0) {
            param_1[0x5e] = 1;
            *(undefined2 *)(param_1 + 0x84) = 100;
            *(undefined2 *)(param_1 + 0x80) = 0xbe;
            *(undefined2 *)(param_1 + 0x82) = 0x17c;
            *(undefined2 *)(param_1 + 0x86) = 0xe6;
            *(ushort *)(*(int *)(param_1 + ((byte)param_1[9] - 1) * 4 + 0xc0) + 0xc) = uVar6 & 0xfff
            ;
            func_0x00051c8c(param_1);
            *(undefined2 *)(param_1 + 0x6a) = 0;
            *(undefined2 *)(param_1 + 0x76) =
                 *(undefined2 *)(*(int *)(param_1 + ((byte)param_1[9] - 1) * 4 + 0xc0) + 0x2c);
            *(undefined2 *)(param_1 + 0x78) =
                 *(undefined2 *)(*(int *)(param_1 + ((byte)param_1[9] - 1) * 4 + 0xc0) + 0x30);
            uVar2 = *(undefined2 *)(*(int *)(param_1 + ((byte)param_1[9] - 1) * 4 + 0xc0) + 0x34);
            *(undefined2 *)(param_1 + 0x7c) = 0;
            *(undefined2 *)(param_1 + 0x7a) = uVar2;
            halt_baddata();
          }
          param_1[0x5e] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        param_1[3] = 3;
        *(undefined2 *)(param_1 + 0x54) = 0;
        *(undefined2 *)(param_1 + 0x56) = 0x400;
        *(undefined2 *)(param_1 + 0x58) = 0;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

