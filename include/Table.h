#pragma once

struct Trio {
    int surplus; //������� ��������� 
    int OptControl; // ����������� ����������
    int MaxFunValue;  //������������ �������� ������� ��� ������� ���������
};

class Table
{
private:
    int size;
    int GetSize() { return size; }

public:   
    Table();
    Table(int _N);
  //  ~Table();
    Trio* OpTab;
};
