#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int i;
	unsigned char sos;

	i = 8;
	while(i > 0)
	{
		sos = ((octet >> (i - 1)) & 1) + '0';
		write(1, &sos, 1);
		i--;
	}

}
