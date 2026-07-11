/**
 * @brief UI panel drawer: renders 9-slice panel with text
 * @note Original: func_8004F514 at 0x8004F514
 */
// UI_PanelDraw



void FUN_8004f514(int param_1)

{
  byte bVar1;
  short sVar2;
  undefined4 uVar3;
  short sVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  sVar2 = *(short *)(param_1 + 10);
  if (sVar2 == 0) {
    sVar4 = 0x1e;
    if (DAT_1f800137 == '\x01') {
      sVar4 = 0x10;
    }
  }
  else {
    sVar4 = 1;
    if ((sVar2 < 4) && (sVar4 = 0x14, 1 < sVar2)) {
      sVar4 = 10;
    }
  }
  sVar2 = *(short *)(param_1 + 4) + 1;
  *(short *)(param_1 + 4) = sVar2;
  if (sVar4 <= sVar2) {
    iVar7 = 0;
    if (0 < *(short *)(param_1 + 8)) {
      puVar5 = (undefined1 *)(param_1 + 0x17);
      iVar6 = param_1 + 0x49;
      do {
        bVar1 = puVar5[-3] + 1;
        puVar5[-3] = bVar1;
        if (bVar1 < 3) {
          if (bVar1 < (byte)puVar5[-2]) {
            local_34 = *(undefined4 *)(puVar5 + 0x65);
            local_30 = *(undefined4 *)(puVar5 + 0x69);
            local_2c = *(undefined4 *)(puVar5 + 0x6d);
            local_28 = *(undefined4 *)(puVar5 + 0x71);
            local_24 = *(undefined4 *)(puVar5 + 0x75);
            local_20 = *(undefined4 *)(puVar5 + 0x79);
            local_1c = *(undefined4 *)(puVar5 + 0x7d);
            if (*(int *)(puVar5 + 0x61) == 0) {
              FUN_8004f058(iVar6,&local_34,puVar5[-3]);
            }
            else {
              uVar3 = FUN_8004ef8c(*(int *)(puVar5 + 0x61),puVar5[-3]);
              FUN_8004ef54(iVar6,uVar3);
            }
            puVar5[-1] = 1;
            *puVar5 = 0;
          }
        }
        else {
          puVar5[-1] = 2;
          *(undefined2 *)(puVar5 + 3) = 0x400;
          *(undefined2 *)(puVar5 + 1) = *(undefined2 *)(puVar5 + -7);
        }
        iVar7 = iVar7 + 1;
        puVar5 = puVar5 + 0x8c;
        iVar6 = iVar6 + 0x8c;
      } while (iVar7 < *(short *)(param_1 + 8));
    }
    *(undefined2 *)(param_1 + 4) = 8;
    param_1->flags = 3;
  }
  return;
}
