/**
 * @brief Initializes entity from data table at 0x800A4A94 indexed by param
 * @note Original: func_8006AC7C at 0x8006AC7C
 */
// Entity_InitFromTable



void Entity_InitFromTable(s32 param_1,int param_2)

{
  Entity_InitSubEntity(param_1,1,(&DAT_800a4a94)[param_2]);
  return;
}
