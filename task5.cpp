#include <iostream>
using namespace std;
bool toCheck(string check[]);
main()
{
    string check[4];
    bool flag;
    flag = toCheck(check);
    cout << flag;

}
bool toCheck(string check[])
{
    string same;
    string same1;
    string same2;
    string same3;
    bool flag = false;
    for(int count =0; count <4; count ++)
    {
        cout << "Enter any string:";
        cin >> check[count];
    }
    same = check[0];
    same1=check[1];
    same2=check[2];
    same3=check[3];
    for(int idx =1; idx <=4; idx++)
    {
        if(check[idx]==same && check[idx]==same1 && check[idx]==same2 && check[idx]==same3)
        {
            flag = true;
        }
    }
    
    if(flag == true)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    return flag;
}
