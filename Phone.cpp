
#include "Xiaomi.cpp"
#include <iostream>
using namespace std;


void OppoPhone();
void OnePlus();
Xiaomi* XiamiBrand;
int main()
{
    string brand;
    std::string Phones[4] = {"XIAOMI", "OPPO", "OnePlus"};
    cout << "Which brand do you want to buy?\n";
    std::cout << "Phones : " << "1."<<Phones[0] <<"  "<< "2."<<Phones[1] << "  " << "3."<< Phones[2] << "  "<< endl;
    std::cin >> brand;
    if (brand == "XIAOMI" or brand =="xiaomi" or brand =="1")
    {
      
        XiamiBrand->xiaomiphone();
    }
    else if (brand == "OPPO" or brand == "oppo" or brand == "2")
    {
        OppoPhone();
    }
    else if (brand == "OnePlus" or brand == "One Plus " or brand == "3")
    {
        OnePlus(); //123
    }
}

void OppoPhone()
{
    cout << "Oppo welcomes you......";
    cout << "Which model are you looking for ?\n";
    string Model[] = { "Oppo A31" , "Oppo F17" , "Oppo A53 ","Oppo A15" };
    cout << "Model : " << "1." << Model[0] << "  " << "2." << Model[1] << "  " << "3." << Model[2] << "  " << "4." << Model[3] << endl;
    string MODEL;
    cin >> MODEL;
    if (MODEL == "Oppo A31" or MODEL == "oppo A31" or MODEL == "1" or MODEL == "OPPO A31")
    {
        cout << "Great Choice!\n";
        cout << "Its Specs are 4GB RAM , 64 GB STORAGE , 4230 mAH Battery";

        cout << "Its Price is Rs.11,490\n";
        string coupon;
        cout << "Do you have a coupon ?\n";
        cin >> coupon;
        if (coupon == "Yes" or coupon == "Y" or coupon == "yes" or coupon == "y")
        {
            cout << " You get a 5% Discount \n";
            cout << "The total price is Rs.10,915 \n";
            cout << "Thank you for shopping\n";

        }
        else
        {
            cout << "Your Price is Rs.11,490\n";
        }
    }
    if (MODEL == "  Oppo F17" or MODEL == "oPPO F17" or MODEL == "2" or MODEL == "OPPO F17")
    {
        cout << "Great Choice!\n";
        cout << "Its Specs are 8GB RAM , 128 GB STORAGE , 4015 mAH Battery";

        cout << "Its Price is Rs.18,490\n";
        string coupon;
        cout << "Do you have a coupon ?\n";
        cin >> coupon;
        if (coupon == "Yes" or coupon == "Y" or coupon == "yes" or coupon == "y")
        {
            cout << " You get a 5% Discount \n";
            cout << "The total price is Rs.17,556 after discount \n";
            cout << "Thank you for shopping\n";

        }
        else {
            cout << "Your Price is Rs.18,490\n";
        }
    }
    if (MODEL == "OPPO A53" or MODEL == "oppo A53" or MODEL == "3" or MODEL == "Oppo A53")
    {
        cout << "Great Choice!\n";
        cout << "Its Specs are 4GB RAM , 64 GB STORAGE , 5000 mAH Battery";

        cout << "Its Price is Rs.12,989\n";
        string coupon;
        cout << "Do you have a coupon ?\n";
        cin >> coupon;
        if (coupon == "Yes" or coupon == "Y" or coupon == "yes" or coupon == "y")
        {
            cout << " You get a 5% Discount \n";
            cout << "The total price is Rs.12,340 after discount \n";
            cout << "Thank you for shopping\n";

        }
        else {
            cout << "Your Price is Rs.12,989\n";
            cout << "Thank you for Shopping \n";
        }
    }
    if (MODEL == "OPPO 15" or MODEL == "oppo A15" or MODEL == "4" or MODEL == "Oppo A15")
    {
        cout << "Great Choice!\n";
        cout << "Its Specs are 2GB RAM , 32 GB STORAGE , 5000 mAH Battery";

        cout << "Its Price is Rs.9,490\n";
        string coupon;
        cout << "Do you have a coupon ?\n";
        cin >> coupon;
        if (coupon == "Yes" or coupon == "Y" or coupon == "yes" or coupon == "y")
        {
            cout << " You get a 5% Discount \n";
            cout << "The total price is Rs.9,016 after discount \n";
            cout << "Thank you for shopping\n";

        }
        else {
            cout << "Your Price is Rs.9,490\n";
            cout << "Thank you for Shopping \n";
        }
    }
}

