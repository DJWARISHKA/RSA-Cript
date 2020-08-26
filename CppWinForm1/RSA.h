unsigned __int8 trans(unsigned __int8 Block)
{
	if ((Block <= 9) && (Block >= 0))
		return (Block + (int)'0');
	else  return (Block + (int)'A' - 10);
}

unsigned __int8 detrans(unsigned __int8 Block)
{
	if (((int)Block <= 57) && ((int)Block >= 48))
		return (Block - (int)'0');
	else  return (Block - (int)'A' + 10);
}

System::String ^ shifrrsa(char *file1, char *file2)
{
	System::String ^st;
	__int64 size = 0;
	unsigned __int32 buf, ke, n;
	unsigned __int8 tmp[4];
	size_t result = 1;
	unsigned __int8 LBlock, BlockC1, BlockC2, BlockR;
	std::ifstream in1("open.txt");//открываем файлы
	in1 >> ke; in1 >> n;
	in1.close();
	FILE *in, *out;
	in = fopen(file1, "rb");//открываем файлы
	out = fopen(file2, "wb");
	size = filelength(fileno(in));
	st = "Длинна исходного = " + System::Convert::ToString(size)+"\r\n";
	for (__int64 x = 0; x<(size);)
	{
		for (int i = 0; i < 3; i++, x++) {
			if (x<size) {
				fread(&tmp[i], sizeof(unsigned __int8), 1, in);//читаем символ
			}
			else
				tmp[i] = ' ';
		}
		for (int i = 0; i < 2; i++)
		{
			if (i == 0)
				buf = (tmp[0] << 4) | (tmp[1] >> 4);
			else buf = ((tmp[1] & 15) << 8) | tmp[2];
			buf = modexp(buf, ke, n);//Шифруем символ
			LBlock = trans(buf >> 12); //разбиваем на блоки
			BlockC1 = trans((buf >> 8) & 15);
			BlockC2 = trans((buf >> 4) & 15);
			BlockR = trans(buf & 15);
			fwrite(&LBlock, sizeof(unsigned __int8), 1, out);//записываем блоки
			fwrite(&BlockC1, sizeof(unsigned __int8), 1, out);
			fwrite(&BlockC2, sizeof(unsigned __int8), 1, out);
			fwrite(&BlockR, sizeof(unsigned __int8), 1, out);
		}
	}
	fclose(in); fclose(out);
	return st;
}

System::String ^ deshifrrsa(char *file1, char *file2, System::String ^st)
{
	unsigned __int32 buf,d,n;
	unsigned __int8 tmp[3];
	size_t result = 1;
	unsigned __int8 LBlock, BlockC1, BlockC2, BlockR;
	std::ifstream in1("close.txt");//открываем файлы
	in1 >> d; in1 >> n;
	in1.close();
	FILE *in, *out;
	in = fopen(file1, "rb");
	out = fopen(file2, "wb");
	__int64 size = filelength(fileno(in));
	st += "Длинна зашифрованного = " + System::Convert::ToString(size)+"\r\n";
	for (__int64 x = 0; x<(size);)
	{
		for (int i = 0; i < 2; i++)
		{
			result = fread(&LBlock, sizeof(unsigned __int8), 1, in);//считываем полублоки
			fread(&BlockC1, sizeof(unsigned __int8), 1, in);
			fread(&BlockC2, sizeof(unsigned __int8), 1, in);
			fread(&BlockR, sizeof(unsigned __int8), 1, in);
			x += 4;
			LBlock = detrans(LBlock);
			BlockC1 = detrans(BlockC1);
			BlockC2 = detrans(BlockC2);
			BlockR = detrans(BlockR);
			buf = ((LBlock) << 12) | ((BlockC1) << 8) | ((BlockC2) << 4) | (BlockR);//обьединяем блоки
			buf = modexp(buf, d, n);//дешифруем символ
			if (i == 0)
			{
				tmp[0] = buf >> 4;
				tmp[1] = (buf & 15) << 4;
			}
			else {
				tmp[1] = tmp[1] | (buf >> 8);
				tmp[2] = buf & 255;
			}
		}
			fwrite(&tmp, sizeof(unsigned __int8), 3, out);//записываем символ
	}
	fclose(in); fclose(out);
	st += "Длинна розшифрованного = " + System::Convert::ToString(filelength(fileno(fopen(file2, "rb"))));
	return st;
}
