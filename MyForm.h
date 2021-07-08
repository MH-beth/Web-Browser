#pragma once

namespace web {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: AxMicrosoft::Vbe::Interop::Forms::AxCommandButton^ axCommandButton1;
	protected:
	private: AxMicrosoft::Vbe::Interop::Forms::AxCommandButton^ axCommandButton2;
	private: AxMicrosoft::Vbe::Interop::Forms::AxTextBox^ axTextBox1;
	private: AxMicrosoft::Vbe::Interop::Forms::AxCommandButton^ axCommandButton3;
	private: AxSHDocVw::AxWebBrowser^ webBrowser;


	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->axCommandButton1 = (gcnew AxMicrosoft::Vbe::Interop::Forms::AxCommandButton());
			this->axCommandButton2 = (gcnew AxMicrosoft::Vbe::Interop::Forms::AxCommandButton());
			this->axTextBox1 = (gcnew AxMicrosoft::Vbe::Interop::Forms::AxTextBox());
			this->axCommandButton3 = (gcnew AxMicrosoft::Vbe::Interop::Forms::AxCommandButton());
			this->webBrowser = (gcnew AxSHDocVw::AxWebBrowser());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axCommandButton1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axCommandButton2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axTextBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axCommandButton3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->webBrowser))->BeginInit();
			this->SuspendLayout();
			// 
			// axCommandButton1
			// 
			this->axCommandButton1->Location = System::Drawing::Point(13, 13);
			this->axCommandButton1->Name = L"axCommandButton1";
			this->axCommandButton1->OcxState = (cli::safe_cast<System::Windows::Forms::AxHost::State^>(resources->GetObject(L"axCommandButton1.OcxState")));
			this->axCommandButton1->Size = System::Drawing::Size(27, 29);
			this->axCommandButton1->TabIndex = 0;
			this->axCommandButton1->Enter += gcnew System::EventHandler(this, &MyForm::axCommandButton1_Enter);
			// 
			// axCommandButton2
			// 
			this->axCommandButton2->Location = System::Drawing::Point(46, 13);
			this->axCommandButton2->Name = L"axCommandButton2";
			this->axCommandButton2->OcxState = (cli::safe_cast<System::Windows::Forms::AxHost::State^>(resources->GetObject(L"axCommandButton2.OcxState")));
			this->axCommandButton2->Size = System::Drawing::Size(27, 29);
			this->axCommandButton2->TabIndex = 1;
			this->axCommandButton2->Enter += gcnew System::EventHandler(this, &MyForm::axCommandButton2_Enter);
			// 
			// axTextBox1
			// 
			this->axTextBox1->Location = System::Drawing::Point(102, 18);
			this->axTextBox1->Name = L"axTextBox1";
			this->axTextBox1->OcxState = (cli::safe_cast<System::Windows::Forms::AxHost::State^>(resources->GetObject(L"axTextBox1.OcxState")));
			this->axTextBox1->Size = System::Drawing::Size(1179, 30);
			this->axTextBox1->TabIndex = 2;
			// 
			// axCommandButton3
			// 
			this->axCommandButton3->Location = System::Drawing::Point(1287, 12);
			this->axCommandButton3->Name = L"axCommandButton3";
			this->axCommandButton3->OcxState = (cli::safe_cast<System::Windows::Forms::AxHost::State^>(resources->GetObject(L"axCommandButton3.OcxState")));
			this->axCommandButton3->Size = System::Drawing::Size(120, 36);
			this->axCommandButton3->TabIndex = 3;
			this->axCommandButton3->Enter += gcnew System::EventHandler(this, &MyForm::axCommandButton3_Enter);
			// 
			// webBrowser
			// 
			this->webBrowser->Enabled = true;
			this->webBrowser->Location = System::Drawing::Point(3, 58);
			this->webBrowser->OcxState = (cli::safe_cast<System::Windows::Forms::AxHost::State^>(resources->GetObject(L"webBrowser.OcxState")));
			this->webBrowser->Size = System::Drawing::Size(1404, 489);
			this->webBrowser->TabIndex = 4;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1411, 559);
			this->Controls->Add(this->webBrowser);
			this->Controls->Add(this->axCommandButton3);
			this->Controls->Add(this->axTextBox1);
			this->Controls->Add(this->axCommandButton2);
			this->Controls->Add(this->axCommandButton1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axCommandButton1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axCommandButton2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axTextBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axCommandButton3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->webBrowser))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void axCommandButton1_Enter(System::Object^ sender, System::EventArgs^ e)
	{
		webBrowser->GoBack();
	}
	private: System::Void axCommandButton2_Enter(System::Object^ sender, System::EventArgs^ e) {
		webBrowser->GoForward();
	}
};
}
