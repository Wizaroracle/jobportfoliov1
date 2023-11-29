#include <iostream>
using namespace std;

int main()
{

    int quant;
    int choice;
    // Quantity
    int Qrooms = 0, Qpasta = 0, Qburger = 0, Qnoodles = 0, Qshake = 0, Qchicken = 0;
    // Food items sold
    int Srooms = 0, Spasta = 0, Sburger = 0, Snoodles = 0, Sshake = 0, Schicken = 0;
    // Total price of items
    int Total_rooms = 0, Total_pasta = 0, Total_burger = 0, Total_noodles = 0, Total_shake = 0, Total_chicken = 0;

    cout << "\n\t Quantity of items we have: ";
    cout << "\n Rooms available: ";
    cin >> Qrooms;
    cout << "\n Quantity of pasta :";
    cin >> Qpasta;
    cout << "\n Quantity of burger :";
    cin >> Qburger;
    cout << "\n Quantity of noodles :";
    cin >> Qnoodles;
    cout << "\n Quantity of shake :";
    cin >> Qshake;
    cout << "\n Quantity of Chiecken-roll :";
    cin >> Qchicken;

m:
    cout << "\n\t\t\t Please Select from the Menu: ";
    cout << "\n\n1) Rooms ";
    cout << "\n\n2) Pasta ";
    cout << "\n\n3) Burger ";
    cout << "\n\n4) Noodles";
    cout << "\n\n5) Shake ";
    cout << "\n\n6) Chicken-roll ";
    cout << "\n\n7) Information regarding sales and collection ";
    cout << "\n\n8) Exit";

    cout << "\n\n Please Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "\n\n Enter the number of rooms you want:";
        cin >> quant;
        if (Qrooms - Srooms >= quant)
        {
            Srooms = Srooms + quant;

            Total_rooms = Total_rooms + quant * 1200;
            cout << "\n\n\t\t" << quant << "rooms have been alloted to you ";
        }
        else
        {
            cout << "\n\tOnly " << Qrooms - Srooms << " Rooms remaining in hotel";
            break;
        }

        break;
    case 2:
        cout << "\n\n Enter the number of Pasta Quantity:";
        cin >> quant;
        if (Qpasta - Spasta >= quant)
        {
            Spasta = Spasta + quant;

            Total_pasta = Total_pasta + quant * 250;
            cout << "\n\n\t\t" << quant << " Succesfully ordered! ";
        }
        else
        {
            cout << "\n\tOnly " << Qpasta - Spasta << " Pasta remaining in menu";
            break;
        }

        break;
    case 3:
        cout << "\n\n Enter the number of Burger Quantity:";
        cin >> quant;
        if (Qburger - Sburger >= quant)
        {
            Sburger = Sburger + quant;

            Total_burger = Total_burger + quant * 250;
            cout << "\n\n\t\t" << quant << "  Succesfully ordered! ";
        }
        else
        {
            cout << "\n\tOnly " << Qburger - Sburger << " Burger remaining in menu";
            break;
        }

        break;
    case 4:
        cout << "\n\n Enter the number of Noodles Quantity:";
        cin >> quant;
        if (Qnoodles - Snoodles >= quant)
        {
            Snoodles = Snoodles + quant;

            Total_noodles = Total_noodles + quant * 250;
            cout << "\n\n\t\t" << quant << " Succesfully ordered! ";
        }
        else
        {
            cout << "\n\tOnly " << Qnoodles - Snoodles << " Noodles remaining in menu";
            break;
        }

        break;
    case 5:
        cout << "\n\n Enter the number of Shakes Quantity:";
        cin >> quant;
        if (Qshake - Sshake >= quant)
        {
            Sshake = Sshake + quant;

            Total_shake = Total_shake + quant * 250;
            cout << "\n\n\t\t" << quant << " Succesfully ordered! ";
        }
        else
        {
            cout << "\n\tOnly " << Qshake - Sshake << " Shake remaining in menu";
            break;
        }

        break;
    case 6:
        cout << "\n\n Enter the number of Chikec-roll Quantity:";
        cin >> quant;
        if (Qchicken - Schicken >= quant)
        {
            Schicken = Schicken + quant;

            Total_chicken = Total_chicken + quant * 250;
            cout << "\n\n\t\t" << quant << " Succesfully ordered! ";
        }
        else
        {
            cout << "\n\tOnly " << Qchicken - Schicken << " Chicken-roll remaining in menu";
            break;
        }
    case 7:

        cout << "\n\t\tDetails of sales and collection";
        cout << "\n\n Number of rooms we had: " << Qrooms;
        cout << "\n\n Number of rooms we have for rent " << Srooms;
        cout << "\n\n Remaining rooms: " << Qrooms - Srooms;
        cout << "\n\n Total rooms collection for the day : " << Total_rooms;

        cout << "\n\t\tDetails of sales and collection";
        cout << "\n\n Number of Pasta we had: " << Qpasta;
        cout << "\n\n Number of Pasta we have for rent " << Spasta;
        cout << "\n\n Remaining Pasta: " << Qpasta - Spasta;
        cout << "\n\n Total rooms collection for the day : " << Total_pasta;

        cout << "\n\t\tDetails of sales and collection";
        cout << "\n\n Number of Burger we had: " << Qburger;
        cout << "\n\n Number of Burger we have for rent " << Sburger;
        cout << "\n\n Remaining Burger: " << Qburger - Sburger;
        cout << "\n\n Total rooms collection for the day : " << Total_burger;

        cout << "\n\t\tDetails of sales and collection";
        cout << "\n\n Number of noodle we had: " << Qnoodles;
        cout << "\n\n Number of noodle we have for rent " << Snoodles;
        cout << "\n\n Remaining noodle: " << Qnoodles - Snoodles;
        cout << "\n\n Total rooms collection for the day : " << Total_noodles;

        cout << "\n\t\tDetails of sales and collection";
        cout << "\n\n Number of shake we had: " << Qshake;
        cout << "\n\n Number of shake we have for rent " << Sshake;
        cout << "\n\n Remaining shake: " << Qshake - Sshake;
        cout << "\n\n Total rooms collection for the day : " << Total_shake;

        cout << "\n\t\tDetails of sales and collection";
        cout << "\n\n Number of chicken we had: " << Qchicken;
        cout << "\n\n Number of chicken we have for rent " << Schicken;
        cout << "\n\n Remaining chicken: " << Qchicken - Schicken;
        cout << "\n\n Total rooms collection for the day : " << Total_chicken;
        break;
    case 8:
        exit(0);
    default:
        cout << "\n Please select the numbers mentioned above! ";
    }
    goto m;
}