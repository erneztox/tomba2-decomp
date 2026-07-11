// FUN_08011478

/* WARNING: Control flow encountered bad instruction data */

void FUN_08011478(int param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  bVar1 = *(byte *)(param_1 + 0x51);
  *(byte *)(param_1 + 0x51) = bVar1 + 1;
  if (6 < bVar1) {
    iVar7 = *(int *)(param_1 + 8);
    func_0x0009a420(*(undefined4 *)(param_1 + 0x14),0,0x980);
    func_0x0018a428(*(undefined4 *)(param_1 + 0x14));
    puVar2 = (undefined4 *)&DAT_800bf870;
    DAT_800bf9eb = 0;
    puVar3 = (undefined4 *)(*(int *)(param_1 + 0x14) + 0x380);
    if (((uint)puVar3 & 3) != 0) {
      do {
        uVar4 = puVar2[1];
        uVar5 = puVar2[2];
        uVar6 = puVar2[3];
        *puVar3 = *puVar2;
        puVar3[1] = uVar4;
        puVar3[2] = uVar5;
        puVar3[3] = uVar6;
        puVar2 = puVar2 + 4;
        puVar3 = puVar3 + 4;
      } while (puVar2 != (undefined4 *)0x800bfe60);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    do {
      uVar4 = puVar2[1];
      uVar5 = puVar2[2];
      uVar6 = puVar2[3];
      *puVar3 = *puVar2;
      puVar3[1] = uVar4;
      puVar3[2] = uVar5;
      puVar3[3] = uVar6;
      puVar2 = puVar2 + 4;
      puVar3 = puVar3 + 4;
    } while (puVar2 != (undefined4 *)0x800bfe60);
    *puVar3 = uRam800bfe60;
    iVar7 = func_0x0018aeb8(*(undefined4 *)(param_1 + 0x14),*(undefined1 *)(param_1 + 0x46),
                            iVar7 + (uint)*(byte *)(param_1 + 0x47) * 0x3c + 4);
    if (iVar7 == 1) {
      *(undefined1 *)(param_1 + 2) = 0;
      *(undefined1 *)(param_1 + 0x3f) = 6;
      halt_baddata();
    }
    if (iVar7 < 2) {
      if (iVar7 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if ((*(char *)(param_1 + 0x46) == -1) ||
         (bVar1 = *(char *)(param_1 + 0x5a) + 1, *(byte *)(param_1 + 0x5a) = bVar1, 2 < bVar1)) {
        func_0x0001cba8(param_1,*(undefined1 *)(param_1 + 0x46));
        *(undefined1 *)(param_1 + 0x3e) = 2;
        *(undefined1 *)(param_1 + 0x3f) = 0;
        *(undefined1 *)(param_1 + 0x40) = 0;
        halt_baddata();
      }
    }
    else {
      if (iVar7 != 2) {
        halt_baddata();
      }
      *(undefined1 *)(param_1 + 0x5a) = 0;
    }
    *(undefined1 *)(param_1 + 0x51) = 0;
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}

