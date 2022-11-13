#include <iostream>
using namespace std;

int main (){
    cout << "Nama   :Azhar Adyatma Pratama" << endl;
    cout << "Kelas  :1B Informatika" << endl;
    cout << "NPM    :2210631170011" << endl;
    cout << endl;

    float sisi, luas_persegi;
    cout << "Menghitung Luas persegi" << endl;
    cout << "Masukkan Sisi = ";
    cin >> sisi;

    luas_persegi = sisi*sisi;
    cout << "Luas Persegi = " << luas_persegi << endl;
    cout << endl;

    float panjang, lebar, luas_persegi_panjang;
    cout << "Menghitung Luas Persegi Panjang" << endl;
    cout << "Masukkan Panjang = ";
    cin >> panjang;
    cout << "Masukkan Lebar = ";
    cin >> lebar;

    luas_persegi_panjang = panjang*lebar;
    cout << "Luas Persegi Panjang = " << luas_persegi_panjang << endl;
    cout << endl;

    float alas_segitiga, tinggi_segitiga, luas_segitiga;
    cout << "Menghitung Luas Segitiga" << endl;
    cout << "Masukkan Alas Segitiga = ";
    cin >> alas_segitiga;
    cout << "Masukkan Tinggi Segitiga = ";
    cin >> tinggi_segitiga;

    luas_segitiga = 0.5*alas_segitiga*tinggi_segitiga;
    cout << "Luas Segitiga = " << luas_segitiga << endl;
    cout << endl;

    float sisi_a, sisi_b, tinggi_trapesium, luas_trapesium;
    cout << "Menghitung Luas Trapesium" << endl;
    cout << "Masukkan Sisi a = ";
    cin >> sisi_a;
    cout << "Masukkan Sisi b = ";
    cin >> sisi_b;
    cout << "Masukkan Tinggi Trapesium  = ";
    cin >> tinggi_trapesium;

    luas_trapesium = 0.5*(sisi_a+sisi_b)*tinggi_trapesium;
    cout << "Luas Trapesium = " << luas_trapesium << endl;
    cout << endl;

    float alas_jajargenjang, tinggi_jajargenjang, luas_jajargenjang;
    cout << "Menghitung Luas Jajargenjang" << endl;
    cout << "Masukkan Alas : ";
    cin >> alas_jajargenjang;
    cout << "Masukkan Tinggi = ";
    cin >> tinggi_jajargenjang;

    luas_jajargenjang = alas_jajargenjang*tinggi_jajargenjang;
    cout << "Luas Jajargenjang = " << luas_jajargenjang<< endl;
    cout << endl;

    float diagonal_1,diagonal_2,luas_belah_ketupat;
    cout << "Menentukan Luas Belah Ketupat" << endl;
    cout << "Masukkan Diagonal 1 = " ;
    cin >> diagonal_1;
    cout << "Masukkan Diagonal 2 = " ;
    cin >> diagonal_2;

    luas_belah_ketupat = 0.5*diagonal_1*diagonal_2;
    cout << "Luas Belah Ketupat = " << luas_belah_ketupat << endl;
    cout << endl;

    float diagonal_1_LL,diagonal_2_LL,luas_Layang_Layang;
    cout << "Menghitung Luas Layang Layang" << endl;
    cout << "Masukkan Diagonal 1 = " ;
    cin >> diagonal_1_LL;
    cout << "Masukkan Diagonal 2 = " ;
    cin >> diagonal_2_LL;

    luas_Layang_Layang = 0.5*diagonal_1_LL*diagonal_2_LL;
    cout << "Luas Layang Layang = " << luas_Layang_Layang << endl;
    cout << endl;

    float phi,r,luas_lingkaran;
    cout << "Menghitung Luas Lingkaran" << endl;
    cout << "Masukkan Jari-Jari = ";
    cin >> r;
    phi = 3.14;

    luas_lingkaran = phi*r*r;
    cout << "Luas Lingkaran = " << luas_lingkaran << endl;
}





