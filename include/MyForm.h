#pragma once
#include "ResourceAllocTask.h"

int SizeN, SizeM;

namespace project {

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
    private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
    private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
    private: System::Windows::Forms::Button^  button1;
    private: System::Windows::Forms::DataGridView^  dataGridView1;
    private: System::Windows::Forms::TextBox^  textBox1;
    private: System::Windows::Forms::TextBox^  textBox2;
    private: System::Windows::Forms::Button^  button2;


    private: System::Windows::Forms::TextBox^  textBox3;
    private: System::Windows::Forms::TextBox^  textBox4;
    private: System::Windows::Forms::TextBox^  textBox5;
    private: System::Windows::Forms::TextBox^  textBox6;
    private: System::Windows::Forms::TextBox^  textBox7;



    private: System::Windows::Forms::TextBox^  textBox8;
    private: System::Windows::Forms::TextBox^  textBox9;
    private: System::Windows::Forms::TextBox^  textBox10;
    private: System::Windows::Forms::TextBox^  textBox11;



    private: System::ComponentModel::IContainer^  components;






    protected:

    private:
        /// <summary>
        /// Требуется переменная конструктора.
        /// </summary>


#pragma region Windows Form Designer generated code
        /// <summary>
        /// Обязательный метод для поддержки конструктора - не изменяйте
        /// содержимое данного метода при помощи редактора кода.
        /// </summary>
        void InitializeComponent(void)
        {
            this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
            this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->textBox3 = (gcnew System::Windows::Forms::TextBox());
            this->textBox4 = (gcnew System::Windows::Forms::TextBox());
            this->textBox5 = (gcnew System::Windows::Forms::TextBox());
            this->textBox6 = (gcnew System::Windows::Forms::TextBox());
            this->textBox7 = (gcnew System::Windows::Forms::TextBox());
            this->textBox8 = (gcnew System::Windows::Forms::TextBox());
            this->textBox9 = (gcnew System::Windows::Forms::TextBox());
            this->textBox10 = (gcnew System::Windows::Forms::TextBox());
            this->textBox11 = (gcnew System::Windows::Forms::TextBox());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
            this->SuspendLayout();
            // 
            // numericUpDown1
            // 
            this->numericUpDown1->BackColor = System::Drawing::SystemColors::InactiveBorder;
            this->numericUpDown1->Location = System::Drawing::Point(362, 137);
            this->numericUpDown1->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
            this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 7, 0, 0, 0 });
            this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
            this->numericUpDown1->Name = L"numericUpDown1";
            this->numericUpDown1->Size = System::Drawing::Size(117, 24);
            this->numericUpDown1->TabIndex = 0;
            this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
            this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown1_ValueChanged);
            // 
            // numericUpDown2
            // 
            this->numericUpDown2->BackColor = System::Drawing::SystemColors::InactiveBorder;
            this->numericUpDown2->Location = System::Drawing::Point(362, 179);
            this->numericUpDown2->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
            this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 6, 0, 0, 0 });
            this->numericUpDown2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
            this->numericUpDown2->Name = L"numericUpDown2";
            this->numericUpDown2->Size = System::Drawing::Size(117, 24);
            this->numericUpDown2->TabIndex = 1;
            this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
            // 
            // button1
            // 
            this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
                static_cast<System::Int32>(static_cast<System::Byte>(192)));
            this->button1->Location = System::Drawing::Point(380, 313);
            this->button1->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(161, 40);
            this->button1->TabIndex = 2;
            this->button1->Text = L"Далее";
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
            // 
            // dataGridView1
            // 
            this->dataGridView1->AllowUserToAddRows = false;
            this->dataGridView1->AllowUserToDeleteRows = false;
            this->dataGridView1->AllowUserToResizeColumns = false;
            this->dataGridView1->AllowUserToResizeRows = false;
            this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
            this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
            this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ControlLight;
            this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView1->GridColor = System::Drawing::Color::MistyRose;
            this->dataGridView1->Location = System::Drawing::Point(24, 92);
            this->dataGridView1->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
            this->dataGridView1->Name = L"dataGridView1";
            this->dataGridView1->RowHeadersVisible = false;
            this->dataGridView1->ShowCellToolTips = false;
            this->dataGridView1->Size = System::Drawing::Size(490, 223);
            this->dataGridView1->TabIndex = 3;
            this->dataGridView1->Visible = false;
            this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
            this->dataGridView1->Click += gcnew System::EventHandler(this, &MyForm::dataGridView1_Click);
            // 
            // textBox1
            // 
            this->textBox1->Location = System::Drawing::Point(24, 136);
            this->textBox1->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(301, 24);
            this->textBox1->TabIndex = 4;
            this->textBox1->Text = L"Количество вариантов вложения";
            this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
            // 
            // textBox2
            // 
            this->textBox2->Location = System::Drawing::Point(24, 179);
            this->textBox2->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(301, 24);
            this->textBox2->TabIndex = 5;
            this->textBox2->Text = L"Количество предприятий";
            // 
            // button2
            // 
            this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
                static_cast<System::Int32>(static_cast<System::Byte>(192)));
            this->button2->Enabled = false;
            this->button2->Location = System::Drawing::Point(380, 314);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(161, 38);
            this->button2->TabIndex = 6;
            this->button2->Text = L"Далее";
            this->button2->UseVisualStyleBackColor = false;
            this->button2->Visible = false;
            this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
            // 
            // textBox3
            // 
            this->textBox3->BackColor = System::Drawing::SystemColors::ControlLight;
            this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->textBox3->Font = (gcnew System::Drawing::Font(L"Elephant", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox3->Location = System::Drawing::Point(38, 70);
            this->textBox3->Name = L"textBox3";
            this->textBox3->Size = System::Drawing::Size(490, 20);
            this->textBox3->TabIndex = 9;
            this->textBox3->Text = L"Введи количество вариантов вложения (то есть количество строк)";
            this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox4
            // 
            this->textBox4->BackColor = System::Drawing::SystemColors::ControlLight;
            this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->textBox4->Font = (gcnew System::Drawing::Font(L"Elephant", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox4->Location = System::Drawing::Point(12, 96);
            this->textBox4->Name = L"textBox4";
            this->textBox4->Size = System::Drawing::Size(492, 20);
            this->textBox4->TabIndex = 10;
            this->textBox4->Text = L" и количество предприятий.";
            this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox5
            // 
            this->textBox5->BackColor = System::Drawing::SystemColors::ControlLight;
            this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->textBox5->Enabled = false;
            this->textBox5->Font = (gcnew System::Drawing::Font(L"Elephant", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox5->ForeColor = System::Drawing::SystemColors::WindowText;
            this->textBox5->Location = System::Drawing::Point(38, 13);
            this->textBox5->Name = L"textBox5";
            this->textBox5->Size = System::Drawing::Size(490, 20);
            this->textBox5->TabIndex = 11;
            this->textBox5->Text = L"Отлично! А теперь введи значения дохода предприятий ";
            this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->textBox5->Visible = false;
            this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
            // 
            // textBox6
            // 
            this->textBox6->BackColor = System::Drawing::SystemColors::ControlLight;
            this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->textBox6->Enabled = false;
            this->textBox6->Font = (gcnew System::Drawing::Font(L"Elephant", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox6->ForeColor = System::Drawing::SystemColors::WindowText;
            this->textBox6->Location = System::Drawing::Point(36, 39);
            this->textBox6->Name = L"textBox6";
            this->textBox6->Size = System::Drawing::Size(492, 20);
            this->textBox6->TabIndex = 12;
            this->textBox6->Text = L"в зависимости от вложения и мы посчитаем для тебя";
            this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->textBox6->Visible = false;
            // 
            // textBox7
            // 
            this->textBox7->BackColor = System::Drawing::SystemColors::ControlLight;
            this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->textBox7->Enabled = false;
            this->textBox7->Font = (gcnew System::Drawing::Font(L"Elephant", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox7->ForeColor = System::Drawing::SystemColors::WindowText;
            this->textBox7->Location = System::Drawing::Point(24, 65);
            this->textBox7->Name = L"textBox7";
            this->textBox7->Size = System::Drawing::Size(490, 20);
            this->textBox7->TabIndex = 13;
            this->textBox7->Text = L"оптимальное решение!";
            this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->textBox7->Visible = false;
            this->textBox7->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox7_TextChanged);
            // 
            // textBox8
            // 
            this->textBox8->BackColor = System::Drawing::SystemColors::ControlLight;
            this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->textBox8->Enabled = false;
            this->textBox8->Font = (gcnew System::Drawing::Font(L"Elephant", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox8->Location = System::Drawing::Point(26, 91);
            this->textBox8->Name = L"textBox8";
            this->textBox8->Size = System::Drawing::Size(517, 19);
            this->textBox8->TabIndex = 17;
            this->textBox8->Text = L"Вот и ответ! Результаты и расчеты ищи в файле Decision.doc\r\n\r\n\r\n";
            this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->textBox8->Visible = false;
            // 
            // textBox9
            // 
            this->textBox9->BackColor = System::Drawing::SystemColors::ControlLight;
            this->textBox9->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->textBox9->Enabled = false;
            this->textBox9->Font = (gcnew System::Drawing::Font(L"Elephant", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox9->Location = System::Drawing::Point(140, 195);
            this->textBox9->Name = L"textBox9";
            this->textBox9->Size = System::Drawing::Size(267, 35);
            this->textBox9->TabIndex = 18;
            this->textBox9->Text = L"До новых встреч!";
            this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->textBox9->Visible = false;
            // 
            // textBox10
            // 
            this->textBox10->BackColor = System::Drawing::SystemColors::ControlLight;
            this->textBox10->Enabled = false;
            this->textBox10->Location = System::Drawing::Point(106, 122);
            this->textBox10->Name = L"textBox10";
            this->textBox10->Size = System::Drawing::Size(341, 24);
            this->textBox10->TabIndex = 19;
            this->textBox10->Visible = false;
            // 
            // textBox11
            // 
            this->textBox11->BackColor = System::Drawing::SystemColors::ControlLight;
            this->textBox11->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->textBox11->Font = (gcnew System::Drawing::Font(L"Elephant", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox11->Location = System::Drawing::Point(182, 39);
            this->textBox11->Name = L"textBox11";
            this->textBox11->Size = System::Drawing::Size(157, 25);
            this->textBox11->TabIndex = 20;
            this->textBox11->Text = L"Привет!";
            this->textBox11->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(9, 17);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::SystemColors::ControlLight;
            this->ClientSize = System::Drawing::Size(555, 362);
            this->Controls->Add(this->textBox11);
            this->Controls->Add(this->textBox10);
            this->Controls->Add(this->textBox9);
            this->Controls->Add(this->textBox8);
            this->Controls->Add(this->textBox7);
            this->Controls->Add(this->textBox6);
            this->Controls->Add(this->textBox5);
            this->Controls->Add(this->textBox4);
            this->Controls->Add(this->textBox3);
            this->Controls->Add(this->button2);
            this->Controls->Add(this->textBox2);
            this->Controls->Add(this->textBox1);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->numericUpDown2);
            this->Controls->Add(this->numericUpDown1);
            this->Controls->Add(this->dataGridView1);
            this->Font = (gcnew System::Drawing::Font(L"Elephant", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->ForeColor = System::Drawing::Color::Black;
            this->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
            this->Name = L"MyForm";
            this->Text = L"Задача распределения инвестиций";
            this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
    {
        SizeN = Convert::ToInt16(numericUpDown1->Value);
        SizeM = Convert::ToInt16(numericUpDown2->Value);
        numericUpDown1->Enabled = false;
        numericUpDown2->Enabled = false;
        numericUpDown1->Visible = false;
        numericUpDown2->Visible = false;
        textBox1->Visible = false;
        textBox2->Visible = false;
        dataGridView1->Visible = true;
        dataGridView1->RowCount = SizeN;
        dataGridView1->ColumnCount = SizeM + 1;
        dataGridView1->Columns[0]->HeaderCell->Value = "Xi";
        for (int i = 1; i < SizeM + 1; i++)
        {
            dataGridView1->Columns[i]->HeaderCell->Value = "d" + Convert::ToString(i);
        }
        button1->Visible = false;
        button1->Enabled = false;
        button2->Visible = true;
        button2->Enabled = true;
        textBox3->Visible = false;
        textBox4->Visible = false;
        textBox11->Visible = false;
        textBox5->Visible = true;
        textBox6->Visible = true;
        textBox7->Visible = true;
    }
    private: System::Void dataGridView1_Click(System::Object^  sender, System::EventArgs^  e)
    {

    }
    private: System::Void numericUpDown1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
    }
    private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
    }
    private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
    }
    private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
    }
    private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)
    {
            dataGridView1->Visible = false;
            dataGridView1->Enabled = false;
            textBox5->Visible = false;
            textBox6->Visible = false;
            textBox7->Visible = false;
            button2->Visible = false;
            button2->Enabled = false;
            textBox8->Visible = true;
            textBox9->Visible = true;
            textBox10->Visible = true;
            ResourceAllocTask task(SizeN, SizeM);
            for (int k = 0; k < SizeN; k++)
            {
                 task.Invest[k] = Convert::ToInt16(dataGridView1->Rows[k]->Cells[0]->Value);
            }
            for (int i = 1; i < SizeM + 1; i++)
            {
                 for (int j = 0; j < SizeN; j++)
                 {
                    task.Profit[i - 1][j] = Convert::ToInt16(dataGridView1->Rows[j]->Cells[i]->Value);
                 }
            }
            task.BellStep();
            task.SaveInFile("Decision.doc");
            textBox10->Text = Convert::ToString(task.GetAnswer());
 }

private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void richTextBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox7_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
