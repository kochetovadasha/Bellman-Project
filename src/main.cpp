#include "ResourceAllocTask.h"

int main()
{
    ResourceAllocTask task(7,4);
    cout << "Enter Invest" << endl;
    for (int i = 0; i < 7; i++)
    {
        cin >> task.Invest[i];
    }
    cout << "Enter Profit" << endl;
    for (int j = 0; j < 4; j++)
    {
        for (int k = 0; k < 7; k++)
        {
            cin >> task.Profit[j][k];
        }
    }
    task.PrintInvest();
    cout << endl;
    task.PrintProfit();
    cout << endl;
    task.BellStep();
    for (int i = 0; i < 4; i++)
    {
        cout << endl;
        task.Print(i);
    }
    return 0;
}