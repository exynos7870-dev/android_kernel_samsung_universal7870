#ifndef _PRINTK_BRAILLE_H
#define _PRINTK_BRAILLE_H

#ifdef CONFIG_A11Y_BRAILLE_CONSOLE

static inline void
braille_set_options(struct console_cmdline *c, char *brl_options)
{
	c->brl_options = brl_options;
}

<<<<<<< HEAD
char *
=======
/*
 * Setup console according to braille options.
 * Return -EINVAL on syntax error, 0 on success (or no braille option was
 * actually given).
 * Modifies str to point to the serial options
 * Sets brl_options to the parsed braille options.
 */
int
>>>>>>> common/deprecated/android-3.18
_braille_console_setup(char **str, char **brl_options);

int
_braille_register_console(struct console *console, struct console_cmdline *c);

int
_braille_unregister_console(struct console *console);

#else

static inline void
braille_set_options(struct console_cmdline *c, char *brl_options)
{
}

<<<<<<< HEAD
static inline char *
_braille_console_setup(char **str, char **brl_options)
{
	return NULL;
=======
static inline int
_braille_console_setup(char **str, char **brl_options)
{
	return 0;
>>>>>>> common/deprecated/android-3.18
}

static inline int
_braille_register_console(struct console *console, struct console_cmdline *c)
{
	return 0;
}

static inline int
_braille_unregister_console(struct console *console)
{
	return 0;
}

#endif

#endif
