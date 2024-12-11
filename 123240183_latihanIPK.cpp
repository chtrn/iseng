#include <iostream>
using namespace std;

int main (){
   
   //intro
   cout << "----------------------\n";
   cout << "Program Menghitung IPK\n";
   cout << "----------------------\n";
   
   //nama mahasiswa
   string nama, kelas;
   int nim;
   cout << "Masukkan Nama : ";
   getline (cin, nama);
   cout << "Masukkan NIM : ";
   cin >> nim;
   cout << "Masukkan Kelas : ";
   cin >> kelas;

   //menghitung nilai matkul logika
    float nilai_tugas, nilai_kuis, nilai_responsi;
    float ip1;
    cout << "\nMata kuliah Logika" << endl;
    cout << "Masukkan Nilai Tugas : ";
    cin >> nilai_tugas;
    cout << "Masukkan Nilai Kuis : ";
    cin >> nilai_kuis;
    cout << "Masukkan Nilai Responsi : ";
    cin >> nilai_responsi;

    if ((nilai_tugas + nilai_kuis + nilai_responsi) / 3 >= 90) {
       cout << "Skor : A" << endl;
       ip1 = 4;
    } else if ((nilai_tugas + nilai_kuis + nilai_responsi) / 3 >= 80 && (nilai_tugas + nilai_kuis + nilai_responsi) / 3 < 90) {
       cout << "Skor : B" << endl;
       ip1 = 3;
    } else if ((nilai_tugas + nilai_kuis + nilai_responsi) / 3 >= 70 && (nilai_tugas + nilai_kuis + nilai_responsi) / 3 < 80) {
       cout << "Skor : C" << endl;
       ip1 = 2;
    } else if ((nilai_tugas + nilai_kuis + nilai_responsi) / 3 >= 60 && (nilai_tugas + nilai_kuis + nilai_responsi) / 3 < 70) {
       cout << "Skor : D" << endl;
       ip1 = 1;
    } else {
       cout << "Skor : E" << endl;
       ip1 = 0;
   }

    //menghitung nilai matkul  basis data
    float nilai_tugas2, nilai_kuis2, nilai_responsi2;
    float ip2;

    cout << "\nMata Kuliah Basis Data" << endl;
    cout << "Masukkan Nilai Tugas : ";
    cin >> nilai_tugas2;
    cout << "Masukkan Nilai Kuis : ";
    cin >> nilai_kuis2;
    cout << "Masukkan Nilai Responsi : ";
    cin >> nilai_responsi2;
  
   if ((nilai_tugas2 + nilai_kuis2 + nilai_responsi2) / 3 >= 90) {
       cout << "Skor : A" << endl;
       ip2 = 4;
   } else if ((nilai_tugas2 + nilai_kuis2 + nilai_responsi2) / 3 >= 80 && (nilai_tugas2 + nilai_kuis2 + nilai_responsi2) / 3 < 90) {
       cout << "Skor : B" << endl;
       ip2 = 3;
   } else if ((nilai_tugas2 + nilai_kuis + nilai_responsi2) / 3 >= 70 && (nilai_tugas2 + nilai_kuis2 + nilai_responsi2) / 3 < 80) {
       cout << "Skor : C" << endl;
       ip2 = 2;
   } else if ((nilai_tugas2 + nilai_kuis2 + nilai_responsi2) / 3 >= 60 && (nilai_tugas2 + nilai_kuis2 + nilai_responsi2) / 3 < 70) {
       cout << "Skor : D" << endl;
       ip2 = 1;
   } else {
       cout << "Skor : E" << endl;
       ip2 = 0;
   }
    
    //nama dan ipk
    cout << "\n-------------------------------" << endl;
    cout << "| Hasil Nilai Akhir Mahasiswa |" << endl;
    cout << "-------------------------------" << endl;
    cout << "Nama : " << nama << endl;
    cout << "NIM : " << nim << endl;
    cout << "Kelas : " << kelas << endl;

    float ipk;
    ipk = (ip1+ip2) / 2.0;
    
    cout << "IPK : " << ipk << endl;
    if (ipk >= 4 && ipk < 5) {
        cout << "Ajarin dong puh :O";
    } else if (ipk >= 3 && ipk < 4) {
        cout << "Boleh juga";
    } else if (ipk >= 2 && ipk < 3) {
        cout << "Alamak";
    } else if (ipk >= 1 && ipk < 2) {
        cout << "Ngulang sana";
    } else {
        cout << "Pindah jurusan aja :')";
    }

return 0;
}