/**
 * @brief Entity state set type 4: entity[0x2B]=2, entity[1]=0, entity[4]=2 if conditions met
 * @note Original: func_8006B0D8 at 0x8006B0D8
 */
// Entity_SetState4



void FUN_8006b0d8(char *param_1)

{
  if ((param_1[2] != '\x04') && (*param_1 == '\x02')) {
    param_1[0x2b] = '\x02';
    param_1[1] = '\0';
    param_1[4] = '\x02';
    param_1[0x6e] = '\x01';
    param_1[0x6f] = '\0';
    DAT_1f800231 = DAT_1f800231 + -1;
  }
  return;
}
