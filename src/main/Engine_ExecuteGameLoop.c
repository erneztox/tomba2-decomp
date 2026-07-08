#include "tomba.h"

extern int D_800F2418;

extern void func_8004FD30(void);
extern void func_80025D98(void);
extern void func_8003BF00(void);
extern void func_8003EEC0(void);
extern void func_8003B588(void);
extern void func_8003BB50(void);
extern void func_8003BCF4(void);
extern void func_8003D0BC(void*);
extern void func_8003F024(void);
extern void func_8003DF04(void);
extern void EntityLoop_Active(void);

void Engine_ExecuteGameLoop(void) {
    func_8004FD30();
    func_80025D98();
    func_8003BF00();
    func_8003EEC0();
    func_8003B588();
    func_8003BB50();
    func_8003BCF4();
    func_8003D0BC(&D_800F2418);
    func_8003F024();
    func_8003DF04();
    EntityLoop_Active();
}
