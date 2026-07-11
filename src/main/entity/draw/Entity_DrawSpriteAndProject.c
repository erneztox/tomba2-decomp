/**
 * @brief Calls ProcessProjCmd then ProcessSpriteCmd for combined projection+sprite draw
 * @note Original: func_80033080 at 0x80033080
 */
// Entity_DrawSpriteAndProject



void Entity_DrawSpriteAndProject(s32 param_1)

{
  Entity_ProcessProjCmd();
  Entity_ProcessSpriteCmd(param_1);
  return;
}
