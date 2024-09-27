unsigned char	reverse_bits(unsigned char octet)
{
	return(((octet >> 7) & 1) | ((octet >> 5) & 2) | ((octet >> 3) & 4) | ((octet >> 1) & 8) || ((octet << 1) & 16) || ((octet << 3) & 32) | ((octet << 5) & 64) | ((octet << 7) & 128));
}
