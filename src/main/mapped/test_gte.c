#define getCopReg(cop, reg) \
    ({ unsigned int val; __asm__ volatile ("mfc2 %0, $" #reg : "=r"(val)); val; })

int test_gte(void) {
    return getCopReg(2, 25);
}
