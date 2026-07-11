// FUN_0802f100

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0802f100(undefined1 *param_1)

{
  short *psVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined2 *puVar6;
  int iVar7;
  
  bVar2 = param_1[4];
  if (bVar2 == 1) {
    iVar7 = func_0x0007778c(param_1);
    if (iVar7 != 0) {
      func_0x000517f8(param_1);
    }
    bVar2 = param_1[5];
    if (bVar2 == 1) {
      if ((DAT_800bf9be & 2) == 0) {
        return;
      }
      func_0x00074590(0x1a,0x1b,0);
      func_0x00051b04(*(undefined4 *)(param_1 + 0xc0),0xc,0xf);
      param_1[5] = param_1[5] + '\x01';
    }
    else if (bVar2 < 2) {
      if (bVar2 == 0) {
        if (DAT_800bf8ce == -1) {
          if (DAT_800bf937 == '\0') {
            func_0x00051b04(*(undefined4 *)(param_1 + 0xc0),0xc,0xf);
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if ((DAT_800bfa4b & 2) == 0) {
            *(undefined2 *)(param_1 + 0x80) = 0x226;
            *(undefined2 *)(param_1 + 0x82) = 0x44c;
            *(undefined2 *)(param_1 + 0x84) = 200;
            *param_1 = 1;
            *(undefined2 *)(param_1 + 0x86) = 400;
            func_0x00051b04(*(undefined4 *)(param_1 + 0xc0),0xc,0xf);
            param_1[5] = 4;
          }
          else {
            param_1[5] = 10;
          }
        }
        else {
          param_1[5] = 1;
        }
      }
    }
    else {
      if (bVar2 == 2) {
        if ((DAT_800bf9be & 4) == 0) {
          return;
        }
        if (_DAT_800bf860 != 0) {
          *(ushort *)(*(int *)(param_1 + 0xc4) + 8) =
               *(short *)(*(int *)(_DAT_800bf860 + 0x38) + 2) * -0x200 + 0xa00U & 0xfff;
          *(short *)(*(int *)(param_1 + 200) + 8) = *(short *)(*(int *)(param_1 + 200) + 8) + 0x60;
        }
        if ((DAT_800bf9be & 8) == 0) {
          return;
        }
        iVar7 = *(int *)(param_1 + 0xc4);
        *(undefined2 *)(*(int *)(param_1 + 200) + 8) = 0;
        *(undefined2 *)(iVar7 + 8) = 0;
        param_1[5] = 10;
        halt_baddata();
      }
      if (bVar2 != 4) {
        halt_baddata();
      }
      bVar3 = param_1[6];
      if (bVar3 == 1) {
        if (DAT_800bfad9 != '\0') {
          func_0x00051b04(*(undefined4 *)(param_1 + 0xc0),0xc,0x13);
          DAT_800bfa4b = DAT_800bfa4b | 2;
          param_1[6] = param_1[6] + '\x01';
        }
      }
      else {
        if (bVar3 < 2) {
          if (bVar3 != 0) {
            halt_baddata();
          }
          if (param_1[0x2b] == '\x03') {
            DAT_800e7e85 = 0x21;
            DAT_800e7e86 = 0;
            DAT_800e7ee1 = 0;
            DAT_800e7e84 = bVar2;
            *param_1 = 2;
            func_0x00042354(1,1);
            func_0x00040cdc(param_1,0,0x8013ef30);
            param_1[0x70] = 2;
            param_1[6] = 1;
          }
          param_1[0x2b] = 0;
          halt_baddata();
        }
        if (bVar3 != 2) {
          halt_baddata();
        }
      }
      func_0x00041098(param_1);
      if (param_1[0x70] != -1) {
        return;
      }
      func_0x00042310();
      param_1[5] = 10;
      param_1[6] = 0;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (1 < bVar2) {
    if (bVar2 != 2) {
      if (bVar2 != 3) {
        halt_baddata();
      }
      func_0x0007a624(param_1);
    }
    return;
  }
  if (bVar2 != 0) {
    halt_baddata();
  }
  param_1[8] = 4;
  if (_DAT_800ed098 < 4) {
    param_1[4] = 3;
    halt_baddata();
  }
  param_1[9] = 4;
  iVar7 = 0;
  param_1[0xd] = 0;
  param_1[0xb] = 0;
  param_1[4] = param_1[4] + '\x01';
  if (param_1[8] != '\0') {
    puVar6 = (undefined2 *)&DAT_8013ef08;
    puVar5 = param_1;
    do {
      iVar7 = iVar7 + 1;
      iVar4 = func_0x0007aae8();
      *(int *)(puVar5 + 0xc0) = iVar4;
      *(undefined2 *)(iVar4 + 6) = *puVar6;
      **(undefined2 **)(puVar5 + 0xc0) = puVar6[1];
      *(undefined2 *)(*(int *)(puVar5 + 0xc0) + 2) = puVar6[2];
      *(undefined2 *)(*(int *)(puVar5 + 0xc0) + 4) = puVar6[3];
      *(undefined2 *)(*(int *)(puVar5 + 0xc0) + 8) = 0;
      *(undefined2 *)(*(int *)(puVar5 + 0xc0) + 10) = 0;
      *(undefined2 *)(*(int *)(puVar5 + 0xc0) + 0xc) = 0;
      psVar1 = puVar6 + 4;
      puVar6 = puVar6 + 5;
      func_0x00051b04(*(undefined4 *)(puVar5 + 0xc0),0xc,(int)*psVar1);
      puVar5 = puVar5 + 4;
    } while (iVar7 < (int)(uint)(byte)param_1[8]);
    halt_baddata();
  }
  return;
}

