/**
 * @brief Links two OT primitives: swaps lower 24 bits of their tag words
 * @note Original: func_80083C30 at 0x80083C30
 */
// OT_LinkPrimitives



void OT_LinkPrimitives(uint *param_1,uint *param_2)

{
  *param_2 = *param_2 & 0xff000000 | *param_1 & 0xffffff;
  *param_1 = *param_1 & 0xff000000 | (uint)param_2 & 0xffffff;
  return;
}
