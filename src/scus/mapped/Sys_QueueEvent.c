/**
 * @brief Queue event for processing
 * @note Original: func_80012174 at 0x80012174
 */
// Sys_QueueEvent



void Sys_QueueEvent(void)

{
  uint local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  Sys_QueueEvent();
  Sys_QueueEvent(&local_20);
  Sys_QueueEvent(local_14,local_10);
  if ((local_20 & 8) != 0) {
    Sys_QueueEvent(local_1c,local_18);
  }
  Sys_QueueEvent(0);
  return;
}
