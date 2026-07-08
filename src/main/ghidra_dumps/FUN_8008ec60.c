
void FUN_8008ec60(short param_1,short param_2,char param_3)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)(*(int *)(&DAT_80104c30 + param_1 * 4) + param_2 * 0xb0);
  if (param_3 == '\x14') {
    *(undefined1 *)((int)puVar3 + 0x1b) = 0x14;
    *(undefined1 *)(puVar3 + 7) = 1;
    uVar2 = FUN_80090160();
    puVar3[0x24] = uVar2;
    puVar3[2] = *puVar3;
  }
  else {
    if (param_3 == '\x1e') {
      bVar1 = *(byte *)((int)puVar3 + 0x1d);
      *(undefined1 *)((int)puVar3 + 0x1b) = 0x1e;
      if (bVar1 != 0) {
        if (0x7e < bVar1) {
          FUN_80090160();
          puVar3[0x24] = 0;
          *puVar3 = puVar3[2];
          return;
        }
        *(byte *)((int)puVar3 + 0x1d) = bVar1 - 1;
        uVar2 = FUN_80090160();
        puVar3[0x24] = uVar2;
        if (*(char *)((int)puVar3 + 0x1d) != '\0') {
          *puVar3 = puVar3[2];
          return;
        }
        *(undefined1 *)((int)puVar3 + 0x15) = 0;
        return;
      }
      *(undefined1 *)((int)puVar3 + 0x15) = 0;
    }
    else {
      *(char *)((int)puVar3 + 0x1b) = param_3;
      *(char *)((int)puVar3 + 0x1f) = *(char *)((int)puVar3 + 0x1f) + '\x01';
    }
    uVar2 = FUN_80090160((int)param_1,(int)param_2);
    puVar3[0x24] = uVar2;
  }
  return;
}

