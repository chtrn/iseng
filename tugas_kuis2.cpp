#include <iostream>
using namespace std;

int main(){
    system ("cls");
    cout << "      +-----------------+\n";
    cout << "      | RESTORAN ORCHID |\n";
    cout << "      +-----------------+\n";

    int pilihan, porsi;
    float harga_makanan;
    char pesan_lagi;
    do {
    cout << "========= MENU MAKANAN ========\n";
    cout << "1. Nasi Goreng : Rp30.000/porsi\n";
    cout << "2. Ayam Bakar  : Rp45.000/porsi\n";
    cout << "3. Sate Ayam   : Rp50.000/porsi\n";
    cout << "4. Tidak Pesan Makanan\n";
    cout << "Pilih Makanan (1,2,3,4) : ";
    cin >> pilihan;
    switch (pilihan){
    case 1 :
        pilihan == 1;
        cout << "Berapa Porsi : ";
        cin >> porsi;
        harga_makanan = 30.000 * porsi;
        break;
    case 2 :
        pilihan == 2;
        cout << "Berapa Porsi : ";
        cin >> porsi;
        harga_makanan = 45.000 * porsi;
        break;
    case 3 :
        pilihan == 3;
        cout << "Berapa Porsi : ";
        cin >> porsi;
        harga_makanan = 50.000 * porsi;
        break;
    case 4 :
        pilihan == 4;
        harga_makanan = 0;
        break;
    default :
        pilihan > 4;
        cout << "Tidak Valid Silahkan Pilih Lagi\n\n";
        break;}
    cout << "Ingin Pesan Lagi (y/n) ? : ";
    cin >> pesan_lagi;
    if (pesan_lagi == 'y'){
        ++harga_makanan;
    }
    } while (pilihan > 4 || pesan_lagi == 'y');

    int pilihan2, porsi2;
    float harga_minuman;
    char pesan_lagi2;
    do {
    cout << "========= MENU MINUMAN =========\n";
    cout << "1. Es Teh Manis : Rp10.000/porsi\n";
    cout << "2. Jus Jeruk    : Rp15.000/porsi\n";
    cout << "3. Kopi         : Rp20.000/porsi\n";
    cout << "4. Tidak Pesan Minuman\n";
    cout << "Pilih Minuman (1,2,3,4) : ";
    cin >> pilihan2;
    switch (pilihan2){
    case 1 :
        pilihan2 == 1;
        cout << "Berapa Porsi : ";
        cin >> porsi2;
        harga_minuman = 10.000 * porsi2;
        break;
    case 2 :
        pilihan2 == 2;
        cout << "Berapa Porsi : ";
        cin >> porsi2;
        harga_minuman = 15.000 * porsi2;
        break;
    case 3 :
        pilihan2 == 3;
        cout << "Berapa Porsi : ";
        cin >> porsi2;
        harga_minuman = 20.000 * porsi2;
        break;
    case 4 :
        pilihan2 == 4;
        harga_minuman == 0; break;
    default :
        pilihan2 > 4;
        cout << "Tidak Valid Silahkan Pilih Lagi\n\n";
        break;}
    cout << "Ingin Pesan Lagi (y/n) ? : ";
    cin >> pesan_lagi2;
    if (pesan_lagi2 == 'y'){
        ++harga_minuman;
    }
    } while (pilihan2 > 4 || pesan_lagi2 == 'y');

    float total_pembelian;
    total_pembelian = harga_makanan + harga_minuman;
    float diskon;
    float pajak;
    float total_pembayaran;
    if (total_pembelian > 100.000){
        diskon = total_pembelian - (total_pembelian * 0.1);
        pajak = diskon + (diskon * 0.1);
    } else if (total_pembelian > 200.000){
        diskon = total_pembelian - (total_pembelian * 0.15);
        pajak = diskon + (diskon * 0.1);
    } else {
        pajak = total_pembelian + (total_pembelian * 0.1);
    }

    //total semua
    total_pembayaran = diskon + pajak;
    cout << "=================================\n";
    cout << "Item                             \n";
    cout << "---------------------------------\n";
    cout << "Makanan       : Rp" << harga_makanan << endl;
    cout << "Minuman       : Rp" << harga_minuman << endl;
    cout << "Diskon        : Rp" << diskon << endl;
    cout << "PPN (10%)     : Rp" << pajak << endl;
    cout << "---------------------------------" << endl;
    cout << "Total Pembayaran : Rp" << total_pembayaran << endl;
    cout << "=================================";

return 0;
}