#pragma once
#include <vector>
#include"Header.h"

namespace GraficRedactor {

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
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::ColorDialog^ colorDialog1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TrackBar^ trackBar1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::GroupBox^ groupBox3;

	private: System::Windows::Forms::Button^ load_btn;
	private: System::Windows::Forms::Button^ save_btn;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;

	private: System::ComponentModel::IContainer^ components;
	protected:

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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->load_btn = (gcnew System::Windows::Forms::Button());
			this->save_btn = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Location = System::Drawing::Point(3, 16);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(943, 495);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseDown);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->load_btn);
			this->groupBox1->Controls->Add(this->save_btn);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->trackBar1);
			this->groupBox1->Dock = System::Windows::Forms::DockStyle::Top;
			this->groupBox1->Location = System::Drawing::Point(0, 0);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1045, 71);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Параметры";
			// 
			// load_btn
			// 
			this->load_btn->Dock = System::Windows::Forms::DockStyle::Right;
			this->load_btn->Location = System::Drawing::Point(946, 16);
			this->load_btn->Name = L"load_btn";
			this->load_btn->Size = System::Drawing::Size(48, 52);
			this->load_btn->TabIndex = 6;
			this->load_btn->Text = L"Загрузить";
			this->load_btn->UseVisualStyleBackColor = true;
			this->load_btn->Click += gcnew System::EventHandler(this, &MyForm::load_btn_Click);
			// 
			// save_btn
			// 
			this->save_btn->Dock = System::Windows::Forms::DockStyle::Right;
			this->save_btn->Location = System::Drawing::Point(994, 16);
			this->save_btn->Name = L"save_btn";
			this->save_btn->Size = System::Drawing::Size(48, 52);
			this->save_btn->TabIndex = 5;
			this->save_btn->Text = L"Сохранить";
			this->save_btn->UseVisualStyleBackColor = true;
			this->save_btn->Click += gcnew System::EventHandler(this, &MyForm::save_btn_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(266, 29);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 20);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Цвет";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(116, 29);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(22, 20);
			this->textBox1->TabIndex = 2;
			// 
			// trackBar1
			// 
			this->trackBar1->Location = System::Drawing::Point(6, 19);
			this->trackBar1->Maximum = 15;
			this->trackBar1->Minimum = 1;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(104, 45);
			this->trackBar1->TabIndex = 1;
			this->trackBar1->TickStyle = System::Windows::Forms::TickStyle::Both;
			this->trackBar1->Value = 5;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &MyForm::trackBar1_Scroll);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->radioButton4);
			this->groupBox2->Controls->Add(this->radioButton3);
			this->groupBox2->Controls->Add(this->radioButton2);
			this->groupBox2->Controls->Add(this->radioButton1);
			this->groupBox2->Dock = System::Windows::Forms::DockStyle::Right;
			this->groupBox2->Location = System::Drawing::Point(949, 71);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(96, 514);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Кисть";
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(6, 88);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(81, 17);
			this->radioButton4->TabIndex = 3;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Полилиния";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(6, 65);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(50, 17);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Дуга";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(6, 19);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(65, 17);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Прямая";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(6, 42);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(55, 17);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Точка";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->pictureBox1);
			this->groupBox3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox3->Location = System::Drawing::Point(0, 71);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(949, 514);
			this->groupBox3->TabIndex = 3;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Поле";
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->Filter = L"BitMap files (*.bmp)|*.bmp|JPEG files (*.jpg)|*.jpg|PNG files (*.png)|*.png";
			this->saveFileDialog1->RestoreDirectory = true;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->Filter = L"BitMap files (*.bmp)|*.bmp|JPEG files (*.jpg)|*.jpg|PNG files (*.png)|*.png";
			this->openFileDialog1->RestoreDirectory = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1045, 585);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResizeEnd += gcnew System::EventHandler(this, &MyForm::MyForm_ResizeEnd);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->ResumeLayout(false);

		}
	private:
		Graphics^ Graph;
		Graphics^ Parametrs;
		Pen^ Pe;
		array<PointF>^ F = gcnew array<PointF>(3);


