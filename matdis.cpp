#include <iostream>
#include <iomanip>
using namespace std;
void kembali();
int main();
void hanoi();

double rumusPerpangkatan(double angka, int n){ //rumus perpangkatan
    if (n == 0){
        return 1; //jika angka pangkat 0 hasilnya adalah 1
    } else if (n > 0){
        return (angka * rumusPerpangkatan(angka, n - 1)); //jika angka pengkat n lebih dari 0 maka angka dikali n-1 
    } else {
        return (1.0 / (angka * rumusPerpangkatan(angka, -n - 1))); //jika angka pangkat negatif
    }
}

void perpangkatan (){
    system ("cls");
    double angka;
    int n;
    cout << setfill('=') << setw(28) <<"" << endl;
    cout << "|" << setfill(' ') << setw(19) << "Perpangkatan" <<setw(8)<<"|" << endl;
    cout << setfill('=') << setw(28) <<"" << endl;
    cout << "Angka   : "; cin >> angka;
    cout << "Pangkat : "; cin >> n;
    cout << "Pangkat dari " << angka << " adalah " << rumusPerpangkatan(angka, n);
    cout<<endl;
    kembali();
}

int rumusAritmatika(int a, int b, int n){
    if (n == 1){
        return a;
    } else {
        return ((a + ((n-1) * b)) + rumusAritmatika(a, b, n-1)); //rumus aritmatika
    }
}
void aritmatika (){
    system("cls");
    int a, b, n;
    cout << setfill('=') << setw(23) << "" << endl;
    cout << "|" << setfill(' ') << setw(16)<< "Aritmatika" <<setw(7)<<"|\n";
    cout << setfill('=') << setw(23) << "" << endl;
    cout << "Suku pertama : "; cin >> a;
    cout << "Suku ke-n    : "; cin >> n;
    cout << "Beda         : "; cin >> b;
    cout << "Hasil (Sn)   : " << rumusAritmatika(a, b, n);
    cout<<endl;
    kembali();
}

int rumusFaktorial(int x) {
    if (x == 0 || x == 1)
        return 1;
    else 
        return x * rumusFaktorial(x - 1);
}
void faktorial () {
    system("cls");
    int x;
    cout << setfill('=') << setw(25) << "" << endl;
    cout << "|" << setfill(' ') << setw(16)<< "Faktorial"<< setw(9) <<"|\n";
    cout << setfill('=') << setw(25) << "" << endl;
    cout << "Masukkan angka : ";
    cin >> x;
    cout << "Faktorial dari "<< x << " adalah " << rumusFaktorial(x);
    cout<<endl;
    kembali();
}

void fibonacci(){ //fibonaci
    system("cls");
    int inisiasi, count, hasil, inisiasi1;
    inisiasi1 = 0;
    cout << setfill('=') <<setw(24) << "" <<endl;
    cout << "|" << setfill(' ') << setw(15) << "Fibonaci" << setw(9) << "|\n";
    cout << setfill('=') <<setw(24) << "" <<endl;
    cout << "Masukkan inisiasi : ";
    cin>>inisiasi;
    cout << "Masukkan Jumlah   : ";
    cin>>count;
    cout<<inisiasi<<" ";
    for (int i = 1; i < count; i++)
    {
        hasil = inisiasi + inisiasi1;
        inisiasi1 = inisiasi;
        inisiasi = hasil;
        cout<<hasil<<" ";
    }
    cout<<endl;
    kembali();
}

void kembali(){
    char yn;
    cout<<"Ingin kembali ke main menu (y/n)\t: ";
    cin>>yn;
    if (yn=='y' || yn=='Y')
    {
        system("cls");
        main();
    }else if (yn=='n' || yn=='N')
    {
        system("cls");
        cout << setfill('=') << setw(13) << "" << endl;
        cout<<"|" << setfill(' ') << setw(9) << "SELESAI" << setw(4) << "|\n";
        cout << setfill('=') << setw(13) << "" << endl;
    }
}
int main(){
    int pil;
    cout << setfill('=') << setw(33) << "" << endl;
    cout << "|" << setfill(' ') << setw(24) << "RELASI REKURENSI" << setw(9) <<"|\n";
    cout << setfill('=') << setw(33) << "" << endl;
    cout << "1. Perpangkatan\n2. Aritmatika\n3. Faktorial\n4. Fibonacci\n5. Tower Of Hanoi\nPilih opsi\t: ";
    cin>>pil;
    if (pil > 5){
        cout << "Input salah\n\n";
        main();
    }
    switch (pil)
    {
    case 1:
        perpangkatan();
        break;
    case 2:
        aritmatika();
        break;
    case 3:
        faktorial();
        break;
    case 4:
        fibonacci();
        break;
    case 5:
        hanoi();
        break;
    default:
        break;
    }
    return 0;
}

int hanoi(int n,char a,char b, char c){
    if(n==1)
        cout<<"Pindahkan cakram bagian atas dari "<<a<<" ke "<<b<<endl;
    else{
        hanoi(n-1,a,c,b);hanoi(1,a,b,c);hanoi(n-1,b,a,c);
    }
    return(n,'A','B','C');
}
void hanoi(){
    int n;
    cout<<"Masukkan jumlah cakram : ";cin>>n;
    cout<<hanoi(n,'A','B','C');
}