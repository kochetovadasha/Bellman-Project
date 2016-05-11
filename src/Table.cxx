#include "TTable.h"

TTable::TTable()
{
    size = 0;
}

TTable::TTable(int _N)
{
    size = _N;
    OpTab = new Trio[size];
    for (int i = 0; i < size; i++)
    {
        OpTab[i].surplus = 0;
        OpTab[i].OptControl = 0;
        OpTab[i].MaxFunValue = 0;
    }
}

/*Table::~Table()
{
    cout << "in destr destr table" << endl;
    delete[] OpTab;
    cout << "delete OpTab" << endl;
    cout << endl;
}*/