void OnePlus()
{
    cout << "OnePlus welcomes you......";
    cout << "Which model are you looking for ?\n";
    string Model[] = { "OnePlus 8T" , "OnePlus 8" , "OnePlus 7T ","OnePlus 7" };
    cout << "Model : " << "1." << Model[0] << "  " << "2." << Model[1] << "  " << "3." << Model[2] << "  " << "4." << Model[3] << endl;
    string MODEL;
    cin >> MODEL;
    if (MODEL == "OnePlus 8T" or MODEL == "OnePlus8T" or MODEL == "1" or MODEL == "oneplus 8T")
    {
        cout << "Great Choice!\n";
        cout << "Its Specs are 8GB RAM , 128 GB STORAGE , 4500 mAH Battery";

        cout << "Its Price is Rs.42,999\n";
        string coupon;
        cout << "Do you have a coupon ?\n";
        cin >> coupon;
        if (coupon == "Yes" or coupon == "Y" or coupon == "yes" or coupon == "y")
        {
            cout << " You get a 5% Discount \n";
            cout << "The total price is Rs.40,850\n";
            cout << "Thank you for shopping\n";

        }
        else
        {
            cout << "Your Price is Rs.42,999\n";
        }
    }
    if (MODEL == "OnePlus 8" or MODEL == "oneplus 8" or MODEL == "2" or MODEL == "OnePlus8")
    {
        cout << "Great Choice!\n";
        cout << "Its Specs are 8GB RAM , 128 GB STORAGE , 4300 mAH Battery";

        cout << "Its Price is Rs.41,999\n";
        string coupon;
        cout << "Do you have a coupon ?\n";
        cin >> coupon;
        if (coupon == "Yes" or coupon == "Y" or coupon == "yes" or coupon == "y")
        {
            cout << " You get a 5% Discount \n";
            cout << "The total price is Rs.39,999 after discount \n";
            cout << "Thank you for shopping\n";

        }
        else {
            cout << "Your Price is Rs.41,999\n";
        }
    }
    if (MODEL == "OnePlus 7T " or MODEL == "oneplus7t" or MODEL == "3" or MODEL == "oneplus 7t")
    {
        cout << "Great Choice!\n";
        cout << "Its Specs are 8GB RAM , 256 GB STORAGE , 3800 mAH Battery";

        cout << "Its Price is Rs.37,999\n";
        string coupon;
        cout << "Do you have a coupon ?\n";
        cin >> coupon;
        if (coupon == "Yes" or coupon == "Y" or coupon == "yes" or coupon == "y")
        {
            cout << " You get a 5% Discount \n";
            cout << "The total price is Rs.36,100 after discount \n";
            cout << "Thank you for shopping\n";

        }
        else {
            cout << "Your Price is Rs.37,999\n";
            cout << "Thank you for Shopping \n";
        }
    }
    if (MODEL == "OnePlus 7" or MODEL == "oneplus 7" or MODEL == "4" or MODEL == "Oneplus 7")
    {
        cout << "Great Choice!\n";
        cout << "Its Specs are 8GB RAM , 256 GB STORAGE , 3000 mAH Battery";

        cout << "Its Price is Rs.29,999\n";
        string coupon;
        cout << "Do you have a coupon ?\n";
        cin >> coupon;
        if (coupon == "Yes" or coupon == "Y" or coupon == "yes" or coupon == "y")
        {
            cout << " You get a 5% Discount \n";
            cout << "The total price is Rs.28,500 after discount \n";
            cout << "Thank you for shopping\n";

        }
        else {
            cout << "Your Price is Rs.29,999\n";
            cout << "Thank you for Shopping \n";
        }
    }
}

