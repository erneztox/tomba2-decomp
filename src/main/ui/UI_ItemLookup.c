/**
 * @brief UI item lookup: switch on item ID 0x59-0x6B, returns icon/type
 * @note Original: func_8004DBC0 at 0x8004DBC0
 */
// UI_ItemLookup



s32 UI_ItemLookup(s32 param_1)

{
  switch(param_1) {
  case 0x59:
    return 0x160;
  case 0x5a:
    return 0x103;
  case 0x5b:
    return 0xbf;
  case 0x5c:
    return 0xbe;
  case 0x5d:
    return 0xff;
  case 0x5e:
    return 0xfe;
  default:
    return 0;
  case 0x66:
    return 0x113;
  case 0x67:
    return 0x112;
  case 0x68:
    return 0x114;
  case 0x69:
    return 0x138;
  case 0x6a:
    return 0x139;
  case 0x6b:
    return 0x13a;
  case 0x6c:
    return 0x163;
  case 0x6d:
    return 0x164;
  case 0x6e:
    return 0x165;
  case 0x98:
    return 0x166;
  case 0xa6:
    return 0x17d;
  case 0xa7:
    return 0x17c;
  }
}
