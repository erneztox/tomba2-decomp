/**
 * @brief Modulates color values in OT primitives for fade/brightness effects
 * @note Original: func_8003D584 at 0x8003D584
 */
// GPU_ModulateOTColors



void FUN_8003d584(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  
  pbVar3 = (byte *)(param_2 + 6);
joined_r0x8003d588:
  if (param_3 <= param_2) {
    return;
  }
  switch(pbVar3[1] & 0xfc) {
  case 0x20:
    pbVar3 = pbVar3 + 0x14;
    param_2 = param_2 + 0x14;
    goto joined_r0x8003d588;
  case 0x24:
    uVar4 = (uint)*(byte *)(param_1 + 0x18);
    if (uVar4 < 0x81) {
      if (-1 < (int)(uVar4 << 0x18)) {
        iVar1 = uVar4 + (pbVar3[-2] - 0x7f);
        bVar2 = (byte)iVar1;
        if (iVar1 < 0) {
          bVar2 = 0;
        }
        goto LAB_8003dcc8;
      }
    }
    else {
      bVar2 = (byte)(uVar4 + pbVar3[-2]);
      if (0xff < uVar4 + pbVar3[-2]) {
        bVar2 = 0xff;
      }
LAB_8003dcc8:
      pbVar3[-2] = bVar2;
    }
    uVar4 = (uint)*(byte *)(param_1 + 0x19);
    if (uVar4 < 0x81) {
      if (-1 < (int)(uVar4 << 0x18)) {
        iVar1 = uVar4 + (pbVar3[-1] - 0x7f);
        bVar2 = (byte)iVar1;
        if (iVar1 < 0) {
          bVar2 = 0;
        }
        goto LAB_8003dd28;
      }
    }
    else {
      bVar2 = (byte)(uVar4 + pbVar3[-1]);
      if (0xff < uVar4 + pbVar3[-1]) {
        bVar2 = 0xff;
      }
LAB_8003dd28:
      pbVar3[-1] = bVar2;
    }
    uVar4 = (uint)*(byte *)(param_1 + 0x1a);
    if (uVar4 < 0x81) {
      if (-1 < (int)(uVar4 << 0x18)) {
        iVar1 = uVar4 + (*pbVar3 - 0x7f);
        bVar2 = (byte)iVar1;
        if (iVar1 < 0) {
          bVar2 = 0;
        }
        goto LAB_8003dd88;
      }
    }
    else {
      bVar2 = (byte)(uVar4 + *pbVar3);
      if (0xff < uVar4 + *pbVar3) {
        bVar2 = 0xff;
      }
LAB_8003dd88:
      *pbVar3 = bVar2;
    }
    pbVar3 = pbVar3 + 0x20;
    param_2 = param_2 + 0x20;
    goto joined_r0x8003d588;
  case 0x28:
    pbVar3 = pbVar3 + 0x18;
    param_2 = param_2 + 0x18;
    goto joined_r0x8003d588;
  case 0x2c:
    uVar4 = (uint)*(byte *)(param_1 + 0x18);
    if (uVar4 < 0x81) {
      if (-1 < (int)(uVar4 << 0x18)) {
        iVar1 = uVar4 + (pbVar3[-2] - 0x7f);
        bVar2 = (byte)iVar1;
        if (iVar1 < 0) {
          bVar2 = 0;
        }
        goto LAB_8003ddf4;
      }
    }
    else {
      bVar2 = (byte)(uVar4 + pbVar3[-2]);
      if (0xff < uVar4 + pbVar3[-2]) {
        bVar2 = 0xff;
      }
LAB_8003ddf4:
      pbVar3[-2] = bVar2;
    }
    uVar4 = (uint)*(byte *)(param_1 + 0x19);
    if (uVar4 < 0x81) {
      if (-1 < (int)(uVar4 << 0x18)) {
        iVar1 = uVar4 + (pbVar3[-1] - 0x7f);
        bVar2 = (byte)iVar1;
        if (iVar1 < 0) {
          bVar2 = 0;
        }
        goto LAB_8003de54;
      }
    }
    else {
      bVar2 = (byte)(uVar4 + pbVar3[-1]);
      if (0xff < uVar4 + pbVar3[-1]) {
        bVar2 = 0xff;
      }
LAB_8003de54:
      pbVar3[-1] = bVar2;
    }
    uVar4 = (uint)*(byte *)(param_1 + 0x1a);
    if (uVar4 < 0x81) {
      if ((int)(uVar4 << 0x18) < 0) break;
      iVar1 = uVar4 + (*pbVar3 - 0x7f);
      bVar2 = (byte)iVar1;
      if (iVar1 < 0) {
        bVar2 = 0;
      }
    }
    else {
      bVar2 = (byte)(uVar4 + *pbVar3);
      if (0xff < uVar4 + *pbVar3) {
        bVar2 = 0xff;
      }
    }
    *pbVar3 = bVar2;
    break;
  case 0x30:
    pbVar3 = pbVar3 + 0x1c;
    param_2 = param_2 + 0x1c;
    goto joined_r0x8003d588;
  case 0x34:
    uVar4 = (uint)*(byte *)(param_1 + 0x18);
    if (uVar4 < 0x81) {
      if (-1 < (int)(uVar4 << 0x18)) {
        iVar1 = uVar4 + (pbVar3[-2] - 0x7f);
        if (iVar1 < 0) {
          iVar1 = 0;
        }
        pbVar3[-2] = (byte)iVar1;
        iVar1 = (uint)*(byte *)(param_1 + 0x18) + (pbVar3[10] - 0x7f);
        bVar2 = (byte)iVar1;
        if (iVar1 < 0) {
          bVar2 = 0;
        }
        pbVar3[10] = bVar2;
        iVar1 = (uint)*(byte *)(param_1 + 0x18) + (pbVar3[0x16] - 0x7f);
        bVar2 = (byte)iVar1;
        if (iVar1 < 0) {
          bVar2 = 0;
        }
        pbVar3[0x16] = bVar2;
      }
    }
    else {
      uVar4 = uVar4 + pbVar3[-2];
      if (0xff < uVar4) {
        uVar4 = 0xff;
      }
      pbVar3[-2] = (byte)uVar4;
      uVar4 = (uint)pbVar3[10] + (uint)*(byte *)(param_1 + 0x18);
      if (0xff < uVar4) {
        uVar4 = 0xff;
      }
      pbVar3[10] = (byte)uVar4;
      uVar4 = (uint)pbVar3[0x16] + (uint)*(byte *)(param_1 + 0x18);
      bVar2 = (byte)uVar4;
      if (0xff < uVar4) {
        bVar2 = 0xff;
      }
      pbVar3[0x16] = bVar2;
    }
    uVar4 = (uint)*(byte *)(param_1 + 0x19);
    if (uVar4 < 0x81) {
      if (-1 < (int)(uVar4 << 0x18)) {
        iVar1 = uVar4 + (pbVar3[-1] - 0x7f);
        if (iVar1 < 0) {
          iVar1 = 0;
        }
        pbVar3[-1] = (byte)iVar1;
        iVar1 = (uint)*(byte *)(param_1 + 0x19) + (pbVar3[0xb] - 0x7f);
        bVar2 = (byte)iVar1;
        if (iVar1 < 0) {
          bVar2 = 0;
        }
        pbVar3[0xb] = bVar2;
        iVar1 = (uint)*(byte *)(param_1 + 0x19) + (pbVar3[0x17] - 0x7f);
        bVar2 = (byte)iVar1;
        if (iVar1 < 0) {
          bVar2 = 0;
        }
        pbVar3[0x17] = bVar2;
      }
    }
    else {
      uVar4 = uVar4 + pbVar3[-1];
      if (0xff < uVar4) {
        uVar4 = 0xff;
      }
      pbVar3[-1] = (byte)uVar4;
      uVar4 = (uint)pbVar3[0xb] + (uint)*(byte *)(param_1 + 0x19);
      if (0xff < uVar4) {
        uVar4 = 0xff;
      }
      pbVar3[0xb] = (byte)uVar4;
      uVar4 = (uint)pbVar3[0x17] + (uint)*(byte *)(param_1 + 0x19);
      bVar2 = (byte)uVar4;
      if (0xff < uVar4) {
        bVar2 = 0xff;
      }
      pbVar3[0x17] = bVar2;
    }
    uVar4 = (uint)*(byte *)(param_1 + 0x1a);
    if (uVar4 < 0x81) {
      if (-1 < (int)(uVar4 << 0x18)) {
        iVar1 = uVar4 + (*pbVar3 - 0x7f);
        if (iVar1 < 0) {
          iVar1 = 0;
        }
        *pbVar3 = (byte)iVar1;
        iVar1 = (uint)*(byte *)(param_1 + 0x1a) + (pbVar3[0xc] - 0x7f);
        bVar2 = (byte)iVar1;
        if (iVar1 < 0) {
          bVar2 = 0;
        }
        pbVar3[0xc] = bVar2;
        iVar1 = (uint)*(byte *)(param_1 + 0x1a) + (pbVar3[0x18] - 0x7f);
        bVar2 = (byte)iVar1;
        if (iVar1 < 0) {
          bVar2 = 0;
        }
        pbVar3[0x18] = bVar2;
      }
    }
    else {
      uVar4 = uVar4 + *pbVar3;
      if (0xff < uVar4) {
        uVar4 = 0xff;
      }
      *pbVar3 = (byte)uVar4;
      uVar4 = (uint)pbVar3[0xc] + (uint)*(byte *)(param_1 + 0x1a);
      if (0xff < uVar4) {
        uVar4 = 0xff;
      }
      pbVar3[0xc] = (byte)uVar4;
      uVar4 = (uint)pbVar3[0x18] + (uint)*(byte *)(param_1 + 0x1a);
      bVar2 = (byte)uVar4;
      if (0xff < uVar4) {
        bVar2 = 0xff;
      }
      pbVar3[0x18] = bVar2;
    }
    break;
  case 0x38:
    pbVar3 = pbVar3 + 0x24;
    param_2 = param_2 + 0x24;
    goto joined_r0x8003d588;
  case 0x3c:
    uVar4 = (uint)*(byte *)(param_1 + 0x18);
    if (uVar4 < 0x81) {
      if (-1 < (int)(uVar4 << 0x18)) {
        iVar1 = uVar4 + (pbVar3[-2] - 0x7f);
        if (iVar1 < 0) {
          iVar1 = 0;
        }
        pbVar3[-2] = (byte)iVar1;
        iVar1 = (uint)*(byte *)(param_1 + 0x18) + (pbVar3[10] - 0x7f);
        bVar2 = (byte)iVar1;
        if (iVar1 < 0) {
          bVar2 = 0;
        }
        pbVar3[10] = bVar2;
        iVar1 = (uint)*(byte *)(param_1 + 0x18) + (pbVar3[0x16] - 0x7f);
        bVar2 = (byte)iVar1;
        if (iVar1 < 0) {
          bVar2 = 0;
        }
        pbVar3[0x16] = bVar2;
        iVar1 = (uint)*(byte *)(param_1 + 0x18) + (pbVar3[0x22] - 0x7f);
        bVar2 = (byte)iVar1;
        if (iVar1 < 0) {
          bVar2 = 0;
        }
        pbVar3[0x22] = bVar2;
      }
    }
    else {
      uVar4 = uVar4 + pbVar3[-2];
      if (0xff < uVar4) {
        uVar4 = 0xff;
      }
      pbVar3[-2] = (byte)uVar4;
      uVar4 = (uint)pbVar3[10] + (uint)*(byte *)(param_1 + 0x18);
      if (0xff < uVar4) {
        uVar4 = 0xff;
      }
      pbVar3[10] = (byte)uVar4;
      uVar4 = (uint)pbVar3[0x16] + (uint)*(byte *)(param_1 + 0x18);
      if (0xff < uVar4) {
        uVar4 = 0xff;
      }
      pbVar3[0x16] = (byte)uVar4;
      uVar4 = (uint)pbVar3[0x22] + (uint)*(byte *)(param_1 + 0x18);
      bVar2 = (byte)uVar4;
      if (0xff < uVar4) {
        bVar2 = 0xff;
      }
      pbVar3[0x22] = bVar2;
    }
    uVar4 = (uint)*(byte *)(param_1 + 0x19);
    if (uVar4 < 0x81) {
      if (-1 < (int)(uVar4 << 0x18)) {
        iVar1 = uVar4 + (pbVar3[-1] - 0x7f);
        if (iVar1 < 0) {
          iVar1 = 0;
        }
        pbVar3[-1] = (byte)iVar1;
        iVar1 = (uint)*(byte *)(param_1 + 0x19) + (pbVar3[0xb] - 0x7f);
        bVar2 = (byte)iVar1;
        if (iVar1 < 0) {
          bVar2 = 0;
        }
        pbVar3[0xb] = bVar2;
        iVar1 = (uint)*(byte *)(param_1 + 0x19) + (pbVar3[0x17] - 0x7f);
        bVar2 = (byte)iVar1;
        if (iVar1 < 0) {
          bVar2 = 0;
        }
        pbVar3[0x17] = bVar2;
        iVar1 = (uint)*(byte *)(param_1 + 0x19) + (pbVar3[0x23] - 0x7f);
        bVar2 = (byte)iVar1;
        if (iVar1 < 0) {
          bVar2 = 0;
        }
        pbVar3[0x23] = bVar2;
      }
    }
    else {
      uVar4 = uVar4 + pbVar3[-1];
      if (0xff < uVar4) {
        uVar4 = 0xff;
      }
      pbVar3[-1] = (byte)uVar4;
      uVar4 = (uint)pbVar3[0xb] + (uint)*(byte *)(param_1 + 0x19);
      if (0xff < uVar4) {
        uVar4 = 0xff;
      }
      pbVar3[0xb] = (byte)uVar4;
      uVar4 = (uint)pbVar3[0x17] + (uint)*(byte *)(param_1 + 0x19);
      if (0xff < uVar4) {
        uVar4 = 0xff;
      }
      pbVar3[0x17] = (byte)uVar4;
      uVar4 = (uint)pbVar3[0x23] + (uint)*(byte *)(param_1 + 0x19);
      bVar2 = (byte)uVar4;
      if (0xff < uVar4) {
        bVar2 = 0xff;
      }
      pbVar3[0x23] = bVar2;
    }
    uVar4 = (uint)*(byte *)(param_1 + 0x1a);
    if (uVar4 < 0x81) {
      if (-1 < (int)(uVar4 << 0x18)) {
        iVar1 = uVar4 + (*pbVar3 - 0x7f);
        if (iVar1 < 0) {
          iVar1 = 0;
        }
        *pbVar3 = (byte)iVar1;
        iVar1 = (uint)*(byte *)(param_1 + 0x1a) + (pbVar3[0xc] - 0x7f);
        bVar2 = (byte)iVar1;
        if (iVar1 < 0) {
          bVar2 = 0;
        }
        pbVar3[0xc] = bVar2;
        iVar1 = (uint)*(byte *)(param_1 + 0x1a) + (pbVar3[0x18] - 0x7f);
        bVar2 = (byte)iVar1;
        if (iVar1 < 0) {
          bVar2 = 0;
        }
        pbVar3[0x18] = bVar2;
        iVar1 = (uint)*(byte *)(param_1 + 0x1a) + (pbVar3[0x24] - 0x7f);
        bVar2 = (byte)iVar1;
        if (iVar1 < 0) {
          bVar2 = 0;
        }
        pbVar3[0x24] = bVar2;
      }
    }
    else {
      uVar4 = uVar4 + *pbVar3;
      if (0xff < uVar4) {
        uVar4 = 0xff;
      }
      *pbVar3 = (byte)uVar4;
      uVar4 = (uint)pbVar3[0xc] + (uint)*(byte *)(param_1 + 0x1a);
      if (0xff < uVar4) {
        uVar4 = 0xff;
      }
      pbVar3[0xc] = (byte)uVar4;
      uVar4 = (uint)pbVar3[0x18] + (uint)*(byte *)(param_1 + 0x1a);
      if (0xff < uVar4) {
        uVar4 = 0xff;
      }
      pbVar3[0x18] = (byte)uVar4;
      uVar4 = (uint)pbVar3[0x24] + (uint)*(byte *)(param_1 + 0x1a);
      bVar2 = (byte)uVar4;
      if (0xff < uVar4) {
        bVar2 = 0xff;
      }
      pbVar3[0x24] = bVar2;
    }
    pbVar3 = pbVar3 + 0x34;
    param_2 = param_2 + 0x34;
  default:
    goto joined_r0x8003d588;
  }
  pbVar3 = pbVar3 + 0x28;
  param_2 = param_2 + 0x28;
  goto joined_r0x8003d588;
}
