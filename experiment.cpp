#include<iostream>
#include<string>

using namespace std;

int main(){
    
    
    /*char tglLahir[50];

    cout<<"tgl lahir : ";
    cin.getline(tglLahir,50);
    cout<<tglLahir;*/

    string nama, tempatLahir, bulanLahir, tahunLahir, input;
    int nik, nisn;
    int jenjang;
    char tglLahir[50],asalSekolah[50];

    cout << "\n\n============================================================";
    cout << "\n==========> PENDAFTARAN PESERTA DIDIK BARU(PPDB) <==========";
    cout << "\n============================================================\n";
        //Identitas Peserta Didik
    cout<<"Masukan nama peserta = ";
    getline(cin,nama);
    cout<<"Masukan NIK peserta = ";
    cin>>nik;
    cout<<"Masukan NISN peserta = ";
    cin>>nisn;
    cout<<"Tanggal lahir = ";
    cin.getline(tglLahir,50);
    cout<<"Tempat lahir = ";
    cin>>tempatLahir;
    cout<<"Asal sekolah : ";
    cin.getline(asalSekolah,50);
    cout << endl;
}