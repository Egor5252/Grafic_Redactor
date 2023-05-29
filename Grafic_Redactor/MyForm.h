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
	/// Ñâîäêà äëÿ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
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




	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;

	private: System::Windows::Forms::ToolStripMenuItem^ äóãàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñïëîøíàÿToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïóíêòèğíàÿToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ øòğèõïóíêòèğíàÿToolStripMenuItem;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip2;
	private: System::Windows::Forms::ToolStripMenuItem^ ëèíèÿToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñòğåëî÷êàÒóäàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñòğåëî÷êàÒóäàñşäàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñòğåëî÷êàÒóäàToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ñòğåëî÷êàÒóäàñşäàToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ îáû÷íàÿToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ îáû÷íàÿToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ñòğåëî÷êàÒóäàToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ ñòğåëî÷êàÒóäàñşäàToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ îáû÷íàÿToolStripMenuItem2;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Timer^ timer2;
	private: System::Windows::Forms::ToolStripMenuItem^ êîíåöToolStripMenuItem;








	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->ëèíèÿToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->äóãàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->load_btn = (gcnew System::Windows::Forms::Button());
			this->save_btn = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->ñïëîøíàÿToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñòğåëî÷êàÒóäàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñòğåëî÷êàÒóäàñşäàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îáû÷íàÿToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïóíêòèğíàÿToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñòğåëî÷êàÒóäàToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñòğåëî÷êàÒóäàñşäàToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îáû÷íàÿToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->øòğèõïóíêòèğíàÿToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñòğåëî÷êàÒóäàToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñòğåëî÷êàÒóäàñşäàToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îáû÷íàÿToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip2 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->êîíåöToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->contextMenuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->contextMenuStrip2->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			this->pictureBox1->ContextMenuStrip = this->contextMenuStrip1;
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Location = System::Drawing::Point(3, 16);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1038, 479);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseDown);
			this->pictureBox1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseMove);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ëèíèÿToolStripMenuItem,
					this->äóãàToolStripMenuItem, this->êîíåöToolStripMenuItem
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->ShowImageMargin = false;
			this->contextMenuStrip1->Size = System::Drawing::Size(156, 92);
			// 
			// ëèíèÿToolStripMenuItem
			// 
			this->ëèíèÿToolStripMenuItem->Name = L"ëèíèÿToolStripMenuItem";
			this->ëèíèÿToolStripMenuItem->Size = System::Drawing::Size(155, 22);
			this->ëèíèÿToolStripMenuItem->Text = L"Ëèíèÿ";
			this->ëèíèÿToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ëèíèÿToolStripMenuItem_Click);
			// 
			// äóãàToolStripMenuItem
			// 
			this->äóãàToolStripMenuItem->Name = L"äóãàToolStripMenuItem";
			this->äóãàToolStripMenuItem->Size = System::Drawing::Size(155, 22);
			this->äóãàToolStripMenuItem->Text = L"Äóãà";
			this->äóãàToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::äóãàToolStripMenuItem_Click);
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
			this->groupBox1->Size = System::Drawing::Size(1140, 71);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Ïàğàìåòğû";
			// 
			// load_btn
			// 
			this->load_btn->Dock = System::Windows::Forms::DockStyle::Right;
			this->load_btn->Location = System::Drawing::Point(1041, 16);
			this->load_btn->Name = L"load_btn";
			this->load_btn->Size = System::Drawing::Size(48, 52);
			this->load_btn->TabIndex = 6;
			this->load_btn->Text = L"Çàãğóçèòü";
			this->load_btn->UseVisualStyleBackColor = true;
			this->load_btn->Click += gcnew System::EventHandler(this, &MyForm::load_btn_Click);
			// 
			// save_btn
			// 
			this->save_btn->Dock = System::Windows::Forms::DockStyle::Right;
			this->save_btn->Location = System::Drawing::Point(1089, 16);
			this->save_btn->Name = L"save_btn";
			this->save_btn->Size = System::Drawing::Size(48, 52);
			this->save_btn->TabIndex = 5;
			this->save_btn->Text = L"Ñîõğàíèòü";
			this->save_btn->UseVisualStyleBackColor = true;
			this->save_btn->Click += gcnew System::EventHandler(this, &MyForm::save_btn_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(266, 29);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 20);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Öâåò";
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
			this->groupBox2->Controls->Add(this->radioButton5);
			this->groupBox2->Controls->Add(this->radioButton4);
			this->groupBox2->Controls->Add(this->radioButton3);
			this->groupBox2->Controls->Add(this->radioButton2);
			this->groupBox2->Controls->Add(this->radioButton1);
			this->groupBox2->Dock = System::Windows::Forms::DockStyle::Right;
			this->groupBox2->Location = System::Drawing::Point(1044, 71);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(96, 498);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Êèñòü";
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(6, 111);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(62, 17);
			this->radioButton5->TabIndex = 4;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"Ëàñòèê";
			this->radioButton5->UseVisualStyleBackColor = true;
			this->radioButton5->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton_CheckedChanged);
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(6, 88);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(81, 17);
			this->radioButton4->TabIndex = 3;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Ïîëèëèíèÿ";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(6, 65);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(50, 17);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Äóãà";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(6, 42);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(65, 17);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Ïğÿìàÿ";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(6, 19);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(55, 17);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Òî÷êà";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton_CheckedChanged);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->pictureBox1);
			this->groupBox3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox3->Location = System::Drawing::Point(0, 71);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(1044, 498);
			this->groupBox3->TabIndex = 3;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Ïîëå";
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
			// ñïëîøíàÿToolStripMenuItem
			// 
			this->ñïëîøíàÿToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ñòğåëî÷êàÒóäàToolStripMenuItem,
					this->ñòğåëî÷êàÒóäàñşäàToolStripMenuItem, this->îáû÷íàÿToolStripMenuItem
			});
			this->ñïëîøíàÿToolStripMenuItem->Name = L"ñïëîøíàÿToolStripMenuItem";
			this->ñïëîøíàÿToolStripMenuItem->Size = System::Drawing::Size(149, 22);
			this->ñïëîøíàÿToolStripMenuItem->Text = L"Ñïëîøíàÿ";
			// 
			// ñòğåëî÷êàÒóäàToolStripMenuItem
			// 
			this->ñòğåëî÷êàÒóäàToolStripMenuItem->Name = L"ñòğåëî÷êàÒóäàToolStripMenuItem";
			this->ñòğåëî÷êàÒóäàToolStripMenuItem->Size = System::Drawing::Size(192, 22);
			this->ñòğåëî÷êàÒóäàToolStripMenuItem->Text = L"Ñòğåëî÷êà òóäà";
			this->ñòğåëî÷êàÒóäàToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ñòğåëî÷êàÒóäàToolStripMenuItem_Click);
			// 
			// ñòğåëî÷êàÒóäàñşäàToolStripMenuItem
			// 
			this->ñòğåëî÷êàÒóäàñşäàToolStripMenuItem->Name = L"ñòğåëî÷êàÒóäàñşäàToolStripMenuItem";
			this->ñòğåëî÷êàÒóäàñşäàToolStripMenuItem->Size = System::Drawing::Size(192, 22);
			this->ñòğåëî÷êàÒóäàñşäàToolStripMenuItem->Text = L"Ñòğåëî÷êà òóäà-ñşäà";
			this->ñòğåëî÷êàÒóäàñşäàToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ñòğåëî÷êàÒóäàñşäàToolStripMenuItem_Click);
			// 
			// îáû÷íàÿToolStripMenuItem
			// 
			this->îáû÷íàÿToolStripMenuItem->Name = L"îáû÷íàÿToolStripMenuItem";
			this->îáû÷íàÿToolStripMenuItem->Size = System::Drawing::Size(192, 22);
			this->îáû÷íàÿToolStripMenuItem->Text = L"Îáû÷íàÿ";
			this->îáû÷íàÿToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::îáû÷íàÿToolStripMenuItem_Click);
			// 
			// ïóíêòèğíàÿToolStripMenuItem
			// 
			this->ïóíêòèğíàÿToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ñòğåëî÷êàÒóäàToolStripMenuItem1,
					this->ñòğåëî÷êàÒóäàñşäàToolStripMenuItem1, this->îáû÷íàÿToolStripMenuItem1
			});
			this->ïóíêòèğíàÿToolStripMenuItem->Name = L"ïóíêòèğíàÿToolStripMenuItem";
			this->ïóíêòèğíàÿToolStripMenuItem->Size = System::Drawing::Size(149, 22);
			this->ïóíêòèğíàÿToolStripMenuItem->Text = L"Ïóíêòèğíàÿ";
			// 
			// ñòğåëî÷êàÒóäàToolStripMenuItem1
			// 
			this->ñòğåëî÷êàÒóäàToolStripMenuItem1->Name = L"ñòğåëî÷êàÒóäàToolStripMenuItem1";
			this->ñòğåëî÷êàÒóäàToolStripMenuItem1->Size = System::Drawing::Size(192, 22);
			this->ñòğåëî÷êàÒóäàToolStripMenuItem1->Text = L"Ñòğåëî÷êà òóäà";
			this->ñòğåëî÷êàÒóäàToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::ñòğåëî÷êàÒóäàToolStripMenuItem1_Click);
			// 
			// ñòğåëî÷êàÒóäàñşäàToolStripMenuItem1
			// 
			this->ñòğåëî÷êàÒóäàñşäàToolStripMenuItem1->Name = L"ñòğåëî÷êàÒóäàñşäàToolStripMenuItem1";
			this->ñòğåëî÷êàÒóäàñşäàToolStripMenuItem1->Size = System::Drawing::Size(192, 22);
			this->ñòğåëî÷êàÒóäàñşäàToolStripMenuItem1->Text = L"Ñòğåëî÷êà òóäà-ñşäà";
			this->ñòğåëî÷êàÒóäàñşäàToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::ñòğåëî÷êàÒóäàñşäàToolStripMenuItem1_Click);
			// 
			// îáû÷íàÿToolStripMenuItem1
			// 
			this->îáû÷íàÿToolStripMenuItem1->Name = L"îáû÷íàÿToolStripMenuItem1";
			this->îáû÷íàÿToolStripMenuItem1->Size = System::Drawing::Size(192, 22);
			this->îáû÷íàÿToolStripMenuItem1->Text = L"Îáû÷íàÿ";
			this->îáû÷íàÿToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::îáû÷íàÿToolStripMenuItem1_Click);
			// 
			// øòğèõïóíêòèğíàÿToolStripMenuItem
			// 
			this->øòğèõïóíêòèğíàÿToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ñòğåëî÷êàÒóäàToolStripMenuItem2,
					this->ñòğåëî÷êàÒóäàñşäàToolStripMenuItem2, this->îáû÷íàÿToolStripMenuItem2
			});
			this->øòğèõïóíêòèğíàÿToolStripMenuItem->Name = L"øòğèõïóíêòèğíàÿToolStripMenuItem";
			this->øòğèõïóíêòèğíàÿToolStripMenuItem->Size = System::Drawing::Size(149, 22);
			this->øòğèõïóíêòèğíàÿToolStripMenuItem->Text = L"Øòğèõïóíêòèğíàÿ";
			// 
			// ñòğåëî÷êàÒóäàToolStripMenuItem2
			// 
			this->ñòğåëî÷êàÒóäàToolStripMenuItem2->Name = L"ñòğåëî÷êàÒóäàToolStripMenuItem2";
			this->ñòğåëî÷êàÒóäàToolStripMenuItem2->Size = System::Drawing::Size(192, 22);
			this->ñòğåëî÷êàÒóäàToolStripMenuItem2->Text = L"Ñòğåëî÷êà òóäà";
			this->ñòğåëî÷êàÒóäàToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MyForm::ñòğåëî÷êàÒóäàToolStripMenuItem2_Click);
			// 
			// ñòğåëî÷êàÒóäàñşäàToolStripMenuItem2
			// 
			this->ñòğåëî÷êàÒóäàñşäàToolStripMenuItem2->Name = L"ñòğåëî÷êàÒóäàñşäàToolStripMenuItem2";
			this->ñòğåëî÷êàÒóäàñşäàToolStripMenuItem2->Size = System::Drawing::Size(192, 22);
			this->ñòğåëî÷êàÒóäàñşäàToolStripMenuItem2->Text = L"Ñòğåëî÷êà òóäà-ñşäà";
			this->ñòğåëî÷êàÒóäàñşäàToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MyForm::ñòğåëî÷êàÒóäàñşäàToolStripMenuItem2_Click);
			// 
			// îáû÷íàÿToolStripMenuItem2
			// 
			this->îáû÷íàÿToolStripMenuItem2->Name = L"îáû÷íàÿToolStripMenuItem2";
			this->îáû÷íàÿToolStripMenuItem2->Size = System::Drawing::Size(192, 22);
			this->îáû÷íàÿToolStripMenuItem2->Text = L"Îáû÷íàÿ";
			this->îáû÷íàÿToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MyForm::îáû÷íàÿToolStripMenuItem2_Click);
			// 
			// contextMenuStrip2
			// 
			this->contextMenuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ñïëîøíàÿToolStripMenuItem,
					this->ïóíêòèğíàÿToolStripMenuItem, this->øòğèõïóíêòèğíàÿToolStripMenuItem
			});
			this->contextMenuStrip2->Name = L"contextMenuStrip2";
			this->contextMenuStrip2->ShowImageMargin = false;
			this->contextMenuStrip2->Size = System::Drawing::Size(150, 70);
			// 
			// timer1
			// 
			this->timer1->Interval = 300;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// timer2
			// 
			this->timer2->Enabled = true;
			this->timer2->Tick += gcnew System::EventHandler(this, &MyForm::timer2_Tick);
			// 
			// êîíåöToolStripMenuItem
			// 
			this->êîíåöToolStripMenuItem->Name = L"êîíåöToolStripMenuItem";
			this->êîíåöToolStripMenuItem->Size = System::Drawing::Size(155, 22);
			this->êîíåöToolStripMenuItem->Text = L"Êîíåö";
			this->êîíåöToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::êîíåöToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1140, 569);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResizeEnd += gcnew System::EventHandler(this, &MyForm::MyForm_ResizeEnd);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->contextMenuStrip1->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->contextMenuStrip2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
	private:
		Graphics^ Graph;
		Graphics^ Parametrs;
		Pen^ Pe;
		array<PointF>^ F = gcnew array<PointF>(3);


