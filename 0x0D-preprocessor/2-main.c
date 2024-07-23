#include <unistd.h>

int main(void)
{
	const char *filename = __FILE__;
	while (*filename)
	{
		write(1, filename, 1);
		filename++;
	}
	write(1, "\n", 1);
	return (0);
}
