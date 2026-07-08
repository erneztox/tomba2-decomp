
void FUN_8002b7b0(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  int iVar5;
  
  bVar1 = *(byte *)(param_1 + 4);
  iVar5 = *(int *)(param_1 + 0x10);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
      FUN_8007a624(param_1);
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    uVar4 = DAT_8009ddba;
    uVar3 = DAT_8009ddb8;
    *(undefined2 *)(param_1 + 0x32) = 0xffd8;
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 4) = 1;
    *(undefined2 *)(param_1 + 0x44) = uVar3;
    *(undefined2 *)(param_1 + 0x46) = uVar4;
  }
  if ((*(byte *)(*(int *)(param_1 + 0x14) + 0x1b) & 0x40) == 0) {
    *(undefined1 *)(param_1 + 4) = 2;
  }
  else {
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x38);
    if (*(int *)(param_1 + 0x38) == 0) {
      *(undefined **)(param_1 + 0x38) = &DAT_8009ddbc;
      *(undefined **)(param_1 + 0x34) = &DAT_8009ddbc;
    }
    cVar2 = *(char *)(*(int *)(param_1 + 0x14) + 1);
    *(char *)(param_1 + 1) = cVar2;
    if (cVar2 != '\0') {
      *(undefined2 *)(param_1 + 0x2c) = *(undefined2 *)(iVar5 + 0x2c);
      *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(iVar5 + 0x30);
      uVar3 = *(undefined2 *)(iVar5 + 0x34);
      *(ushort *)(param_1 + 0x4a) = *(short *)(param_1 + 0x4a) + 0x88U & 0xfff;
      *(undefined2 *)(param_1 + 0x30) = uVar3;
      iVar5 = FUN_80083e80((uint)*(byte *)(param_1 + 7) << 4);
      *(short *)(param_1 + 0x48) = (short)(iVar5 >> 4);
      *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x02';
    }
  }
  return;
}

