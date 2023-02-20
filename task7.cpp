#include <iostream>
using namespace std;
main()
{
    string s1;
    string s2;
    cout << "Enter string one:";
    getline(cin,s1);
    cout << "Enter string two:";
    getline(cin,s2);
    int count=0;
    for(int x =0; x < s1.length(); x++)
    {
        for(int y=0; y <s2.length(); y++)
        {
            if(s1[x]==s2[y])
            {
              count++;
              s2[y]=' ';
              break;
            }         
        }
        
    }
    cout << count;

}