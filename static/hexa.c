void prntnum(unsigned long n, int base, char sign, char *outbuf)
{
	int i = 12;
	int j = 0;

	do{
		outbuf[i] = "0123456789ABCDEF"[num % base];
		i--;
		n = num/base;
	}while( num > 0);

	if (sign != ' '){
		outbuf[0] = sign;
		++j;
	}
	while( ++i < 13){
		outbuf[j++] = outbuf[i];
	}
	outbuf[j] = 0;
}
