#pragma once
#include <ctime>
#include <io.h>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <Windows.h>
//using namespace std;

unsigned __int32 seed = 327491124;

void myseed(unsigned __int32 seed1)
{
	seed = seed1;
}

unsigned __int32 powi(int val, unsigned	 __int32 P)
{
	unsigned __int32 r = val;
	if (P == 0) r = 1;
	for (unsigned int i = 1; i < P; i++) r *= val;
	return r;
}

void setrandomize()
{
	SYSTEMTIME Time;
	GetLocalTime(&Time);
	seed = time(NULL);
	seed = seed ^ (Time.wMilliseconds << 15);
}

unsigned int myrandom(unsigned __int32 max = 4048)
{
	unsigned __int32 min, j;
	char str[30];
	itoa(seed, str, 10);
	for (min = 0; str[min] != '\0'; min++);
	char *str1 = new char[min * 2 + 1];
	seed *= seed;
	itoa(seed, str1, 10);
	for (j = 0; str1[j] != '\0'; j++);
	for (int i = 0; i < min; i++)
		if ((j - i - min / 2 - 1) >= 0)
			seed = seed + (str1[j - i - min / 2 - 1] - int('0'))*powi(10, i);
	return (seed%max) | 1;
}

