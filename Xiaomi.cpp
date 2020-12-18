#include "Xiaomi.h"
#include <iostream>
using namespace std;

void Xiaomi::xiaomiphone()
{
    cout << "Xiaomi welcomes you......";
    cout << "Which model are you looking for ?\n";
    string Model[] = { "Redmi 9" , "Mi A2" ,"Redmi 8A Dual", "Mi 10T " };
    cout << "Model : " << "1." << Model[0] << "  " << "2." << Model[1] << "  " << "3." << Model[2] << "  " << "4." << Model[3] << endl;
    string MODEL;
    cin >> MODEL;
    if (MODEL == "Redmi 9" or MODEL == "Redmi9" or MODEL == "1" or MODEL == "redmi9")
    {
        cout << "Great Choice!\n";
        cout << "Its Specs are 4GB RAM , 128 GB STORAGE , 5000 mAH Battery";

        cout << "Its Price is Rs.9999\n";
        string coupon;
        cout << "Do you have a coupon ?\n";
        cin >> coupon;
        if (coupon == "Yes" or coupon == "Y" or coupon == "yes" or coupon == "y")
        {
            cout << " You get a 5% Discount \n";
            cout << "The total price is Rs.9,499 \n";
            cout << "Thank you for shopping\n";

        }
        else
        {
            cout << "Your Price is Rs.9,999\n";
        }
    }
    if (MODEL == "Mi A2" or MODEL == "MiA2" or MODEL == "2" or MODEL == "mia2")
    {
        cout << "Great Choice!\n";
        cout << "Its Specs are 4GB RAM , 256 GB STORAGE , 4000 mAH Battery";

        cout << "Its Price is Rs.11,490\n";
        string coupon;
        cout << "Do you have a coupon ?\n";
        cin >> coupon;
        if (coupon == "Yes" or coupon == "Y" or coupon == "yes" or coupon == "y")
        {
            cout << " You get a 5% Discount \n";
            cout << "The total price is Rs.10,916 after discount \n";
            cout << "Thank you for shopping\n";

        }
        else {
            cout << "Your Price is Rs.11,490\n";
        }
    }
    if (MODEL == "Redmi 8A Dual" or MODEL == "redmi8Adual" or MODEL == "3" or MODEL == "REDMI 8A DUAL")
    {
        cout << "Great Choice!\n";
        cout << "Its Specs are 3GB RAM , 64 GB STORAGE , 5000 mAH Battery";

        cout << "Its Price is Rs.8,299\n";
        string coupon;
        cout << "Do you have a coupon ?\n";
        cin >> coupon;
        if (coupon == "Yes" or coupon == "Y" or coupon == "yes" or coupon == "y")
        {
            cout << " You get a 5% Discount \n";
            cout << "The total price is Rs.7,885 after discount \n";
            cout << "Thank you for shopping\n";

        }
        else {
            cout << "Your Price is Rs.8,299\n";
            cout << "Thank you for Shopping \n";
        }
    }
    if (MODEL == "Mi 10T" or MODEL == "MI10T" or MODEL == "mi10t" or MODEL == "4")
    {
        cout << "Great Choice!\n";
        cout << "Its Specs are GB RAM , 128 GB STORAGE , 5000 mAH Battery";

        cout << "Its Price is Rs.35,195\n";
        string coupon;
        cout << "Do you have a coupon ?\n";
        cin >> coupon;
        if (coupon == "Yes" or coupon == "Y" or coupon == "yes" or coupon == "y")
        {
            cout << " You get a 5% Discount \n";
            cout << "The total price is Rs.37,236 after discount \n";
            cout << "Thank you for shopping\n";

        }
        else {
            cout << "Your Price is Rs.35,195\n";
            cout << "Thank you for Shopping \n";
        }
    }
}

