// FUN_8006a080

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8006a080(undefined1 *param_1)

{
  char *pcVar1;
  
  if (param_1[6] == '\0') {
    *(undefined2 *)(param_1 + 0x66) = 3;
    if ((DAT_800e7fc6 != '\0') && (_DAT_800e7fee != 0)) {
      DAT_800e7e85 = 0x19;
      DAT_800e7e86 = 0;
      DAT_800e7e87 = 0;
      param_1[6] = param_1[6] + '\x01';
    }
  }
  else if (param_1[6] == '\x01') {
    *(undefined2 *)(param_1 + 0x68) = _DAT_800e7ed6;
    *(undefined2 *)(param_1 + 0x6a) = _DAT_800e7ed8;
  }
  pcVar1 = _DAT_1f800208;
  if (_DAT_1f800208 != (char *)0x1) {
    if (_DAT_1f800208 != (char *)0x0) {
      if ((int)_DAT_1f800208 < 0) {
        if ((_DAT_1f800208[0xc] == '\x02') && (*_DAT_1f800208 != '\x01')) {
          _DAT_1f800208 = (char *)0x0;
          if ((DAT_1f80027b != '\x02') && (DAT_800e7fc6 == '\x04')) {
            DAT_800e7fc6 = '\0';
          }
        }
        else {
          *(short *)(param_1 + 0x2e) = *(short *)(_DAT_1f800208 + 0x2e) + *(short *)(param_1 + 0x60)
          ;
          *(short *)(param_1 + 0x32) = *(short *)(pcVar1 + 0x32) + *(short *)(param_1 + 0x62);
          *(short *)(param_1 + 0x36) = *(short *)(pcVar1 + 0x36) + *(short *)(param_1 + 100);
        }
      }
      else {
        FUN_80069cd8(param_1);
      }
    }
    FUN_80069858(param_1,0,1);
  }
  _DAT_1f800200 = *(undefined2 *)(param_1 + 0x2e);
  _DAT_1f800202 = *(undefined2 *)(param_1 + 0x32);
  _DAT_1f800204 = *(undefined2 *)(param_1 + 0x36);
  if (DAT_800e7fc6 == '\0') {
    *param_1 = 2;
    param_1[4] = param_1[4] + '\x01';
    DAT_800e7ef9 = 0;
    DAT_1f80023a = 0;
  }
  return;
}

