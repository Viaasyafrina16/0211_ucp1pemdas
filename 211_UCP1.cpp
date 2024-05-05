// 1. string nama_saya = via; int nPanjang = 10;  float berat_buah = 12,5;
// 2. int nomor;
//    cout << "masukkan nomor =; "
//    cin >> nomor;
//    if (nomor == 6) {   // conditional statement
//    cout << " tersebut angka 6" <<endl;
//    }
//    cout << "finish";
// 3. Struct buah{
//    string warna;
//    float berat;
//    int harga;
//    int main ()
//    buah apel;
//    apel.warna = "merah"
//    apel.berat = 12,5
//    apel.harga = 20000
//    cout <<  apel.warna << endl;
//    cout <<  apel.berat << endl;
//    cout <<  apel.harga << endl;
// 4. void input data() // procedur
//    { 
 //   cout <<  " masukkan bilangan pertama :";
//    cin >> bilangan1 ;
//    cout << "masukkan bil.kedua";
//    cin << bilangan 2;
//    int penjumlahan// fungsi
//    {
//      return a+b;
//    }
// 5. int a = 1;
//    do {
//         cout << a << endl;
//         a++;
//      }
//    while (a <= 10)


#include <iostream>
using namespace std;

string nama[3];
float matematika[3], bhs_inggris [3];
bool diterima[3];

bool Diterima(float matematika,float bhs_inggris) {
    float rerata = (matematika + bhs_inggris) / 2;
    return (rerata >= 70 || matematika > 80);
}

void input() {
    for (int i = 0; i < 20; i++) {
        cout << "masukkan Nama Mahasiswa ke- " << i + i << ":";
        cin >> nama[i];
        cout << "masukkan Nilai matematika Mahasiswa ke- " << i + i << ":";
        cin >> matematika[i];
        cout << "Masukkan Nilai Bahasa Inggris Mahasiswa ke- " << i + 1 << ":";
        cin >> bhs_inggris[i];

        diterima[i] = Diterima(matematika[i], bhs_inggris[i]);

    }
}
void display() {
    cout << "\n\nNama\tStatus" << endl;
    for (int i = 0; i < 3; i++) {
        cout << nama[i] << "\t";
        if (diterima[i]) {
            cout << "Diterima" << endl;
        } else {
            cout << "Ditolak" << endl;
        }
    }
}
int main() {
    string pilihan;
    
    do 
    {
        input();
        display();

        cout << "Apakah anda ingin mengulang program (Yes/No)" << endl;
        cin >> pilihan;
    } while(pilihan == "Yes");
    return 0;
}


     

