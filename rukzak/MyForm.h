#pragma once
#include<iostream>
#include<vector>
#include<string>
namespace rukzak {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ условиеЗадачиToolStripMenuItem;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->условиеЗадачиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(16, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(208, 68);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Введите количество\r\n предметов:";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown1->Location = System::Drawing::Point(255, 46);
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 28);
			this->numericUpDown1->TabIndex = 1;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(404, 46);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(151, 81);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Подтвердить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown2->Location = System::Drawing::Point(255, 99);
			this->numericUpDown2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(120, 28);
			this->numericUpDown2->TabIndex = 4;
			this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(16, 101);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(230, 68);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Введите вместимость\r\n рюкзака:";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(-2, 172);
			this->dataGridView1->MinimumSize = System::Drawing::Size(320, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 64;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(377, 216);
			this->dataGridView1->TabIndex = 5;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(46, 394);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(266, 39);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Рассчитать";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(398, 233);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(367, 34);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Попробуй алгоритм укладки рюкзака!";
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->условиеЗадачиToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(817, 28);
			this->menuStrip1->TabIndex = 8;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// условиеЗадачиToolStripMenuItem
			// 
			this->условиеЗадачиToolStripMenuItem->Name = L"условиеЗадачиToolStripMenuItem";
			this->условиеЗадачиToolStripMenuItem->Size = System::Drawing::Size(133, 24);
			this->условиеЗадачиToolStripMenuItem->Text = L"Условие задачи";
			this->условиеЗадачиToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::условиеЗадачиToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(817, 453);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int n, w;
		int alg(int i, int** predm, int w)
		{
			if (i == -1)

			{
				return 0;
			}
			if (w < predm[i][0])
				return alg(i - 1, predm, w);
			int b = alg(i - 1, predm, w);
			int a = predm[i][1] + alg(i - 1, predm, w - predm[i][0]);
			
			if (a > b)
			{
				return a;
			}
			else
			{
				return b;
			}
		}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		n = Convert::ToInt32(numericUpDown1->Value);
		w = Convert::ToInt32(numericUpDown2->Value);
		
		dataGridView1->RowCount = n;
		dataGridView1->ColumnCount = 2;
	
		for (int i = 0; i < n; i++)
		{

				dataGridView1->TopLeftHeaderCell->Value = "Предметы";
				dataGridView1->Columns[0]->HeaderCell->Value = "Вес предмета";
				dataGridView1->Columns[1]->HeaderCell->Value = "Стоимость предмета";
				dataGridView1->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		n = Convert::ToInt32(numericUpDown1->Value);
		w = Convert::ToInt32(numericUpDown2->Value);
		int** predm = new int* [n];
		int* num = new int[n];
		for (int i = 0; i < n; i++)
		{
			num[i] = i + 1;
		}
		for (int i = 0; i < n; i++)
		{
			predm[i] = new int[2];
		}
		for (int i = 0; i < n; i++)
		{
			predm[i][0] = Convert::ToInt32(dataGridView1->Rows[i]->Cells[0]->Value);
			predm[i][1] = Convert::ToInt32(dataGridView1->Rows[i]->Cells[1]->Value);
		}
		for (int j = 1; j < n; j++)
		{
			for (int i = 0; i < n - j; i++)
			{
				if (predm[i][1] < predm[i + 1][1])
				{
					std::swap(predm[i], predm[i + 1]);
					std::swap(num[i], num[i + 1]);
				}
			}
		}

		int res = alg(n - 1, predm, w);
		
		/*for (int i = 0; i < n; i++)
		{
			if (numbers[i] != 0)
				label3->Text += Convert::ToString(numbers[i]) + " ";
		}*/
		label3->Text = "Итоговая цена предметов\nсоставила " + Convert::ToString(res);
	}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void условиеЗадачиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Дан рюкзак с некой вместимостью и набор предметов, каждый из которых имеет собственный вес и цену. Необходимо найти максимальную стоимость предметов, помещённых в рюкзак, при условии что сумма их весов не превосходит вместимость рюкзака", "Условие задачи");
}
};
}
