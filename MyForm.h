#pragma once

namespace prilozenievaznoepizdes {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
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
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button_exit;
	private: System::Windows::Forms::Label^ result;
	private: System::Windows::Forms::Button^ but_AC;


	private: System::Windows::Forms::Button^ but_hz;

	private: System::Windows::Forms::Button^ but_prosent;







	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;




	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ but_del;
	private: System::Windows::Forms::Button^ but_um;
	private: System::Windows::Forms::Button^ but_min;
	private: System::Windows::Forms::Button^ but_plus;
	private: System::Windows::Forms::Button^ but_tochka;





	private: System::Windows::Forms::Button^ but_ravno;

	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Label^ tablo;

	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private:float first_num;
	private:char user_acton= ' ';
	private:bool is_equal = 0;










	protected:

	protected:


	protected:





	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button_exit = (gcnew System::Windows::Forms::Button());
			this->result = (gcnew System::Windows::Forms::Label());
			this->but_AC = (gcnew System::Windows::Forms::Button());
			this->but_hz = (gcnew System::Windows::Forms::Button());
			this->but_prosent = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->but_del = (gcnew System::Windows::Forms::Button());
			this->but_um = (gcnew System::Windows::Forms::Button());
			this->but_min = (gcnew System::Windows::Forms::Button());
			this->but_plus = (gcnew System::Windows::Forms::Button());
			this->but_tochka = (gcnew System::Windows::Forms::Button());
			this->but_ravno = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->tablo = (gcnew System::Windows::Forms::Label());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button_exit
			// 
			this->button_exit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(7)),
				static_cast<System::Int32>(static_cast<System::Byte>(19)));
			this->button_exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_exit->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button_exit->Location = System::Drawing::Point(290, 12);
			this->button_exit->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button_exit->Name = L"button_exit";
			this->button_exit->Size = System::Drawing::Size(40, 23);
			this->button_exit->TabIndex = 0;
			this->button_exit->Text = L"x";
			this->button_exit->UseVisualStyleBackColor = false;
			this->button_exit->Click += gcnew System::EventHandler(this, &MyForm::button_exit_Click);
			// 
			// result
			// 
			this->result->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->result->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->result->Location = System::Drawing::Point(12, 57);
			this->result->Name = L"result";
			this->result->Size = System::Drawing::Size(318, 42);
			this->result->TabIndex = 1;
			this->result->Text = L"0";
			this->result->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// but_AC
			// 
			this->but_AC->BackColor = System::Drawing::Color::Transparent;
			this->but_AC->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->but_AC->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->but_AC->Location = System::Drawing::Point(12, 128);
			this->but_AC->Name = L"but_AC";
			this->but_AC->Size = System::Drawing::Size(75, 55);
			this->but_AC->TabIndex = 2;
			this->but_AC->Text = L"AC";
			this->but_AC->UseVisualStyleBackColor = false;
			this->but_AC->Click += gcnew System::EventHandler(this, &MyForm::but_AC_Click);
			// 
			// but_hz
			// 
			this->but_hz->BackColor = System::Drawing::Color::Transparent;
			this->but_hz->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->but_hz->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but_hz->Location = System::Drawing::Point(93, 128);
			this->but_hz->Name = L"but_hz";
			this->but_hz->Size = System::Drawing::Size(75, 55);
			this->but_hz->TabIndex = 3;
			this->but_hz->Text = L"+/-";
			this->but_hz->UseVisualStyleBackColor = false;
			this->but_hz->Click += gcnew System::EventHandler(this, &MyForm::but_hz_Click);
			// 
			// but_prosent
			// 
			this->but_prosent->BackColor = System::Drawing::Color::Transparent;
			this->but_prosent->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->but_prosent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but_prosent->Location = System::Drawing::Point(174, 128);
			this->but_prosent->Name = L"but_prosent";
			this->but_prosent->Size = System::Drawing::Size(75, 55);
			this->but_prosent->TabIndex = 4;
			this->but_prosent->Text = L"%";
			this->but_prosent->UseVisualStyleBackColor = false;
			this->but_prosent->Click += gcnew System::EventHandler(this, &MyForm::but_prosent_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(166)), static_cast<System::Int32>(static_cast<System::Byte>(135)),
				static_cast<System::Int32>(static_cast<System::Byte>(98)));
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->Location = System::Drawing::Point(174, 311);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 55);
			this->button10->TabIndex = 16;
			this->button10->Text = L"3";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button_num_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(166)), static_cast<System::Int32>(static_cast<System::Byte>(135)),
				static_cast<System::Int32>(static_cast<System::Byte>(98)));
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->Location = System::Drawing::Point(93, 311);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 55);
			this->button11->TabIndex = 15;
			this->button11->Text = L"2";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button_num_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(166)), static_cast<System::Int32>(static_cast<System::Byte>(135)),
				static_cast<System::Int32>(static_cast<System::Byte>(98)));
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button12->Location = System::Drawing::Point(12, 311);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(75, 55);
			this->button12->TabIndex = 14;
			this->button12->Text = L"1";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button_num_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(166)), static_cast<System::Int32>(static_cast<System::Byte>(135)),
				static_cast<System::Int32>(static_cast<System::Byte>(98)));
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button17->Location = System::Drawing::Point(12, 372);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(156, 55);
			this->button17->TabIndex = 18;
			this->button17->Text = L"0";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button_num_Click);
			// 
			// but_del
			// 
			this->but_del->BackColor = System::Drawing::Color::Orange;
			this->but_del->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->but_del->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but_del->Location = System::Drawing::Point(252, 128);
			this->but_del->Name = L"but_del";
			this->but_del->Size = System::Drawing::Size(75, 55);
			this->but_del->TabIndex = 5;
			this->but_del->Text = L"/";
			this->but_del->UseVisualStyleBackColor = false;
			this->but_del->Click += gcnew System::EventHandler(this, &MyForm::but_del_Click);
			// 
			// but_um
			// 
			this->but_um->BackColor = System::Drawing::Color::Orange;
			this->but_um->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->but_um->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but_um->Location = System::Drawing::Point(252, 189);
			this->but_um->Name = L"but_um";
			this->but_um->Size = System::Drawing::Size(75, 55);
			this->but_um->TabIndex = 9;
			this->but_um->Text = L"*";
			this->but_um->UseVisualStyleBackColor = false;
			this->but_um->Click += gcnew System::EventHandler(this, &MyForm::but_um_Click);
			// 
			// but_min
			// 
			this->but_min->BackColor = System::Drawing::Color::Orange;
			this->but_min->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->but_min->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but_min->Location = System::Drawing::Point(252, 250);
			this->but_min->Name = L"but_min";
			this->but_min->Size = System::Drawing::Size(75, 55);
			this->but_min->TabIndex = 13;
			this->but_min->Text = L"-";
			this->but_min->UseVisualStyleBackColor = false;
			this->but_min->Click += gcnew System::EventHandler(this, &MyForm::but_min_Click);
			// 
			// but_plus
			// 
			this->but_plus->BackColor = System::Drawing::Color::Orange;
			this->but_plus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->but_plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but_plus->Location = System::Drawing::Point(252, 311);
			this->but_plus->Name = L"but_plus";
			this->but_plus->Size = System::Drawing::Size(75, 55);
			this->but_plus->TabIndex = 17;
			this->but_plus->Text = L"+";
			this->but_plus->UseVisualStyleBackColor = false;
			this->but_plus->Click += gcnew System::EventHandler(this, &MyForm::but_plus_Click);
			// 
			// but_tochka
			// 
			this->but_tochka->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(166)), static_cast<System::Int32>(static_cast<System::Byte>(135)),
				static_cast<System::Int32>(static_cast<System::Byte>(98)));
			this->but_tochka->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->but_tochka->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but_tochka->Location = System::Drawing::Point(171, 372);
			this->but_tochka->Name = L"but_tochka";
			this->but_tochka->Size = System::Drawing::Size(78, 55);
			this->but_tochka->TabIndex = 20;
			this->but_tochka->Text = L".";
			this->but_tochka->UseVisualStyleBackColor = false;
			this->but_tochka->Click += gcnew System::EventHandler(this, &MyForm::but_tochka_Click);
			// 
			// but_ravno
			// 
			this->but_ravno->BackColor = System::Drawing::Color::Orange;
			this->but_ravno->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->but_ravno->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but_ravno->Location = System::Drawing::Point(252, 372);
			this->but_ravno->Name = L"but_ravno";
			this->but_ravno->Size = System::Drawing::Size(75, 55);
			this->but_ravno->TabIndex = 21;
			this->but_ravno->Text = L"=";
			this->but_ravno->UseVisualStyleBackColor = false;
			this->but_ravno->Click += gcnew System::EventHandler(this, &MyForm::but_ravno_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(166)), static_cast<System::Int32>(static_cast<System::Byte>(135)),
				static_cast<System::Int32>(static_cast<System::Byte>(98)));
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(12, 250);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 55);
			this->button4->TabIndex = 10;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button_num_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(166)), static_cast<System::Int32>(static_cast<System::Byte>(135)),
				static_cast<System::Int32>(static_cast<System::Byte>(98)));
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(93, 250);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 55);
			this->button8->TabIndex = 11;
			this->button8->Text = L"5";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button_num_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(166)), static_cast<System::Int32>(static_cast<System::Byte>(135)),
				static_cast<System::Int32>(static_cast<System::Byte>(98)));
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(174, 250);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 55);
			this->button9->TabIndex = 12;
			this->button9->Text = L"6";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button_num_Click);
			// 
			// tablo
			// 
			this->tablo->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->tablo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tablo->Location = System::Drawing::Point(12, 57);
			this->tablo->Name = L"tablo";
			this->tablo->Size = System::Drawing::Size(318, 42);
			this->tablo->TabIndex = 1;
			this->tablo->Text = L"0";
			this->tablo->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(166)), static_cast<System::Int32>(static_cast<System::Byte>(135)),
				static_cast<System::Int32>(static_cast<System::Byte>(98)));
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button13->Location = System::Drawing::Point(12, 189);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(75, 55);
			this->button13->TabIndex = 6;
			this->button13->Text = L"7";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button_num_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(166)), static_cast<System::Int32>(static_cast<System::Byte>(135)),
				static_cast<System::Int32>(static_cast<System::Byte>(98)));
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button18->Location = System::Drawing::Point(93, 189);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(75, 55);
			this->button18->TabIndex = 7;
			this->button18->Text = L"8";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button_num_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(166)), static_cast<System::Int32>(static_cast<System::Byte>(135)),
				static_cast<System::Int32>(static_cast<System::Byte>(98)));
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button19->Location = System::Drawing::Point(174, 189);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(75, 55);
			this->button19->TabIndex = 8;
			this->button19->Text = L"9";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button_num_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(339, 461);
			this->Controls->Add(this->but_ravno);
			this->Controls->Add(this->but_tochka);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->but_plus);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->but_min);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->but_um);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->but_del);
			this->Controls->Add(this->but_prosent);
			this->Controls->Add(this->but_hz);
			this->Controls->Add(this->but_AC);
			this->Controls->Add(this->tablo);
			this->Controls->Add(this->result);
			this->Controls->Add(this->button_exit);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ForeColor = System::Drawing::Color::White;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"calkulator";
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void button_exit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void button_num_Click(System::Object^ sender, System::EventArgs^ e) {
		this->tablo->ForeColor = Color::White;
		Button^ button = safe_cast<Button^>(sender);
		if (this->tablo->Text  == "0"|| is_equal)
		{
			this->tablo->Text = button->Text;
			is_equal = 0;
		}
		else
		{
			this->tablo->Text =this->tablo->Text + button->Text;
		}

	}
	private: System::Void but_plus_Click(System::Object^ sender, System::EventArgs^ e) {
		mas_aktion('+');
	}
	private: System::Void but_min_Click(System::Object^ sender, System::EventArgs^ e) {

		mas_aktion('-');
	}
	private: System::Void but_um_Click(System::Object^ sender, System::EventArgs^ e) {
		mas_aktion('*');
	}
	private: System::Void but_del_Click(System::Object^ sender, System::EventArgs^ e) {
		mas_aktion('/');

	}
		private: System::Void mas_aktion(char action) 
		{
			this->first_num = System::Convert::ToDouble(this->tablo->Text);
			this->user_acton = action;
			this->tablo->Text = "0";
		}
