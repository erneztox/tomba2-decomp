// FUN_0802fffc

/* WARNING: Control flow encountered bad instruction data */

byte FUN_0802fffc(int param_1)

{
  byte bVar1;
  short sVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 == 1) {
    if (*(char *)(param_1 + 0x46) == '\0') {
      *(int *)(param_1 + 0x2c) =
           *(int *)(param_1 + 0x2c) +
           (int)*(short *)(param_1 + 0x44) * (int)*(short *)(param_1 + 0x48);
      *(short *)(param_1 + 0x44) = *(short *)(param_1 + 0x44) + *(short *)(param_1 + 0x4e);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    sVar2 = *(short *)(param_1 + 0x44);
    *(int *)(param_1 + 0x2c) =
         *(int *)(param_1 + 0x2c) - (int)sVar2 * (int)*(short *)(param_1 + 0x48);
    *(short *)(param_1 + 0x44) = *(short *)(param_1 + 0x44) + *(short *)(param_1 + 0x4e);
    *(int *)(param_1 + 0x34) =
         *(int *)(param_1 + 0x34) - (int)sVar2 * (int)*(short *)(param_1 + 0x4c);
    if (*(short *)(param_1 + 0x2e) < *(short *)(param_1 + 100)) {
      func_0x0004766c(param_1);
      func_0x0004954c(param_1,(int)*(short *)(param_1 + 0x80),0);
    }
    else {
      *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(param_1 + 100);
      *(undefined1 *)(param_1 + 6) = 0;
      *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x68);
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      if ((DAT_800e7ff4 & 4) != 0) {
        return DAT_800e7ff4 & 4;
      }
      iVar5 = func_0x0009a450();
      if (iVar5 % 3 == 0) {
        *(undefined2 *)(param_1 + 0x42) = 0x20;
        *(undefined1 *)(param_1 + 6) = 2;
      }
      else {
        if (iVar5 % 3 == 1) {
          *(undefined2 *)(param_1 + 0x44) = 0xc00;
          *(undefined1 *)(param_1 + 6) = 1;
          cVar4 = DAT_1f80017c;
          cVar3 = DAT_1f800146;
          *(undefined2 *)(param_1 + 0x4e) = 0xfe00;
          *(byte *)(param_1 + 0x46) = cVar4 + cVar3 & 1;
          uVar6 = func_0x0009a450();
          if (((uVar6 & 1) != 0) && (DAT_1f800137 != '\x01')) {
            func_0x00074590(0x81,0,0xffffffd8);
            halt_baddata();
          }
          return 0;
        }
        *(undefined2 *)(param_1 + 0x44) = 0x1800;
        *(undefined1 *)(param_1 + 6) = 1;
        cVar4 = DAT_1f80017c;
        cVar3 = DAT_1f800146;
        *(undefined2 *)(param_1 + 0x4e) = 0xfc00;
        *(byte *)(param_1 + 0x46) = cVar4 + cVar3 & 1;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (bVar1 == 2) {
    sVar2 = *(short *)(param_1 + 0x42);
    *(short *)(param_1 + 0x42) = sVar2 + -1;
    if (sVar2 != 1) {
      return 0;
    }
    *(undefined1 *)(param_1 + 6) = 0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

