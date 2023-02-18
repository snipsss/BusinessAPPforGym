#pragma once

namespace die {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		
		MySqlConnection^ sqlConn = gcnew MySqlConnection();
		MySqlCommand^ sqlCmd = gcnew MySqlCommand();
		DataTable^ sqlDt = gcnew DataTable();
		MySqlDataAdapter^ sqladaptr = gcnew MySqlDataAdapter();
	private: System::Windows::Forms::Button^ btnSearch;
		   MySqlDataReader^ sqlRd;

	public:
		MyForm(void)
		{
			InitializeComponent();
			MenbershipDB();
			//RefreshDB();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ btExit;
	private: System::Windows::Forms::Button^ btReset;
	private: System::Windows::Forms::Button^ btDelete;
	private: System::Windows::Forms::Button^ bdUpdate;
	private: System::Windows::Forms::Button^ sqlRefresh;

	private: System::Windows::Forms::Button^ btAdd;







	public: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ txtDatareg;
	public:
	private:

	public: System::Windows::Forms::Label^ txtMobile;
	private:

	private: System::Windows::Forms::Label^ txtAddr;
	public:
	private:
	public:


	private: System::Windows::Forms::Label^ txtLastN;

	private: System::Windows::Forms::Label^ txtFirstN;

	private: System::Windows::Forms::Label^ txtReference;
	private: System::Windows::Forms::ComboBox^ cmbMemFees;


	private: System::Windows::Forms::ComboBox^ cmbmemtype;

	private: System::Windows::Forms::ComboBox^ combxProve;
	public: System::Windows::Forms::Label^ label11;
	private:

	private:

	private:

	private:


	private:
	private: System::Windows::Forms::Label^ label10;
	public:
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ txtSearch;

	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::DataGridView^ dataGridView1;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->combxProve = (gcnew System::Windows::Forms::ComboBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->cmbMemFees = (gcnew System::Windows::Forms::ComboBox());
			this->cmbmemtype = (gcnew System::Windows::Forms::ComboBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtSearch = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtDatareg = (gcnew System::Windows::Forms::Label());
			this->txtMobile = (gcnew System::Windows::Forms::Label());
			this->txtAddr = (gcnew System::Windows::Forms::Label());
			this->txtLastN = (gcnew System::Windows::Forms::Label());
			this->txtFirstN = (gcnew System::Windows::Forms::Label());
			this->txtReference = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->btExit = (gcnew System::Windows::Forms::Button());
			this->btReset = (gcnew System::Windows::Forms::Button());
			this->btDelete = (gcnew System::Windows::Forms::Button());
			this->bdUpdate = (gcnew System::Windows::Forms::Button());
			this->sqlRefresh = (gcnew System::Windows::Forms::Button());
			this->btAdd = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->btnSearch);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->combxProve);
			this->panel1->Controls->Add(this->dateTimePicker1);
			this->panel1->Controls->Add(this->cmbMemFees);
			this->panel1->Controls->Add(this->cmbmemtype);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->txtSearch);
			this->panel1->Controls->Add(this->textBox7);
			this->panel1->Controls->Add(this->textBox6);
			this->panel1->Controls->Add(this->textBox5);
			this->panel1->Controls->Add(this->textBox4);
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->txtDatareg);
			this->panel1->Controls->Add(this->txtMobile);
			this->panel1->Controls->Add(this->txtAddr);
			this->panel1->Controls->Add(this->txtLastN);
			this->panel1->Controls->Add(this->txtFirstN);
			this->panel1->Controls->Add(this->txtReference);
			this->panel1->Location = System::Drawing::Point(3, 5);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1185, 216);
			this->panel1->TabIndex = 0;
			// 
			// btnSearch
			// 
			this->btnSearch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSearch->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnSearch->Location = System::Drawing::Point(907, 6);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(118, 45);
			this->btnSearch->TabIndex = 6;
			this->btnSearch->Text = L"Search";
			this->btnSearch->UseVisualStyleBackColor = true;
			this->btnSearch->Click += gcnew System::EventHandler(this, &MyForm::btnSearch_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(1027, 18);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(144, 22);
			this->textBox2->TabIndex = 9;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox2_KeyPress);
			// 
			// combxProve
			// 
			this->combxProve->FormattingEnabled = true;
			this->combxProve->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Passport ", L"Student Card ", L"Driver Licence " });
			this->combxProve->Location = System::Drawing::Point(512, 98);
			this->combxProve->Name = L"combxProve";
			this->combxProve->Size = System::Drawing::Size(265, 24);
			this->combxProve->TabIndex = 22;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker1->Location = System::Drawing::Point(911, 57);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(265, 28);
			this->dateTimePicker1->TabIndex = 0;
			// 
			// cmbMemFees
			// 
			this->cmbMemFees->FormattingEnabled = true;
			this->cmbMemFees->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"600.00$", L"800.00$", L"2000.00$", L"3500.00$" });
			this->cmbMemFees->Location = System::Drawing::Point(910, 140);
			this->cmbMemFees->Name = L"cmbMemFees";
			this->cmbMemFees->Size = System::Drawing::Size(265, 24);
			this->cmbMemFees->TabIndex = 24;
			// 
			// cmbmemtype
			// 
			this->cmbmemtype->FormattingEnabled = true;
			this->cmbmemtype->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Weakly", L"Monthly ", L"Half Year ", L"Year" });
			this->cmbmemtype->Location = System::Drawing::Point(907, 98);
			this->cmbmemtype->Name = L"cmbmemtype";
			this->cmbmemtype->Size = System::Drawing::Size(265, 24);
			this->cmbmemtype->TabIndex = 23;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(804, 62);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(82, 16);
			this->label11->TabIndex = 21;
			this->label11->Text = L"Date of Birth:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(804, 143);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(101, 16);
			this->label10->TabIndex = 19;
			this->label10->Text = L"Members Fees:";
			this->label10->Click += gcnew System::EventHandler(this, &MyForm::label10_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(804, 104);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(95, 16);
			this->label9->TabIndex = 17;
			this->label9->Text = L"Member Type:";
			// 
			// txtSearch
			// 
			this->txtSearch->AutoSize = true;
			this->txtSearch->Location = System::Drawing::Point(803, 24);
			this->txtSearch->Name = L"txtSearch";
			this->txtSearch->Size = System::Drawing::Size(50, 16);
			this->txtSearch->TabIndex = 15;
			this->txtSearch->Text = L"Search";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(76, 153);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(701, 22);
			this->textBox7->TabIndex = 14;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(116, 101);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(263, 22);
			this->textBox6->TabIndex = 13;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(116, 54);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(263, 22);
			this->textBox5->TabIndex = 12;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(514, 19);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(263, 22);
			this->textBox4->TabIndex = 11;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(514, 57);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(263, 22);
			this->textBox3->TabIndex = 10;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(118, 8);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(263, 22);
			this->textBox1->TabIndex = 8;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(408, 101);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(46, 16);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Prove:";
			// 
			// txtDatareg
			// 
			this->txtDatareg->AutoSize = true;
			this->txtDatareg->Location = System::Drawing::Point(408, 57);
			this->txtDatareg->Name = L"txtDatareg";
			this->txtDatareg->Size = System::Drawing::Size(60, 16);
			this->txtDatareg->TabIndex = 6;
			this->txtDatareg->Text = L"data reg:";
			this->txtDatareg->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// txtMobile
			// 
			this->txtMobile->AutoSize = true;
			this->txtMobile->Location = System::Drawing::Point(408, 19);
			this->txtMobile->Name = L"txtMobile";
			this->txtMobile->Size = System::Drawing::Size(51, 16);
			this->txtMobile->TabIndex = 5;
			this->txtMobile->Text = L"Mobile:";
			this->txtMobile->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// txtAddr
			// 
			this->txtAddr->AutoSize = true;
			this->txtAddr->Location = System::Drawing::Point(10, 156);
			this->txtAddr->Name = L"txtAddr";
			this->txtAddr->Size = System::Drawing::Size(61, 16);
			this->txtAddr->TabIndex = 4;
			this->txtAddr->Text = L"Address:";
			this->txtAddr->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// txtLastN
			// 
			this->txtLastN->AutoSize = true;
			this->txtLastN->Location = System::Drawing::Point(10, 101);
			this->txtLastN->Name = L"txtLastN";
			this->txtLastN->Size = System::Drawing::Size(75, 16);
			this->txtLastN->TabIndex = 3;
			this->txtLastN->Text = L"Last Name:";
			this->txtLastN->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// txtFirstN
			// 
			this->txtFirstN->AutoSize = true;
			this->txtFirstN->Location = System::Drawing::Point(10, 57);
			this->txtFirstN->Name = L"txtFirstN";
			this->txtFirstN->Size = System::Drawing::Size(75, 16);
			this->txtFirstN->TabIndex = 2;
			this->txtFirstN->Text = L"First Name:";
			// 
			// txtReference
			// 
			this->txtReference->AutoSize = true;
			this->txtReference->Location = System::Drawing::Point(10, 9);
			this->txtReference->Name = L"txtReference";
			this->txtReference->Size = System::Drawing::Size(94, 16);
			this->txtReference->TabIndex = 1;
			this->txtReference->Text = L"Reference No:";
			this->txtReference->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Controls->Add(this->btExit);
			this->panel2->Controls->Add(this->btReset);
			this->panel2->Controls->Add(this->btDelete);
			this->panel2->Controls->Add(this->bdUpdate);
			this->panel2->Controls->Add(this->sqlRefresh);
			this->panel2->Controls->Add(this->btAdd);
			this->panel2->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->panel2->Location = System::Drawing::Point(4, 224);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1183, 62);
			this->panel2->TabIndex = 1;
			// 
			// btExit
			// 
			this->btExit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btExit->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btExit->Location = System::Drawing::Point(1057, 6);
			this->btExit->Name = L"btExit";
			this->btExit->Size = System::Drawing::Size(118, 45);
			this->btExit->TabIndex = 5;
			this->btExit->Text = L"Exit";
			this->btExit->UseVisualStyleBackColor = true;
			this->btExit->Click += gcnew System::EventHandler(this, &MyForm::btExit_Click_1);
			// 
			// btReset
			// 
			this->btReset->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btReset->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btReset->Location = System::Drawing::Point(934, 6);
			this->btReset->Name = L"btReset";
			this->btReset->Size = System::Drawing::Size(118, 45);
			this->btReset->TabIndex = 4;
			this->btReset->Text = L"Reset";
			this->btReset->UseVisualStyleBackColor = true;
			this->btReset->Click += gcnew System::EventHandler(this, &MyForm::btReset_Click);
			// 
			// btDelete
			// 
			this->btDelete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btDelete->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btDelete->Location = System::Drawing::Point(621, 6);
			this->btDelete->Name = L"btDelete";
			this->btDelete->Size = System::Drawing::Size(118, 45);
			this->btDelete->TabIndex = 3;
			this->btDelete->Text = L"Delete";
			this->btDelete->UseVisualStyleBackColor = true;
			// 
			// bdUpdate
			// 
			this->bdUpdate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bdUpdate->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->bdUpdate->Location = System::Drawing::Point(129, 6);
			this->bdUpdate->Name = L"bdUpdate";
			this->bdUpdate->Size = System::Drawing::Size(118, 45);
			this->bdUpdate->TabIndex = 2;
			this->bdUpdate->Text = L"Update";
			this->bdUpdate->UseVisualStyleBackColor = true;
			this->bdUpdate->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// sqlRefresh
			// 
			this->sqlRefresh->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sqlRefresh->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->sqlRefresh->Location = System::Drawing::Point(497, 6);
			this->sqlRefresh->Name = L"sqlRefresh";
			this->sqlRefresh->Size = System::Drawing::Size(118, 45);
			this->sqlRefresh->TabIndex = 1;
			this->sqlRefresh->Text = L"Refresh";
			this->sqlRefresh->UseVisualStyleBackColor = true;
			this->sqlRefresh->Click += gcnew System::EventHandler(this, &MyForm::sqlRefresh_Click);
			// 
			// btAdd
			// 
			this->btAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btAdd->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btAdd->Location = System::Drawing::Point(5, 6);
			this->btAdd->Name = L"btAdd";
			this->btAdd->Size = System::Drawing::Size(118, 45);
			this->btAdd->TabIndex = 0;
			this->btAdd->Text = L"add New";
			this->btAdd->UseVisualStyleBackColor = true;
			this->btAdd->Click += gcnew System::EventHandler(this, &MyForm::btAdd_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(7, 294);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1169, 447);
			this->dataGridView1->TabIndex = 2;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellClick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1190, 753);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		private: System::Void MenbershipDB()
		{
			sqlConn->ConnectionString = "datasource = localhost; port = 3306; username = root; password = 1234; database= membership";
				sqlConn->Open();
		
				sqlCmd->Connection = sqlConn;
				sqlCmd->CommandText = "select *from inforamtion;";
				sqlRd = sqlCmd->ExecuteReader();
				sqlDt->Load(sqlRd);
				sqlRd ->Close();
				sqlConn->Close();
				dataGridView1->DataSource = sqlDt; 
		}
		private: System::Void RefreshDB()
		{
			try 
			{
				sqlConn->ConnectionString = "datasource = localhost; port = 3306; username = root; password = 1234; database= membership";
				sqlCmd->Connection = sqlConn;
				
				//String id = txtReference->Text;
				
				MySqlDataAdapter^ sqladaptr = gcnew MySqlDataAdapter("select *from inforamtion",sqlConn);
				DataTable^ sqlDt = gcnew DataTable();
				sqladaptr->Fill(sqlDt);
				dataGridView1->DataSource = sqlDt;
			
			
			}
			catch(Exception^ ex)
			{
				MessageBox::Show(ex->Message, "Data Entry Form", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
			}
		
		}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			sqlConn->ConnectionString = "datasource = localhost; port = 3306; username = root; password = 1234; database= membership";
			sqlCmd->Connection = sqlConn;

			/*First Name  
		Surname 
		Address 
		Mobile phone 
		Registration date 
		Prove  
		DOB  
		Member 
		Member 
			*/

			String^ ID = txtReference-> Text;
			String^ Firstname = txtFirstN-> Text;
			String^ address = txtAddr->Text;
			String^ mobile = txtMobile->Text;
			String^ datareg = txtDatareg->Text;
			String^ lastN = txtLastN->Text;
			String^ prove = combxProve->Text;
			String^ memFees = cmbMemFees->Text;
			String^ memtype = cmbmemtype->Text;
			String^ datetime = label11->Text;
			String^ datarg = textBox3->Text;
			//sqlCmd->CommandText = "insert into inforamtion values('" + textBox1->Text + "','" + textBox5->Text + "','" + textBox6->Text + "','" + textBox7->Text + "','" + textBox4->Text + "','" + textBox3->Text + "','" + combxProve->Text + "','" + dateTimePicker1->Text + "','" + cmbmemtype->Text + "','" + cmbMemFees->Text + "')";
			sqlCmd->CommandText = "update inforamtion set Ref number('"+ textBox1->Text + "','" + textBox5->Text + "','" + textBox6->Text + "','" + textBox7->Text + "','" + textBox4->Text + "','" + textBox3->Text + "','" + combxProve->Text + "','" + dateTimePicker1->Text + "','" + cmbmemtype->Text + "','" + cmbMemFees->Text + "')";

			sqlConn->Open();
			sqlRd = sqlCmd->ExecuteReader();
			sqlConn->Close();
			MenbershipDB();
			RefreshDB();
		}
		catch(Exception ^ ex)
		{
			MessageBox::Show(ex->Message, "Data Entry Form", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
		}
	}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
	private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void btExit_Click_1(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::DialogResult iExit;
	try {
		iExit = MessageBox::Show("Confirm if you want to Exit", "Data Entry Form", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
		if (iExit == System::Windows::Forms::DialogResult::Yes)
		{
			Application::Exit();
		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message, "Data Entry Form", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
	}
}
private: System::Void btReset_Click(System::Object^ sender, System::EventArgs^ e) {
	
	try
	{
		textBox1 -> Text = "";
		textBox2->Text = "";
		textBox3->Text = "";
		textBox3->Text = "";
		textBox4->Text = "";
		textBox5->Text = "";
		textBox6->Text = "";	 
		textBox7->Text = "";
		cmbMemFees->Text = "";
		cmbmemtype->Text = "";
		combxProve->Text = "";
		dateTimePicker1->ResetText();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message, "Data Entry Form", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
	}
}

private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	try {
		textBox1->Text = dataGridView1->SelectedRows[0]->Cells[0]->Value->ToString();
		textBox2->Text = dataGridView1->SelectedRows[0]->Cells[1]->Value->ToString();
		textBox3->Text = dataGridView1->SelectedRows[0]->Cells[2]->Value->ToString();
		textBox3->Text = dataGridView1->SelectedRows[0]->Cells[3]->Value->ToString();
		textBox4->Text = dataGridView1->SelectedRows[0]->Cells[4]->Value->ToString();
		textBox5->Text = dataGridView1->SelectedRows[0]->Cells[5]->Value->ToString();
		textBox6->Text = dataGridView1->SelectedRows[0]->Cells[6]->Value->ToString();
		textBox7->Text = dataGridView1->SelectedRows[0]->Cells[7]->Value->ToString();
		combxProve->Text = dataGridView1->SelectedRows[0]->Cells[8]->Value->ToString();
		cmbmemtype->Text = dataGridView1->SelectedRows[0]->Cells[9]->Value->ToString();
		cmbMemFees->Text = dataGridView1->SelectedRows[0]->Cells[10]->Value->ToString();
		dateTimePicker1->Text = dataGridView1->SelectedRows[0]->Cells[11]->Value->ToString();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message, "Data Entry Form", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
	}
}
private: System::Void sqlRefresh_Click(System::Object^ sender, System::EventArgs^ e) {
	RefreshDB();
}
private: System::Void textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	try
	{
		if(e->KeyChar == (Char)13)
		{
			DataView^ dv = sqlDt->DefaultView;
			dv->RowFilter = String::Format("Surname like '%{0}%", textBox2->Text);
			dataGridView1->DataSource = dv->ToTable();
		}	
	}
	catch(Exception^ ex)
	{
		MessageBox::Show(ex->Message, "Data Entry Form", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
	}
}
private: System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
			
			DataView^ dv = sqlDt->DefaultView;
			dv->RowFilter = String::Format("Surname like '%{0}%'", textBox2->Text);
			dataGridView1->DataSource = dv->ToTable();
		
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message, "Data Entry Form", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
	}
}
	private: System::Void btAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		sqlConn->ConnectionString = "datasource = localhost; port = 3306; username = root; password = 1234; database= membership";
		sqlConn->Open();
		sqlCmd->Connection = sqlConn;

		try {
			sqlCmd->CommandText = "insert into inforamtion values('" + textBox1->Text + "','" + textBox5->Text + "','" + textBox6->Text + "','" + textBox7->Text + "','" + textBox4->Text + "','" + textBox3->Text + "','" + combxProve->Text + "','" + dateTimePicker1->Text + "','" + cmbmemtype->Text + "','" + cmbMemFees->Text + "')";
			sqlCmd->ExecuteNonQuery();
			//sqlRd->Close()
			sqlConn->Close();
			MenbershipDB();
			RefreshDB();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, "Data Entry Form", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
		}
}
};
}
