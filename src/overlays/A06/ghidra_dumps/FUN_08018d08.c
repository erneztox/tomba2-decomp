// FUN_08018d08

/* WARNING: Control flow encountered bad instruction data */

void FUN_08018d08(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if (*(char *)(param_2 + 0x5e) != '\0') {
    iVar1 = func_0x00022f04(param_1,param_2);
    if ((iVar1 != 0) && (uVar2 = func_0x0001dc9c(param_1,param_2,0,1), (uVar2 & 0x80) == 0)) {
      DAT_1f800182 = 0;
    }
    return;
  }
  uVar2 = (uint)*(byte *)(param_1 + 2);
  if (uVar2 < 0xb) {
                    /* WARNING: Could not emulate address calculation at 0x08018d58 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(uVar2 * 4 + -0x7fef6820))(*(undefined1 *)(uVar2 + 0x80142288));
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

