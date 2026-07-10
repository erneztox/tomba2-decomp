/**
 * @brief Checks if entity[5] != 3, if so sets entity[5] = 10 and returns 1
 * @note Original: func_80041FCC at 0x80041FCC
 */
// Entity_CheckStateAndSet



undefined4 FUN_80041fcc(int param_1)

{
  if (param_1 != 0) {
    if (*(char *)(param_1 + 5) != '\x03') {
      return 0;
    }
    *(undefined1 *)(param_1 + 5) = 10;
  }
  return 1;
}
