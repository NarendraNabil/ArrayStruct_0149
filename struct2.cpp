#include <iostream>
using namespace std;

struct detailAlamat{
    string desa;
    string kota;
};

struct mahasiswa{
    string nim;
    string nama;
    detailAlamat alamat;
};

int main() {
    //membuat object struct mahasiswa
    mahasiswa mhs;
     
    cout << "Masukkan NIM = ";
    cin >> mhs.nim;
    cout << "Masukkan NAMA = ";
    cin >> mhs.nama;
    cout << "Masukkan ALAMAT KOTA = ";
    cin >> mhs.alamat.kota;
    cout << "Masukkan ALAMAT DESA ";
    cin >> mhs.alamat.desa;
}
