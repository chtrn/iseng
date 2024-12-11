#include <iostream>
#include <iomanip>
using namespace std;

void DataGame(string*& name, int*& stock, int*& prize, int& data)
{
    system("cls");
    int newData;
    cout << "Masukkan jumlah data : "; 
    cin >> newData;
    string* newNama = new string[data + newData];
    int* newStok = new int[data + newData];
    int* newHarga = new int[data + newData];
    for (int i = 0; i < data; i++)
    {
        newNama[i] = name[i];
        newStok[i] = stock[i];
        newHarga[i] = prize[i];
    }
    delete[] name;
    delete[] stock;
    delete[] prize;
    data += newData;
    for (int i = data - newData; i < data; i++)
    {
        cout << "DATA GAME #" << (i + 1) << endl;
        cout << "Nama game  : "; cin.ignore(); getline(cin, newNama[i]);
        cout << "Stok game  : "; cin >> newStok[i];
        cout << "Harga game : Rp. "; cin >> newHarga[i];
    }
    name = newNama;
    stock = newStok;
    prize = newHarga;
}

void game(string* name, int* stock, int* prize, int data)
{
    for (int i = 0; i < data; i++)
    {
        cout << setfill('-') << setw(7) << "" << " Game ke" << " " << (i + 1) << setw(7) << "" << endl;
        cout << setfill('-') << setw(24) << "" << endl;
        cout << "Nama game  : " << name[i] << endl;
        cout << "Stok game  : " << stock[i] << endl;
        cout << "Harga game : Rp. " << prize[i] << endl << endl;
    }
    cout << "[game data has been added]\n\n";
}

void TampilanGame(string* name, int* stock, int* prize, int data)
{
    system("cls");
    int totalHarga = 0;
    cout << "||" << setfill(' ') << setw(12) << "DATA GAME" << setw(3) << "" << "||" << endl << endl;
    cout << left
         << setw(4) << "No" 
         << setw(20) << "Nama Game" 
         << setw(25) << "Harga Game (Rupiah)" 
         << setw(15) << "Jumlah Stok" 
         << endl;
    for (int i = 0; i < data; i++)
    {
        int total = stock[i] * prize[i];
        totalHarga += total;
        cout << left
             << setw(4) << (i + 1)  
             << setw(20) << name[i]  
             << "Rp. " << setw(21) << prize[i] << ""
             << setfill(' ') << setw(20) << stock[i]
             << endl;
    }
    cout << "\nTotal Harga : " << totalHarga << endl;
}

int main()
{   
    system("cls");
    int data = 0, menu1;
    string* name = 0;
    int* stock = 0;
    int* prize = 0;
    char choice, menu, exit;
    do {
        cout << "||" << setfill(' ') << setw(22) << "MENU INPUT DATA GAME" << setw(3) << "||" << "" << endl;
        cout << "1. Input Game Data\n";
        cout << "2. View Game Data\n";
        cout << "3. Exit\n";
        cout << "Pilih menu : "; cin >> menu1;
        switch (menu1)
        {
        case 1 : 
            DataGame(name, stock, prize, data);
            cout << "Apakah data sudah benar ? : "; cin >> choice;
            if (choice == 'y'){
            game(name, stock, prize, data);
            cout << "\nBack to main menu ? (y/n) : "; cin >> menu;
        break;
        case 2 : 
            if (data == 0) {
                cout << "Data is empty please input the data\n";
            } else {
                TampilanGame(name, stock, prize, data);
            }
            cout << "\nBack to main menu ? (y/n) : "; cin >> menu;
        break;
        case 3 : 
            cout << setfill('=') << setw(14) << "" << endl;
            cout << "|" << setfill(' ') << setw(9) << "THANKS" << setw(5) << "|\n";
            cout << setfill('=') << setw(14) << "" << endl;
        break;
        default:
        break;
        }
        } while (menu == 'y' || menu == 'Y');
    delete[] name;
    delete[] stock;
    delete[] prize;
    return 0;
} while (menu1 > 3);
}




