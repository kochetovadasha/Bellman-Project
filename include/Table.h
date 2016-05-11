#pragma once

struct Trio {
    int surplus; //текущее состояние 
    int OptControl; // оптимальное управление
    int MaxFunValue;  //Максимальное значение функции для данного состояния
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
