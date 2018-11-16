#include "shell.h"
/**
 * sig_handler - ^C to end shell.
 * @sig_handler: signal handler.
 * Return: void.
 */
void sig_handler(int sig_handler)
{
	(void) sig_handler;
	_puts("\n$ ");
}
