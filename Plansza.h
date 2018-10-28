#pragma once

namespace Project7 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o pjbkjbjk
	/// </summary>
	public ref class pjbkjbjk : public System::Windows::Forms::Form
	{
	public:
		pjbkjbjk(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyść wszystkie używane zasoby.
		/// </summary>
		~pjbkjbjk()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;

	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::Button^  button23;
	private: System::Windows::Forms::Button^  button24;
	private: System::Windows::Forms::Button^  button25;
	private: System::Windows::Forms::Button^  button26;
	private: System::Windows::Forms::Button^  button27;
	private: System::Windows::Forms::Button^  button28;
	private: System::Windows::Forms::Button^  button29;
	private: System::Windows::Forms::Button^  button30;
	private: System::Windows::Forms::Label^  label1;

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obsługi projektanta — nie należy modyfikować
		/// jej zawartości w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->Location = System::Drawing::Point(34, 97);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(82, 59);
			this->button1->TabIndex = 0;
			this->button1->Text = L"sin";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &pjbkjbjk::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button2->Location = System::Drawing::Point(122, 97);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(82, 59);
			this->button2->TabIndex = 1;
			this->button2->Text = L"cos";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button3->Location = System::Drawing::Point(210, 97);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(82, 59);
			this->button3->TabIndex = 2;
			this->button3->Text = L"tan";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button4->Location = System::Drawing::Point(298, 162);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(82, 59);
			this->button4->TabIndex = 4;
			this->button4->Text = L"(";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button5->Location = System::Drawing::Point(386, 162);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(82, 59);
			this->button5->TabIndex = 5;
			this->button5->Text = L")";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button6->Location = System::Drawing::Point(122, 162);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(82, 59);
			this->button6->TabIndex = 6;
			this->button6->Text = L"π";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button7->Location = System::Drawing::Point(210, 423);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(82, 59);
			this->button7->TabIndex = 7;
			this->button7->Text = L"±";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button8->Location = System::Drawing::Point(210, 162);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(82, 59);
			this->button8->TabIndex = 8;
			this->button8->Text = L"zero f.";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &pjbkjbjk::button8_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button9->Location = System::Drawing::Point(34, 162);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(82, 59);
			this->button9->TabIndex = 9;
			this->button9->Text = L"%";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button10->Location = System::Drawing::Point(122, 422);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(82, 59);
			this->button10->TabIndex = 10;
			this->button10->Text = L".";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button11->Location = System::Drawing::Point(210, 227);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(82, 59);
			this->button11->TabIndex = 11;
			this->button11->Text = L"9";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &pjbkjbjk::button11_Click);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button12->Location = System::Drawing::Point(122, 227);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(82, 59);
			this->button12->TabIndex = 12;
			this->button12->Text = L"8";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &pjbkjbjk::button12_Click);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button13->Location = System::Drawing::Point(34, 227);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(82, 59);
			this->button13->TabIndex = 13;
			this->button13->Text = L"7";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &pjbkjbjk::button13_Click);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button14->Location = System::Drawing::Point(386, 227);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(82, 59);
			this->button14->TabIndex = 14;
			this->button14->Text = L"^";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &pjbkjbjk::button14_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(667, 125);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(75, 23);
			this->button15->TabIndex = 15;
			this->button15->Text = L"button15";
			this->button15->UseVisualStyleBackColor = true;
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button16->Location = System::Drawing::Point(34, 422);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(82, 59);
			this->button16->TabIndex = 16;
			this->button16->Text = L"0";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &pjbkjbjk::button16_Click);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button17->Location = System::Drawing::Point(210, 357);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(82, 59);
			this->button17->TabIndex = 17;
			this->button17->Text = L"3";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &pjbkjbjk::button17_Click);
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button18->Location = System::Drawing::Point(122, 357);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(82, 59);
			this->button18->TabIndex = 18;
			this->button18->Text = L"2";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &pjbkjbjk::button18_Click);
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button19->Location = System::Drawing::Point(34, 357);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(82, 59);
			this->button19->TabIndex = 19;
			this->button19->Text = L"1";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &pjbkjbjk::button19_Click);
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button20->Location = System::Drawing::Point(210, 292);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(82, 59);
			this->button20->TabIndex = 20;
			this->button20->Text = L"6";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &pjbkjbjk::button20_Click);
			// 
			// button21
			// 
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button21->Location = System::Drawing::Point(122, 292);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(82, 59);
			this->button21->TabIndex = 21;
			this->button21->Text = L"5";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &pjbkjbjk::button21_Click);
			// 
			// button22
			// 
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button22->Location = System::Drawing::Point(34, 292);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(82, 59);
			this->button22->TabIndex = 22;
			this->button22->Text = L"4";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &pjbkjbjk::button22_Click);
			// 
			// button23
			// 
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button23->Location = System::Drawing::Point(386, 357);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(82, 124);
			this->button23->TabIndex = 23;
			this->button23->Text = L"+";
			this->button23->UseVisualStyleBackColor = true;
			// 
			// button24
			// 
			this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button24->Location = System::Drawing::Point(298, 357);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(82, 59);
			this->button24->TabIndex = 24;
			this->button24->Text = L"x";
			this->button24->UseVisualStyleBackColor = true;
			// 
			// button25
			// 
			this->button25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button25->Location = System::Drawing::Point(298, 422);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(82, 59);
			this->button25->TabIndex = 25;
			this->button25->Text = L"-";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &pjbkjbjk::button25_Click);
			// 
			// button26
			// 
			this->button26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button26->Location = System::Drawing::Point(298, 292);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(82, 59);
			this->button26->TabIndex = 26;
			this->button26->Text = L"÷";
			this->button26->UseVisualStyleBackColor = true;
			// 
			// button27
			// 
			this->button27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button27->Location = System::Drawing::Point(386, 292);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(82, 59);
			this->button27->TabIndex = 27;
			this->button27->Text = L"=";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &pjbkjbjk::button27_Click);
			// 
			// button28
			// 
			this->button28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button28->Location = System::Drawing::Point(298, 97);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(82, 59);
			this->button28->TabIndex = 28;
			this->button28->Text = L"C";
			this->button28->UseVisualStyleBackColor = true;
			// 
			// button29
			// 
			this->button29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button29->Location = System::Drawing::Point(298, 227);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(82, 59);
			this->button29->TabIndex = 29;
			this->button29->Text = L"√";
			this->button29->UseVisualStyleBackColor = true;
			// 
			// button30
			// 
			this->button30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button30->Location = System::Drawing::Point(386, 97);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(82, 59);
			this->button30->TabIndex = 30;
			this->button30->Text = L"CE";
			this->button30->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::White;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(34, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(434, 65);
			this->label1->TabIndex = 31;
			this->label1->Text = L"0";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label1->Click += gcnew System::EventHandler(this, &pjbkjbjk::label1_Click);
			// 
			// pjbkjbjk
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ClientSize = System::Drawing::Size(504, 521);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"pjbkjbjk";
			this->Text = L"pjbkjbjk";
			this->Load += gcnew System::EventHandler(this, &pjbkjbjk::pjbkjbjk_Load);
			this->ResumeLayout(false);

		}

		int firstnum;
		int secondnum;
		int Result; 
		char operation;
#pragma endregion
	private: System::Void pjbkjbjk_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void button25_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void button27_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {

} if (lblDisplay->Text == "0") {

	lblDisplay->Text = "1";
}
else {

	lblDisplay->Text = Convert::ToInt32(lblDisplay->Text) + "1"

}

private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {


}
private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e) {


}
private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {



}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {

	
}
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {


}
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {


}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
