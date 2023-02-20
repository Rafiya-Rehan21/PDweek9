#include <iostream>
using namespace std;
float discount(string movies[5], int price[5]);
main()
{
    string movies[5]={"Gladiator", "StarWars", "Terminator", "TakingLives","TombRider"};
    int price[5]= {500,500,500,500,500};
    float amount;
    amount =discount(movies, price);
    cout << "The total price is:" << amount;

}
float discount(string movies[5], int price[5])
{
    bool flag = false;
    string movieName;
    float disPrice=0;
    float amount=0;
    cout << "Enter name of movie:";
    cin >> movieName;
    for(int idx =0; idx< 5; idx++)
    {
        if(movies[idx]==movieName)
        {
            flag = true;
            if(idx %2 !=0)
            {
                disPrice= 0.05 *500;
                amount = 500-disPrice;
                break;
            }
            else
            {
                disPrice = 0.01*500;
                amount =500-disPrice;
                break;
            }
        }
    }
    if(flag == false)
        {
           cout << "No movie found!";
        }
    return amount;
}
