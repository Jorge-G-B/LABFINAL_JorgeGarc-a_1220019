#pragma once
#include "Triangulo.h"
#include "Cuadrado.h"
#include "Pentagono.h"
#include "Hexagono.h"
#include "Heptagono.h"
#include "Octagono.h"
#include "Eneagono.h"
#include "Decagono.h"

namespace LABFINALJorgeGarcía1220019 {

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
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
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
	private: System::Windows::Forms::ComboBox^  cBoxPolígono;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  tBLongitud;
	private: System::Windows::Forms::Label^  lblArea;
	private: System::Windows::Forms::Label^  lblPerimetro;



	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnCalcular = (gcnew System::Windows::Forms::Button());
			this->cBoxPolígono = (gcnew System::Windows::Forms::ComboBox());
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
			this->btnCalcular->Text = L"Calcular área y perímetro";
			this->btnCalcular->UseVisualStyleBackColor = true;
			this->btnCalcular->Click += gcnew System::EventHandler(this, &MyForm::btnCalcular_Click);
			// 
			// cBoxPolígono
			// 
			this->cBoxPolígono->FormattingEnabled = true;
			this->cBoxPolígono->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"Triángulo", L"Cuadrilátero", L"Pentágono",
					L"Hexágono", L"Heptágono", L"Octágono", L"Eneágono", L"Decágono"
			});
			this->cBoxPolígono->Location = System::Drawing::Point(12, 20);
			this->cBoxPolígono->Name = L"cBoxPolígono";
			this->cBoxPolígono->Size = System::Drawing::Size(191, 21);
			this->cBoxPolígono->TabIndex = 2;
			this->cBoxPolígono->Text = L"Seleccione el polígono";
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
			this->lblArea->Text = L"Área:";
			// 
			// lblPerimetro
			// 
			this->lblPerimetro->AutoSize = true;
			this->lblPerimetro->Location = System::Drawing::Point(12, 135);
			this->lblPerimetro->Name = L"lblPerimetro";
			this->lblPerimetro->Size = System::Drawing::Size(59, 13);
			this->lblPerimetro->TabIndex = 6;
			this->lblPerimetro->Text = L"Perímetro: ";
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
			this->Controls->Add(this->cBoxPolígono);
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
		switch (cBoxPolígono->SelectedIndex)
		{
		case 0:
			lblArea->Text = "Área: " + Pol3->ObtenerArea(System::Convert::ToDouble(tBLongitud->Text));
			lblPerimetro->Text = "Perímetro:  " + Pol3->ObtenerPerimetro(System::Convert::ToDouble(tBLongitud->Text));
			break;
		case 1:
			lblArea->Text = "Área: " + Pol4->ObtenerArea(System::Convert::ToDouble(tBLongitud->Text));
			lblPerimetro->Text = "Perímetro:  " + Pol4->ObtenerPerimetro(System::Convert::ToDouble(tBLongitud->Text));
			break;
		case 2:
			lblArea->Text = "Área: " + Pol5->ObtenerArea(System::Convert::ToDouble(tBLongitud->Text));
			lblPerimetro->Text = "Perímetro:  " + Pol5->ObtenerPerimetro(System::Convert::ToDouble(tBLongitud->Text));
			break;
		case 3:
			lblArea->Text = "Área: " + Pol6->ObtenerArea(System::Convert::ToDouble(tBLongitud->Text));
			lblPerimetro->Text = "Perímetro:  " + Pol6->ObtenerPerimetro(System::Convert::ToDouble(tBLongitud->Text));
			break;
		case 4:
			lblArea->Text = "Área: " + Pol7->ObtenerArea(System::Convert::ToDouble(tBLongitud->Text));
			lblPerimetro->Text = "Perímetro:  " + Pol7->ObtenerPerimetro(System::Convert::ToDouble(tBLongitud->Text));
			break;
		case 5:
			lblArea->Text = "Área: " + Pol8->ObtenerArea(System::Convert::ToDouble(tBLongitud->Text));
			lblPerimetro->Text = "Perímetro:  " + Pol8->ObtenerPerimetro(System::Convert::ToDouble(tBLongitud->Text));
			break;
		case 6:
			lblArea->Text = "Área: " + Pol9->ObtenerArea(System::Convert::ToDouble(tBLongitud->Text));
			lblPerimetro->Text = "Perímetro:  " + Pol9->ObtenerPerimetro(System::Convert::ToDouble(tBLongitud->Text));
			break;
		case 7:
			lblArea->Text = "Área: " + Pol10->ObtenerArea(System::Convert::ToDouble(tBLongitud->Text));
			lblPerimetro->Text = "Perímetro:  " + Pol10->ObtenerPerimetro(System::Convert::ToDouble(tBLongitud->Text));
			break;
		}
	}
	catch (...) {
		MessageBox::Show("Debe ingresar un número como la longitud del lado");
	}
}
};
}
