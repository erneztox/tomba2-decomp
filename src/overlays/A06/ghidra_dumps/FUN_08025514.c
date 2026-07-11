// FUN_08025514

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08025514(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined2 *puVar4;
  int iVar5;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    iVar5 = func_0x000778e4(param_1,(int)(((uint)_DAT_1f8000e2 - (uint)*(ushort *)(param_1 + 0x32))
                                         * 0x10000) >> 0x10);
    if (iVar5 == 0) {
      return;
    }
    iVar5 = 5;
    if (((_DAT_1f80017c & 3) == 0) && (5 < (byte)param_1[8])) {
      puVar3 = param_1 + 0x14;
      do {
        iVar2 = *(int *)(puVar3 + 0xc0);
        *(short *)(iVar2 + 8) = *(short *)(iVar2 + 8) + *(short *)(iVar2 + 0x10);
        *(ushort *)(*(int *)(puVar3 + 0xc0) + 8) = *(ushort *)(*(int *)(puVar3 + 0xc0) + 8) & 0xfff;
        iVar2 = *(int *)(puVar3 + 0xc0);
        if ((*(short *)(iVar2 + 8) == 0x10) || (*(short *)(iVar2 + 8) == 0xff0)) {
          *(short *)(iVar2 + 0x10) = -*(short *)(iVar2 + 0x10);
        }
        iVar5 = iVar5 + 1;
        puVar3 = puVar3 + 4;
      } while (iVar5 < (int)(uint)(byte)param_1[8]);
    }
    func_0x000517f8(param_1);
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
      param_1[8] = 10;
      if (_DAT_800ed098 < 10) {
        param_1[4] = 3;
      }
      else {
        param_1[9] = 10;
        *(undefined2 *)(param_1 + 0x80) = 0x60;
        *(undefined2 *)(param_1 + 0x82) = 0xc0;
        *(undefined2 *)(param_1 + 0x86) = 0x180;
        iVar5 = 0;
        param_1[0xd] = 0;
        param_1[0xb] = 0;
        *param_1 = 1;
        param_1[0x29] = 0;
        *(undefined2 *)(param_1 + 0x84) = 0;
        param_1[4] = param_1[4] + '\x01';
        if (param_1[8] == '\0') {
          return;
        }
        puVar4 = (undefined2 *)&DAT_80144ed0;
        puVar3 = param_1;
        do {
          iVar2 = func_0x0007aae8();
          *(int *)(puVar3 + 0xc0) = iVar2;
          *(undefined2 *)(iVar2 + 6) = *puVar4;
          **(undefined2 **)(puVar3 + 0xc0) = puVar4[1];
          *(undefined2 *)(*(int *)(puVar3 + 0xc0) + 2) = puVar4[2];
          *(undefined2 *)(*(int *)(puVar3 + 0xc0) + 4) = puVar4[3];
          *(undefined2 *)(*(int *)(puVar3 + 0xc0) + 8) = 0;
          *(undefined2 *)(*(int *)(puVar3 + 0xc0) + 10) = 0;
          *(undefined2 *)(*(int *)(puVar3 + 0xc0) + 0xc) = 0;
          func_0x00051b04(*(undefined4 *)(puVar3 + 0xc0),0xc,iVar5 + 0x38);
          *(undefined2 *)(*(int *)(puVar3 + 0xc0) + 0x16) = 0;
          puVar4 = puVar4 + 4;
          *(char *)(*(int *)(puVar3 + 0xc0) + 0x3e) = (char)iVar5;
          *(undefined2 *)(*(int *)(puVar3 + 0xc0) + 0x10) = 0xfffe;
          iVar5 = iVar5 + 1;
          puVar3 = puVar3 + 4;
        } while (iVar5 < (int)(uint)(byte)param_1[8]);
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

