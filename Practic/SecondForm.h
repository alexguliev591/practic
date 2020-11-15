#pragma once
#include <windows.h>
#include <mutex>
#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>
#include <string>
#include <thread>
#include <algorithm>
#include <chrono>
#include <iterator>
#include <queue>
//#include "StatLib.h"
//#include <stdio.h>
//#include <conio.h>

using namespace std;

//mutex mtx;

namespace Practic {


	static void writeTo(const std::string& filepath, const  vector<char>& data)
	{
		//mtx.lock();
		ofstream filestream("String2.txt", ios::app);
		copy(data.begin(), data.end(), std::ostream_iterator<char>(filestream, " "));
		filestream.close();
		//mtx.unlock();

	}// создается функция вывода вектора в файл

	static void writeTo2(const std::string& filepath, const  vector<char>& data)
	{
		//mtx.lock();
		ofstream filestream("String3.txt", ios::app);
		copy(data.begin(), data.end(), std::ostream_iterator<char>(filestream, " "));
		filestream.close();
		//mtx.unlock();

	}// функция вывода вектора в другой файл
	

	static void ehh() {
	}


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Threading;
	using namespace System::Threading::Tasks;
	/// <summary>
	/// Сводка для MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			timer1->Interval = 50;
		}
		
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Label^ label1;
	protected:
	public: System::Windows::Forms::Label^ label2;
	public: System::Windows::Forms::Label^ label3;




	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;


	private: System::ComponentModel::IContainer^ components;

		  

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 30);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"label2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(13, 47);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"label3";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1122, 86);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(188, 23);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Обработать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(1122, 176);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(188, 23);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Вывести на экран";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(206, 86);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(342, 289);
			this->textBox1->TabIndex = 10;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(651, 88);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(339, 289);
			this->textBox2->TabIndex = 11;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(16, 96);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 13);
			this->label4->TabIndex = 12;
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm1::timer1_Tick);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(329, 47);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(87, 13);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Исходный файл";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(778, 47);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(123, 13);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Результирующий файл";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1442, 536);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		
		template<typename T1>
		void writeTo1(const std::string& filepath, const  vector<T1>& data)
		{

			ofstream filestream("String2.txt", ios::app);
			filestream << "\n";
			filestream.close();

		}// в файл добавляется пропуск строки после первых 10 букв
		int timeCounter=0;
		
		
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		vector<char> kit;//объявляется вектор
		char str[256];
		cout << "Enter the name of an existing text file: ";
		cin.get(str, 256); // get c-string
		ifstream is("String.txt"); // Открывается файл
		is.seekg(0, ios::beg);// Определяется символ, с какого будет считываться
		char c;
		int i = 0;
		while (is.get(c) && i < 10) {// отсчитывается счетчик,чтобы считать 10 букв
			i++;
			kit.push_back(c);// считывание 10 букв с определенной
		}
		sort(kit.begin(), kit.end());//сортировка в порядке возрастания
		is.close();// файл закрывается

		vector <char> kit2;// Смотрите вектор выше
		char str1[256];
		cin.get(str1, 256); // get c-string
		ifstream is1("String.txt"); // open filу
		is1.seekg(10, ios::beg);
		char g;
		int i1 = 0;
		while (is1.get(g) && i1 < 10) {
			i1++;
			kit2.push_back(g);// loop getting single characters
		}
		sort(kit2.begin(), kit2.end());
		is1.close();

		vector <char> kit3;
		char str2[256];
		cin.get(str2, 256); // get c-string
		ifstream is2("String.txt"); // open filу
		is2.seekg(20, ios::beg);
		char g1;
		int i2 = 0;
		while (is2.get(g1) && i2 < 10) {
			i2++;
			kit3.push_back(g1);// loop getting single characters
		}
		sort(kit3.begin(), kit3.end());
		is2.close();

		vector <char> kit4;
		char str3[256];
		cin.get(str3, 256); // get c-string
		ifstream is3("String.txt"); // open filу
		is1.seekg(30, ios::beg);
		char g2;
		int i3 = 0;
		while (is3.get(g2) && i3 < 10) {
			i3++;
			kit4.push_back(g2);// loop getting single characters
		}
		sort(kit4.begin(), kit4.end());
		is3.close();

		vector <char> kit5;
		char str5[256];
		cin.get(str5, 256); // get c-string
		ifstream is5("String.txt"); // open filу
		is5.seekg(40, ios::beg);
		char g5;
		int i5 = 0;
		while (is5.get(g5) && i5 < 10) {
			i5++;
			kit5.push_back(g5);// loop getting single characters
		}
		sort(kit5.begin(), kit5.end());
		is5.close();

		vector <char> kit6;
		char str6[256];
		cin.get(str6, 256); // get c-string
		ifstream is6("String.txt"); // open filу
		is6.seekg(50, ios::beg);
		char g6;
		int i6 = 0;
		while (is6.get(g6) && i6 < 10) {
			i6++;
			kit6.push_back(g6);// loop getting single characters
		}
		sort(kit6.begin(), kit6.end());
		is6.close();

		vector <char> kit7;
		char str7[256];
		cin.get(str7, 256); // get c-string
		ifstream is7("String.txt"); // open filу
		is7.seekg(60, ios::beg);
		char g7;
		int i7 = 0;
		while (is7.get(g7) && i7 < 10) {
			i7++;
			kit7.push_back(g7);// loop getting single characters
		}
		sort(kit7.begin(), kit7.end());
		is7.close();

		vector <char> kit8;
		char str8[256];
		cin.get(str8, 256); // get c-string
		ifstream is8("String.txt"); // open filу
		is8.seekg(70, ios::beg);
		char g8;
		int i8 = 0;
		while (is8.get(g8) && i8 < 10) {
			i8++;
			kit8.push_back(g8);// loop getting single characters
		}
		sort(kit8.begin(), kit8.end());
		is8.close();

		vector <char> kit9;
		char str9[256];
		cin.get(str9, 256); // get c-string
		ifstream is9("String.txt"); // open filу
		is9.seekg(80, ios::beg);
		char g9;
		int i9 = 0;
		while (is9.get(g9) && i9 < 10) {
			i9++;
			kit9.push_back(g9);// loop getting single characters
		}
		sort(kit9.begin(), kit9.end());
		is9.close();


		vector <char> kit10;
		char str10[256];
		cin.get(str10, 256); // get c-string
		ifstream is10("String.txt"); // open filу
		is10.seekg(90, ios::beg);
		char g10;
		int i10 = 0;
		while (is10.get(g10) && i10 < 10) {
			i10++;
			kit10.push_back(g10);// loop getting single characters
		}
		sort(kit10.begin(), kit10.end());
		is10.close();

		
		reverse(kit.begin(), kit.end());//сортировка в обратном порядке для вектора
		reverse(kit10.begin(), kit10.end());
		reverse(kit2.begin(), kit2.end());
		reverse(kit3.begin(), kit3.end());
		reverse(kit4.begin(), kit4.end());
		reverse(kit5.begin(), kit5.end());
		reverse(kit6.begin(), kit6.end());
		reverse(kit7.begin(), kit7.end());
		reverse(kit8.begin(), kit8.end());
		reverse(kit9.begin(), kit9.end());

		thread t1(writeTo, "String2.txt", kit);//занесли в поток вывод в файл обратного вектора
		t1.join();//добавили этот поток
		writeTo1("String2.txt", kit);// переход на новою строку
		thread t2(writeTo, "String2.txt", kit2);
		t2.join();
		writeTo1("String2.txt", kit2);
		thread t3(writeTo, "String2.txt", kit3);
		t3.join();
		writeTo1("String2.txt", kit3);
		thread t4(writeTo, "String2.txt", kit4);
		t4.join();
		writeTo1("String2.txt", kit4);
		thread t5(writeTo, "String2.txt", kit5);
		t5.join();
		writeTo1("String2.txt", kit5);
		thread t6(writeTo, "String2.txt", kit6);
		t6.join();
		writeTo1("String2.txt", kit6);
		thread t7(writeTo, "String2.txt", kit7);
		t7.join();
		writeTo1("String2.txt", kit7);
		thread t8(writeTo, "String2.txt", kit8);
		t8.join();
		writeTo1("String2.txt", kit8);
		thread t9(writeTo, "String2.txt", kit9);
		t9.join();
		writeTo1("String2.txt", kit9);
		thread t10(writeTo, "String2.txt", kit10);
		t10.join();
		writeTo1("String2.txt", kit10);

		
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		timer1->Enabled = true;//таймер (не используется)
		timer1->Interval = 500;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ Filename = "String.txt";//занесли в переменную имя файла
		label4->Text = "Connected.Type 'exit' to terminate";
		try
		{
			StreamReader^ file = File::OpenText("String.txt");// считывание файла
			textBox1->Text = file->ReadToEnd();// вывод файла в текстбокс
		}
		catch (Exception^ e)
		{
			MessageBox::Show(this, "Ошибка", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);//реаизация ошибки,если что-то не полуится
		}
	String^ Filename1 = "String2.txt";//занесли в переменную имя файла
	try
	{
		StreamReader^ file = File::OpenText(Filename1);// считывание файла
		textBox2->Text = file->ReadToEnd();// вывод файла в текстбокс

	}
	catch (Exception^ e)
	{
		MessageBox::Show(this, "Ошибка", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

};


}
