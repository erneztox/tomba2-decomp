
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_800519e0(int param_1,uint param_2,int *param_3,undefined2 *param_4)

{
  undefined2 uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  int iVar5;
  int iVar6;
  
  if ((int)_DAT_800ed098 < (int)param_2) {
    uVar3 = 1;
    *(undefined1 *)(param_1 + 9) = 0;
    *(undefined1 *)(param_1 + 4) = 3;
  }
  else {
    iVar5 = 0;
    *(char *)(param_1 + 9) = (char)param_2;
    *(undefined2 *)(param_1 + 0xbc) = 0x1000;
    *(undefined2 *)(param_1 + 0xba) = 0x1000;
    *(undefined2 *)(param_1 + 0xb8) = 0x1000;
    *(char *)(param_1 + 8) = (char)param_2;
    *(undefined1 *)(param_1 + 0xd) = 0;
    iVar6 = param_1;
    piVar2 = param_3;
    if ((param_2 & 0xff) != 0) {
      do {
        iVar5 = iVar5 + 1;
        puVar4 = (undefined2 *)FUN_8007aae8();
        *(undefined2 **)(iVar6 + 0xc0) = puVar4;
        puVar4[3] = *param_4;
        *puVar4 = param_4[1];
        puVar4[1] = param_4[2];
        uVar1 = param_4[3];
        puVar4[0x1c] = 0x1000;
        puVar4[0x1d] = 0x1000;
        puVar4[0x1e] = 0x1000;
        puVar4[2] = uVar1;
        param_4 = param_4 + 4;
        *(int *)(puVar4 + 0x20) = (int)param_3 + piVar2[1];
        iVar6 = iVar6 + 4;
        piVar2 = piVar2 + 1;
      } while (iVar5 < (int)(uint)*(byte *)(param_1 + 9));
    }
    uVar3 = 0;
  }
  return uVar3;
}

