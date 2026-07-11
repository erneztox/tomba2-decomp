// A09_EntityBehaviorInit - Entity behavior init: state, anim, timers

void A09_EntityBehaviorInit(int param_1)

{
  Entity_SpawnPool2Lifecycle();
  param_1->flags = 1;
  Entity_PhysicsStep2(param_1);
  param_1->draw_scale = 0;
  param_1->rot_z = 0;
  Entity_ResetState_2(param_1);
  Entity_UpdateAngle(param_1);
  Entity_LoadAnimIfChanged(param_1,2,0);
  func_0x0003315c(param_1);
  return;
}

