#ifndef _LINUX_MMU_CONTEXT_H
#define _LINUX_MMU_CONTEXT_H

<<<<<<< HEAD
=======
#include <asm/mmu_context.h>

>>>>>>> common/deprecated/android-3.18
struct mm_struct;

void use_mm(struct mm_struct *mm);
void unuse_mm(struct mm_struct *mm);

<<<<<<< HEAD
=======
/* Architectures that care about IRQ state in switch_mm can override this. */
#ifndef switch_mm_irqs_off
# define switch_mm_irqs_off switch_mm
#endif

>>>>>>> common/deprecated/android-3.18
#endif
