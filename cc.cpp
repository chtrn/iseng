#include <iostream>
#include <iomanip>
using namespace std;
int tanggal;
int bulan;
int tahun;
int tujuan;
int kursi;
string waktu;

void haritanggal()
{
   cout << "Tanggal Keberangkatan : ";
        cin >> tanggal;
        if(tanggal >= 1 && tanggal <= 31)
        {
            /* code */
        }
        else
        
        cout << "Bulan : ";
        cin >> bulan;
        if (bulan >= 1 && bulan <= 12 )
        {
            /* code */
        }
        else
        
        cout << "Tahun : ";
        cin >> tahun;
        if (tahun >=2024)
        {
            /* code */
        }

}

void giwangan()
{
    system("cls");
    int kursi, jam, tujuan;
    int harga1,harga2;
    int kelas;
    do
    {
        cout << setfill('=') << setw(25) << "" << endl; 
        cout << "|" << setfill(' ') << setw(20) << "Terminal Giwangan" << setw(4) << "|" << endl;
        cout << setfill('=') << setw(25) << "" << endl;
        cout << "Tujuan : \n"; 
        cout << "1. Tangerang\n";
        cout << "2. Jakarta\n";
        cout << "3. Bandung\n";
        cout << "4. Malang\n";
        cout << "5. Surabaya\n";
        cout << "Tujuan perjalanan : "; cin >> tujuan;
    } while (tujuan > 5);
    if (tujuan >= 1 && tujuan < 5)
    {
        haritanggal();
    }
    switch (tujuan)
    {
    case 1 : 
    cout << "Harga : Rp231.000/orang\n";
    do
    {
        cout << "Jam   :\n";
        cout << "1. 12.00\n";
        cout << "2. 16.30\n";
        cout << "Jumlah kursi : ";
        cin >> kursi;
        cout << "Jam : " ;
        cin >> jam;
        harga1 = 231000 * kursi;
        if (jam == 1)
        {
            waktu = "12.00";
        }
        else if (jam == 2)
        {
            waktu = "16.00";
        } else
        {
            cout << "Jam yang dipilih tidak ada";
        }
    } while (jam > 2);
    break;
    case 2 :
    do{
    cout << "Harga Executive: Rp250.000/orang\n ";
    cout << "Harga Suite Class: Rp410.000/orang\n";
    cout << "1 . 12.00\n";
    cout << "2 . 16.30\n";
    cout << "3 . 18.35\n";
    cout << "Pilih kelas\n1. Executive\n2.Suite Class\n pilih : ";cin>>kelas;
    cout << "Jumlah kursi : "; cin >> kursi;
    cout << "Jam : "; cin >> jam;
    if(kelas == 1){
        harga1 = 250000 * kursi;
    }
    else if(kelas == 2){
        harga2 = 410000 * kursi;
    }
    else{
        cout<<"Pilihan tidak ada";
    }
    if(jam == 1){
        waktu = "12.00";
    }
    else if(jam == 2){
        waktu = "16.30";
    }
    else if(jam == 3){
        waktu = "18.35";
    }
    else{
        cout << "Pilihan tidak tersedia";
    }
    }while(jam > 3);

    case 3:
    cout << "Harga Executive: Rp320.000/orang\n ";
    cout << "1 . 15.00\n";
    cout << "2 . 19.30\n";
    cout << "Jumlah kursi : "; cin >> kursi;
    cout << "Jam : "; cin >> jam;
    harga1 = 320000 * kursi;
    if(jam == 1){
        waktu = "15.00";
    }
    else if(jam == 2){
        waktu = "19.30";
    }
    else{
        cout << "Pilihan tidak tersedia";
    }
    case 4 :
    cout << "Harga Sleeper Class : Rp380.000/orang\n ";
    cout << "Harga Super Executive : Rp250.000/orang\n";
    cout << "1 . 21.00\n";
    cout << "2 . 19.20\n";
    cout << "Pilih kelas\n1. Sleeper Class\n2.Super Executive\n pilih : ";cin>>kelas;
    cout << "Jumlah kursi : "; cin >> kursi;
    cout << "Jam : "; cin >> jam;
    if(kelas == 1){
        harga1 = 380000 * kursi;
    }
    else if(kelas == 2){
        harga2 = 250000 * kursi;
    }
    else{
        cout<<"Pilihan tidak ada";
    }
    if(jam == 1){
        waktu = "21.00";
    }
    else if(jam == 2){
        waktu = "19.20";
    }
    else{
        cout << "Pilihan tidak tersedia";
    }
    case 5:
    cout << "Harga Sleeper Class : Rp380.000/orang\n ";
    cout << "Harga Executive : Rp150.000/orang\n";
    cout << "1 . 09.45\n";
    cout << "2 . 13.45\n";
    cout << "3 . 18.00\n";
    cout << "Pilih kelas\n1. Sleeper Class\n2.Executive\n pilih : ";cin>>kelas;
    cout << "Jumlah kursi : "; cin >> kursi;
    cout << "Jam : "; cin >> jam;
    if(kelas == 1){
        harga1 = 380000 * kursi;
    }
    else if(kelas == 2){
        harga2 = 150000 * kursi;
    }
    else{
        cout<<"Pilihan tidak ada";
    }
    if(jam == 1){
        waktu = "09.45";
    }
    else if(jam == 2){
        waktu = "13.45";
    }
    else if(jam == 3){
        waktu = "18.00";
    }
    else{
        cout << "Pilihan tidak tersedia";
    }
    default:
        break;
    }
    
}

