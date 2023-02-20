#include <iostream>
using namespace std;
string EvenorOdd(string name);
main()
{
    string name;
    cout << "Enter any string:";
    getline(cin,name);
    string flag;
    flag= EvenorOdd(name);
    cout << flag;
}
string EvenorOdd(string name)
{
    string flag;
    int idx =0;
    int counter = name.length();
    while(name[idx] !='\0')
    {
        idx++;
    }
    if(idx % 2 ==0)
    {
        cout << "The length is even!";
    }
    else
    {
        cout << "The length is odd!";
    }  
    return flag;
}
