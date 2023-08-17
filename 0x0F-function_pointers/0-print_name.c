/**
 * print_name - Prints the given name using the provided function pointer.
 *
 * @name: Name to be printed
 * @f: Function pointer without return value
 *
 * Return: Always 0 (Success)
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
