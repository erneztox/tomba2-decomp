/**
 * @brief Processes a 3D projection command from animation data.
 *        Extracts screen-space depth, passes it through GTE, and advances animation pointer.
 *        Falls through to Entity_AdvanceAnimScript on completion.
 * @note Original: func_80027E5C at 0x80027E5C
 */
// Entity_ProcessProjCmd

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Entity_ProcessProjCmd(int param_1)

{
  bool bVar1;
  undefined4 in_zero;
  undefined4 in_at;
  undefined4 uVar2;

  if (param_1->scale_y != 0) {
    setCopControlWord(2,0,_DAT_1f8000f8);
    setCopControlWord(2,0x800,_DAT_1f8000fc);
    setCopControlWord(2,0x1000,_DAT_1f800100);
    setCopControlWord(2,0x1800,_DAT_1f800104);
    setCopControlWord(2,0x2000,_DAT_1f800108);
    setCopControlWord(2,0x2800,_DAT_1f80010c);
    setCopControlWord(2,0x3000,_DAT_1f800110);
    setCopControlWord(2,0x3800,_DAT_1f800114);
    setCopControlWord(2,0xd800,6);
    setCopControlWord(2,0xe000,0);
    setCopReg(2,in_zero,*(undefined4 *)(param_1 + 0x2c));
    setCopReg(2,in_at,param_1->pos_y_fixed);
    copFunction(2,0x180001);
    _DAT_1f800080 = getCopControlWord(2,0xf800);
    bVar1 = true;
    if (-1 < _DAT_1f800080) {
      _DAT_1f800080 = getCopReg(2,0x13);
      if (0 < _DAT_1f800080) {
        // Compute Z-sort key for ordering table
        _DAT_1f800080 = (_DAT_1f800080 >> 2) + (int)*(short *)(param_1 + 0x32);
        if (_DAT_1f800080 < 4) {
          _DAT_1f800080 = 4;
        }
        _DAT_1f800080 =
             (_DAT_1f800080 >> (_DAT_1f800080 >> 10 & 0x1fU)) + (_DAT_1f800080 >> 10) * 0x200;
        if (0x7fb < _DAT_1f800080 - 4U) {
          _DAT_1f800080 = -1;
        }
        bVar1 = true;
        if (-1 < _DAT_1f800080) {
          _DAT_1f80008c = getCopReg(2,0xe);
          _DAT_1f800084 = getCopReg(2,0x18);
          bVar1 = false;
        }
      }
    }
    if (bVar1) {
      Entity_AdvanceAnimScript(param_1);
    }
    else {
      _DAT_1f800090 = 0;
      // Scale factor from entity->action_state (sprite size/priority)
      _DAT_1f800084 = (int)(_DAT_1f800084 * (uint)param_1->action_state) >> 4;
      _DAT_1f800088 = _DAT_1f800084;
      uVar2 = Entity_ProcessAnimFrame(param_1->scale_y,*(undefined4 *)(param_1 + 0x44));
      param_1->anim_data = uVar2;
    }
  }
  return;
}
