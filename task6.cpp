#include <iostream>
using namespace std;
main()
{
    int n;
    int number[3];
    for (int count =0; count < 3; count++)
    {
        cout << "Enter number of array:";
        cin >> number[count];
    }
    cout << "Enter number of times even-odd transformation needs to be performed:";
    cin >> n;
    for(int x=0; x<n; x++)
    {
    for(int idx =0; idx<3; idx++)
    {
        if(number[idx]%2 ==0)
        {
            number[idx] = number[idx]-2;
        }
        else
        {
            number[idx]= number[idx]+2;
        }
    }
    }
    cout <<"{";
    cout << number[0];
    for(int x =1; x<3; x++)
    {
        cout << ",";
        cout << number[x];
    }
    cout << "}";
}