void bayar(string& destinasi, string& waktu, string& tanggal, int& kursi, float& harga)
{
    cout << setfill('=') << setw(26) << "" << endl;
    cout << "|" << setfill(' ') << setw(13) << "PEMBAYARAN" << setw(13) << "|\n";
    cout << setfill('=') << setw(26) << "" << endl;
    cout << "Tujuan : " << destinasi << endl;
    cout << "Tanggal : " << tanggal << endl;
    cout << "Jam keberangkatan : " << waktu << endl;
    cout << "Jumlah kursi : " << kursi << endl;
    cout << setfill('-') << setw(26) << "" << endl;
    cout << "Total Harga : Rp" << harga << endl;
}
void jombor(string& destinasi, string& waktu, string& tanggal, int& kursi, float& harga)
{   
    char confirm;
    system("cls");
    int jam;
    do {
    cout << setfill('=') << setw(25) << "" << endl; 
    cout << "|" << setfill(' ') << setw(20) << "Terminal Jombor" << setw(4) << "|" << endl;
    cout << setfill('=') << setw(25) << "" << endl;
    cout << "Tujuan : \n"; 
    cout << "1. Semarang\n";
    cout << "2. Jepara\n";
    cout << "3. Pati\n";
    cout << "4. Kudus\n";
    cout << "5. Pekalongan\n";
    cout << "Tujuan perjalanan : "; cin >> tujuan;
    } while (tujuan < 1 || tujuan > 5);
    if (tujuan >= 1 && tujuan <= 5){
            cout << "Tanggal : " << tanggal;
            cout << "Bulan : " << bulan;
            cout << "Tahun : " << tahun;
            cout << "Harga Tiket/orang : Rp80.000\n";
            cout << "Jumlah kursi : "; cin >> kursi;
    harga = 80000 * kursi;
    do
    {
        cout << "Jam Keberangkatan :\n";
        cout << "1. 07.00\n";
        cout << "2. 16.00\n";
        cout << "Pilih jam : "; cin >> jam;
    } while (jam < 1 || jam > 2);
        if(jam == 1)
        {
            waktu = "07.00";
        } else if (jam == 2)
            waktu = "16.00";
        {
    }
    }
    switch (tujuan)
    {
    case 1 : destinasi = "Semarang"; break;
    case 2 : destinasi = "Jepara"; break;
    case 3 : destinasi = "Pati"; break;
    case 4 : destinasi = "Kudus"; break;
    case 5 : destinasi = "Pekalongan"; break;
    default : break;
    }
    cout << "Apakah data sudah benar (y/n) : "; cin >> confirm;
    if (confirm == 'y'){
        bayar(destinasi, waktu, tanggal, kursi, harga);
    } else {
        jombor(destinasi, waktu, tanggal, kursi, harga);
    }
}

int main()
{
    system ("cls");
    string destinasi, waktu, tanggal;
    float harga;
    int pilih = 0, kursi, tujuan;
    do {
        cout << setfill('=') << setw(28) << "" << endl;
        cout << "|" << setfill(' ') << setw(22) << "BIS JOGJA" << setw(6) << "|\n";
        cout << setfill('=') << setw(28) << "" << endl;
        cout << "Menu : \n";
        cout << "1. Terminal Giwangan\n";
        cout << "2. Terminal Jombor\n";
        cout << "Pilih Menu : "; cin >> pilih;
    } while (pilih > 2);
        switch (pilih)
        {
            case 1 : giwangan(); break;
            case 2 : jombor(destinasi, waktu, tanggal, kursi, harga); break;
            default: break;
        }
}
