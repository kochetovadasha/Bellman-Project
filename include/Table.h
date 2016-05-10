#pragma once

struct Trio {
    int surplus; //текущее состояние 
    int OptControl; // оптимальное управление
    int MaxFunValue;  //Максимальное значение функции для данного состояния
};

class Table
{
private:
   int sizeN;
    int GetN() { return sizeN; }

public:
    Table(int _N);
    ~Table();
    Trio* OpTab;
};
