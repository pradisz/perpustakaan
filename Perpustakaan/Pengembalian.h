#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace MySql::Data::MySqlClient;

namespace Perpustakaan {

	/// <summary>
	/// Summary for Pengembalian
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Pengembalian : public System::Windows::Forms::Form
	{
	public:
		Pengembalian(void)
		{
			InitializeComponent();
			DateTime datetime = DateTime::Now;
			this->label19->Text=datetime.ToLongDateString();
			this->label21->Text=datetime.ToShortDateString();
			timer1->Start();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Pengembalian()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	protected: 

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::GroupBox^  groupBox6;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::GroupBox^  groupBox7;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::ComponentModel::IContainer^  components;





	protected: 



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Pengembalian::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(30, 30);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(289, 65);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"No. ID :";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(196, 27);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(87, 26);
			this->button1->TabIndex = 5;
			this->button1->Text = L"CARI";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Pengembalian::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(14, 27);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(176, 27);
			this->textBox1->TabIndex = 4;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Pengembalian::textBox1_TextChanged);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Location = System::Drawing::Point(30, 127);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(387, 65);
			this->groupBox2->TabIndex = 4;
			this->groupBox2->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(130, 26);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 23);
			this->label3->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(109, 26);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(15, 23);
			this->label2->TabIndex = 1;
			this->label2->Text = L":";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(11, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(62, 23);
			this->label1->TabIndex = 0;
			this->label1->Text = L"NO. ID";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->Location = System::Drawing::Point(30, 198);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(387, 65);
			this->groupBox3->TabIndex = 5;
			this->groupBox3->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(130, 26);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 23);
			this->label4->TabIndex = 2;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(109, 26);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(15, 23);
			this->label5->TabIndex = 1;
			this->label5->Text = L":";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(11, 26);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(60, 23);
			this->label6->TabIndex = 0;
			this->label6->Text = L"NAMA";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->label7);
			this->groupBox4->Controls->Add(this->label8);
			this->groupBox4->Controls->Add(this->label9);
			this->groupBox4->Location = System::Drawing::Point(30, 269);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(387, 65);
			this->groupBox4->TabIndex = 6;
			this->groupBox4->TabStop = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(130, 26);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 23);
			this->label7->TabIndex = 2;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(109, 26);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(15, 23);
			this->label8->TabIndex = 1;
			this->label8->Text = L":";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(11, 26);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(60, 23);
			this->label9->TabIndex = 0;
			this->label9->Text = L"EMAIL";
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->label10);
			this->groupBox5->Controls->Add(this->label11);
			this->groupBox5->Controls->Add(this->label12);
			this->groupBox5->Location = System::Drawing::Point(466, 127);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(387, 65);
			this->groupBox5->TabIndex = 5;
			this->groupBox5->TabStop = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(130, 26);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(0, 23);
			this->label10->TabIndex = 2;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(109, 26);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(15, 23);
			this->label11->TabIndex = 1;
			this->label11->Text = L":";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(11, 26);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(101, 23);
			this->label12->TabIndex = 0;
			this->label12->Text = L"KODE BUKU";
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->label13);
			this->groupBox6->Controls->Add(this->label14);
			this->groupBox6->Controls->Add(this->label15);
			this->groupBox6->Location = System::Drawing::Point(466, 198);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(387, 65);
			this->groupBox6->TabIndex = 6;
			this->groupBox6->TabStop = false;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(130, 26);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(0, 23);
			this->label13->TabIndex = 2;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(109, 26);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(15, 23);
			this->label14->TabIndex = 1;
			this->label14->Text = L":";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(11, 26);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(60, 23);
			this->label15->TabIndex = 0;
			this->label15->Text = L"JUDUL";
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->label16);
			this->groupBox7->Controls->Add(this->label17);
			this->groupBox7->Controls->Add(this->label18);
			this->groupBox7->Location = System::Drawing::Point(466, 269);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(387, 65);
			this->groupBox7->TabIndex = 7;
			this->groupBox7->TabStop = false;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(130, 26);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(0, 23);
			this->label16->TabIndex = 2;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(109, 26);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(15, 23);
			this->label17->TabIndex = 1;
			this->label17->Text = L":";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(11, 26);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(103, 23);
			this->label18->TabIndex = 0;
			this->label18->Text = L"TGL PINJAM";
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(158, 361);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(81, 50);
			this->button4->TabIndex = 9;
			this->button4->Text = L"BATAL";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Pengembalian::button4_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(30, 361);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(122, 50);
			this->button3->TabIndex = 8;
			this->button3->Text = L"KEMBALIKAN";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Pengembalian::button3_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(773, 508);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(99, 42);
			this->button5->TabIndex = 11;
			this->button5->Text = L"KELUAR";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Pengembalian::button5_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->pictureBox2->Location = System::Drawing::Point(0, 486);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(884, 75);
			this->pictureBox2->TabIndex = 10;
			this->pictureBox2->TabStop = false;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(627, 39);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(86, 29);
			this->label19->TabIndex = 12;
			this->label19->Text = L"label19";
			this->label19->Click += gcnew System::EventHandler(this, &Pengembalian::label19_Click);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &Pengembalian::timer1_Tick);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(770, 69);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(57, 19);
			this->label20->TabIndex = 13;
			this->label20->Text = L"label20";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(680, 105);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(57, 19);
			this->label21->TabIndex = 14;
			this->label21->Text = L"label21";
			this->label21->Visible = false;
			// 
			// Pengembalian
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 19);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(884, 561);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->groupBox7);
			this->Controls->Add(this->groupBox6);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->Name = L"Pengembalian";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Pengembalian";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 MySqlConnection^ con;
			 con = gcnew MySqlConnection("Server=localhost;Uid=root;Pwd='server'"); 
			 MySqlCommand^ cmd1 = gcnew MySqlCommand("select*from perpus.laporan where No_ID = '" + this->textBox1->Text +"';", con);
			 MySqlDataReader^ myReader1;
			 try{
				 con->Open();
				 myReader1=cmd1->ExecuteReader();

				 while(myReader1->Read()) {
					 label3->Text +=(myReader1->GetString(1));
					 label4->Text +=(myReader1->GetString(2));
					 label10->Text +=(myReader1->GetString(4));
					 label13->Text +=(myReader1->GetString(3));
					 label16->Text +=(myReader1->GetString(5));
				 }
				 myReader1->Close();
				 con->Close();
			 }
			 catch(Exception^ex) {
				 MessageBox::Show(ex->Message);
			 } 
			 MySqlCommand^ cmd2 = gcnew MySqlCommand("select*from perpus.keanggotaan where No_ID = '" + this->textBox1->Text +"';", con);
			 MySqlDataReader^ myReader2;
			 try{
				 con->Open();
				 myReader2=cmd2->ExecuteReader();

				 while(myReader2->Read()) {
					 label7->Text +=(myReader2->GetString(4));
				 }
				 myReader2->Close();
				 con->Close();
			 }
			 catch(Exception^ex) {
				 MessageBox::Show(ex->Message);
			 } 
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 MySqlConnection^ con;
			 con = gcnew MySqlConnection("Server=localhost;Uid=root;Pwd='server'");
			 MySqlCommand^ cmd = gcnew MySqlCommand("update perpus.laporan set Status = 'Dikembalikan pada "+this->label21->Text+"' where No_ID = '"+this->textBox1->Text+"';",con);
			 MySqlDataReader^ myReader;

			 try {
				 con->Open();
 				 myReader = cmd->ExecuteReader();		
				 MessageBox::Show(" Dibawah ini informasi anda sebagai berikut:\n\n No. ID		: "+this->label3->Text+"\n Nama		: "+this->label4->Text+"\n Kode Buku	: "+this->label10->Text+"\n Judul		: "+this->label13->Text+"\n Tgl Pinjam	: "+this->label16->Text+"\n Dikembalikan pada	: "+this->label21->Text+" ","Konfirmasi", MessageBoxButtons::OKCancel, MessageBoxIcon::Information);
				 textBox1->Text = "";
				 label3->Text = "";
				 label4->Text = "";
				 label10->Text = "";
				 label13->Text = "";
				 label16->Text = "";
				 label7->Text = "";
				 
				 while(myReader->Read()) {
				 }
			 }

			 catch(Exception^ex) {
				 MessageBox::Show(ex->Message);
			 }
			 
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Text = "";
			 label3->Text = "";
			 label4->Text = "";
			 label10->Text = "";
			 label13->Text = "";
			 label16->Text = "";
			 label7->Text = "";
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
		 }
private: System::Void label19_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			DateTime datetime = DateTime::Now;
			this->label20->Text=datetime.ToLongTimeString();
		 }
};
}
