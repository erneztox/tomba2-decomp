// FUN_80039F4C

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80039f4c(int param_1)

{
  uint *puVar1;
  undefined2 uVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  undefined2 local_68;
  undefined2 local_66;
  undefined2 local_64;
  undefined2 local_60;
  undefined2 local_5e;
  undefined2 local_5c;
  undefined2 local_58;
  undefined2 local_56;
  undefined2 local_54;
  undefined2 local_50;
  undefined2 local_4e;
  undefined2 local_4c;
  char local_48 [32];
  undefined1 auStack_28 [8];
  
  FUN_8003f174(param_1,1);
  local_66 = 0xfff9;
  local_5e = 0xfff9;
  local_68 = 0xfffd;
  local_64 = 0xffff;
  local_60 = 5;
  local_5c = 0xffff;
  local_58 = 0xfffd;
  local_56 = 9;
  local_54 = 0xffff;
  local_50 = 5;
  local_4e = 9;
  local_4c = 0xffff;
  if (*(char *)(param_1 + 3) == '\x02') {
    pcVar6 = local_48;
    FUN_8009a5b0(pcVar6,PTR_s_Clear_800a3a8c);
    FUN_8009a490(pcVar6,&DAT_80014a1c);
  }
  else {
    pcVar6 = (&PTR_DAT_800a33cc)[*(short *)(param_1 + 0x60) * 3];
  }
  iVar5 = 0;
  if ((*(char *)(param_1 + 9) != '\0') && (iVar7 = param_1, *(char *)(param_1 + 8) != '\0')) {
    while (*pcVar6 != '\0') {
      iVar3 = FUN_80039e80(pcVar6,_DAT_800bf544);
      puVar1 = _DAT_800bf544;
      if (iVar3 != -1) {
        _DAT_800bf544 = _DAT_800bf544 + 10;
        FUN_80084660(*(int *)(iVar7 + 0xc0) + 0x18);
        FUN_80084690(*(int *)(iVar7 + 0xc0) + 0x18);
        iVar3 = FUN_8003f7d8(puVar1,&local_68,auStack_28);
        if (((-1 < iVar3 + -1) &&
            (((((ushort)puVar1[2] < 0x140 || ((ushort)puVar1[4] < 0x140)) ||
              ((ushort)puVar1[6] < 0x140)) || ((ushort)puVar1[8] < 0x140)))) &&
           (((*(ushort *)((int)puVar1 + 10) < 0xf0 || (*(ushort *)((int)puVar1 + 0x12) < 0xf0)) ||
            ((*(ushort *)((int)puVar1 + 0x1a) < 0xf0 || (*(ushort *)((int)puVar1 + 0x22) < 0xf0)))))
           ) {
          *(undefined1 *)((int)puVar1 + 7) = 0x2d;
          *(undefined2 *)((int)puVar1 + 0x16) = 0x1f;
          uVar2 = 0x7dff;
          if (*(char *)(param_1 + 3) == '\x02') {
            uVar2 = 0x7c7f;
          }
          *(undefined2 *)((int)puVar1 + 0xe) = uVar2;
          puVar4 = (uint *)(_DAT_800ed8c8 + (iVar3 + -1) * 4);
          *puVar1 = *puVar4 | 0x9000000;
          *puVar4 = (uint)puVar1;
        }
      }
      iVar5 = iVar5 + 1;
      pcVar6 = pcVar6 + 1;
      if ((int)(uint)*(byte *)(param_1 + 9) <= iVar5) {
        return;
      }
      iVar7 = iVar7 + 4;
      if ((int)(uint)*(byte *)(param_1 + 8) <= iVar5) {
        return;
      }
    }
  }
  return;
}

