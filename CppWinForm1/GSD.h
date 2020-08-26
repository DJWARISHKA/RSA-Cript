#pragma once

unsigned __int32 gsd(int a, int b)
{
	unsigned __int32 c;
	a %= b;
	do
	{
		c = a;
		a = b;
		b = c%b;
	} while (b != 0);
	return a;
}

unsigned __int32 gsd_e(int a, int b)
{
	unsigned __int32 x0 = 1, x1 = 0, x2,
		y0 = 0, y1 = 1, y2, r0, r1, r2, d, c, y, i = 1;
	r0 = a; r1 = b;
	do
	{
		r2 = r0 % r1;
		c = r0 / r1;
		x2 = x0 + c*x1;
		y2 = y0 + c*y1;
		x0 = x1; x1 = x2;
		y0 = y1; y1 = y2;
		r0 = r1; r1 = r2; 
		i++;
	} while (r2 != 0);
	if (i & 1 == 1) {
		y = y0;
		d = x0;
	}
	else {
		d = x1 - x0;
		y = y1 - y0;
	}
	return d;
}
