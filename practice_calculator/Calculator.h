#pragma once

namespace practicecalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Calculator
	/// </summary>
	public ref class Calculator : public System::Windows::Forms::Form
	{
	public:
		Calculator(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	public:

	Char operation = '+';

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Calculator()
		{
			if (components)
			{
				delete components;
			}
		}
	protected:

	private: System::Windows::Forms::Button^ num0;
	private: System::Windows::Forms::Button^ num1;
	private: System::Windows::Forms::Button^ num2;
	private: System::Windows::Forms::Button^ num3;
	private: System::Windows::Forms::Button^ num4;
	private: System::Windows::Forms::Button^ num5;
	private: System::Windows::Forms::Button^ num6;
	private: System::Windows::Forms::Button^ num7;
	private: System::Windows::Forms::Button^ num8;
	private: System::Windows::Forms::Button^ num9;

	private: System::Windows::Forms::Button^ Subtraction;
	private: System::Windows::Forms::Button^ Addition;
	private: System::Windows::Forms::Button^ Division;
	private: System::Windows::Forms::Button^ Multiplication;
	private: System::Windows::Forms::Button^ Calculate;
	private: System::Windows::Forms::Button^ Decimal;

	private: System::Windows::Forms::GroupBox^ Calculation_View;

	private: System::Windows::Forms::Label^ InputLabel;
	private: System::Windows::Forms::Label^ InputBox;
	private: System::Windows::Forms::Label^ OutputLabel;
	private: System::Windows::Forms::Label^ OutputHolder;

	private: System::Windows::Forms::Label^ num2Holder;
	private: System::Windows::Forms::Label^ num1Holder;

	private: System::Windows::Forms::Button^ Clear_Input;
	private: System::Windows::Forms::Button^ Clear;
	private: System::Windows::Forms::Label^ OperationLabel;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->num0 = (gcnew System::Windows::Forms::Button());
			this->num1 = (gcnew System::Windows::Forms::Button());
			this->num2 = (gcnew System::Windows::Forms::Button());
			this->num3 = (gcnew System::Windows::Forms::Button());
			this->num4 = (gcnew System::Windows::Forms::Button());
			this->num5 = (gcnew System::Windows::Forms::Button());
			this->num6 = (gcnew System::Windows::Forms::Button());
			this->num7 = (gcnew System::Windows::Forms::Button());
			this->num8 = (gcnew System::Windows::Forms::Button());
			this->num9 = (gcnew System::Windows::Forms::Button());
			this->Subtraction = (gcnew System::Windows::Forms::Button());
			this->Addition = (gcnew System::Windows::Forms::Button());
			this->Division = (gcnew System::Windows::Forms::Button());
			this->Multiplication = (gcnew System::Windows::Forms::Button());
			this->Calculate = (gcnew System::Windows::Forms::Button());
			this->Decimal = (gcnew System::Windows::Forms::Button());
			this->Calculation_View = (gcnew System::Windows::Forms::GroupBox());
			this->OperationLabel = (gcnew System::Windows::Forms::Label());
			this->OutputLabel = (gcnew System::Windows::Forms::Label());
			this->OutputHolder = (gcnew System::Windows::Forms::Label());
			this->num2Holder = (gcnew System::Windows::Forms::Label());
			this->num1Holder = (gcnew System::Windows::Forms::Label());
			this->InputBox = (gcnew System::Windows::Forms::Label());
			this->InputLabel = (gcnew System::Windows::Forms::Label());
			this->Clear_Input = (gcnew System::Windows::Forms::Button());
			this->Clear = (gcnew System::Windows::Forms::Button());
			this->Calculation_View->SuspendLayout();
			this->SuspendLayout();
			// 
			// num0
			// 
			this->num0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num0->Location = System::Drawing::Point(62, 130);
			this->num0->Name = L"num0";
			this->num0->Size = System::Drawing::Size(48, 34);
			this->num0->TabIndex = 1;
			this->num0->Text = L"0";
			this->num0->UseVisualStyleBackColor = true;
			this->num0->Click += gcnew System::EventHandler(this, &Calculator::num0_Click);
			// 
			// num1
			// 
			this->num1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num1->Location = System::Drawing::Point(8, 90);
			this->num1->Name = L"num1";
			this->num1->Size = System::Drawing::Size(48, 34);
			this->num1->TabIndex = 3;
			this->num1->Text = L"1";
			this->num1->UseVisualStyleBackColor = true;
			this->num1->Click += gcnew System::EventHandler(this, &Calculator::num1_Click);
			// 
			// num2
			// 
			this->num2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num2->Location = System::Drawing::Point(62, 90);
			this->num2->Name = L"num2";
			this->num2->Size = System::Drawing::Size(48, 34);
			this->num2->TabIndex = 4;
			this->num2->Text = L"2";
			this->num2->UseVisualStyleBackColor = true;
			this->num2->Click += gcnew System::EventHandler(this, &Calculator::num2_Click);
			// 
			// num3
			// 
			this->num3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num3->Location = System::Drawing::Point(116, 90);
			this->num3->Name = L"num3";
			this->num3->Size = System::Drawing::Size(48, 34);
			this->num3->TabIndex = 5;
			this->num3->Text = L"3";
			this->num3->UseVisualStyleBackColor = true;
			this->num3->Click += gcnew System::EventHandler(this, &Calculator::num3_Click);
			// 
			// num4
			// 
			this->num4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num4->Location = System::Drawing::Point(8, 50);
			this->num4->Name = L"num4";
			this->num4->Size = System::Drawing::Size(48, 34);
			this->num4->TabIndex = 6;
			this->num4->Text = L"4";
			this->num4->UseVisualStyleBackColor = true;
			this->num4->Click += gcnew System::EventHandler(this, &Calculator::num4_Click);
			// 
			// num5
			// 
			this->num5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num5->Location = System::Drawing::Point(62, 50);
			this->num5->Name = L"num5";
			this->num5->Size = System::Drawing::Size(48, 34);
			this->num5->TabIndex = 7;
			this->num5->Text = L"5";
			this->num5->UseVisualStyleBackColor = true;
			this->num5->Click += gcnew System::EventHandler(this, &Calculator::num5_Click);
			// 
			// num6
			// 
			this->num6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num6->Location = System::Drawing::Point(116, 50);
			this->num6->Name = L"num6";
			this->num6->Size = System::Drawing::Size(48, 34);
			this->num6->TabIndex = 8;
			this->num6->Text = L"6";
			this->num6->UseVisualStyleBackColor = true;
			this->num6->Click += gcnew System::EventHandler(this, &Calculator::num6_Click);
			// 
			// num7
			// 
			this->num7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num7->Location = System::Drawing::Point(8, 10);
			this->num7->Name = L"num7";
			this->num7->Size = System::Drawing::Size(48, 34);
			this->num7->TabIndex = 9;
			this->num7->Text = L"7";
			this->num7->UseVisualStyleBackColor = true;
			this->num7->Click += gcnew System::EventHandler(this, &Calculator::num7_Click);
			// 
			// num8
			// 
			this->num8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num8->Location = System::Drawing::Point(62, 10);
			this->num8->Name = L"num8";
			this->num8->Size = System::Drawing::Size(48, 34);
			this->num8->TabIndex = 10;
			this->num8->Text = L"8";
			this->num8->UseVisualStyleBackColor = true;
			this->num8->Click += gcnew System::EventHandler(this, &Calculator::num8_Click);
			// 
			// num9
			// 
			this->num9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num9->Location = System::Drawing::Point(116, 10);
			this->num9->Name = L"num9";
			this->num9->Size = System::Drawing::Size(48, 34);
			this->num9->TabIndex = 11;
			this->num9->Text = L"9";
			this->num9->UseVisualStyleBackColor = true;
			this->num9->Click += gcnew System::EventHandler(this, &Calculator::num9_Click);
			// 
			// Subtraction
			// 
			this->Subtraction->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Subtraction->Location = System::Drawing::Point(170, 10);
			this->Subtraction->Name = L"Subtraction";
			this->Subtraction->Size = System::Drawing::Size(48, 34);
			this->Subtraction->TabIndex = 12;
			this->Subtraction->Text = L"-";
			this->Subtraction->UseVisualStyleBackColor = true;
			this->Subtraction->Click += gcnew System::EventHandler(this, &Calculator::Subtraction_Click);
			// 
			// Addition
			// 
			this->Addition->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Addition->Location = System::Drawing::Point(170, 50);
			this->Addition->Name = L"Addition";
			this->Addition->Size = System::Drawing::Size(48, 34);
			this->Addition->TabIndex = 13;
			this->Addition->Text = L"+";
			this->Addition->UseVisualStyleBackColor = true;
			this->Addition->Click += gcnew System::EventHandler(this, &Calculator::Addition_Click);
			// 
			// Division
			// 
			this->Division->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Division->Location = System::Drawing::Point(170, 90);
			this->Division->Name = L"Division";
			this->Division->Size = System::Drawing::Size(48, 34);
			this->Division->TabIndex = 14;
			this->Division->Text = L"/";
			this->Division->UseVisualStyleBackColor = true;
			this->Division->Click += gcnew System::EventHandler(this, &Calculator::Division_Click);
			// 
			// Multiplication
			// 
			this->Multiplication->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Multiplication->Location = System::Drawing::Point(170, 130);
			this->Multiplication->Name = L"Multiplication";
			this->Multiplication->Size = System::Drawing::Size(48, 34);
			this->Multiplication->TabIndex = 2;
			this->Multiplication->Text = L"*";
			this->Multiplication->UseVisualStyleBackColor = true;
			this->Multiplication->Click += gcnew System::EventHandler(this, &Calculator::Multiplication_Click);
			// 
			// Calculate
			// 
			this->Calculate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Calculate->Location = System::Drawing::Point(116, 130);
			this->Calculate->Name = L"Calculate";
			this->Calculate->Size = System::Drawing::Size(48, 34);
			this->Calculate->TabIndex = 15;
			this->Calculate->Text = L"=";
			this->Calculate->UseVisualStyleBackColor = true;
			this->Calculate->Click += gcnew System::EventHandler(this, &Calculator::Calculate_Click);
			// 
			// Decimal
			// 
			this->Decimal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Decimal->Location = System::Drawing::Point(8, 130);
			this->Decimal->Name = L"Decimal";
			this->Decimal->Size = System::Drawing::Size(48, 34);
			this->Decimal->TabIndex = 0;
			this->Decimal->Text = L".";
			this->Decimal->UseVisualStyleBackColor = true;
			this->Decimal->Click += gcnew System::EventHandler(this, &Calculator::Decimal_Click);
			// 
			// Calculation_View
			// 
			this->Calculation_View->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Calculation_View->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->Calculation_View->Controls->Add(this->OperationLabel);
			this->Calculation_View->Controls->Add(this->OutputLabel);
			this->Calculation_View->Controls->Add(this->OutputHolder);
			this->Calculation_View->Controls->Add(this->num2Holder);
			this->Calculation_View->Controls->Add(this->num1Holder);
			this->Calculation_View->Controls->Add(this->InputBox);
			this->Calculation_View->Controls->Add(this->InputLabel);
			this->Calculation_View->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Calculation_View->Location = System::Drawing::Point(240, 12);
			this->Calculation_View->Name = L"Calculation_View";
			this->Calculation_View->Size = System::Drawing::Size(360, 303);
			this->Calculation_View->TabIndex = 16;
			this->Calculation_View->TabStop = false;
			this->Calculation_View->Text = L"Calculations";
			// 
			// OperationLabel
			// 
			this->OperationLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->OperationLabel->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->OperationLabel->Location = System::Drawing::Point(48, 86);
			this->OperationLabel->Name = L"OperationLabel";
			this->OperationLabel->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->OperationLabel->Size = System::Drawing::Size(29, 24);
			this->OperationLabel->TabIndex = 6;
			this->OperationLabel->Text = L"+";
			this->OperationLabel->Click += gcnew System::EventHandler(this, &Calculator::OperationLabel_Click);
			// 
			// OutputLabel
			// 
			this->OutputLabel->AutoSize = true;
			this->OutputLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->OutputLabel->Location = System::Drawing::Point(6, 118);
			this->OutputLabel->Name = L"OutputLabel";
			this->OutputLabel->Size = System::Drawing::Size(71, 24);
			this->OutputLabel->TabIndex = 5;
			this->OutputLabel->Text = L"Output:";
			this->OutputLabel->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// OutputHolder
			// 
			this->OutputHolder->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->OutputHolder->BackColor = System::Drawing::SystemColors::Control;
			this->OutputHolder->Location = System::Drawing::Point(83, 118);
			this->OutputHolder->Name = L"OutputHolder";
			this->OutputHolder->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->OutputHolder->Size = System::Drawing::Size(271, 24);
			this->OutputHolder->TabIndex = 4;
			// 
			// num2Holder
			// 
			this->num2Holder->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->num2Holder->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->num2Holder->Location = System::Drawing::Point(83, 86);
			this->num2Holder->Name = L"num2Holder";
			this->num2Holder->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->num2Holder->Size = System::Drawing::Size(271, 24);
			this->num2Holder->TabIndex = 3;
			// 
			// num1Holder
			// 
			this->num1Holder->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->num1Holder->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->num1Holder->Location = System::Drawing::Point(83, 59);
			this->num1Holder->Name = L"num1Holder";
			this->num1Holder->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->num1Holder->Size = System::Drawing::Size(271, 24);
			this->num1Holder->TabIndex = 2;
			// 
			// InputBox
			// 
			this->InputBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->InputBox->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->InputBox->Location = System::Drawing::Point(83, 25);
			this->InputBox->Name = L"InputBox";
			this->InputBox->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->InputBox->Size = System::Drawing::Size(271, 24);
			this->InputBox->TabIndex = 1;
			this->InputBox->Click += gcnew System::EventHandler(this, &Calculator::label1_Click_1);
			// 
			// InputLabel
			// 
			this->InputLabel->AutoSize = true;
			this->InputLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->InputLabel->Location = System::Drawing::Point(6, 25);
			this->InputLabel->Name = L"InputLabel";
			this->InputLabel->Size = System::Drawing::Size(56, 24);
			this->InputLabel->TabIndex = 0;
			this->InputLabel->Text = L"Input:";
			this->InputLabel->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->InputLabel->Click += gcnew System::EventHandler(this, &Calculator::label1_Click);
			// 
			// Clear_Input
			// 
			this->Clear_Input->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Clear_Input->Location = System::Drawing::Point(8, 170);
			this->Clear_Input->Name = L"Clear_Input";
			this->Clear_Input->Size = System::Drawing::Size(156, 34);
			this->Clear_Input->TabIndex = 17;
			this->Clear_Input->Text = L"Clear Input";
			this->Clear_Input->UseVisualStyleBackColor = true;
			this->Clear_Input->Click += gcnew System::EventHandler(this, &Calculator::Clear_Input_Click);
			// 
			// Clear
			// 
			this->Clear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Clear->Location = System::Drawing::Point(8, 210);
			this->Clear->Name = L"Clear";
			this->Clear->Size = System::Drawing::Size(156, 34);
			this->Clear->TabIndex = 18;
			this->Clear->Text = L"Clear All";
			this->Clear->UseVisualStyleBackColor = true;
			this->Clear->Click += gcnew System::EventHandler(this, &Calculator::Clear_Click);
			// 
			// Calculator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(617, 323);
			this->Controls->Add(this->Clear);
			this->Controls->Add(this->Clear_Input);
			this->Controls->Add(this->Calculation_View);
			this->Controls->Add(this->Calculate);
			this->Controls->Add(this->Division);
			this->Controls->Add(this->Addition);
			this->Controls->Add(this->Subtraction);
			this->Controls->Add(this->num9);
			this->Controls->Add(this->num8);
			this->Controls->Add(this->num7);
			this->Controls->Add(this->num6);
			this->Controls->Add(this->num5);
			this->Controls->Add(this->num4);
			this->Controls->Add(this->num3);
			this->Controls->Add(this->num2);
			this->Controls->Add(this->num1);
			this->Controls->Add(this->Multiplication);
			this->Controls->Add(this->num0);
			this->Controls->Add(this->Decimal);
			this->Name = L"Calculator";
			this->Text = L"Calculator";
			this->Calculation_View->ResumeLayout(false);
			this->Calculation_View->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	// -------------------- Helper Functions --------------------
	private: Void ClearInputBox()
	{
		InputBox->Text = "";
	}
	private: Void ClearOutputBox()
	{
		OutputHolder->Text = "";
	}
	private: Void ClearAll()
	{
		InputBox->Text = "";
		num1Holder->Text = "";
		num2Holder->Text = "";
		OutputHolder->Text = "";
	}
	private: Void SetOperator()
	{
		OperationLabel->Text = System::Convert::ToString(operation);
	}

	// Check if the input field is empty. If yes, return 1, if not, return 0.
	private: Boolean CheckInput()
	{
		if (InputBox->Text == "")
			return 1;
		else
			return 0;
	}
	// Check if the num1Holder is empty. If yes, return 1, if not, return 0.
	private: Boolean CheckHolder1()
	{
		if (num1Holder->Text == "")
			return 1;
		else
			return 0;
	}
	// Check if the num2Holder is empty. If yes, return 1, if not, return 0.
	private: Boolean CheckHolder2()
	{
		if (num2Holder->Text == "")
			return 1;
		else
			return 0;
	}
	// Check if the output is empty. If yes, return 1, if not, return 0.
	private: Boolean CheckOutput()
	{
		if (OutputHolder->Text == "")
			return 1;
		else
			return 0;
	}

	// Check all input/output/holder fields. 
	private: Void InputDataToHolders()
	{

		// Cases to check:
		// ---------- Input empty ----------
		// If the input is empty, no operations can be done, return.
		if (CheckInput())
		{
			return;
		}

		// ---------- Input filled ----------
		else if (!CheckInput())
		{
			// Both Holders Empty - fill num1Holder, empty input box.
			if (num1Holder->Text == "" && num2Holder->Text == "")
			{
				num1Holder->Text = InputBox->Text;
				ClearInputBox();
			}

			// First Holder filled, second empty - Fill second holder, calculate, and empty the input.
			else if (num1Holder->Text != "" && num2Holder->Text == "")
			{
				num2Holder->Text = InputBox->Text;
				ClearInputBox();
			}

			// Second Holder filled, first empty
			else if (num1Holder->Text == "" && num2Holder->Text != "")
			{
				num1Holder->Text = num2Holder->Text;
				num2Holder->Text = InputBox->Text;
				ClearInputBox();
			}

			// Both holders filled
			else if (num1Holder->Text != "" && num2Holder->Text != "")
			{
				ClearInputBox();
			}
		}
	}
	private: Void CalculationsBothFilled()
	{
		double input1 = System::Convert::ToDouble(num1Holder->Text);
		double input2 = System::Convert::ToDouble(num2Holder->Text);
		double output = System::Convert::ToDouble(OutputHolder->Text);

		// If the output holder box is not empty,
		if (OutputHolder->Text != "") 
		{
			num1Holder->Text = OutputHolder->Text;
			switch (operation) {
			case '+':
				OutputHolder->Text = System::Convert::ToString(output + input2);
				break;

			case '-':
				OutputHolder->Text = System::Convert::ToString(output - input2);
				break;

			case '*':
				OutputHolder->Text = System::Convert::ToString(output * input2);
				break;

			case '/':
				OutputHolder->Text = System::Convert::ToString(output / input2);
				break;
			}
		}

		else 
		{
			switch (operation) {
			case '+':
				OutputHolder->Text += System::Convert::ToString(input1 + input2);
				break;

			case '-':
				OutputHolder->Text += System::Convert::ToString(input1 - input2);
				break;

			case '*':
				OutputHolder->Text += System::Convert::ToString(input1 * input2);
				break;

			case '/':
				OutputHolder->Text += System::Convert::ToString(input1 / input2);
				break;
			}
		}
	}
	private: Void Calculations() 
	{
		// Assign variables for the inputs/output.
		double input1 = System::Convert::ToDouble(num1Holder->Text);
		double input2 = System::Convert::ToDouble(num2Holder->Text);
		double output = System::Convert::ToDouble(OutputHolder->Text);

		// Cases:
		// both input and output empty.
		if (InputBox->Text == "" && OutputHolder->Text == "")
		{
			// If neither holders are filled
			if (num1Holder->Text == "" && num2Holder->Text == "") {
				// Don't do anything.
				return;
			}

			// If holder 1 is filled, and holder 2 is not
			// Set the num2Holder equal to the num1, clear the num 1, and set the output holder to num2Holder.
			else if (num1Holder->Text != "" && num2Holder->Text == "")
			{
				num2Holder->Text = num1Holder->Text;
				num1Holder->Text = "";
				OutputHolder->Text = num2Holder->Text;
				return;
			}

			// If holder 2 is filled, and holder 1 is not
			else if (num1Holder->Text == "" && num2Holder->Text != "")
			{
				OutputHolder->Text = num2Holder->Text;
				return;
			}

			// If both are filled
			else if (num1Holder->Text != "" && num2Holder->Text != "")
			{

			}

			else 
			{
				return;
			}
		}

		// Input empty, output filled
		if (InputBox->Text == "" && OutputHolder->Text != "")
		{
			// If neither holders are filled

			// If holder 1 is filled, and holder 2 is not

			// If holder 2 is filled, and holder 1 is not

			// If both are filled
		}

		// Input filled, output empty
		if (InputBox->Text != "" && OutputHolder->Text == "")
		{
			// If neither holders are filled

			// If holder 1 is filled, and holder 2 is not

			// If holder 2 is filled, and holder 1 is not

			// If both are filled
		}

		// Both filled
		if (InputBox->Text != "" && OutputHolder->Text != "")
		{
			// If neither holders are filled

			// If holder 1 is filled, and holder 2 is not

			// If holder 2 is filled, and holder 1 is not

			// If both are filled
		}
	}

	// -------------------- Labels --------------------
	// Input box label. Find a way to rename without breaking entire code.
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) 
	{

	}
	// Input box. Find a way to rename without breaking entire code. 
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) 
	{

	}
	private: System::Void OperationLabel_Click(System::Object^ sender, System::EventArgs^ e) 
	{

	}

	// -------------------- Operations --------------------
	private: System::Void Calculate_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Calculations();
		// If the first holder is not empty, and the second holder is empty, but the input box is not empty,
		if (num1Holder->Text != "" && num2Holder->Text == "" && InputBox->Text != "")
		{
			num2Holder->Text = InputBox->Text;
			ClearInputBox();

			double input1 = System::Convert::ToDouble(num1Holder->Text);
			double input2 = System::Convert::ToDouble(num2Holder->Text);

			switch (operation) {
			case '+':
				OutputHolder->Text += System::Convert::ToString(input1 + input2);
				break;

			case '-':
				OutputHolder->Text += System::Convert::ToString(input1 - input2);
				break;

			case '*':
				OutputHolder->Text += System::Convert::ToString(input1 * input2);
				break;

			case '/':
				OutputHolder->Text += System::Convert::ToString(input1 / input2);
				break;
			}
			return;
		}

	}
	private: System::Void Multiplication_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		operation = '*';
		SetOperator();
		InputDataToHolders();
	}
	private: System::Void Division_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		operation = '/';
		SetOperator();
		InputDataToHolders();
	}
	private: System::Void Addition_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		operation = '+';
		SetOperator();
		InputDataToHolders();
	}
	private: System::Void Subtraction_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		operation = '-';
		SetOperator();
		InputDataToHolders();
	}

	// -------------------- Input/Output --------------------
	private: System::Void Clear_Input_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		InputBox->Text = "";
	}
	private: System::Void Clear_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		ClearAll();
	}

	// -------------------- Number Buttons --------------------
	private: System::Void Decimal_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (InputBox->Text->Contains("."))
			return;
		else
			InputBox->Text += ".";
	}
	private: System::Void num0_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		InputBox->Text += "0";
	}
	private: System::Void num1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		InputBox->Text += "1";
	}
	private: System::Void num2_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		InputBox->Text += "2";
	}
	private: System::Void num3_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		InputBox->Text += "3";
	}
	private: System::Void num4_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		InputBox->Text += "4";
	}
	private: System::Void num5_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		InputBox->Text += "5";
	}
	private: System::Void num6_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		InputBox->Text += "6";
	}
	private: System::Void num7_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		InputBox->Text += "7";
	}
	private: System::Void num8_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		InputBox->Text += "8";
	}
	private: System::Void num9_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		InputBox->Text += "9";
	}

};
}
