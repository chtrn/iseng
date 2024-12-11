#include <iostream>
using namespace std;

main (){
    // intro
    cout << "----------------------------------" <<endl;
    cout << "PROGRAM MENGHITUNG TOTAL BELANJAAN" << endl;
    cout << "----------------------------------" << endl;
    cout << "Halo :D" << endl;

    //menghitung belanjaan
    int total_belanjaan;
    string member;
    cout << "total belanjaan? ";
    cin >> total_belanjaan;
    cout << "punya member (yes/no)? ";
    cin >> member;
    if (100000 <= total_belanjaan && total_belanjaan <= 199999) {
        if (member == "yes") {
            cout << "Harga setelah diskon dan diskon member = " << total_belanjaan * 0.9;
        } else {
            cout << "total belanja adalah " << total_belanjaan * 0.95;
        }
    } else if ( 200000 <= total_belanjaan && total_belanjaan <= 299999) {
        if (member == "yes") {
            cout << "Harga setelah diskon dan diskon member = " << total_belanjaan * 0.85;
        } else {
            cout << "Harga setelah diskon = " << total_belanjaan * 0.9;
        }
    } else if (300000 <= total_belanjaan && total_belanjaan <= 399999) {
        if (member == "yes") {
            cout << "Harga setelah diskon dan diskon member = " << total_belanjaan * 0.8;
        } else {
            cout << "Harga setelah diskon = " << total_belanjaan * 0.85;
        }
    } else if (total_belanjaan >= 400000) {
        if (member == "yes") {
            cout << "Harga setelah diskon dan diskon member = " << total_belanjaan * 0.75;
        } else {
            cout << "Harga setelah diskon = " << total_belanjaan * 0.8;
        }
    } else if (total_belanjaan < 100000) {
        if (member == "yes") {
            cout << "Mendapatkan diskon member 5%" << endl;
            cout << total_belanjaan * 0.95;
        } else {
            cout << "total belanjaan = " << total_belanjaan;
        }
    }

    //closing
    cout << "\nTerima kasih :D";
    return 0;
}