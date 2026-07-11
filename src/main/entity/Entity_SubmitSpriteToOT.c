/**
 * @brief Submits entity sprite to the Ordering Table
 * @note Original address: 0x8003F698
 */
// Entity_SubmitSpriteToOT

void Entity_SubmitSpriteToOT(s32 param_1,s32 param_2,uint param_3)

{
  if ((DAT_1f800234 == '\0') && ((param_3 & 1) == 0)) {
    switch(g_GameState) {
    case 0:
      func_0x80146478();
      break;
    case 1:
      func_0x80132dc0();
      break;
    case 2:
      func_0x8012555c();
      break;
    default:
      goto switchD_8003f6e0_caseD_3;
    case 4:
      func_0x8013dafc();
      break;
    case 5:
      func_0x801362cc();
      break;
    case 6:
      func_0x8013d568();
      break;
    case 7:
      func_0x8012e1a0();
      break;
    case 8:
      func_0x8012a9dc();
      break;
    case 0x14:
      func_0x80116b14();
      break;
    case 0x15:
      func_0x8010b1b8();
    }
  }
  else {
switchD_8003f6e0_caseD_3:
    FUN_800803dc();
  }
  return;
}

