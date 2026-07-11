// FUN_8011d66c

/* WARNING: Control flow encountered bad instruction data */

undefined1 * FUN_8011d66c(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (*(char *)(param_1 + 2) == '\x13') {
    iVar2 = func_0x8007a980(2,4,0);
    puVar3 = (undefined1 *)0x80120000;
    if (iVar2 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    iVar2 = func_0x8007a980(2,3,1);
    puVar3 = (undefined1 *)0x80120000;
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 0x1c) = 0x801273ac;
      *(undefined1 *)(iVar2 + 2) = *(undefined1 *)(param_1 + 2);
      uVar1 = *(undefined1 *)(param_1 + 3);
      *(undefined1 *)(iVar2 + 0x47) = 1;
      *(undefined1 *)(iVar2 + 3) = uVar1;
      *(undefined1 *)(iVar2 + 0x2a) = *(undefined1 *)(param_1 + 0x2a);
      iVar4 = func_0x8007a980(1,4,0);
      puVar3 = (undefined1 *)0x0;
      if (iVar4 != 0) {
        *(undefined4 *)(iVar4 + 0x1c) = 0x8012a454;
        *(undefined1 *)(iVar4 + 2) = 0x17;
        uVar1 = *(undefined1 *)(param_1 + 3);
        *(undefined1 *)(iVar4 + 0x47) = 0;
        *(undefined1 *)(iVar4 + 3) = uVar1;
        *(undefined1 *)(iVar4 + 0x2a) = *(undefined1 *)(param_1 + 0x2a);
        iVar5 = func_0x8007a980(1,4,0);
        puVar3 = (undefined1 *)0x0;
        if (iVar5 != 0) {
          *(undefined4 *)(iVar5 + 0x1c) = 0x8012a454;
          *(undefined1 *)(iVar5 + 2) = 0x17;
          uVar1 = *(undefined1 *)(param_1 + 3);
          *(undefined1 *)(iVar5 + 0x47) = 1;
          *(undefined1 *)(iVar5 + 3) = uVar1;
          *(undefined1 *)(iVar5 + 0x2a) = *(undefined1 *)(param_1 + 0x2a);
          if ((*(char *)(param_1 + 3) == '\0') || (*(char *)(param_1 + 3) == '\x04')) {
            puVar3 = (undefined1 *)FUN_8012674c(1,4,0);
            return puVar3;
          }
          iVar6 = func_0x8007a980(1,3,1);
          puVar3 = &DAT_80130000;
          if (iVar6 != 0) {
            *(undefined4 *)(iVar6 + 0x1c) = 0x8012a454;
            *(undefined1 *)(iVar6 + 2) = 0x17;
            uVar1 = *(undefined1 *)(param_1 + 3);
            *(undefined1 *)(iVar6 + 0x47) = 2;
            *(undefined1 *)(iVar6 + 3) = uVar1;
            puVar3 = (undefined1 *)(uint)*(byte *)(param_1 + 0x2a);
            *(byte *)(iVar6 + 0x2a) = *(byte *)(param_1 + 0x2a);
            *(int *)(param_1 + 0x10) = iVar2;
            *(int *)(iVar2 + 0x10) = param_1;
            *(int *)(param_1 + 0x14) = iVar4;
            *(int *)(iVar2 + 0x14) = iVar5;
            *(int *)(iVar4 + 0x10) = param_1;
            *(int *)(iVar5 + 0x10) = iVar2;
            *(int *)(iVar6 + 0x10) = iVar5;
            *(int *)(iVar6 + 0x14) = iVar4;
            *(int *)(iVar6 + 0x3c) = iVar2;
            *(int *)(iVar4 + 0x14) = iVar5;
            *(int *)(iVar4 + 0x3c) = iVar6;
            *(int *)(iVar5 + 0x14) = iVar4;
            *(int *)(iVar5 + 0x3c) = iVar6;
          }
        }
      }
    }
  }
  return puVar3;
}

