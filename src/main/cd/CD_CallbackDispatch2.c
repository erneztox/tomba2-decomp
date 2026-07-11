/**
 * @brief CD callback dispatch variant 2: calls function table at 0x800ABDA4/8
 * @note Original: func_80085CB4 at 0x80085CB4
 */
// CD_CallbackDispatch2



#include "tomba.h"
undefined2 * FUN_80085cb4(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined4 uVar5;
  
  puVar2 = DAT_800abda8;
  puVar1 = DAT_800abda4;
  puVar3 = (undefined2 *)0x0;
  if (DAT_800aad18 == 0) {
    *DAT_800abda8 = 0;
    *puVar1 = *puVar2;
    *DAT_800abdac = 0x33333333;
    FUN_800861bc(&DAT_800aad18,0x41a);
    iVar4 = FUN_8009ba10(&DAT_800aad50);
    if (iVar4 != 0) {
      FUN_80085d8c();
    }
    DAT_800aad54 = &DAT_800abd30;
    FUN_80086220(&DAT_800aad50);
    DAT_800aad18 = 1;
    uVar5 = FUN_80086230();
    PTR_PTR_800abda0->script_ptr = uVar5;
    uVar5 = FUN_80086350();
    *(undefined4 *)(PTR_PTR_800abda0 + 4) = uVar5;
    FUN_800861e8();
    puVar3 = &DAT_800aad18;
    FUN_800808a0();
  }
  return puVar3;
}