private: System::Void but_ravno_Click(System::Object^ sender, System::EventArgs^ e) {
	if (user_acton == ' ')
	{
		return;
	}
	
	float second = System::Convert::ToDouble(this->tablo->Text);
	float res;
	switch (this->user_acton)
	{
	case '+':res = this->first_num + second; break;
	case '-':res = this->first_num - second; break;
	case '*':res = this->first_num * second; break;
	case '%':res = this->first_num * second/100; break;
	case '/':
		if (second == 0)
		{
			res = 0;
			this->tablo->ForeColor = Color::Red;
			MessageBox::Show(this, "ƒействие запрещено", "Eroor", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else res = this->first_num / second; break;
	}
	this->is_equal = true;
	this->tablo->Text = System::Convert::ToString(res);

}
private: System::Void but_AC_Click(System::Object^ sender, System::EventArgs^ e) {
	this->tablo->Text = "0";
	this->tablo->ForeColor = Color::White;
	this->first_num = 0;
	this->user_acton = ' ';
	is_equal = 0;
}
private: System::Void but_hz_Click(System::Object^ sender, System::EventArgs^ e) {
	float num = System::Convert::ToDouble(this->tablo->Text);
	num *= -1;
	this->tablo->Text = System::Convert::ToString(num);
}
private: System::Void but_prosent_Click(System::Object^ sender, System::EventArgs^ e) {
	mas_aktion('%');
}
private: System::Void but_tochka_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ text = this->tablo->Text;
	if (text->Contains(","))
		this->tablo->Text = text + ",";
}
};
}
