#include "Table.h"

Table::Table(int _N)
{
    OpTab = new Trio[_N];
    for (int i = 0; i < _N; i++)
    {
        OpTab[i].surplus = 0;
        OpTab[i].OptControl = 0;
        OpTab[i].MaxFunValue = 0;
    }
}

Table::~Table()
{
    delete[] OpTab;
}