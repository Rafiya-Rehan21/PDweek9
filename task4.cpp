#include <iostream>
using namespace std;
main()
{
    int size;
    bool isFound =false;
    cout << "Enter size of array:";
    cin >> size;
    int number[size];
    for(int count = 0 ; count < size; count++)
    {
        cout << "Enter number:";
        cin >> number[count];
    }
    for(int x =0; x<size; x++)
    {
    while(number[x]!=0)
    {
        int num=0;
        num= number[x]%10;
        if(number[x]==7 || num==7)
        {
            isFound = true;
        }
        number[x]=number[x]/10;
        
    }
    }
    if(isFound==true)
    {
        cout << "BOOM!";
    }
    else
    {
        cout << "There is no 7 in array!";
    }
}

    