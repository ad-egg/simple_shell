#include "shell.h"
/**
 * sig_handler - handles control C interruption of a process
 * @sig_handler: variable for handler
 * Return: nothing
*/
void sig_handler(int sig_handler)
{
	(void) sig_handler;
	_puts("\n$ ");
}
