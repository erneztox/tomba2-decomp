/**
 * @brief CD init variant 3: prints debug, calls init funcs, sets flags
 * @note Original: func_8008B2D8 at 0x8008B2D8
 */
// CD_Init3



s32 CD_Init3(void)

{
  u8 bVar1;
  int iVar2;
  s32 uVar3;
  
  Debug_PrintString(s_CD_init__8001c350);
  Debug_Printf(s_addr__08x_8001c35c,&PTR_DAT_800ac29c);
  DAT_800abfd9 = 0;
  DAT_800abfd8 = 0;
  DAT_800abfc0 = 0;
  DAT_800abfbc = 0;
  DAT_800abfcc = 0;
  DAT_800abfc8 = 0;
  CD_Dispatch0C();
  CD_Dispatch08(2,CD_PollSync);
  *DAT_800ac280 = 1;
  bVar1 = *DAT_800ac28c;
  while ((bVar1 & 7) != 0) {
    *DAT_800ac280 = 1;
    *DAT_800ac28c = 7;
    *DAT_800ac288 = 7;
    bVar1 = *DAT_800ac28c;
  }
  DAT_800ac29a = 0;
  DAT_800ac299 = 0;
  DAT_800ac298 = 2;
  *DAT_800ac280 = 0;
  *DAT_800ac28c = 0;
  *DAT_800ac290 = 0x1325;
  CD_Control(1,0,0,0);
  if ((DAT_800abfc8 & 0x10) != 0) {
    CD_Control(1,0,0,0);
  }
  iVar2 = CD_Control(10,0,0,0);
  uVar3 = 0xffffffff;
  if (iVar2 == 0) {
    iVar2 = CD_Control(0xc,0,0,0);
    if (iVar2 == 0) {
      iVar2 = CD_Sync(0,0);
      uVar3 = 0xffffffff;
      if (iVar2 == 2) {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 0xffffffff;
    }
  }
  return uVar3;
}
