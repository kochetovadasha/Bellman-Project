#include "ResourceAllocTask.h"


ResourceAllocTask::ResourceAllocTask(int _N, int _M)
{
    SizeN = _N;
    SizeM = _M;
    Invest = new int[SizeN];
    Profit = new int*[SizeM];
    for (int i = 0; i < SizeM; i++)
        Profit[i] = new int[SizeN];
    for (int j = 0; j < SizeM; j++)
    {
        S[j] = Table(SizeN);
    }
}

ResourceAllocTask::~ResourceAllocTask()
{
    delete[] Invest;
    for (int j = 0; j < SizeM; j++)
    {
        S[j].~Table();
    }
    for (int i = 0; i < SizeM; i++)
    {
        delete Profit[i];
    }
    delete[] Profit;
}

void ResourceAllocTask::BellStep()
{
    CreateS1();
    for (int i = 1; i<SizeM;i++)
    {
        for (int j = SizeN-1; j > -1; j--)
        {
            S[i].OpTab[j].surplus = Invest[j];
            S[i].OpTab[j].MaxFunValue = MaxValueFun(i,j);
            S[i].OpTab[j].OptControl = U;
        }
    }
}

void ResourceAllocTask::Print(int i)
{
    if (i < SizeM - 1)
    {
        for (int j = 0; j < SizeN; j++)
        {
            cout << "S" << i;
            cout << endl;
            cout << sur(i, j) << "-surplus, ";
            cout << maxfun(i, j) << "-maxfun, ";
            cout << "U*" << j << " = "<< optcont(i, j);
            cout << endl;
        }
    }
    if (i == SizeM - 1)
    {
        cout << "S" << i;
        cout << endl;
        cout << "Max Value of Fun = " << maxfun(i, SizeN-1)<< ", ";
        cout << "U*" << SizeM-1 <<" = "<< optcont(i, SizeN-1);
        cout << endl;
    }
}

int ResourceAllocTask::MaxValueFun(int i, int j)
{
    int size = j + 1;
    int x_k = sur(i, j);
    int * fun = new int[size];
    int * u = new int [size];
    for (int k = 0; k < size; k++)
    {
        fun[k] = Profit[SizeM-1-i][k] + maxfun(i - 1, ElemPos(sur(i,j)-Invest[k],Invest,SizeN));
        u[k] = Invest[k];
    }
    int maxvalue = *max_element(fun, fun + size);
    U = u[ElemPos(maxvalue, fun, size)];
    return maxvalue;
}

int ResourceAllocTask::ElemPos(int value, int* arr, int size)
{
    int pos;
    for (int i = 0; i < size; i++)
    {
        if (value == arr[i])
        {
            pos = i;
            break;
        }
    }
    return pos;
}

void ResourceAllocTask::PrintInvest()
{
    for (int i = 0; i < SizeN; i++)
    {
        cout << Invest[i] << " ";
    }
    cout << endl;
}

void ResourceAllocTask::PrintProfit()
{
    for (int i = 0; i < SizeM; i++)
    {
        for (int j = 0; j < SizeN; j++)
        {
            cout << Profit[i][j] << "  ";
        }
        cout << endl;
    }
}

void ResourceAllocTask::CreateS1()
{
    for (int i = 0; i < SizeN; i++){
        S[0].OpTab[i].surplus = Invest[i];
        S[0].OpTab[i].MaxFunValue = Profit[SizeM-1][i];
        S[0].OpTab[i].OptControl = Invest[i];
    }
}
