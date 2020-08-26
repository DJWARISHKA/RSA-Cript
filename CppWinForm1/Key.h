#pragma once

void key(System::Windows::Forms::TextBox^textbox)
{
	unsigned __int32 p, q, n, f, d, y, ke;
	while(p<63)p = fMiller(textbox);
	do q = fMiller(textbox); while (p == q || q<63);
	n = p*q;
	f = (p - 1)*(q - 1);
	do {
		ke = myrandom(32);
		d=gsd_e(ke, f);
	} while (((d*ke) % f) != 1 || ke == 1);
	std::ofstream out("open.txt");//открываем файлы
	out << ke << ' ' << n;
	out.close();
	out.open("close.txt");
	out << d << ' ' << n;
	out.close();
	textbox->Text += "p = " + p + "; q = " + q + "\r\n";
	textbox->Text += "n = " + n + "; fi = " + f + "\r\n";
	textbox->Text += "e = " + ke + "; d = " + d + "\r\n";
	textbox->Text += "НОД(e,f) = " + gsd(ke, f) + "\r\n";
}
