/**
 * @brief Routes allocation to correct pool (0-4) based on first parameter
 * @note Original: func_8007A980 at 0x8007A980
 */
// Entity_AllocByPoolId


#include "tomba.h"

/**
 * @brief Main Entity Allocator Router.
 * Routes the allocation request to the correct internal memory pool based on param_1.
 */
Entity* func_8007A980(u8 param_1, u8 param_2, int param_3)
{
    switch (param_1) {
    case 0:
        return func_80079C3C(0, param_2, 3, param_3);
    case 1:
        return func_80079DDC(0, param_2, 3, param_3);
    case 2:
        return func_80079F90(0, param_2, 3, param_3);
    case 3:
        return func_8007A12C(0, param_2, 3, param_3);
    case 4:
        return func_8007A2C8(0, param_2, 3, param_3);
    }
}
