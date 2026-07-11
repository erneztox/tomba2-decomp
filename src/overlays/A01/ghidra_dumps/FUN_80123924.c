// FUN_80123924

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80123924(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  
  bVar1 = param_1[4];
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        FUN_8012cb14();
        return;
      }
      iVar3 = func_0x800519e0(param_1,3,_DAT_800ecfd0,0x80137a1c);
      if (iVar3 == 0) {
        *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecfd4;
        if (DAT_800bf873 != '\0') {
          param_1[4] = 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (((int)(uint)DAT_800bfa13 >> ((byte)param_1[3] & 0x1f) & 1U) == 0) {
          FUN_8012c4f4(param_1,1,0x1e);
          func_0x80077c40(param_1,0x8001b7b0,1);
          *param_1 = 1;
          *(undefined2 *)(param_1 + 0x80) = 400;
          *(undefined2 *)(param_1 + 0x82) = 800;
          *(undefined2 *)(param_1 + 0x84) = 0xb4;
          *(undefined2 *)(param_1 + 0x86) = 0xb4;
          param_1[0x29] = 0;
          param_1[0x2b] = 0;
          param_1[4] = param_1[4] + '\x01';
          if (param_1[0x5e] == '\0') {
            param_1[5] = 4;
          }
          *(short *)(param_1 + 0x84) = *(short *)(param_1 + 0x84) << 1;
          *(short *)(param_1 + 0x86) = *(short *)(param_1 + 0x86) << 1;
          FUN_8012cb14();
          return;
        }
        param_1[0x5e] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else if (bVar1 != 2) {
      if (bVar1 != 3) {
        FUN_8012cb14();
        return;
      }
      func_0x8007a624(param_1);
    }
    return;
  }
  iVar3 = func_0x8007778c(param_1);
  if (iVar3 == 0) goto LAB_80123b64;
  func_0x80076d68(param_1);
  bVar1 = param_1[6];
  if (bVar1 == 1) {
    sVar2 = *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x40) = sVar2 + -1;
    if (sVar2 == 1) {
      *param_1 = 2;
      param_1[6] = param_1[6] + '\x01';
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      if (bVar1 != 2) goto LAB_80123b54;
      *param_1 = 1;
      param_1[6] = 0;
      DAT_800bf809 = 0;
    }
    if (param_1[0x2b] == '\x03') {
      *(undefined2 *)(param_1 + 0x40) = 0x1e;
      param_1[6] = param_1[6] + '\x01';
      uVar4 = 0x61;
      if (param_1[0x5e] == '\0') {
        uVar4 = 0x62;
      }
      func_0x8004ed94(uVar4,0x41);
      DAT_800bf809 = 1;
      FUN_8012caec();
      return;
    }
  }
LAB_80123b54:
  FUN_8012c600(param_1,0x1e);
  func_0x800518fc(param_1);
LAB_80123b64:
  param_1[0x29] = 0;
  param_1[0x2b] = 0;
  FUN_8012cb14();
  return;
}

