#include <iostream>
using namespace std;
float calculatePrice(string fruit[], int price[]);
main()
{
    string fruit[4] = {"peach", "apple", "guava","watermelon"};
    int price[4] = {60,70,40,30};
    float product;
    product =calculatePrice(fruit, price);
    cout << "Total bill is:" << product << endl;

}
float calculatePrice(string fruit[], int price[])
{
    string name;
    float kgs=0;
    cout << "Enter name of fruit:";
    cin >> name;
    cout << "Enter quantity of fruit:";
    cin >> kgs;
    float product=0;
    for(int idx =0; idx < 4; idx++)
    {
        if(fruit[idx]== name)
        {
          product =price[idx]*kgs;
          break;
        }
        else
        {
            cout << "No product found!" << endl;
            break;
        }
    }
    return product;
}