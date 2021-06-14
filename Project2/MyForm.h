#pragma once
#include "fact.h"
#include "fact.h"
#include "help.h"

namespace Project2 {

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
	private: System::Windows::Forms::TextBox^ num1;
	protected:





	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ result;
	private: System::Windows::Forms::Button^ button_plus;


	private: System::Windows::Forms::TextBox^ num2;
	private: System::Windows::Forms::Button^ button_umnozhenie;



	private: System::Windows::Forms::Button^ button_minus;
	private: System::Windows::Forms::Button^ button_delenie;
	private: System::Windows::Forms::Button^ button_pow;




	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button_sqrt;
	private: System::Windows::Forms::Button^ button_help;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->num1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->result = (gcnew System::Windows::Forms::TextBox());
			this->button_plus = (gcnew System::Windows::Forms::Button());
			this->num2 = (gcnew System::Windows::Forms::TextBox());
			this->button_umnozhenie = (gcnew System::Windows::Forms::Button());
			this->button_minus = (gcnew System::Windows::Forms::Button());
			this->button_delenie = (gcnew System::Windows::Forms::Button());
			this->button_pow = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button_sqrt = (gcnew System::Windows::Forms::Button());
			this->button_help = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// num1
			// 
			this->num1->Location = System::Drawing::Point(115, 26);
			this->num1->Name = L"num1";
			this->num1->Size = System::Drawing::Size(54, 22);
			this->num1->TabIndex = 3;
			this->num1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(3, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(108, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"введите числа 1 и 2";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(63, 57);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(36, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"ответ";
			// 
			// result
			// 
			this->result->Location = System::Drawing::Point(115, 54);
			this->result->Name = L"result";
			this->result->Size = System::Drawing::Size(122, 22);
			this->result->TabIndex = 7;
			this->result->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// button_plus
			// 
			this->button_plus->Location = System::Drawing::Point(115, 82);
			this->button_plus->Name = L"button_plus";
			this->button_plus->Size = System::Drawing::Size(54, 31);
			this->button_plus->TabIndex = 8;
			this->button_plus->Text = L"+";
			this->button_plus->UseVisualStyleBackColor = true;
			this->button_plus->Click += gcnew System::EventHandler(this, &MyForm::button_plus_Click);
			// 
			// num2
			// 
			this->num2->Location = System::Drawing::Point(183, 26);
			this->num2->Name = L"num2";
			this->num2->Size = System::Drawing::Size(54, 22);
			this->num2->TabIndex = 5;
			this->num2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// button_umnozhenie
			// 
			this->button_umnozhenie->Location = System::Drawing::Point(115, 119);
			this->button_umnozhenie->Name = L"button_umnozhenie";
			this->button_umnozhenie->Size = System::Drawing::Size(54, 31);
			this->button_umnozhenie->TabIndex = 9;
			this->button_umnozhenie->Text = L"*";
			this->button_umnozhenie->UseVisualStyleBackColor = true;
			this->button_umnozhenie->Click += gcnew System::EventHandler(this, &MyForm::button_umnozhenie_Click);
			// 
			// button_minus
			// 
			this->button_minus->AutoSize = true;
			this->button_minus->Location = System::Drawing::Point(183, 82);
			this->button_minus->Name = L"button_minus";
			this->button_minus->Size = System::Drawing::Size(54, 31);
			this->button_minus->TabIndex = 10;
			this->button_minus->Text = L"-";
			this->button_minus->UseVisualStyleBackColor = true;
			this->button_minus->Click += gcnew System::EventHandler(this, &MyForm::button_minus_Click);
			// 
			// button_delenie
			// 
			this->button_delenie->Location = System::Drawing::Point(183, 119);
			this->button_delenie->Name = L"button_delenie";
			this->button_delenie->Size = System::Drawing::Size(54, 31);
			this->button_delenie->TabIndex = 11;
			this->button_delenie->Text = L"/";
			this->button_delenie->UseVisualStyleBackColor = true;
			this->button_delenie->Click += gcnew System::EventHandler(this, &MyForm::button_delenie_Click);
			// 
			// button_pow
			// 
			this->button_pow->Location = System::Drawing::Point(115, 157);
			this->button_pow->Name = L"button_pow";
			this->button_pow->Size = System::Drawing::Size(54, 31);
			this->button_pow->TabIndex = 12;
			this->button_pow->Text = L"^";
			this->button_pow->UseVisualStyleBackColor = true;
			this->button_pow->Click += gcnew System::EventHandler(this, &MyForm::button_pow_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(138, 10);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(11, 13);
			this->label3->TabIndex = 13;
			this->label3->Text = L"1";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(203, 10);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(13, 13);
			this->label4->TabIndex = 14;
			this->label4->Text = L"2";
			// 
			// button_sqrt
			// 
			this->button_sqrt->Location = System::Drawing::Point(183, 157);
			this->button_sqrt->Name = L"button_sqrt";
			this->button_sqrt->Size = System::Drawing::Size(54, 31);
			this->button_sqrt->TabIndex = 15;
			this->button_sqrt->Text = L"√";
			this->button_sqrt->UseVisualStyleBackColor = true;
			this->button_sqrt->Click += gcnew System::EventHandler(this, &MyForm::button_sqrt_Click);
			// 
			// button_help
			// 
			this->button_help->Location = System::Drawing::Point(70, 159);
			this->button_help->Name = L"button_help";
			this->button_help->Size = System::Drawing::Size(39, 26);
			this->button_help->TabIndex = 16;
			this->button_help->Text = L"\?";
			this->button_help->UseVisualStyleBackColor = true;
			this->button_help->Click += gcnew System::EventHandler(this, &MyForm::button_help_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(249, 195);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->num2);
			this->Controls->Add(this->button_plus);
			this->Controls->Add(this->button_umnozhenie);
			this->Controls->Add(this->button_minus);
			this->Controls->Add(this->button_delenie);
			this->Controls->Add(this->button_pow);
			this->Controls->Add(this->button_sqrt);
			this->Controls->Add(this->button_help);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->result);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->num1);
			this->HelpButton = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(265, 234);
			this->MinimumSize = System::Drawing::Size(265, 234);
			this->Name = L"MyForm";
			this->Text = L"Калькулятор";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_plus_Click(System::Object^ sender, System::EventArgs^ e) {
		double number = System::Convert::ToDouble(num1->Text);
		double number2 = System::Convert::ToDouble(num2->Text);
		double summa;
		summa = sum(number, number2);
		result->Text = System::Convert::ToString(summa);
	}
	private: System::Void button_umnozhenie_Click(System::Object^ sender, System::EventArgs^ e) {
		double number = System::Convert::ToDouble(num1->Text);
		double number2 = System::Convert::ToDouble(num2->Text);
		double factor;
		factor = umnozhenie(number, number2);
		result->Text = System::Convert::ToString(factor);
	}
	private: System::Void button_minus_Click(System::Object^ sender, System::EventArgs^ e) {
		double number = System::Convert::ToDouble(num1->Text);
		double number2 = System::Convert::ToDouble(num2->Text);
		double factor = vichitanie(number, number2);
		result->Text = System::Convert::ToString(factor);
	}
	private: System::Void button_delenie_Click(System::Object^ sender, System::EventArgs^ e) {
		double number = System::Convert::ToDouble(num1->Text);
		double number2 = System::Convert::ToDouble(num2->Text);
		double factor = delenie(number, number2);
		result->Text = System::Convert::ToString(factor);
	}
	private: System::Void button_pow_Click(System::Object^ sender, System::EventArgs^ e) {
		double number = System::Convert::ToDouble(num1->Text);
		double number2 = System::Convert::ToDouble(num2->Text);
		double factor = stepen(number, number2);
		result->Text = System::Convert::ToString(factor);
	}
	private: System::Void button_sqrt_Click(System::Object^ sender, System::EventArgs^ e) {
		double number = System::Convert::ToDouble(num1->Text);
		double number2 = System::Convert::ToDouble(num2->Text);
		double factor = sqrt(number, number2);
		result->Text = System::Convert::ToString(factor);
	}
	private: System::Void button_help_Click(System::Object^ sender, System::EventArgs^ e) {
		help^ form = gcnew help;
		form->ShowDialog();
	}
};
}
