#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "Enter total colors:";
    cin >> size;
    string color[size];
    int count=0;
    int square;
    float time=0;
    for(int idx= 0; idx <size; idx++)
    {
        cout << "Enter color:";
        cin >> color[idx];
    }
    for(int x =0; x < size-1 ; x++)
    {
        if(color[x] != color[x+1])
        {
            count =count+1;
        }
    }
    square =size*2;
    time=count +square;
    cout << "The total time is:" << time << " seconds";

}