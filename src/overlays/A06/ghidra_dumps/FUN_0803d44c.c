// FUN_0803d44c

/* WARNING: Control flow encountered bad instruction data */

void FUN_0803d44c(undefined1 *param_1)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  undefined4 local_20;
  undefined2 local_1c;
  short sStack_1a;
  undefined4 local_18;
  
  iVar3 = *(int *)(param_1 + 0x10);
  if (param_1[6] == '\0') {
    *param_1 = 2;
    **(undefined2 **)(param_1 + 0xc0) = 0;
    *(undefined2 *)(*(int *)(param_1 + 0xc0) + 2) = 0x50;
    *(undefined2 *)(*(int *)(param_1 + 0xc0) + 4) = 0x68;
    **(undefined2 **)(param_1 + 0xc4) = 0;
    *(undefined2 *)(*(int *)(param_1 + 0xc4) + 2) = 0x50;
    *(undefined2 *)(*(int *)(param_1 + 0xc4) + 4) = 0xff98;
    *(undefined2 *)(*(int *)(param_1 + 0xc0) + 8) = 0;
    *(undefined2 *)(*(int *)(param_1 + 0xc0) + 10) = 0;
    *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0xc) = 0;
    *(undefined2 *)(*(int *)(param_1 + 0xc4) + 8) = 0;
    *(undefined2 *)(*(int *)(param_1 + 0xc4) + 10) = 0;
    *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0xc) = 0;
    *(undefined2 *)(*(int *)(param_1 + 0xc0) + 8) = 0xfb1e;
    *(undefined2 *)(*(int *)(param_1 + 0xc4) + 8) = 0x4e2;
    *(undefined2 *)(param_1 + 0x44) = 0x3c;
    param_1[6] = param_1[6] + '\x01';
  }
  else if (param_1[6] != '\x01') {
    halt_baddata();
  }
  local_20 = *(undefined4 *)(iVar3 + 0x2c);
  local_18 = *(undefined4 *)(iVar3 + 0x34);
  sStack_1a = (short)((uint)*(undefined4 *)(iVar3 + 0x30) >> 0x10);
  _local_1c = CONCAT22(sStack_1a + -0x50,(short)*(undefined4 *)(iVar3 + 0x30));
  sVar2 = func_0x0013b844(param_1,&local_20);
  func_0x0013b8f4(param_1,(int)sVar2,(int)*(short *)(param_1 + 0x44));
  func_0x00041ac0(param_1);
  uVar1 = *(ushort *)(param_1 + 0xb8);
  if (0x1000 < uVar1) {
    *(ushort *)(param_1 + 0xb8) = uVar1 - 0x80;
    if ((ushort)(uVar1 - 0x80) < 0x1001) {
      *(undefined2 *)(param_1 + 0xb8) = 0x1000;
    }
    *(undefined2 *)(param_1 + 0xbc) = *(undefined2 *)(param_1 + 0xb8);
    *(undefined2 *)(param_1 + 0xba) = *(undefined2 *)(param_1 + 0xb8);
  }
  iVar3 = func_0x0013b9c0(param_1,&local_20);
  if (iVar3 < 0x3d) {
    *(undefined2 *)(param_1 + 0xbc) = 0x1000;
    *(undefined2 *)(param_1 + 0xba) = 0x1000;
    *(undefined2 *)(param_1 + 0xb8) = 0x1000;
    param_1[6] = 0;
    param_1[5] = 4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_1[0xbe] == '\0') {
    *(short *)(param_1 + 0x58) = sVar2 + 0x400;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(short *)(param_1 + 0x58) = 0x1000 - (sVar2 + 0x400);
  *(ushort *)(param_1 + 0x58) = *(ushort *)(param_1 + 0x58) & 0xfff;
  if (param_1[1] != '\0') {
    func_0x000518fc(param_1);
  }
  return;
}

