#ifndef GTE_INLINE_H
#define GTE_INLINE_H

#define setCopReg(cop, reg, val) __asm__ volatile ("mtc2 %0, $" #reg : : "r" (val))
#define getCopReg(cop, reg) ({ unsigned int val; __asm__ volatile ("mfc2 %0, $" #reg : "=r"(val)); val; })

#define setCopControlWord(cop, reg, val) __asm__ volatile ("ctc2 %0, $" #reg : : "r" (val))
#define getCopControlWord(cop, reg) ({ unsigned int val; __asm__ volatile ("cfc2 %0, $" #reg : "=r"(val)); val; })

#define copFunction(cop, func) __asm__ volatile ("cop2 " #func)

/* Load VXY0/VZ0 from a pointer using lwc2 */
#define GTE_LoadV01(ptr) \
    __asm__ volatile ( \
        "lwc2\t$0, 0(%0)\n\t" \
        "lwc2\t$1, 4(%0)" \
        : : "r"(ptr) )

/* Load 3 vertices (VXY0,VZ0,VXY1,VZ1,VXY2,VZ2) from ptr */
#define GTE_LoadV012(ptr) \
    __asm__ volatile ( \
        "lwc2\t$0,  0(%0)\n\t" \
        "lwc2\t$1,  4(%0)\n\t" \
        "lwc2\t$2,  8(%0)\n\t" \
        "lwc2\t$3, 12(%0)\n\t" \
        "lwc2\t$4, 16(%0)\n\t" \
        "lwc2\t$5, 20(%0)" \
        : : "r"(ptr) )

/* Store IR1,IR2,IR3 ($25,$26,$27) to ptr+0,4,8 */
#define GTE_StoreIR123(ptr) \
    __asm__ volatile ( \
        "swc2\t$25, 0(%0)\n\t" \
        "swc2\t$26, 4(%0)\n\t" \
        "swc2\t$27, 8(%0)" \
        : : "r"(ptr) )

/* Store SXY0,SXY1,SXY2 ($12,$13,$14) to ptr+0,8,16 */
#define GTE_StoreSXY012(ptr) \
    __asm__ volatile ( \
        "swc2\t$12,  0(%0)\n\t" \
        "swc2\t$13,  8(%0)\n\t" \
        "swc2\t$14, 16(%0)" \
        : : "r"(ptr) )

/* Store OTZ ($7) to ptr */
#define GTE_StoreOTZ(ptr) \
    __asm__ volatile ( "swc2\t$7, 0(%0)" : : "r"(ptr) )

/* MVMVA: multiply rotation matrix by V0, no translation (1,0,0,3,0) */
#define GTE_MVMVA() __asm__ volatile("cop2 0x486012")

/* RTPT: perspective transform 3 vertices */
#define GTE_RTPT()  __asm__ volatile("cop2 0x280030")

/* AVSZ3: average Z of 3 vertices */
#define GTE_AVSZ3() __asm__ volatile("cop2 0x158002D")

/* SetRotMatrix: load rotation matrix from ptr (offsets 0..16) into GTE CRx $0..$4 */
#define SetRotMatrix(ptr) \
    __asm__ volatile ( \
        "lw\t$12, 0(%0)\n\t" \
        "lw\t$13, 4(%0)\n\t" \
        "ctc2\t$12,$0\n\t" \
        "ctc2\t$13,$1\n\t" \
        "lw\t$12, 8(%0)\n\t" \
        "lw\t$13,12(%0)\n\t" \
        "lw\t$14,16(%0)\n\t" \
        "ctc2\t$12,$2\n\t" \
        "ctc2\t$13,$3\n\t" \
        "ctc2\t$14,$4" \
        : : "r"(ptr) : "$12", "$13", "$14" )

/* SetTransMatrix: load translation from ptr (offsets 20..28) into GTE CRx $5..$7 */
#define SetTransMatrix(ptr) \
    __asm__ volatile ( \
        "lw\t$12,20(%0)\n\t" \
        "lw\t$13,24(%0)\n\t" \
        "ctc2\t$12,$5\n\t" \
        "lw\t$14,28(%0)\n\t" \
        "ctc2\t$13,$6\n\t" \
        "ctc2\t$14,$7" \
        : : "r"(ptr) : "$12", "$13", "$14" )

#endif
