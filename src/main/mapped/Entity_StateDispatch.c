/**
 * @brief Entity state dispatcher: switch on entity[0x6A] value, calls handlers
 * @note Original: func_8005314C at 0x8005314C
 */
// Entity_StateDispatch



void FUN_8005314c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = (uint)*(ushort *)(param_1 + 0x6a) << 0x10;
  switch(iVar1 >> 0x18 & 0xf) {
  case 0:
  case 3:
  case 4:
  case 8:
    break;
  default:
    goto switchD_80053190_caseD_1;
  case 5:
  case 6:
    if ((iVar1 >> 0x1c & 7U) == 0) {
      uVar2 = 0x8a;
      goto LAB_800531bc;
    }
    break;
  case 10:
    uVar2 = 0x90;
LAB_800531bc:
    uVar3 = 0xb;
    uVar4 = 0xffffffce;
    goto LAB_800531c4;
  }
  uVar2 = 3;
  uVar3 = 0;
  uVar4 = 0;
LAB_800531c4:
  FUN_80074590(uVar2,uVar3,uVar4);
switchD_80053190_caseD_1:
  return;
}