#pragma endregion
	private: System::Void trackBar1_Scroll(System::Object^ sender, System::EventArgs^ e) {
		Pe->Width = this->trackBar1->Value;
		this->textBox1->Text = System::Convert::ToString(this->trackBar1->Value);
		Pen^ temporaryPen = gcnew Pen(SystemColors::Control, 25);
		Parametrs->DrawLine(temporaryPen, 150, 39, 251, 39);
		Parametrs->FillEllipse(temporaryPen->Brush, 195 - 15, 39 - 15,
			15 * 2, 15 * 2);
		if (this->radioButton1->Checked)
		{	
			Parametrs->FillEllipse(Pe->Brush, 195 - this->trackBar1->Value, 39 - this->trackBar1->Value,
				this->trackBar1->Value * 2, this->trackBar1->Value * 2);
		}
		else
		{		
			Parametrs->DrawLine(Pe, 150, 39, 250, 39);
		}
	}
	private: System::Void MyForm_ResizeEnd(System::Object^ sender, System::EventArgs^ e) {
		Graph = this->pictureBox1->CreateGraphics();
		Parametrs = this->groupBox1->CreateGraphics();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->colorDialog1->ShowDialog();
		Pe->Color = this->colorDialog1->Color;

		Pen^ temporaryPen = gcnew Pen(SystemColors::Control, 25);
		Parametrs->DrawLine(temporaryPen, 150, 39, 251, 39);
		Parametrs->FillEllipse(temporaryPen->Brush, 195 - 15, 39 - 15,
			15 * 2, 15 * 2);
		if (this->radioButton1->Checked)
		{
			Parametrs->FillEllipse(Pe->Brush, 195 - this->trackBar1->Value, 39 - this->trackBar1->Value,
				this->trackBar1->Value * 2, this->trackBar1->Value * 2);
		}
		else
		{
			Parametrs->DrawLine(Pe, 150, 39, 250, 39);
		}
	}
	private: System::Void pictureBox1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (e->Button == Windows::Forms::MouseButtons::Left)
		{
			if (this->radioButton2->Checked)
			{
				switch (finished)
				{
				case false:
					temporary_line.x1 = e->X; temporary_line.y1 = e->Y;
					finished = !finished;
					break;

				case true:
					temporary_line.x2 = e->X; temporary_line.y2 = e->Y;
					line.push_back(temporary_line);
					Graph->DrawLine(Pe, line[line.size() - 1].x1, line[line.size() - 1].y1,
						line[line.size() - 1].x2, line[line.size() - 1].y2);
					finished = !finished;
					break;
				}
			}

			if (this->radioButton1->Checked)
			{
				temporary_dot.x = e->X - this->trackBar1->Value;
				temporary_dot.y = e->Y - this->trackBar1->Value;
				dot.push_back(temporary_dot);
				Graph->FillEllipse(Pe->Brush, dot[dot.size() - 1].x, dot[dot.size() - 1].y, this->trackBar1->Value * 2,
					this->trackBar1->Value * 2);
			}

			if (this->radioButton3->Checked)
			{
				if (finished_dyga == 0)
				{
					F[finished_dyga].X = e->X;
					F[finished_dyga].Y = e->Y;
					finished_dyga++;
				}
				else if (finished_dyga == 1)
				{
					F[finished_dyga].X = e->X;
					F[finished_dyga].Y = e->Y;
					finished_dyga++;
				}
				else if (finished_dyga == 2)
				{
					F[finished_dyga].X = e->X;
					F[finished_dyga].Y = e->Y;
					finished_dyga = 0;
					Graph->DrawCurve(Pe, F);
				}
			}
		}
	}
	private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		Pe->Width = this->trackBar1->Value;
		Pen^ temporaryPen = gcnew Pen(SystemColors::Control, 25);
		Parametrs->DrawLine(temporaryPen, 150, 39, 251, 39);
		Parametrs->FillEllipse(temporaryPen->Brush, 195 - 15, 39 - 15,
			15 * 2, 15 * 2);
		if (this->radioButton1->Checked)
		{
			Parametrs->FillEllipse(Pe->Brush, 195 - this->trackBar1->Value, 39 - this->trackBar1->Value,
				this->trackBar1->Value * 2, this->trackBar1->Value * 2);
		}
		else
		{
			Parametrs->DrawLine(Pe, 150, 39, 250, 39);
		}
	}
	private: System::Void save_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (saveFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK)		
		{
			Rectangle^ r = pictureBox1->RectangleToScreen(pictureBox1->ClientRectangle);
			Bitmap^ b = gcnew Bitmap(r->Width, r->Height);
			Graphics^ g = Graphics::FromImage(b);
			g->CopyFromScreen(r->Location, Point(0, 0), r->Size);
			b->Save(saveFileDialog1->FileName);
			b = nullptr;
			g = nullptr;
		}
		
	}
	private: System::Void load_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (openFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK)
		{
			Image^ img = Image::FromFile(openFileDialog1->FileName);
			Graph->Clear(Color::White);
			Graph->DrawImage(img, 0, 0);
			img = nullptr;
		}
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		Parametrs = this->groupBox1->CreateGraphics();
		Graph = this->pictureBox1->CreateGraphics();
		Pe = gcnew Pen(this->colorDialog1->Color, this->trackBar1->Value);
		this->radioButton2->Checked = true;
		////////////////////////////////////////////////
		this->textBox1->Text = System::Convert::ToString(this->trackBar1->Value);
		Parametrs->FillEllipse(Pe->Brush, 195 - this->trackBar1->Value, 39 - this->trackBar1->Value,
			this->trackBar1->Value * 2, this->trackBar1->Value * 2);
		////////////////////////////////////////////////
	}
};
}
