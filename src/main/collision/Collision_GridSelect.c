/**
 * @brief Collision grid selector: switch on DAT_800bf870, sets grid ptr
 * @note Original: func_80048D3C at 0x80048D3C
 */
// Collision_GridSelect



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80048d3c(void)

{
  ushort *puVar1;
  
  switch(DAT_800bf870) {
  case 2:
  case 3:
  case 7:
  case 0x14:
  case 0x15:
    break;
  default:
    DAT_1f8001fe = 1;
    _DAT_1f8001c8 = _DAT_800ecf74;
    puVar1 = (ushort *)(_DAT_800ecf74 + (uint)*(ushort *)(_DAT_800ecf74 + 2) * 2);
    _DAT_1f8001b2 = *puVar1;
    _DAT_1f8001b6 = puVar1->flags;
    _DAT_1f8001cc = puVar1 + 10;
    _DAT_1f8001b4 = puVar1->kind;
    _DAT_1f8001b8 = puVar1->sub_type;
    _DAT_1f8001ba = puVar1->state;
    _DAT_1f8001d0 = puVar1 + puVar1->action_state;
    _DAT_1f8001d4 = puVar1 + puVar1->sub_action;
    _DAT_1f8001d8 = puVar1 + puVar1->counter1;
    _DAT_1f8001dc = puVar1 + puVar1->counter2;
    DAT_1f8001fc = (undefined1)puVar1->behavior_state;
    DAT_1f8001fd = (undefined1)(puVar1->behavior_state >> 8);
    if (_DAT_1f8001b6 < _DAT_1f8001b2) {
      _DAT_1f8001ae = _DAT_1f8001b2 - _DAT_1f8001b6;
      _DAT_1f8001aa = _DAT_1f8001b6;
    }
    else {
      _DAT_1f8001ae = _DAT_1f8001b6 - _DAT_1f8001b2;
      _DAT_1f8001aa = _DAT_1f8001b2;
    }
    if (_DAT_1f8001b4 <= _DAT_1f8001b8) {
      _DAT_1f8001ac = _DAT_1f8001b4;
      _DAT_1f8001b0 = _DAT_1f8001b8 - _DAT_1f8001b4;
      return;
    }
    _DAT_1f8001b0 = _DAT_1f8001b4 - _DAT_1f8001b8;
    _DAT_1f8001ac = _DAT_1f8001b8;
  }
  return;
}
