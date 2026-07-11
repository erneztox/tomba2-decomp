/**
 * @brief Entity alloc dispatcher: switch on entity[10] type, different alloc paths
 * @note Original: func_8007AA38 at 0x8007AA38
 */
// Entity_AllocDispatch



s32 Entity_AllocDispatch(int param_1,uint param_2,s32 param_3,uint param_4)

{
  s32 uVar1;
  uint uVar2;
  
  if (*(u8 *)(param_1 + 10) == param_4) {
    uVar2 = param_2 & 0xff;
    uVar1 = 0;
    switch(param_2 >> 8 & 0x7f) {
    case 0:
      uVar1 = Entity_AllocPool0(param_1,uVar2);
      break;
    case 1:
      uVar1 = Entity_AllocPool1(param_1,uVar2);
      break;
    case 2:
      uVar1 = Entity_AllocPool2(param_1,uVar2);
      break;
    case 3:
      uVar1 = Entity_AllocPool3(param_1,uVar2);
      break;
    case 4:
      uVar1 = Entity_AllocPool4(param_1,uVar2);
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
