#pragma once

#include "Table.h"
#include <algorithm>
#include <iostream>
#include <locale>

using namespace std;

class ResourceAllocTask
{
public:
    int * Invest;
    int ** Profit;
    Table * S;
    bool flag;    //консольное ли приложение

    ResourceAllocTask(int n, int m);
    ~ResourceAllocTask();

    int operator[] (int i) const { return Invest[i]; }
    int* operator[](int elem)  { return Profit[elem]; }

    int GetSizeN() { return SizeN; }
    int GetSizeM() { return SizeM; }

    void Print(int i);
    void PrintInvest();
    void PrintProfit();

    void main();

private:
    int X_k;
    int U;
    int SizeN, SizeM;

    void CreateS1();
    void BellStep();

    int sur(int i, int j) { return S[i].OpTab[j].surplus; }
    int optcont(int i, int j) { return S[i].OpTab[j].OptControl; }
    int maxfun(int i, int j) { return S[i].OpTab[j].MaxFunValue; }

    int MaxValueFun(int i, int j);
    int ElemPos(int value, int *arr, int size);
    void OrderManag();
};
