#include <iostream>
using namespace std;

int main (){
    //intro
    cout << "--------------------------------------" << endl;
    cout << "PENETAPAN YUDISIUM KELULUSAN MAHASISWA" << endl;
    cout << "--------------------------------------" << endl;

    //isi biodata
    string nama, lulus;
    int nim, total_sks, jmlh_sks_mka_pil, jmlh_sks_D, jmlh_sks_E, lama_lulus;
    float IPK;
    cout << "NAMA : ";
    getline(cin, nama);
    cout << "NIM : ";
    cin >> nim;
    cout << "Total sks : ";
    cin >> total_sks;
    cout << "IPK : ";
    cin >> IPK;
    cout << "Lama lulus (semester) : ";
    cin >> lama_lulus;
    cout << "Jumlah sks mka pilihan : ";
    cin >> jmlh_sks_mka_pil;
    cout << "Jumlah sks D : ";
    cin >> jmlh_sks_D;
    cout << "Jumlah sks E : ";
    cin >> jmlh_sks_E;

    //penetapan kelulusan
    if (IPK > 2.25 && total_sks >= 144 && jmlh_sks_mka_pil > 15 && jmlh_sks_D < (0.25 * total_sks) && jmlh_sks_E == 0){
        cout << "LULUS" << endl;
        if (IPK >= 3.51 && lama_lulus <= 8 ) {
            cout << "Dengan pujian (Cumlaude) ";
            cout << "dan dapat diusulkan mendapatkan karya cendikia";
        } else if (IPK >= 3.01 && IPK <= 3.5){
            cout << "Sangat Memuaskan (Very Satisfactory)";
        } else if (IPK >= 3.51 && lama_lulus > 8) {
            cout << "Sangat Memuaskan (Very Satisfactory)";
        } else if (IPK >= 2.76 && IPK <= 3.0){
            cout << "Memuaskan (Satisfactory)";
        }

    } else {
        cout << "Tidak lulus :(";
    }
    return 0;
}