void Samsung()
{
    cout << "OnePlus welcomes you......";
    cout << "Which model are you looking for ?\n";
    string Model[] = { "OnePlus 8T" , "OnePlus 8" , "OnePlus 7T ","OnePlus 7" };
    cout << "Model : " << "1." << Model[0] << "  " << "2." << Model[1] << "  " << "3." << Model[2] << "  " << "4." << Model[3] << endl;
    string MODEL;
    cin >> MODEL;
    if (MODEL == "OnePlus 8T" or MODEL == "OnePlus8T" or MODEL == "1" or MODEL == "oneplus 8T")
    {
        cout << "Great Choice!\n";
        cout << "Its Specs are 8GB RAM , 128 GB STORAGE , 4500 mAH Battery";

        cout << "Its Price is Rs.42,999\n";
        string coupon;
        cout << "Do you have a coupon ?\n";
        cin >> coupon;
        if (coupon == "Yes" or coupon == "Y" or coupon == "yes" or coupon == "y")
        {
            cout << " You get a 5% Discount \n";
            cout << "The total price is Rs.40,850\n";
            cout << "Thank you for shopping\n";

        }
        else
        {
            cout << "Your Price is Rs.42,999\n";
        }
    }
    if (MODEL == "OnePlus 8" or MODEL == "oneplus 8" or MODEL == "2" or MODEL == "OnePlus8")
    {
        cout << "Great Choice!\n";
        cout << "Its Specs are 8GB RAM , 128 GB STORAGE , 4300 mAH Battery";

        cout << "Its Price is Rs.41,999\n";
        string coupon;
        cout << "Do you have a coupon ?\n";
        cin >> coupon;
        if (coupon == "Yes" or coupon == "Y" or coupon == "yes" or coupon == "y")
        {
            cout << " You get a 5% Discount \n";
            cout << "The total price is Rs.39,999 after discount \n";
            cout << "Thank you for shopping\n";

        }
        else {
            cout << "Your Price is Rs.41,999\n";
        }
    }
    if (MODEL == "OnePlus 7T " or MODEL == "oneplus7t" or MODEL == "3" or MODEL == "oneplus 7t")
    {
        cout << "Great Choice!\n";
        cout << "Its Specs are 8GB RAM , 256 GB STORAGE , 3800 mAH Battery";

        cout << "Its Price is Rs.37,999\n";
        string coupon;
        cout << "Do you have a coupon ?\n";
        cin >> coupon;
        if (coupon == "Yes" or coupon == "Y" or coupon == "yes" or coupon == "y")
        {
            cout << " You get a 5% Discount \n";
            cout << "The total price is Rs.36,100 after discount \n";
            cout << "Thank you for shopping\n";

        }
        else {
            cout << "Your Price is Rs.37,999\n";
            cout << "Thank you for Shopping \n";
        }
    }
    if (MODEL == "OnePlus 7" or MODEL == "oneplus 7" or MODEL == "4" or MODEL == "Oneplus 7")
    {
        cout << "Great Choice!\n";
        cout << "Its Specs are 8GB RAM , 256 GB STORAGE , 3000 mAH Battery";

        cout << "Its Price is Rs.29,999\n";
        string coupon;
        cout << "Do you have a coupon ?\n";
        cin >> coupon;
        if (coupon == "Yes" or coupon == "Y" or coupon == "yes" or coupon == "y")
        {
            cout << " You get a 5% Discount \n";
            cout << "The total price is Rs.28,500 after discount \n";
            cout << "Thank you for shopping\n";

        }
        else {
            cout << "Your Price is Rs.29,999\n";
            cout << "Thank you for Shopping \n";
        }
    }
}