// FUN_80127b28

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_80127b28(int param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int in_t0;
  uint in_t1;
  int in_t2;
  uint in_t3;
  undefined8 uVar7;
  short local_20 [12];
  
  if ((*(ushort *)(param_1 + 0x60) & 1) == 0) {
    uVar6 = (uint)DAT_800e7eaa;
    if (uVar6 - 0xe < 0xe) {
      if (uVar6 - 0x13 < 5) goto LAB_80130d4c;
      iVar4 = (uint)*(ushort *)(*(int *)(param_1 + 200) + 0x2c) -
              (uint)*(ushort *)(*(int *)(param_1 + 0xc0) + 0x2c);
      local_20[0] = (short)iVar4;
      iVar3 = (uint)*(ushort *)(*(int *)(param_1 + 200) + 0x30) -
              (uint)*(ushort *)(*(int *)(param_1 + 0xc0) + 0x30);
      local_20[1] = (short)iVar3;
      iVar5 = (uint)*(ushort *)(*(int *)(param_1 + 200) + 0x34) -
              (uint)*(ushort *)(*(int *)(param_1 + 0xc0) + 0x34);
      local_20[2] = (short)iVar5;
      iVar5 = func_0x80077a4c(param_1,iVar4 * 0x10000 >> 0x10,iVar3 * 0x10000 >> 0x10,
                              iVar5 * 0x10000 >> 0x10);
      if (iVar5 != 0) {
        return 1;
      }
    }
  }
  else if (DAT_800e7eaa < 0xc) {
    iVar5 = 0;
    if ((*(ushort *)(param_1 + 0x60) & 2) == 0) {
      if ((DAT_800bf89c != '\x02') && (DAT_800e7eaa == 1)) {
        return 0;
      }
      iVar4 = 0;
      iVar5 = 0;
      do {
        iVar4 = iVar4 + 1;
        iVar3 = param_1 + iVar4 * 4;
        *(short *)((int)local_20 + iVar5) =
             *(short *)(*(int *)(iVar3 + 0xc0) + 0x2c) - *(short *)(*(int *)(param_1 + 0xc0) + 0x2c)
        ;
        *(short *)((int)local_20 + iVar5 + 2) =
             *(short *)(*(int *)(iVar3 + 0xc0) + 0x30) - *(short *)(*(int *)(param_1 + 0xc0) + 0x30)
        ;
        *(short *)((int)local_20 + iVar5 + 4) =
             *(short *)(*(int *)(iVar3 + 0xc0) + 0x34) - *(short *)(*(int *)(param_1 + 0xc0) + 0x34)
        ;
        iVar5 = iVar4 * 8;
      } while (iVar4 < 2);
      iVar5 = func_0x80077a4c(param_1,(int)local_20[0],(int)local_20[1],(int)local_20[2]);
      if (iVar5 != 0) {
        return 1;
      }
      param_2 = (int)local_20[4];
      uVar7 = func_0x80077a4c(param_1,param_2,(int)local_20[5],(int)local_20[6]);
    }
    else {
      iVar4 = 0;
      do {
        iVar5 = iVar5 + 1;
        iVar3 = param_1 + iVar5 * 4;
        *(short *)((int)local_20 + iVar4) =
             *(short *)(*(int *)(iVar3 + 0xc0) + 0x2c) - *(short *)(*(int *)(param_1 + 0xc0) + 0x2c)
        ;
        *(short *)((int)local_20 + iVar4 + 2) =
             *(short *)(*(int *)(iVar3 + 0xc0) + 0x30) - *(short *)(*(int *)(param_1 + 0xc0) + 0x30)
        ;
        *(short *)((int)local_20 + iVar4 + 4) =
             *(short *)(*(int *)(iVar3 + 0xc0) + 0x34) - *(short *)(*(int *)(param_1 + 0xc0) + 0x34)
        ;
        iVar4 = iVar5 * 8;
      } while (iVar5 < 3);
      iVar5 = func_0x80077a4c(param_1,(int)local_20[0],(int)local_20[1],(int)local_20[2]);
      if (iVar5 != 0) {
        return 1;
      }
      iVar5 = func_0x80077a4c(param_1,(int)local_20[4],(int)local_20[5],(int)local_20[6]);
      if (iVar5 != 0) {
        return 1;
      }
      param_2 = (int)local_20[8];
      uVar7 = func_0x80077a4c(param_1,param_2,(int)local_20[9],(int)local_20[10]);
    }
    uVar6 = (uint)((ulonglong)uVar7 >> 0x20);
    if ((int)uVar7 != 0) {
LAB_80130d4c:
      do {
        iVar5 = *(int *)(in_t0 + uVar6 + 0xc0);
        *(short *)(iVar5 + 0xc) = *(short *)(iVar5 + 0xc) + -0x80;
        iVar5 = *(int *)(in_t0 + uVar6 + 0xc0);
        *(ushort *)(iVar5 + 0xc) = *(ushort *)(iVar5 + 0xc) & 0xfff;
        do {
          *(short *)(*(int *)(param_2 + 0xc0) + 0x16) = (short)in_t3;
          uVar6 = in_t1 - 1;
          if (0x400 < *(short *)(*(int *)(param_2 + 0xc0) + 0xc)) {
            uVar2 = FUN_80139dec();
            return uVar2;
          }
LAB_80130e74:
          in_t1 = uVar6;
          sVar1 = (short)in_t1;
          if (sVar1 < 2) {
LAB_80130e8c:
            if (*(short *)(*(int *)(in_t0 + 0xd4) + 0x16) < 1) {
              *(undefined2 *)(*(int *)(in_t0 + 200) + 0x16) = 0;
              return 0;
            }
            *(undefined2 *)(*(int *)(in_t0 + 200) + 0x16) = 1;
            uVar2 = FUN_80139e5c();
            return uVar2;
          }
          iVar4 = (int)sVar1;
          param_2 = in_t0 + iVar4 * 4;
          iVar5 = *(int *)(param_2 + 0xc0);
          if (*(int *)(iVar5 + 0x30) + 0x30 < (int)*(short *)(in_t0 + 100)) goto LAB_80130e8c;
          uVar6 = in_t1 & 1;
          if (*(short *)(iVar5 + 0x16) == in_t2) goto LAB_80130e70;
          if (uVar6 != 0) goto code_r0x80130cfc;
          *(short *)(iVar5 + 0xc) = *(short *)(iVar5 + 0xc) + 0x80;
          *(ushort *)(*(int *)(param_2 + 0xc0) + 0xc) =
               *(ushort *)(*(int *)(param_2 + 0xc0) + 0xc) & 0xfff;
        } while (iVar4 == *(byte *)(in_t0 + 8) - 1);
        uVar6 = (iVar4 + 1) * 4;
      } while( true );
    }
  }
  return 0;
code_r0x80130cfc:
  if (uVar6 != in_t3) {
    *(short *)(param_1 + 0x4e) = sVar1 + -1;
    FUN_801406e4();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(short *)(iVar5 + 0xc) = *(short *)(iVar5 + 0xc) + -0x80;
  *(ushort *)(*(int *)(param_2 + 0xc0) + 0xc) = *(ushort *)(*(int *)(param_2 + 0xc0) + 0xc) & 0xfff;
  if (iVar4 != *(byte *)(in_t0 + 8) - 1) {
    iVar5 = in_t0 + (iVar4 + 1) * 4;
    iVar4 = *(int *)(iVar5 + 0xc0);
    *(short *)(iVar4 + 0xc) = *(short *)(iVar4 + 0xc) + 0x80;
    iVar5 = *(int *)(iVar5 + 0xc0);
    *(ushort *)(iVar5 + 0xc) = *(ushort *)(iVar5 + 0xc) & 0xfff;
  }
  *(short *)(*(int *)(param_2 + 0xc0) + 0x16) = (short)uVar6;
  uVar6 = in_t1 - 1;
  if (*(short *)(*(int *)(param_2 + 0xc0) + 0xc) < 0xc00) {
    *(undefined2 *)(*(int *)(param_2 + 0xc0) + 0xc) = 0xc00;
    *(short *)(*(int *)(param_2 + 0xc0) + 0x16) = (short)in_t2;
    *(short *)(in_t0 + 0x66) = *(short *)(in_t0 + 0x66) + -0x30;
LAB_80130e70:
    uVar6 = in_t1 - 1;
  }
  goto LAB_80130e74;
}

