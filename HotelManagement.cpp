#include<iostream>
using namespace std;

int main(){
    int quant;
    int choice;
    // Quanity
    int Qrooms = 0, Qpasta = 0, Qburger = 0, Qnoodles = 0, Qshake = 0, Qchicken = 0;
    //food items sold
    int Srooms = 0, Spasta = 0, Sburger = 0, Snoodles = 0, Sshake = 0, Schicken = 0;
    //Total price of items
    int Total_rooms = 0, Total_pasta = 0, Total_burger = 0, Total_noodles = 0, Total_shake = 0, Total_chicken = 0;

    cout << endl << "\tQuantity of items we have";
    cout << endl << "Rooms available : ";
    cin >> Qrooms;
    cout << endl << "Quantity of pasta : ";
    cin >> Qpasta;
    cout << endl << "Quantity of burger : ";
    cin >> Qburger;
    cout << endl << "Quantity of noodles : ";
    cin >> Qnoodles;
    cout << endl << "Quantity of shake : ";
    cin >> Qshake;
    cout << endl << "Quantity of chicken-roll : ";
    cin >> Qchicken;

    m:

    cout << endl << "\n\t\t\t Please select from the menu options ";
    cout << endl << endl << "1)  Rooms";
    cout << endl << "2)  Pasta";
    cout << endl << "3)  Burger";
    cout << endl << "4)  Noodles";
    cout << endl << "5)  Shake";
    cout << endl << "6)  Chicken-roll";
    cout << endl << "7)  Information regarding sales and collection ";
    cout << endl << "8)  Exit";

    cout << "\n\n Please enter your choice : ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout <<  "\n\nEnter the number of rooms you want : ";
        cin >> quant;
        if(Qrooms - Srooms >= quant){
            Srooms = Srooms + quant;
            Total_rooms = Total_rooms + quant * 1200;
            cout << "\n\n\t\t" << quant << " rooms have been alloted to you";
        }
        else {
            cout << "\n\tOnly " << Qrooms - Srooms << " rooms are available in hotel";
        }
        break;
    case 2:
        cout <<  "\n\nEnter Pasta quantity : ";
        cin >> quant;
        if(Qpasta - Spasta >= quant){
            Spasta = Spasta + quant;
            Total_pasta = Total_pasta + quant * 250;
            cout << "\n\n\t\t\t" << quant << " pasta are ordered";
        }
        else {
            cout << "\n\t\t\tOnly " << Qpasta - Spasta << " pasta are available.";
        }
        break;
    case 3:
        cout <<  "\n\nEnter Burger quantity : ";
        cin >> quant;
        if(Qburger - Sburger >= quant){
            Sburger = Sburger + quant;
            Total_burger = Total_burger + quant * 120;
            cout << "\n\n\t\t\t" << quant << " burger are ordered";
        }
        else {
            cout << "\n\t\t\tOnly " << Qburger - Sburger << " burger are available.";
        }
        break;
    case 4:
        cout <<  "\n\nEnter Noodles quantity : ";
        cin >> quant;
        if(Qnoodles - Snoodles >= quant){
            Snoodles = Snoodles + quant;
            Total_noodles = Total_noodles + quant * 250;
            cout << "\n\n\t\t\t" << quant << " noodles are ordered";
        }
        else {
            cout << "\n\t\t\tOnly " << Qnoodles - Snoodles << " noodles are available.";
        }
        break;
    case 5:
        cout <<  "\n\nEnter Shake quantity : ";
        cin >> quant;
        if(Qshake - Sshake >= quant){
            Qshake = Sshake + quant;
            Total_shake = Total_shake + quant * 250;
            cout << "\n\n\t\t\t" << quant << " shake are ordered";
        }
        else {
            cout << "\n\t\t\tOnly " << Qshake - Sshake << " shake are available.";
        }
        break;
    case 6: 
        cout <<  "\n\nEnter Chicken-roll quantity : ";
        cin >> quant;
        if(Qchicken - Schicken >= quant){
            Schicken = Schicken + quant;
            Total_chicken = Total_chicken + quant * 300;
            cout << "\n\n\t\t\t" << quant << " chicken-roll are ordered";
        }
        else {
            cout << "\n\t\t\tOnly " << Qchicken - Schicken << " chicken-roll are available.";
        }
        break;
    case 7: 
        cout << "\n\t\t\tDetails of sales and collection ";
        cout << "\n\nNumber of rooms we had : " << Qrooms;
        cout << "\nNumber of rooms we giving for rent " << Srooms;
        cout << "\nNumber of rooms available : " << Qrooms - Srooms;
        cout << "\nTotal rooms collection for the day : " << Total_rooms;

        cout << "\n\nNumber of pasta we had : " << Qpasta;
        cout << "\nNumber of pasta we giving for rent " << Spasta;
        cout << "\nNumber of pasta available : " << Qpasta - Spasta;
        cout << "\nTotal pasta collection for the day : " << Total_pasta;

        cout << "\n\nNumber of burger we had : " << Qburger;
        cout << "\nNumber of burger we giving for rent " << Sburger;
        cout << "\nNumber of burger available : " << Qburger - Sburger;
        cout << "\nTotal burger collection for the day : " << Total_burger;

        cout << "\n\nNumber of noodles we had : " << Qnoodles;
        cout << "\nNumber of noodles we giving for rent " << Snoodles;
        cout << "\nNumber of noodles available : " << Qnoodles - Snoodles;
        cout << "\nTotal noodles collection for the day : " << Total_noodles;

        cout << "\n\nNumber of shakes we had : " << Qshake;
        cout << "\nNumber of shakes we giving for rent " << Sshake;
        cout << "\nNumber of shakes available : " << Qshake - Sshake;
        cout << "\nTotal shakes collection for the day : " << Total_shake;

        cout << "\n\nNumber of chicken-roll we had : " << Qchicken;
        cout << "\nNumber of chicken-roll we giving for rent " << Schicken;
        cout << "\nNumber of chicken-roll available : " << Qchicken - Schicken;
        cout << "\nTotal chicken-roll collection for the day : " << Total_chicken;  
        break;

    case 8:
        exit(0);      

    default:
        cout << "\nInvalid input!";
        break;
    }
    goto m;


}