#include <iostream>

using namespace std;

int main(){

    string nama, asalSekolah, tempatLahir, tglLahir, bulanLahir, tahunLahir;
    int nik, nisn;
    int jenjang;

    cout<<"Masukan nama peserta = ";
    cin>>nama;
    cout<<"Masukan NIK peserta = ";
    cin>>nik;
    cout<<"Masukan NISN peserta = ";
    cin>>nisn;
    cout<<"Asal sekolah : ";
    cin>>asalSekolah;
    cout<<"Tanggal lahir = ";
    cin>>tglLahir;
    cout<<"bulan lahir = ";
    cin>>bulanLahir;
    cout<<"Tahun lahir = ";
    cin>>tahunLahir;
    cout<<"Tempat lahir = ";
    cin>>tempatLahir;

    /*cout<<nama<<endl;
    cout<<nik<<endl;
    cout<<nisn<<endl;
    cout<<asalSekolah<<endl;
    cout<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
    cout<<tempatLahir<<endl;*/

    cout<<"PILIH JENJANG SEKOLAH";
    cout<<"1. SD";
    cout<<"2. SMP";
    cout<<"3. SMP";
    cin>>jenjang;
    switch (jenjang)
    {

    // JENJANG SD
    case 1:
    int jalurSD, sekolahSD;
    float jarak;
    cout<<"pilih sekolah tujuan: ";
    cout<<"1. SDN 01 BEKASI: ";
    cout<<"2. SDN 02 BEKASI: ";
    cout<<"3. SDN 03 BEKASI: ";
    cout<<"4. SDN 04 BEKASI: ";
    cout<<"5. SDN 05 BEKASI: ";
    cin>>sekolahSD;

    if (sekolahSD=='1')
    {
        cout<<"jarak rumah menuju sekolah (KM) : ";
        cin>>jarak;
        if (jarak<=20)
        {
            cout<<"HASIL SELEKSI PESERTA DIDIK";
            cout<<"Nama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Asal Sekolah : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SDN 01 BEKASI";
            cout<<"kami nyatakan LULUS";
            
        }
        else
        {
            cout<<"HASIL SELEKSI PESERTA DIDIK";
            cout<<"Nama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Asal Sekolah : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SDN 01 BEKASI";
            cout<<"kami nyatakan TIDAK ULUS";
        }
        
    }
    
        
        break;

    // JENJANG SMP
    case 2:
    int jalur;
    cout<<"Pilih jalur penerimaan";
    cout<<"1. Zonasi";
    cout<<"2. Nilai";
    cout<<"3. Prestasi";
    cin>>jalur;
        if (jalur=='1'){
            /* code */
        }
            else if (jalur=='2'){
            /* code */
        }
            else{

        }
        
        break;
        break;

    case 3:

        break;
    
    default:
        break;
    }
    return 0;
}