#pragma once
unsigned __int32 fMiller(System::Windows::Forms::TextBox^textbox)
{
	unsigned __int32 m, k, a, t, n = 0;
	bool x = true;
	while (x)
	{
		textbox->Text += System::Convert::ToString(n = myrandom(powi(2, 8)));
		a = 2; x = false;
		for (int j = 0; x == false && j < 4; j++) {
			m = n - 1;
			for (k = 0; (m % 2) != 1; k++)
				m = m / 2;
			t = modexp(a, m, n);
			for (int i = 0; i < k; i++)
				t = (t*t) % n;
			if (t != 1 && t != (n - 1)) x = true;
			else if (t == 0) j--;
			do
				if ((a = myrandom(n - 2)) == 0) a++;
			while ((n%a) == 0 || a < 3);
		}
		if (x)textbox->Text += " - составное\r\n";
	}
	textbox->Text += " - простое\r\n";
	return n;
}
