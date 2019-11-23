#pragma once
#include "Triangulo.h"
#include "Cuadrado.h"
#include "Pentagono.h"
#include "Hexagono.h"
#include "Heptagono.h"
#include "Octagono.h"
#include "Eneagono.h"
#include "Decagono.h"

namespace LABFINALJorgeGarc�a1220019 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnCalcular;
	protected:
	private: System::Windows::Forms::ComboBox^  cBoxPol�gono;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  tBLongitud;
	private: System::Windows::Forms::Label^  lblArea;
	private: System::Windows::Forms::Label^  lblPerimetro;



	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnCalcular = (gcnew System::Windows::Forms::Button());
			this->cBoxPol�gono = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tBLongitud = (gcnew System::Windows::Forms::TextBox());
			this->lblArea = (gcnew System::Windows::Forms::Label());
			this->lblPerimetro = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnCalcular
			// 
			this->btnCalcular->Location = System::Drawing::Point(12, 73);
			this->btnCalcular->Name = L"btnCalcular";
			this->btnCalcular->Size = System::Drawing::Size(191, 23);
			this->btnCalcular->TabIndex = 1;
			this->btnCalcular->Text = L"Calcular �rea y per�metro";
			this->btnCalcular->UseVisualStyleBackColor = true;
			this->btnCalcular->Click += gcnew System::EventHandler(this, &MyForm::btnCalcular_Click);
			// 
			// cBoxPol�gono
			// 
			this->cBoxPol�gono->FormattingEnabled = true;
			this->cBoxPol�gono->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"Tri�ngulo", L"Cuadril�tero", L"Pent�gono",
					L"Hex�gono", L"Hept�gono", L"Oct�gono", L"Ene�gono", L"Dec�gono"
			});
			this->cBoxPol�gono->Location = System::Drawing::Point(12, 20);
			this->cBoxPol�gono->Name = L"cBoxPol�gono";
			this->cBoxPol�gono->Size = System::Drawing::Size(191, 21);
			this->cBoxPol�gono->TabIndex = 2;
			this->cBoxPol�gono->Text = L"Seleccione el pol�gono";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(88, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Longitud del lado";
			// 
			// tBLongitud
			// 
			this->tBLongitud->Location = System::Drawing::Point(103, 47);
			this->tBLongitud->Name = L"tBLongitud";
			this->tBLongitud->Size = System::Drawing::Size(100, 20);
			this->tBLongitud->TabIndex = 4;
			// 
			// lblArea
			// 
			this->lblArea->AutoSize = true;
			this->lblArea->Location = System::Drawing::Point(12, 110);
			this->lblArea->Name = L"lblArea";
			this->lblArea->Size = System::Drawing::Size(32, 13);
			this->lblArea->TabIndex = 5;
			this->lblArea->Text = L"�rea:";
			// 
			// lblPerimetro
			// 
			this->lblPerimetro->AutoSize = true;
			this->lblPerimetro->Location = System::Drawing::Point(12, 135);
			this->lblPerimetro->Name = L"lblPerimetro";
			this->lblPerimetro->Size = System::Drawing::Size(59, 13);
			this->lblPerimetro->TabIndex = 6;
			this->lblPerimetro->Text = L"Per�metro: ";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(209, 167);
			this->Controls->Add(this->lblPerimetro);
			this->Controls->Add(this->lblArea);
			this->Controls->Add(this->tBLongitud);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->cBoxPol�gono);
			this->Controls->Add(this->btnCalcular);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
			 Triangulo *Pol3 = new Triangulo();
			 Cuadrado *Pol4 = new Cuadrado();
			 Pentagono *Pol5 = new Pentagono();
			 Hexagono *Pol6 = new Hexagono();
			 Heptagono *Pol7 = new Heptagono();
			 Octagono *Pol8 = new Octagono();
			 Eneagono *Pol9 = new Eneagono();
			 Decagono *Pol10 = new Decagono();
private: System::Void btnCalcular_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		switch (cBoxPol�gono->SelectedIndex)
		{
		case 0:
			lblArea->Text = "�rea: " + Pol3->ObtenerArea(System::Convert::ToDouble(tBLongitud->Text));
			lblPerimetro->Text = "Per�metro:  " + Pol3->ObtenerPerimetro(System::Convert::ToDouble(tBLongitud->Text));
			break;
		case 1:
			lblArea->Text = "�rea: " + Pol4->ObtenerArea(System::Convert::ToDouble(tBLongitud->Text));
			lblPerimetro->Text = "Per�metro:  " + Pol4->ObtenerPerimetro(System::Convert::ToDouble(tBLongitud->Text));
			break;
		case 2:
			lblArea->Text = "�rea: " + Pol5->ObtenerArea(System::Convert::ToDouble(tBLongitud->Text));
			lblPerimetro->Text = "Per�metro:  " + Pol5->ObtenerPerimetro(System::Convert::ToDouble(tBLongitud->Text));
			break;
		case 3:
			lblArea->Text = "�rea: " + Pol6->ObtenerArea(System::Convert::ToDouble(tBLongitud->Text));
			lblPerimetro->Text = "Per�metro:  " + Pol6->ObtenerPerimetro(System::Convert::ToDouble(tBLongitud->Text));
			break;
		case 4:
			lblArea->Text = "�rea: " + Pol7->ObtenerArea(System::Convert::ToDouble(tBLongitud->Text));
			lblPerimetro->Text = "Per�metro:  " + Pol7->ObtenerPerimetro(System::Convert::ToDouble(tBLongitud->Text));
			break;
		case 5:
			lblArea->Text = "�rea: " + Pol8->ObtenerArea(System::Convert::ToDouble(tBLongitud->Text));
			lblPerimetro->Text = "Per�metro:  " + Pol8->ObtenerPerimetro(System::Convert::ToDouble(tBLongitud->Text));
			break;
		case 6:
			lblArea->Text = "�rea: " + Pol9->ObtenerArea(System::Convert::ToDouble(tBLongitud->Text));
			lblPerimetro->Text = "Per�metro:  " + Pol9->ObtenerPerimetro(System::Convert::ToDouble(tBLongitud->Text));
			break;
		case 7:
			lblArea->Text = "�rea: " + Pol10->ObtenerArea(System::Convert::ToDouble(tBLongitud->Text));
			lblPerimetro->Text = "Per�metro:  " + Pol10->ObtenerPerimetro(System::Convert::ToDouble(tBLongitud->Text));
			break;
		}
	}
	catch (...) {
		MessageBox::Show("Debe ingresar un n�mero como la longitud del lado");
	}
}
};
}
