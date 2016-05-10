#pragma once

#include "Table.h"
#include <algorithm>
#include <iostream>

using namespace std;

class ResourceAllocTask
{
public:
    int * Invest;
    int ** Profit;
    Table * S;
    ResourceAllocTask(int n, int m);
    ~ResourceAllocTask();
    int operator[] (int i) const { return Invest[i]; }
    int* operator[](int elem)
    {
        return Profit[elem];
    }
    int GetSizeN() { return SizeN; }
    int GetSizeM() { return SizeM; }
    void BellStep();
    int sur(int i, int j) { return S[i].OpTab[j].surplus; }
    int optcont(int i, int j) { return S[i].OpTab[j].OptControl; }
    int maxfun(int i, int j) { return S[i].OpTab[j].MaxFunValue; }
    int NextCondition(int i, int j);
    int MaxValueFun(int i, int j);
    int ElemPos(int value, int *arr, int size);
    void Print(int i);
    void PrintInvest();
    void PrintProfit();

private:
    int X_k;
    int U;
    int SizeN, SizeM;
    void CreateS1();
};
