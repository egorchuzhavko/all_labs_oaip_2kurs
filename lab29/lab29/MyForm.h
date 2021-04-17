#pragma once

namespace lab29 {

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
			this->Text = "Работа с MS Word Чужавко Е.А. Т-992";
			this->textBox1->Multiline = true;
			this->textBox1->TabIndex = 0;
			this->button1->TabIndex = 1;
			this->button2->TabIndex = 2;
			this->button1->Text = "Проверка орфографии";
			this->button2->Text = "Создать документ MS Word";
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
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;


	protected:

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(43, 36);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(350, 203);
			this->textBox1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(31, 245);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(143, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Проверка орфографии";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(240, 245);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(162, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Создать документ MS Word";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// chart1
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart1->Legends->Add(legend2);
			this->chart1->Location = System::Drawing::Point(426, 14);
			this->chart1->Name = L"chart1";
			series2->ChartArea = L"ChartArea1";
			series2->Legend = L"Legend1";
			series2->Name = L"Series1";
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(594, 254);
			this->chart1->TabIndex = 3;
			this->chart1->Text = L"chart1";
			this->chart1->Click += gcnew System::EventHandler(this, &MyForm::chart1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(31, 298);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(445, 190);
			this->dataGridView1->TabIndex = 4;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(523, 310);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(226, 23);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Создать документ MS Word 2";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(523, 380);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(226, 23);
			this->button4->TabIndex = 6;
			this->button4->Text = L"Высчитать";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(812, 315);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(113, 13);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Средняя стоимость: ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(787, 354);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(138, 13);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Минимальная стоимость:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(773, 390);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(159, 13);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Кол-во месяцев без товаров: ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(932, 319);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 13);
			this->label4->TabIndex = 10;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(932, 354);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 13);
			this->label5->TabIndex = 11;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(939, 390);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 13);
			this->label6->TabIndex = 12;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1051, 503);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		auto word1 = gcnew Microsoft::Office::Interop::Word::Application();
		word1->Visible = false;
		Object^ t = Type::Missing;
		auto document = word1->Documents->Add(t, t, t, t);
		document->Words->First->InsertBefore(this->textBox1->Text);
		document->CheckSpelling(t, t, t, t, t, t, t, t, t, t, t, t);
		String^ correctText = document->Content->Text;
		this->textBox1->Text = correctText->Replace("\r", "");
		Boolean^ tt = false;
		word1->Documents->Close(tt, t, t);
		word1->Quit(tt, t, t);
		word1 = nullptr;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			array<String^>^ names = { "Иванов Иван","Петров Пётр","Сидоров Сидор","Антонова Мария","Вскрытие замков","Справочная служба","Прогноз погоды","Smith Jack","Рождественский Эдуард Ипполиттович","ЖЭС"};
			array<String^>^ telephones = { "+375(44)908-78-45","+375(13)807-82-65","+375(17)123-45-67","+375(23)560-76-00","7788","007","909","+100(98)904-45-21","+315(03)509-87-43 или 777","117" };
			auto word2 = gcnew Microsoft::Office::Interop::Word::Application();
			word2->Visible = true;
			auto t = Type::Missing;
			auto document2 = word2->Documents->Add(t, t, t, t);
			word2->Selection->TypeText("\t\t\t\tТаблица телефонных номеров");
			System::Object^ t1 = Microsoft::Office::Interop::Word::WdDefaultTableBehavior::wdWord9TableBehavior;
			System::Object^ t2 = Microsoft::Office::Interop::Word::WdAutoFitBehavior::wdAutoFitContent;
			word2->ActiveDocument->Tables->Add(word2->Selection->Range, 10, 2, t1, t2);
			for (int i = 0; i < 10; i++) {
				try {
					word2->ActiveDocument->Tables[1]->Cell(i + 1, 1)->Range->InsertAfter(names[i]);
					word2->ActiveDocument->Tables[1]->Cell(i + 1, 2)->Range->InsertAfter(telephones[i]);
				}
				catch (System::Runtime::InteropServices::COMException^ e) {
					textBox1->Text += i.ToString() + " " + e->Message + "\t";
					i--;
				}
			}
			Object^ t3 = Microsoft::Office::Interop::Word::WdUnits::wdLine;
			Int32^ str10 = 10;
			word2->Selection->MoveDown(t3, str10, t);
			word2->Selection->TypeText("\tВ таблице выше перечислены номера телефонов и их владельцы. Многие номера имеют международный формат отображения номера: + код страны (код оператора) собственно\
номер телефона абонента.\n\tНачало следующего абзаца текста.\n");
			Object^ fileName = "lab_29.docx";
			word2->ActiveDocument->SaveAs(fileName, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t);
		}
		catch (System::Exception^ e0) {
			textBox1->Text += e0->Message + "\t";
		}
	}
	private: bool cilindr;
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		cilindr = false;
		DataTable^ table = gcnew DataTable();
		table->Columns->Add("Месяц", String::typeid);
		table->Columns->Add("Название товара", String::typeid);
		table->Columns->Add("Количество товара", double::typeid);
		table->Columns->Add("Цена товара", double::typeid);
		DataRow^ row = table->NewRow();
		row["Месяц"] = "Июль";
		row["Название товара"] = "Колесо";
		row["Количество товара"] = 6;
		row["Цена товара"] = 150;
		table->Rows->Add(row);
		row = table->NewRow();
		row["Месяц"] = "Август";
		table->Rows->Add(row);
		row = table->NewRow();
		row["Месяц"] = "Сентябрь"; 
			table->Rows->Add(row);
		row = table->NewRow();
		row["Месяц"] = "Октябрь";
		table->Rows->Add(row);
		row = table->NewRow();
		row["Месяц"] = "Ноябрь";
		table->Rows->Add(row);
		row = table->NewRow();
		row["Месяц"] = "Декабрь";
		table->Rows->Add(row);
		chart1->DataSource = table;
		chart1->Series["Series1"]->XValueMember = "Месяц";
		chart1->Series["Series1"]->YValueMembers = "Цена товара";
		chart1->Titles->Add("Цена товаров");
		chart1->Series["Series1"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Column;
		chart1->Series["Series1"]->Color = Color::MediumPurple	;
		chart1->Series["Series1"]->IsVisibleInLegend = false;
		chart1->DataBind();
		dataGridView1->DataSource = table;
	}	
