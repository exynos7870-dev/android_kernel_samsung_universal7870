#ifndef __ASM_IRQ_WORK_H
#define __ASM_IRQ_WORK_H

<<<<<<< HEAD
#ifdef CONFIG_SMP

=======
>>>>>>> common/deprecated/android-3.18
#include <asm/smp.h>

static inline bool arch_irq_work_has_interrupt(void)
{
	return !!__smp_cross_call;
}

<<<<<<< HEAD
#else

static inline bool arch_irq_work_has_interrupt(void)
{
	return false;
}

#endif

=======
>>>>>>> common/deprecated/android-3.18
#endif /* __ASM_IRQ_WORK_H */
