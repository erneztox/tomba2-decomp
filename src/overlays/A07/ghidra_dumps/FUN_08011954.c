// FUN_08011954

/* WARNING: Control flow encountered bad instruction data */

void FUN_08011954(int param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  
  if (*(char *)(param_2 + 0x5e) == '\0') {
    if ((((int)((uint)*(ushort *)(param_1 + 0x84) +
                ((uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_2 + 0x32)) + 200 &
               0xffff) <= *(short *)(param_1 + 0x86) + 400) &&
        (uVar1 = *(ushort *)(param_1 + 0x80),
        (int)(((uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(param_2 + 0x2e)) +
              (uint)*(ushort *)(param_2 + 0x80) + (uint)uVar1 & 0xffff) <=
        (int)*(short *)(param_2 + 0x82) + (int)*(short *)(param_1 + 0x82))) &&
       ((int)*(short *)(param_1 + 0x36) <= *(short *)(param_2 + 0x36) + 0x32 + (int)(short)uVar1)) {
      *(ushort *)(param_1 + 0x36) = uVar1 + *(short *)(param_2 + 0x36) + 0x32;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x2e);
    uVar2 = *(ushort *)(param_2 + 0x2e);
    uVar3 = *(ushort *)(param_2 + 0x80);
    if ((((int)((uint)uVar3 + ((uint)uVar1 - (uint)uVar2) + 0x32 & 0xffff) <=
          *(short *)(param_2 + 0x82) + 100) &&
        ((int)((uint)*(ushort *)(param_2 + 0x84) +
               ((uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(param_2 + 0x36)) + 0x32 &
              0xffff) <= *(short *)(param_2 + 0x86) + 100)) &&
       ((int)((uint)*(ushort *)(param_1 + 0x84) +
              ((uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_2 + 0x32)) & 0xffff) <=
        *(short *)(param_1 + 0x86) + 0x80)) {
      if ((short)uVar2 + -0x14 + (int)(short)uVar3 < (int)(short)uVar1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if ((int)(short)uVar1 < ((short)uVar2 + 0x14) - (int)(short)uVar3) {
        *(ushort *)(param_1 + 0x2e) = (uVar2 + 0x14) - uVar3;
      }
      *(short *)(param_1 + 0x32) = *(short *)(param_2 + 0x32) - *(short *)(param_1 + 0x84);
      func_0x00022c78(param_1);
    }
  }
  return;
}

