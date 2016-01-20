#pragma once
#include <iostream>

#include <windows.h>
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <iomanip>
#include "tinyxml2.h"

//string 변환부
#include <stdlib.h>
#include <string.h>
#include <msclr\marshal_cppstd.h>

//#include <thread>
#using <System.dll>
#using <System.Windows.Forms.dll>
#using <System.Drawing.dll>
//using namespace XMLReadWrite::Xml;
using namespace System;
using namespace System::Windows::Forms;
//using namespace System::Xml;
using namespace std;
using namespace System::IO;

namespace XMLReadWrite {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MyForm에 대한 요약입니다.
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: 생성자 코드를 여기에 추가합니다.
			//
		}

	protected:
		/// <summary>
		/// 사용 중인 모든 리소스를 정리합니다.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Button^  button2;

	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;

	private:
		/// <summary>
		/// 필수 디자이너 변수입니다.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 디자이너 지원에 필요한 메서드입니다.
		/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(70, 248);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(191, 248);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::openFileDialog1_FileOk);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(254, 51);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(138, 21);
			this->textBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(254, 79);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(138, 21);
			this->textBox2->TabIndex = 3;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(297, 248);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 4;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(254, 111);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(138, 21);
			this->textBox3->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(68, 88);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(129, 12);
			this->label1->TabIndex = 6;
			this->label1->Text = L"windows[Bp]_ex. 200";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(68, 120);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(154, 12);
			this->label2->TabIndex = 7;
			this->label2->Text = L"vicinity range[BP]_ex. 200";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(68, 60);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(48, 12);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Sample";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(517, 102);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(200, 30);
			this->button4->TabIndex = 9;
			this->button4->Text = L"sequence extation(\'\\n\' delete)";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(473, 194);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(244, 243);
			this->richTextBox1->TabIndex = 10;
			this->richTextBox1->Text = L"";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(805, 532);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		char stre[100];

		tinyxml2::XMLDocument m_xmlDocument;
		tinyxml2::XMLNode * m_pNode;

		//string ac = "asdasd";
		///////////XML write 부분/////////////
		//////////////^스트링 char변환/////////////////
		String^ a1 = textBox1->Text;
		std::string A1 = msclr::interop::marshal_as<std::string>(a1);
		const char * A1_1 = A1.c_str();
		m_pNode = m_xmlDocument.NewElement(strcpy(stre ,A1_1));
		m_xmlDocument.InsertFirstChild(m_pNode);



		tinyxml2::XMLElement * m_pElement = m_xmlDocument.NewElement("sample");
		m_pElement->SetText(10);
		m_pNode->InsertEndChild(m_pElement);

		m_pElement = m_xmlDocument.NewElement("sample2");
		m_pElement->SetText(0.1f);
		m_pNode->InsertEndChild(m_pElement);

		tinyxml2::XMLError m_error = m_xmlDocument.SaveFile("data.xml");
		///////////////////////////////////////////////////////////

		openFileDialog1->Title = "Select a file";
		openFileDialog1->FileName = nullptr;
		openFileDialog1->DefaultExt = "txt";
		openFileDialog1->Filter = "Text files (*.txt)|*.txt|All files (*.*)|*.*";
		openFileDialog1->CheckFileExists = true;
		//openFileDialog1->ShowDialog();

		//string FileName = "\\text1.txt";
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			System::IO::StreamReader ^ sr = gcnew 
				System::IO::StreamReader(openFileDialog1->FileName);
			textBox1->Text = sr->ReadToEnd();
			//MessageBox::Show(sr->ReadToEnd());

			sr->Close();
		}

	}
	private: System::Void openFileDialog1_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
	}


	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	openFileDialog1->Title = "Select a file";
	openFileDialog1->FileName = nullptr;
	openFileDialog1->DefaultExt = "fasta";
	openFileDialog1->Filter = "Fasta files (*.fasta)|*.fasta|All files (*.*)|*.*";
	openFileDialog1->CheckFileExists = true;
	//openFileDialog1->ShowDialog();

	//string FileName = "\\text1.txt";
	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		/*
		System::IO::StreamReader ^ sr = gcnew
			System::IO::StreamReader(openFileDialog1->FileName);
			*/
		System::IO::FileStream ^ aa = gcnew
			System::IO::FileStream(openFileDialog1->FileName, FileMode::OpenOrCreate); //::표시가능

		StreamReader ^ SR = gcnew StreamReader(aa);
		//SR->BaseStream->Seek(1,SeekOrigin::Begin);	//::표시가능
		static int a = 5;
		for (int z = 0; z < 10; z++){
			SR->BaseStream->Seek(a, SeekOrigin::Begin);	//::표시가능
			//richTextBox1->Text = SR->ReadLine();
			richTextBox1->AppendText(SR->ReadLine() + "\n\n");		//추가하는것
			//richTextBox1->SelectedText += L'\n';
			//richTextBox1->SelectedText += L'\n';
			//int a = 11;
			a = a+ 5;
			SR->DiscardBufferedData();
		}
		SR->Close();
		//sr->Close();
	}

}
};
}