#pragma endregion

	Void Lalala()
	{
		Pe->Width = this->trackBar1->Value;
		Pen^ temporaryPen = gcnew Pen(SystemColors::Control, 40);
		Parametrs->DrawLine(temporaryPen, 140, 39, 260, 39);
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
		private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
			Lalala();
			this->timer2->Stop();
		}
	private: System::Void trackBar1_Scroll(System::Object^ sender, System::EventArgs^ e) {
		Lalala();
		this->textBox1->Text = System::Convert::ToString(this->trackBar1->Value);
	}
	private: System::Void MyForm_ResizeEnd(System::Object^ sender, System::EventArgs^ e) {
		Graph = this->pictureBox1->CreateGraphics();
		Parametrs = this->groupBox1->CreateGraphics();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->colorDialog1->ShowDialog();
		Pe->Color = this->colorDialog1->Color;

		Lalala();
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

			if (this->radioButton4->Checked)
			{
				if (!line_or_duga)
				{
					if (!start)
					{
						temporary_line.x1 = e->X; temporary_line.y1 = e->Y;
						start = !start;
					}
					else if (start)
					{
						Graph->DrawLine(Pe, temporary_line.x1, temporary_line.y1, e->X, e->Y);
						temporary_line.x1 = e->X; temporary_line.y1 = e->Y;
						F[0].X = e->X; F[0].Y = e->Y; finished_dyga1 = 1;
					}
				}
				else if (line_or_duga)
				{
					if (!start)
					{
						if (finished_dyga1 == 0)
						{
							F[finished_dyga1].X = e->X;
							F[finished_dyga1].Y = e->Y;
							finished_dyga1++;
						}
						else if (finished_dyga1 == 1)
						{
							F[finished_dyga1].X = e->X;
							F[finished_dyga1].Y = e->Y;
							finished_dyga1 = 0;
							start = !start;
						}
					}
					else if (start)
					{
						if (finished_dyga1 == 0)
						{
							F[2].X = e->X; F[2].Y = e->Y;
							Graph->DrawCurve(Pe, F);
							F[0] = F[2];
							finished_dyga1++;
							temporary_line.x1 = e->X; temporary_line.y1 = e->Y;
						}
						else if (finished_dyga1 == 1)
						{
							F[1].X = e->X;
							F[1].Y = e->Y;
							finished_dyga1 = 0;
						}
					}
				}
			}
		}
	}
	private: System::Void radioButton_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		Lalala();

		if (this->radioButton1->Checked) this->pictureBox1->ContextMenuStrip = nullptr;
		if (this->radioButton2->Checked) this->pictureBox1->ContextMenuStrip = this->contextMenuStrip2;
		if (this->radioButton3->Checked) this->pictureBox1->ContextMenuStrip = this->contextMenuStrip2;
		if (this->radioButton4->Checked) this->pictureBox1->ContextMenuStrip = this->contextMenuStrip1;
		if (this->radioButton5->Checked) this->pictureBox1->ContextMenuStrip = nullptr;
	}
	private: System::Void save_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (saveFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK)		
		{
			this->timer1->Start();
		}
		
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		Rectangle^ r = pictureBox1->RectangleToScreen(pictureBox1->ClientRectangle);
		Bitmap^ b = gcnew Bitmap(r->Width, r->Height);
		Graphics^ g = Graphics::FromImage(b);
		g->CopyFromScreen(r->Location, Point(0, 0), r->Size);
		b->Save(saveFileDialog1->FileName);
		b = nullptr;
		g = nullptr;
		this->timer1->Stop();
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
		////////////////////////////////////////////////
	}

	private: System::Void ëèíèÿToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		line_or_duga = false;
	}
	private: System::Void äóãàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		line_or_duga = true;
	}
	private: System::Void îáû÷íàÿToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Pe->StartCap = System::Drawing::Drawing2D::LineCap::Square;
		Pe->EndCap = System::Drawing::Drawing2D::LineCap::Square;
		Pe->DashStyle = System::Drawing::Drawing2D::DashStyle::Solid;
		Lalala();
	}
	private: System::Void ñòğåëî÷êàÒóäàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Pe->StartCap = System::Drawing::Drawing2D::LineCap::Square;
		Pe->EndCap = System::Drawing::Drawing2D::LineCap::ArrowAnchor;
		Pe->DashStyle = System::Drawing::Drawing2D::DashStyle::Solid;
		Lalala();
	}
	private: System::Void ñòğåëî÷êàÒóäàñşäàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Pe->StartCap = System::Drawing::Drawing2D::LineCap::ArrowAnchor;
		Pe->EndCap = System::Drawing::Drawing2D::LineCap::ArrowAnchor;
		Pe->DashStyle = System::Drawing::Drawing2D::DashStyle::Solid;
		Lalala();
	}
	private: System::Void îáû÷íàÿToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		Pe->StartCap = System::Drawing::Drawing2D::LineCap::Square;
		Pe->EndCap = System::Drawing::Drawing2D::LineCap::Square;
		Pe->DashStyle = System::Drawing::Drawing2D::DashStyle::Dash;
		Lalala();
	}
	private: System::Void ñòğåëî÷êàÒóäàToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		Pe->StartCap = System::Drawing::Drawing2D::LineCap::Square;
		Pe->EndCap = System::Drawing::Drawing2D::LineCap::ArrowAnchor;
		Pe->DashStyle = System::Drawing::Drawing2D::DashStyle::Dash;
		Lalala();
	}
	private: System::Void ñòğåëî÷êàÒóäàñşäàToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		Pe->StartCap = System::Drawing::Drawing2D::LineCap::ArrowAnchor;
		Pe->EndCap = System::Drawing::Drawing2D::LineCap::ArrowAnchor;
		Pe->DashStyle = System::Drawing::Drawing2D::DashStyle::Dash;
		Lalala();
	}
	private: System::Void ñòğåëî÷êàÒóäàToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
		Pe->StartCap = System::Drawing::Drawing2D::LineCap::Square;
		Pe->EndCap = System::Drawing::Drawing2D::LineCap::ArrowAnchor;
		Pe->DashStyle = System::Drawing::Drawing2D::DashStyle::DashDot;
		Lalala();
	}
	private: System::Void ñòğåëî÷êàÒóäàñşäàToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
		Pe->StartCap = System::Drawing::Drawing2D::LineCap::ArrowAnchor;
		Pe->EndCap = System::Drawing::Drawing2D::LineCap::ArrowAnchor;
		Pe->DashStyle = System::Drawing::Drawing2D::DashStyle::DashDot;
		Lalala();
	}
	private: System::Void îáû÷íàÿToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
		Pe->StartCap = System::Drawing::Drawing2D::LineCap::Square;
		Pe->EndCap = System::Drawing::Drawing2D::LineCap::Square;
		Pe->DashStyle = System::Drawing::Drawing2D::DashStyle::DashDot;
		Lalala();
	}
	private: System::Void pictureBox2_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		Lalala();
	}
	private: System::Void pictureBox1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (this->radioButton5->Checked && e->Button == Windows::Forms::MouseButtons::Left)
		{
			Pen^ temp_pen = gcnew Pen(Color::White, this->trackBar1->Value);
			Graph->FillEllipse(temp_pen->Brush, e->X - this->trackBar1->Value, e->Y - this->trackBar1->Value, this->trackBar1->Value * 2,
				this->trackBar1->Value * 2);
		}
	}
	private: System::Void êîíåöToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		start = false;
		finished_dyga1 = 0;
	}
};
}
