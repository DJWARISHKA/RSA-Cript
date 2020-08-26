#pragma once

namespace CppWinForm1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;
	using namespace std;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Button^  button1;
	protected:
	public: System::Windows::Forms::Button^  button2;
	public: System::Windows::Forms::TextBox^  textBox1;
	public: System::Windows::Forms::TextBox^  textBox2;
	public: System::Windows::Forms::TextBox^  textBox3;
	public: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	public: System::Windows::Forms::TextBox^  file1;
	public: System::Windows::Forms::TextBox^  file2;
	public: System::Windows::Forms::TextBox^  file3;
	public: System::Windows::Forms::Button^  button3;
	public: System::Windows::Forms::Button^  button4;
	public: System::Windows::Forms::Button^  button5;
	public: System::Windows::Forms::TextBox^  textBox4;
	public: System::Windows::Forms::Label^  label1;
	public: System::Windows::Forms::Label^  label2;
	public: System::Windows::Forms::Label^  label3;
	public: System::Windows::Forms::Label^  label4;
	public: System::Windows::Forms::Button^  button6;
	public: System::Windows::Forms::Button^  button7;
	public: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  справкаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  оПрограммеToolStripMenuItem;
	public: System::Windows::Forms::Button^  button8;
	public: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^  противопоказанияToolStripMenuItem;
	private: System::Windows::Forms::TextBox^  SeedBox;
	public:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->file1 = (gcnew System::Windows::Forms::TextBox());
			this->file2 = (gcnew System::Windows::Forms::TextBox());
			this->file3 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->справкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->противопоказанияToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->оПрограммеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->SeedBox = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->AutoSize = true;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Location = System::Drawing::Point(208, 282);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(102, 27);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Зашифровать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// button2
			// 
			this->button2->AutoSize = true;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Location = System::Drawing::Point(366, 282);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(102, 27);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Дешифровать";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Window;
			this->textBox1->Location = System::Drawing::Point(12, 99);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox1->Size = System::Drawing::Size(148, 177);
			this->textBox1->TabIndex = 2;
			this->textBox1->WordWrap = false;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::Window;
			this->textBox2->Location = System::Drawing::Point(183, 99);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox2->Size = System::Drawing::Size(148, 177);
			this->textBox2->TabIndex = 3;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::Window;
			this->textBox3->Location = System::Drawing::Point(350, 99);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox3->Size = System::Drawing::Size(148, 177);
			this->textBox3->TabIndex = 4;
			this->textBox3->WordWrap = false;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->DefaultExt = L"D:\\kript\\";
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// file1
			// 
			this->file1->Location = System::Drawing::Point(12, 72);
			this->file1->Name = L"file1";
			this->file1->Size = System::Drawing::Size(100, 21);
			this->file1->TabIndex = 8;
			this->file1->Text = L"D:\\kript\\1.txt";
			// 
			// file2
			// 
			this->file2->Location = System::Drawing::Point(183, 72);
			this->file2->Name = L"file2";
			this->file2->Size = System::Drawing::Size(100, 21);
			this->file2->TabIndex = 9;
			this->file2->Text = L"D:\\kript\\2.txt";
			this->file2->TextChanged += gcnew System::EventHandler(this, &MyForm::file2_TextChanged);
			// 
			// file3
			// 
			this->file3->Location = System::Drawing::Point(350, 72);
			this->file3->Name = L"file3";
			this->file3->Size = System::Drawing::Size(100, 21);
			this->file3->TabIndex = 10;
			this->file3->Text = L"D:\\kript\\3.txt";
			// 
			// button3
			// 
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Location = System::Drawing::Point(118, 72);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(65, 21);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Открыть";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->Location = System::Drawing::Point(289, 72);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(64, 21);
			this->button4->TabIndex = 12;
			this->button4->Text = L"Открыть";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->Location = System::Drawing::Point(456, 72);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(62, 23);
			this->button5->TabIndex = 13;
			this->button5->Text = L"Открыть";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::Window;
			this->textBox4->Location = System::Drawing::Point(516, 99);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox4->Size = System::Drawing::Size(148, 177);
			this->textBox4->TabIndex = 14;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(27, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 13);
			this->label1->TabIndex = 15;
			this->label1->Text = L"Исходный";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(205, 36);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(93, 13);
			this->label2->TabIndex = 16;
			this->label2->Text = L"Зашифровынный";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(363, 36);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(93, 13);
			this->label3->TabIndex = 17;
			this->label3->Text = L"Дешифрованный";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(564, 80);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 13);
			this->label4->TabIndex = 18;
			this->label4->Text = L"Ключ";
			// 
			// button6
			// 
			this->button6->AutoSize = true;
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->Location = System::Drawing::Point(536, 280);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(119, 41);
			this->button6->TabIndex = 19;
			this->button6->Text = L"Генерировать ключ";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->AutoSize = true;
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->Location = System::Drawing::Point(30, 280);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(102, 27);
			this->button7->TabIndex = 20;
			this->button7->Text = L"Вывести";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(548, 36);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(78, 13);
			this->label5->TabIndex = 22;
			this->label5->Text = L"Семя рандома";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click_1);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->справкаToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(674, 24);
			this->menuStrip1->TabIndex = 23;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// справкаToolStripMenuItem
			// 
			this->справкаToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->противопоказанияToolStripMenuItem,
					this->оПрограммеToolStripMenuItem
			});
			this->справкаToolStripMenuItem->Name = L"справкаToolStripMenuItem";
			this->справкаToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			this->справкаToolStripMenuItem->Text = L"Справка";
			// 
			// противопоказанияToolStripMenuItem
			// 
			this->противопоказанияToolStripMenuItem->Name = L"противопоказанияToolStripMenuItem";
			this->противопоказанияToolStripMenuItem->Size = System::Drawing::Size(179, 22);
			this->противопоказанияToolStripMenuItem->Text = L"Противопоказания";
			this->противопоказанияToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::противопоказанияToolStripMenuItem_Click);
			// 
			// оПрограммеToolStripMenuItem
			// 
			this->оПрограммеToolStripMenuItem->Name = L"оПрограммеToolStripMenuItem";
			this->оПрограммеToolStripMenuItem->Size = System::Drawing::Size(179, 22);
			this->оПрограммеToolStripMenuItem->Text = L"О программе";
			this->оПрограммеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::оПрограммеToolStripMenuItem_Click);
			// 
			// button8
			// 
			this->button8->AutoSize = true;
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->Location = System::Drawing::Point(208, 315);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(102, 27);
			this->button8->TabIndex = 24;
			this->button8->Text = L"Вывести";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click_1);
			// 
			// button9
			// 
			this->button9->AutoSize = true;
			this->button9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button9->Location = System::Drawing::Point(366, 315);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(102, 27);
			this->button9->TabIndex = 25;
			this->button9->Text = L"Вывести";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->DefaultExt = L"D:\\kript\\";
			// 
			// SeedBox
			// 
			this->SeedBox->Location = System::Drawing::Point(536, 56);
			this->SeedBox->Name = L"SeedBox";
			this->SeedBox->Size = System::Drawing::Size(100, 21);
			this->SeedBox->TabIndex = 26;
			this->SeedBox->Text = L"0";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Menu;
			this->ClientSize = System::Drawing::Size(674, 344);
			this->Controls->Add(this->SeedBox);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->file3);
			this->Controls->Add(this->file2);
			this->Controls->Add(this->file1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"RSA";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {}
	public: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {	}
	public: System::Void file2_TextChanged(System::Object^  sender, System::EventArgs^  e) {}
	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {}
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {}
	private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {}
	private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {}
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {}
	private: System::Void label5_Click_1(System::Object^  sender, System::EventArgs^  e) {}

	public: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		setrandomize();
	}
	public: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		openFileDialog1->ShowDialog();
		file1->Text = openFileDialog1->FileName;
	}
	public: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		saveFileDialog1->ShowDialog();
		file2->Text = saveFileDialog1->FileName;
	}
	public: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		saveFileDialog1->ShowDialog();
		file3->Text = saveFileDialog1->FileName;
	}
	public: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		if (SeedBox->Text == "0" || SeedBox->Text == "")
			setrandomize();
		else myseed(Convert::ToInt32(SeedBox->Text));
		textBox4->Clear();
		key(textBox4);
	}
	public: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
		auto MyReader1 = gcnew IO::StreamReader(file1->Text, System::Text::Encoding::GetEncoding(1251));
		textBox1->Text = MyReader1->ReadToEnd(); MyReader1->Close();
	}
			void tchar(char a[200],TextBox^ file)
			{
				for (int i = 0; i < file->Text->Length; i++)
				{
					a[i] = char(int(file->Text[i]));
					a[i + 1] = '\0';
				}
			}
	public:String^st;
	public: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
		char a[200], b[200];
		tchar(a,file1);
		tchar(b,file2);
		st = shifrrsa(a, b);
	}

	public: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		char a[200], b[200];
		tchar(a, file2);
		tchar(b, file3);
		st=deshifrrsa(a, b,st);
		button7_Click(sender,e);
		button8_Click_1(sender, e);
		button9_Click(sender, e);
		MessageBox::Show(st, "Тестирование ПО");
	}

	public: System::Void button8_Click_1(System::Object^  sender, System::EventArgs^  e) {
		auto MyReader2 = gcnew IO::StreamReader(file2->Text, System::Text::Encoding::GetEncoding(1251));
		textBox2->Text = MyReader2->ReadToEnd(); MyReader2->Close();
	}

	public: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
		auto MyReader3 = gcnew IO::StreamReader(file3->Text, System::Text::Encoding::GetEncoding(1251));
		textBox3->Text = MyReader3->ReadToEnd(); MyReader3->Close();
	}
	private: System::Void оПрограммеToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		String^str;
		str = "Курсовой проэкт\r\nСтудента 936 гр.\r\n";
		str += "Вахмистрова Николая Олеговича\r\n";
		str += "Задание:\r\nГенератор случайных чисел: ";
		str += "метод середины квадрата\r\n";
		str += "Проверка на простоту: тест Миллера-Рабина\r\n";
		str += "Разрядность блока: 12 бит";
		MessageBox::Show(str, "О программе");
	}
	private: System::Void противопоказанияToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		String^str;
		str += "1)Долгий вывод на экран файлов больше 20 КБ\r\n";
		str += "2)Семя рандома должно быть не меньше 3 цыфр\r\n";
		str += "3)В семя рандома вводить символы на свой страх и риск\r\n";
		str += "4)Несуществующие файлы зашифровать нельзя\r\n";
		str += "5)Если ничего не получается попробуйте еще раз";
		MessageBox::Show(str, "Важно");
	}
	};
}