private: System::Void chart1_Click(System::Object^ sender, System::EventArgs^ e) {
	cilindr = !cilindr;
	if (cilindr == true) {
		chart1->Series["Series1"]["DrawingStyle"] = "Cylinder";
	}
	else {
		chart1->Series["Series1"]["DrawingStyle"] = "Default";
	}
	chart1->DataBind();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		int rows = dataGridView1->Rows->Count;
		String^ month;
		String^ name;
		String^ count;
		String^ price;
		auto word2 = gcnew Microsoft::Office::Interop::Word::Application();
		word2->Visible = true;
		auto t = Type::Missing;
		auto document2 = word2->Documents->Add(t, t, t, t);
		word2->Selection->TypeText("\t\t\t\tТаблица наличия книг в библиотеке.");
		System::Object^ t1 = Microsoft::Office::Interop::Word::WdDefaultTableBehavior::wdWord9TableBehavior;
		System::Object^ t2 = Microsoft::Office::Interop::Word::WdAutoFitBehavior::wdAutoFitContent;
		word2->ActiveDocument->Tables->Add(word2->Selection->Range, (rows - 1), 4, t1, t2);
		for (size_t i = 0; i < rows - 1; i++)
		{
			try
			{
				month = dataGridView1->Rows[i]->Cells[0]->Value->ToString();
				name = dataGridView1->Rows[i]->Cells[1]->Value->ToString();
				count = dataGridView1->Rows[i]->Cells[2]->Value->ToString();
				price = dataGridView1->Rows[i]->Cells[3]->Value->ToString();
				word2->ActiveDocument->Tables[1]->Cell(i + 1, 1)->Range->InsertAfter(month);
				word2->ActiveDocument->Tables[1]->Cell(i + 1, 2)->Range->InsertAfter(name);
				word2->ActiveDocument->Tables[1]->Cell(i + 1, 3)->Range->InsertAfter(count);
				word2->ActiveDocument->Tables[1]->Cell(i + 1, 4)->Range->InsertAfter(price);

			}
			catch (System::Runtime::InteropServices::COMException^ e)
			{
				textBox1->Text += i.ToString() + " " + e->Message + "\t";
				i--;
			}
		}
		Object^ t3 = Microsoft::Office::Interop::Word::WdUnits::wdLine;
		Int32^ str10 = 3;
		word2->Selection->MoveDown(t3, str10, t);
		Object^ fileName = "Chuzhavko2.docx";
		word2->ActiveDocument->SaveAs(fileName, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t);
	}
	catch (System::Exception^ e0)
	{
		textBox1->Text += e0->Message + "\t";
	}

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	chart1->DataBind();
	String^ price;
	String^ count;
	double a, sum, min = 10000;
	int k = 0, count2;
	int rows = dataGridView1->Rows->Count;
	try
	{
		for (size_t i = 0; i < rows - 1; i++)
		{
			price = dataGridView1->Rows[i]->Cells[3]->Value->ToString();
			count = dataGridView1->Rows[i]->Cells[2]->Value->ToString();
			a = Convert::ToDouble(price);
			count2 = Convert::ToDouble(count);
			sum += a;
			if (a < min)
				min = a;
			if (count2 == 0)
				k++;
		}
	}
	catch (System::FormatException^ e)
	{
		textBox1->Text = "Ошибка";
	}
	label4->Text = "" + (sum / 6);
	label5->Text = "" + min;
	label6->Text = "" + k;
}
};
}