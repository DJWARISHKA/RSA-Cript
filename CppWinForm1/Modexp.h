#pragma once
unsigned __int32 modexp(unsigned __int32 a, unsigned __int32 k, unsigned __int32 n)  //Возведение в степень по модулю
{
	if ((a == 0) || (n <= 1)) return 0;
	if (k == 0) return 1;
	if ((a == 1) || (k == 1)) return a;
	int p = 1, temp = a;
	while(k != 0)
	{
		if ((k & 1) == 1)
			p = (p*temp) % n;
		temp = (temp*temp) % n;
		k = k >> 1;
	}
	return p;
}