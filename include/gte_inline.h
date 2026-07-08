#ifndef GTE_INLINE_H
#define GTE_INLINE_H

#define setCopReg(cop, reg, val) __asm__ volatile ("mtc2 %0, $" #reg : : "r" (val))
#define getCopReg(cop, reg) ({ unsigned int val; __asm__ volatile ("mfc2 %0, $" #reg : "=r"(val)); val; })

#define setCopControlWord(cop, reg, val) __asm__ volatile ("ctc2 %0, $" #reg : : "r" (val))
#define getCopControlWord(cop, reg) ({ unsigned int val; __asm__ volatile ("cfc2 %0, $" #reg : "=r"(val)); val; })

#define copFunction(cop, func) __asm__ volatile ("cop2 " #func)

#endif
