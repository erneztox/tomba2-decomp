// FUN_000008d4

/* WARNING: Control flow encountered bad instruction data */

void FUN_000008d4(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0x10);
  *(undefined2 *)(param_1 + 0x98) = *(undefined2 *)(iVar3 + 0x98);
  *(undefined2 *)(param_1 + 0x9e) = *(undefined2 *)(iVar3 + 0x9e);
  *(undefined2 *)(param_1 + 0xa4) = *(undefined2 *)(iVar3 + 0xa4);
  *(undefined2 *)(param_1 + 0x9a) = *(undefined2 *)(iVar3 + 0x9a);
  *(undefined2 *)(param_1 + 0xa0) = *(undefined2 *)(iVar3 + 0xa0);
  *(undefined2 *)(param_1 + 0xa6) = *(undefined2 *)(iVar3 + 0xa6);
  *(undefined2 *)(param_1 + 0x9c) = *(undefined2 *)(iVar3 + 0x9c);
  *(undefined2 *)(param_1 + 0xa2) = *(undefined2 *)(iVar3 + 0xa2);
  *(undefined2 *)(param_1 + 0xa8) = *(undefined2 *)(iVar3 + 0xa8);
  func_0x000517bc(0x1f800000,(int)*(short *)(param_1 + 0xb8),(int)*(short *)(param_1 + 0xba),
                  (int)*(short *)(param_1 + 0xbc));
  func_0x00084360(0x1f800000,param_1 + 0x98);
  iVar4 = 0;
  *(short *)(param_1 + 0x2e) =
       *(short *)(iVar3 + 0x2e) -
       (short)((int)*(short *)(param_1 + 0x9a) * (int)*(short *)(param_1 + 0x84) >> 0xc);
  *(short *)(param_1 + 0x32) =
       *(short *)(iVar3 + 0x32) -
       (short)((int)*(short *)(param_1 + 0xa0) * (int)*(short *)(param_1 + 0x84) >> 0xc);
  sVar1 = *(short *)(iVar3 + 0x36);
  *(short *)(param_1 + 0x2e) =
       *(short *)(param_1 + 0x2e) + (short)(*(short *)(param_1 + 0x98) * 0x25 >> 0xb);
  *(short *)(param_1 + 0x36) =
       sVar1 - (short)((int)*(short *)(param_1 + 0xa6) * (int)*(short *)(param_1 + 0x84) >> 0xc);
  *(short *)(param_1 + 0x32) =
       *(short *)(param_1 + 0x32) + (short)(*(short *)(param_1 + 0x9e) * 0x25 >> 0xb);
  *(short *)(param_1 + 0x36) =
       *(short *)(param_1 + 0x36) + (short)(*(short *)(param_1 + 0xa4) * 0x25 >> 0xb);
  func_0x00084470(param_1 + 0x98,param_1 + 0x88,param_1 + 0xac);
  *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + (int)*(short *)(param_1 + 0x32);
  *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xac) + (int)*(short *)(param_1 + 0x2e);
  *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + (int)*(short *)(param_1 + 0x36);
  iVar3 = param_1;
  if (*(char *)(param_1 + 8) != '\0') {
    do {
      iVar2 = *(int *)(iVar3 + 0xc0);
      sVar1 = *(short *)(iVar2 + 6);
      func_0x000517bc(0x1f800000,(int)*(short *)(iVar2 + 0x38),(int)*(short *)(iVar2 + 0x3a),
                      (int)*(short *)(iVar2 + 0x3c));
      func_0x00085480(*(int *)(iVar3 + 0xc0) + 8,0x1f800020);
      func_0x00084110(0x1f800020,0x1f800000,0x1f800040);
      if (sVar1 < 0) {
        func_0x00084110(param_1 + 0x98,0x1f800040,*(int *)(iVar3 + 0xc0) + 0x18);
        func_0x00084220(*(int *)(iVar3 + 0xc0),*(int *)(iVar3 + 0xc0) + 0x2c);
        *(int *)(*(int *)(iVar3 + 0xc0) + 0x2c) =
             *(int *)(*(int *)(iVar3 + 0xc0) + 0x2c) + *(int *)(param_1 + 0xac);
        *(int *)(*(int *)(iVar3 + 0xc0) + 0x30) =
             *(int *)(*(int *)(iVar3 + 0xc0) + 0x30) + *(int *)(param_1 + 0xb0);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      iVar2 = param_1 + sVar1 * 4;
      func_0x00084110(*(int *)(iVar2 + 0xc0) + 0x18,0x1f800040,*(int *)(iVar3 + 0xc0) + 0x18);
      func_0x00084220(*(int *)(iVar3 + 0xc0),*(int *)(iVar3 + 0xc0) + 0x2c);
      *(int *)(*(int *)(iVar3 + 0xc0) + 0x2c) =
           *(int *)(*(int *)(iVar3 + 0xc0) + 0x2c) + *(int *)(*(int *)(iVar2 + 0xc0) + 0x2c);
      *(int *)(*(int *)(iVar3 + 0xc0) + 0x30) =
           *(int *)(*(int *)(iVar3 + 0xc0) + 0x30) + *(int *)(*(int *)(iVar2 + 0xc0) + 0x30);
      *(int *)(*(int *)(iVar3 + 0xc0) + 0x34) =
           *(int *)(*(int *)(iVar3 + 0xc0) + 0x34) + *(int *)(*(int *)(iVar2 + 0xc0) + 0x34);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar4 < (int)(uint)*(byte *)(param_1 + 8));
  }
  return;
}

