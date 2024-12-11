#include <iostream>
#include <iomanip> //menggunakan library iomanip untuk setw dan sefill
using namespace std;

void jumlah(int &history) { //tampilan dan perhitungan penjumlahan
    int a = 0, b = 0;
    int result;
    cout << setfill('=') << setw(25) << "" << endl; 
    cout << "|" << setfill(' ') << setw(17) << "Penjumlahan" << setfill(' ') << setw(7) << "|" << endl;
    cout << setfill('=') << setw(25) << "" << endl;
    cout << "First number  : "; cin >> a; //memasukan angka pertama
    cout << "Second number : "; cin >> b; //memasukan angka kedua
    history = a + b; //history perhitungan 
    cout << "Result        : " << history << endl; //menampilkan hasil perhitungan
    cout << setfill('=') << setw(25) << "" << endl;
}
void kurang(int &history) { //tampilan dan perhitungan pengurangan
    int a = 0, b = 0;
    int result = 0;
    cout << setfill('=') << setw(25) << "" << endl; 
    cout << "|" << setfill(' ') << setw(17) << "Pengurangan" << setfill(' ') << setw(7) << "|" << endl;
    cout << setfill('=') << setw(25) << "" << endl;
    cout << "Number 1 : "; cin >> a; //masukan angka pertama
    cout << "Number 2 : "; cin >> b; //masukan angka kedua
    result = a - b; //rumus pengurangan
    history = result; 
    cout << "Result   : " << result << endl; //menamilkan hasil perhitungan
    cout << setfill('=') << setw(25) << "" << endl;
}
void kali(int* history) { //tampilan dan perhitungan perkalian
    int a = 0, b = 0;
    int result = 0;
    cout << setfill('=') << setw(25) << "" << endl; 
    cout << "|" << setfill(' ') << setw(16) << "Perkalian" << setfill(' ') << setw(8) << "|" << endl;
    cout << setfill('=') << setw(25) << "" << endl;
    cout << "First number  : "; cin >> a;
    cout << "Second number : "; cin >> b;
    result = a * b;
    *history = result; 
    cout << "Result        : " << result << endl;
    cout << setfill('=') << setw(25) << "" << endl;
}
void bagi(float* history1) { //tampilan dan perhitungan pembagian
    float a = 0, b = 0;
    float result = 0;
    cout << setfill('=') << setw(25) << "" << endl; 
    cout << "|" << setfill(' ') << setw(16) << "Pembagian" << setfill(' ') << setw(8) << "|" << endl;
    cout << setfill('=') << setw(25) << "" << endl;
    cout << "First number  : "; cin >> a;
    cout << "Second number : "; cin >> b;
    result = a / b;
    *history1 = result; 
    cout << "Result        : " << result << endl;
    cout << setfill('=') << setw(25) << "" << endl;
}
void konversi1(int history) { //tampilan dan perhitungan konversi +/-
    int a = 0;
    int result = 0;
    cout << setfill('=') << setw(24) << "" << endl; 
    cout << "|" << setfill(' ') << setw(18) << "Konversi +/-" << setfill(' ') << setw(5) << "|" << endl;
    cout << setfill('=') << setw(24) << "" << endl;
    cout << "Number : "; cin >> a;
    result = -a;
    history = result;
    cout << "Result : " << result << endl;
    cout << setfill('=') << setw(24) << "" << endl;
}
void konversi2(float& history1) { //tampilan dan perhitungan konversi %
    int a = 0, b = 0;
    float result = 0;
    cout << setfill('=') << setw(26) << "" << endl; 
    cout << "|" << setfill(' ') << setw(17) << "Konversi %" << setfill(' ') << setw(8) << "|" << endl;
    cout << setfill('=') << setw(26) << "" << endl;
    cout << "Number              : "; cin >> a;
    cout << "Percent (without %) : "; cin >> b;
    result = (b / 100.00) * a;
    history1 = result;
    cout << "Result              : " << result << endl;
    cout << setfill('=') << setw(26) << "" << endl;
}
void exit(){ //tampilan menu keluar
    cout << setfill('=') << setw(54) << "" << endl;
    cout << "Thanks for using this calculator have a nice day :D\n";
    cout << setfill('=') << setw(54) << "" << endl;
}
void menu(float &history1, int &history) {
    int choose = 0;
    char repeat;
    do {
        system ("cls");
        cout << setfill('=') << setw(26) << "" << endl; // tampilan menu
        cout << "|" << setfill(' ') << setw(17) << "Kalkulator" << setfill(' ') << setw(8) << "|" << endl;
        cout << setfill('=') << setw(26) << "" << endl;
        cout << "History : " << history + history1; //menampilkan history perhitungan
        cout << "\nMenu : \n";
        cout << "1. Penjumlahan\n";
        cout << "2. Pengurangan\n";
        cout << "3. Perkalian\n";
        cout << "4. Pembagian\n";
        cout << "5. Konversi +/-\n";
        cout << "6. Konversi %\n";
        cout << "0. Keluar\n";
        cout << setfill('=') << setw(25) << "" << endl;
        cout << "Choose (0-6) : ";
        cin >> choose;
        system ("cls");
        if (choose > 6) {
            cout << "Sorry your input is wrong please try again\n";
            continue; // jika input pilihan tidak sesuai menu akan kembali ke menu awal
        }
        switch (choose) {
            case 1 :
            jumlah(history);
            break;
            case 2 :
            kurang(history);
            break;
            case 3 :
            kali(&history);
            break;
            case 4 :
            bagi(&history1);
            break;
            case 5 :
            konversi1(history);
            break;
            case 6 :
            konversi2(history1);
            break;
            default:
            exit();
            return;
        }
        cout << "Back to menu? (y/n) : ";
        cin >> repeat;
    } while (repeat == 'y');
}

int main() {
    system("cls");
    string username;
    int pw;
    float history1; int history;
    do {
    cout << setfill('=') << setw(24) << "" << endl; 
    cout << setfill(' ') << "|" << setw(16) << "Login Akun" << setfill(' ') << setw(7) << "|" << endl;
    cout << setfill('=') << setw(24) << "" << endl;
    cout << "Username : "; // masukkan username
    cin >> username;
    cout << "Password : "; // masukkan password
    cin >> pw;
    if (username == "gifta" && pw == 123240183) {
        menu(history1, history); // jika username dan password benar menampilkan menu
    } else if (username == "gifta" && pw != 123240183) {
        cout << "Sorry your password is wrong please try again\n\n";
    } else if (username != "gifta" && pw == 123240183) {
        cout << "Soryy your username is wrong please try again\n\n";
    }
    } while (username != "gifta" || pw != 123240183); // terjadi perulangan jika salah memasukkan username dan password
    return 0;
}
