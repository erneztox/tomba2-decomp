/**
 * @brief Entity draw child: updates child entity pos from parent with offset
 * @note Original: func_80068610 at 0x80068610
 */
// Entity_DrawChild



#include "tomba.h"
void FUN_80068610(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1->sub_action == '\0') {
    iVar1 = (uint)param_1->normal_z +
            ((int)((uint)*(ushort *)(param_2 + 0xc) << 0x10) >> 0x12);
    param_1->normal_z = (short)iVar1;
    if (0x500 < iVar1 * 0x10000 >> 0x10) {
      param_1->sub_action = param_1->sub_action + '\x01';
      return;
    }
  }
  else {
    iVar1 = (uint)param_1->normal_z -
            ((int)((uint)*(ushort *)(param_2 + 0xc) << 0x10) >> 0x12);
    param_1->normal_z = (short)iVar1;
    if (iVar1 * 0x10000 >> 0x10 < -0x200) {
      param_1->sub_action = 0;
    }
  }
  return;
}
