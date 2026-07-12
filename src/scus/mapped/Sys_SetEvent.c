/**
 * @brief Set system event state
 * @note Original: func_80011F4C at 0x80011F4C
 */
// Sys_SetEvent



undefined4 Sys_SetEvent(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined2 uVar3;
  int iVar4;
  int unaff_s6;
  undefined4 unaff_s7;
  undefined2 unaff_s8;
  
  iVar4 = 2000;
  do {
    iVar1 = Sys_SetEvent(param_1);
    iVar4 = iVar4 + -1;
    if (iVar1 != 0) {
      uVar2 = (uint)(*(int *)(param_1 + 8) == 0);
      *(uint *)(param_1 + 8) = uVar2;
      Sys_SetEvent(iVar1,*(undefined4 *)(param_1 + uVar2 * 4));
      Sys_SetEvent(iVar1);
      Sys_SetEvent();
      Sys_SetEvent(unaff_s6 + 0x70,iVar1);
      *(undefined4 *)(unaff_s6 + 0x7c) = unaff_s7;
      Sys_SetEvent(unaff_s6 + 0x78);
      iVar1 = unaff_s6 + 0x74;
      *(undefined2 *)(unaff_s6 + 0x82) = 200;
      *(undefined2 *)(unaff_s6 + 0x80) = 0x18;
      *(undefined1 *)(unaff_s6 + 0x84) = 0;
      *(undefined1 *)(unaff_s6 + 0x85) = 0;
      *(undefined2 *)(unaff_s6 + 0x88) = 0x100;
      *(undefined2 *)(unaff_s6 + 0x8a) = unaff_s8;
      uVar3 = (undefined2)iVar4;
      *(undefined2 *)(unaff_s6 + 0x86) = uVar3;
      Sys_SetEvent(iVar1);
      *(undefined4 *)(unaff_s6 + 0x90) = unaff_s7;
      Sys_SetEvent(unaff_s6 + 0x8c);
      *(undefined2 *)(unaff_s6 + 0x96) = 200;
      *(undefined2 *)(unaff_s6 + 0x94) = 0x118;
      *(undefined1 *)(unaff_s6 + 0x98) = 0;
      *(char *)(unaff_s6 + 0x99) = (char)unaff_s8;
      *(undefined2 *)(unaff_s6 + 0x9c) = 0x100;
      *(undefined2 *)(unaff_s6 + 0x9e) = unaff_s8;
      *(undefined2 *)(unaff_s6 + 0x9a) = uVar3;
      Sys_SetEvent(iVar1);
      *(undefined4 *)(unaff_s6 + 0xa4) = unaff_s7;
      Sys_SetEvent(unaff_s6 + 0xa0);
      *(undefined2 *)(unaff_s6 + 0xa8) = 0x218;
      *(undefined1 *)(unaff_s6 + 0xad) = 0x80;
      *(undefined2 *)(unaff_s6 + 0xaa) = 200;
      *(undefined1 *)(unaff_s6 + 0xac) = 0;
      *(undefined2 *)(unaff_s6 + 0xb0) = unaff_s8;
      *(undefined2 *)(unaff_s6 + 0xb2) = 0x20;
      *(undefined2 *)(unaff_s6 + 0xae) = uVar3;
      Sys_SetEvent(iVar1);
      Sys_SetEvent(0);
                    /* WARNING: Subroutine does not return */
      Sys_SetEvent(0);
    }
  } while (iVar4 != 0);
  return 0xffffffff;
}
