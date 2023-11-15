#include <iostream>

using namespace std;

int main(){

    string nama, asalSekolah, tempatLahir, tglLahir, bulanLahir, tahunLahir, input;
    int nik, nisn;
    int jenjang;

    cout << "\n\n============================================================";
    cout << "\n==========> PENDAFTARAN PESERTA DIDIK BARU(PPDB) <==========";
    cout << "\n============================================================\n";
        //Identitas Peserta Didik
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
    cout << endl;
    
    /*cout<<nama<<endl;
    cout<<nik<<endl;
    cout<<nisn<<endl;
    cout<<asalSekolah<<endl;
    cout<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
    cout<<tempatLahir<<endl;*/

    cout << "=====================================";
        //Pilihan Sekolah
        pilih:
    cout<<"\n\nPILIH JENJANG SEKOLAH";
    cout<<"\n1. SD";
    cout<<"\n2. SMP";
    cout<<"\n3. SMA";
    cout << "\nMasukan angka [1,2,3]: ";
    cin>>jenjang;
    switch (jenjang)
    {

    // JENJANG SD
    case 1:
    int jalurSD, sekolahSD;
    float jarak;
    cout << "\n=====================================";
    cout<<"\n\nPilih sekolah tujuan: ";
    cout<<"\n1. SDN 01 BEKASI: ";
    cout<<"\n2. SDN 02 BEKASI: ";
    cout<<"\n3. SDN 03 BEKASI: ";
    cout<<"\n4. SDN 04 BEKASI: ";
    cout<<"\n5. SDN 05 BEKASI: ";
    cout << "\nMasukan angka [1,2,3,4,5]: ";
    cin>>sekolahSD;
    cout << "\n=====================================";

            //Pilihan ke 1
    if(sekolahSD == 1)
    {
        cout<<"\n\njarak rumah menuju sekolah (KM) : ";
        cin>>jarak;
        if (jarak<=20)
        {
            cout<<"\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<"Tgl lahir : "<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Asal Sekolah : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SDN 01 BEKASI";
            cout<<"\nKami nyatakan LULUS !!!";
            
        }
        else
        {
            cout<<"\n\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Asal Sekolah : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SDN 01 BEKASI";
            cout<<"\nkami nyatakan TIDAK ULUS";
        }
        
    }
            //Pilihan ke 2    
    else if(sekolahSD == 2){

        cout<<"\n\njarak rumah menuju sekolah (KM) : ";
        cin>>jarak;
        if (jarak<=20){

            cout<<"\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<"Tgl lahir : "<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Asal Sekolah : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SDN 02 BEKASI";
            cout<<"\nKami nyatakan LULUS !!!";
            
        }else{

            cout<<"\n\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Asal Sekolah : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SDN 02 BEKASI";
            cout<<"\nkami nyatakan TIDAK ULUS";
        }
        }
            //Pilihan ke 3        
        else if(sekolahSD == 3){

        cout<<"\n\njarak rumah menuju sekolah (KM) : ";
        cin>>jarak;
        if (jarak<=20){

            cout<<"\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<"Tgl lahir : "<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Asal Sekolah : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SDN 03 BEKASI";
            cout<<"\nKami nyatakan LULUS !!!";
            
        }else{
            
            cout<<"\n\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Asal Sekolah : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SDN 03 BEKASI";
            cout<<"\nkami nyatakan TIDAK ULUS";
        }
        }
            //Pilihan ke 4        
        else if(sekolahSD == 4){

        cout<<"\n\njarak rumah menuju sekolah (KM) : ";
        cin>>jarak;
        if (jarak<=20){

            cout<<"\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<"Tgl lahir : "<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Asal Sekolah : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SDN 04 BEKASI";
            cout<<"\nKami nyatakan LULUS !!!";
            
        }else{
            
            cout<<"\n\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Asal Sekolah : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SDN 04 BEKASI";
            cout<<"\nkami nyatakan TIDAK ULUS";
        }
        }
            //Pilihan ke 5
        else if(sekolahSD == 5){

        cout<<"\n\njarak rumah menuju sekolah (KM) : ";
        cin>>jarak;
        if (jarak<=20){

            cout<<"\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<"Tgl lahir : "<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Asal Sekolah : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SDN 05 BEKASI";
            cout<<"\nKami nyatakan LULUS !!!";
            
            }else{
            cout<<"\n\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Asal Sekolah : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SDN 05 BEKASI";
            cout<<"\nkami nyatakan TIDAK ULUS";
        }
        }
            //Jika tidak ada yang dipilih        
        else{
            cout << "\n\nInput salah silahkan coba lagi";
            cout << "\nKetik [Ya] untuk kembali, Ketik [Tidak] untuk keluar : ";
            cin >> input;

            if(input == "Ya" || input == "ya"){
                goto pilih;
            }else{
                break;
            }
        }
                //Daftar lagi atau selesai
            cout << "\n\nDaftar lagi atau selesai";
            cout << "\nKetik [Ya] untuk kembali, Ketik [Tidak] untuk keluar : ";
            cin >> input;

            if(input == "Ya" || input == "ya"){
                goto pilih;
            }else{
                break;
            }
    // JENJANG SMP
    case 2:
        int jalur, sekolahSMP, nilai;
    float jarakSmp;
    cout << "\n=====================================";
    cout<<"\n\nPilih sekolah tujuan: ";
    cout<<"\n1. SMPN 01 BEKASI: ";
    cout<<"\n2. SMPN 02 BEKASI: ";
    cout<<"\n3. SMPN 03 BEKASI: ";
    cout<<"\n4. SMPN 04 BEKASI: ";
    cout<<"\n5. SMPN 05 BEKASI: ";
    cout << "\nMasukan angka [1,2,3,4,5]: ";
    cin>>sekolahSMP;

    cout << "\n=====================================\n\n";
    
        //Pilih Jalur Pendaftaran
    cout<<"Pilih jalur penerimaan";
    cout<<"\n1. Zonasi";
    cout<<"\n2. Nilai";
    cout<<"\n3. Prestasi";
    cout << "\nMasukan angka [1,2,3] : ";
    cin>>jalur;
    cout << "\n=====================================";
        
            //Jalur Zonasi    
        if (jalur==1){
                        
                        //Pilihan ke 1
             if(sekolahSMP == 1)
    {
        cout<<"\n\njarak rumah menuju sekolah (KM) : ";
        cin>>jarakSmp;
        if (jarakSmp<=20)
        {
            cout<<"\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<"Tgl lahir : "<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Asal Sekolah : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMPN 01 BEKASI";
            cout<<"\nKami nyatakan LULUS !!!";
            
        }
        else
        {
            cout<<"\n\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Asal Sekolah : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMPN 01 BEKASI";
            cout<<"\nkami nyatakan TIDAK ULUS";
        }
        
    }
                        //Pilihan ke 2    
        else if(sekolahSMP == 2){

        cout<<"\n\njarak rumah menuju sekolah (KM) : ";
        cin>>jarakSmp;
        if (jarakSmp<=20){

            cout<<"\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<"Tgl lahir : "<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Asal Sekolah : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMPN 02 BEKASI";
            cout<<"\nKami nyatakan LULUS !!!";
            
        }else{

            cout<<"\n\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Asal Sekolah : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMPN 02 BEKASI";
            cout<<"\nkami nyatakan TIDAK ULUS";
        }
        }
                        //Pilihan ke 3        
        else if(sekolahSMP == 3){

        cout<<"\n\njarak rumah menuju sekolah (KM) : ";
        cin>>jarakSmp;
        if (jarakSmp<=20){

            cout<<"\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<"Tgl lahir : "<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Asal Sekolah : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMPN 03 BEKASI";
            cout<<"\nKami nyatakan LULUS !!!";
            
        }else{
            
            cout<<"\n\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Asal Sekolah : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMPN 03 BEKASI";
            cout<<"\nkami nyatakan TIDAK ULUS";
        }
        }
                        //Pilihan ke 4        
        else if(sekolahSMP == 4){

        cout<<"\n\njarak rumah menuju sekolah (KM) : ";
        cin>>jarakSmp;
        if (jarakSmp<=20){

            cout<<"\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<"Tgl lahir : "<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Asal Sekolah : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMPN 04 BEKASI";
            cout<<"\nKami nyatakan LULUS !!!";
            
        }else{
            
            cout<<"\n\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Asal Sekolah : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMPN 04 BEKASI";
            cout<<"\nkami nyatakan TIDAK ULUS";
        }
        }
                        //Pilihan ke 5
        else if(sekolahSMP == 5){

        cout<<"\n\njarak rumah menuju sekolah (KM) : ";
        cin>>jarakSmp;
        if (jarakSmp<=20){

            cout<<"\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<"Tgl lahir : "<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Asal Sekolah : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMPN 05 BEKASI";
            cout<<"\nKami nyatakan LULUS !!!";
            
        }else{
            
            cout<<"\n\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Asal Sekolah : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMPN 05 BEKASI";
            cout<<"\nkami nyatakan TIDAK ULUS";
        }
        }
                        //Jika tidak ada yang dipilih        
        else{
            cout << "\n\nInput salah silahkan coba lagi";
            cout << "\nKetik [Ya] untuk kembali, Ketik [Tidak] untuk keluar : ";
            cin >> input;

            if(input == "Ya" || input == "ya"){
                goto pilih;
            }else{
                break;
            }
        }
                        //Daftar lagi atau selesai
            cout << "\n\nDaftar lagi atau selesai";
            cout << "\nKetik [Ya] untuk kembali, Ketik [Tidak] untuk keluar : ";
            cin >> input;

            if(input == "Ya" || input == "ya"){
                goto pilih;
            }else{
                break;
            }
        }

            //Jalur Nilai
        else if (jalur==2){
            
                        //Pilihan ke 1
         if(sekolahSMP == 1){
        cout << "\n\nMasukan Rara-rata Nilai rapot anda : ";
        cin >> nilai;

        if (nilai >= 85){
            cout<<"\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<"Tgl lahir : "<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Asal Sekolah : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMPN 01 BEKASI";
            cout<<"\nKami nyatakan LULUS !!!";
            
        }else{
            cout<<"\n\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Asal Sekolah : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMPN 01 BEKASI";
            cout<<"\nkami nyatakan TIDAK ULUS";
        }
        
    }
                        //Pilihan ke 2
    else if(sekolahSMP == 2){

        cout << "\n\nMasukan Rara-rata Nilai rapot anda : ";
        cin >> nilai;

        if (nilai >= 85){
            cout<<"\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<"Tgl lahir : "<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Asal Sekolah : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMPN 02 BEKASI";
            cout<<"\nKami nyatakan LULUS !!!";
            
        }else{
            cout<<"\n\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Asal Sekolah : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMPN 02 BEKASI";
            cout<<"\nkami nyatakan TIDAK ULUS";
        }
        
    }   
                        //Pilihan ke 3
    else if(sekolahSMP == 3){
        cout << "\n\nMasukan Rara-rata Nilai rapot anda : ";
        cin >> nilai;
        if (nilai >= 85){
            cout<<"\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<"Tgl lahir : "<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Asal Sekolah : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMPN 03 BEKASI";
            cout<<"\nKami nyatakan LULUS !!!";
            
        }else{
            cout<<"\n\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Asal Sekolah : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMPN 03 BEKASI";
            cout<<"\nkami nyatakan TIDAK ULUS";
        }
    
    }
                        //Pilihan ke 4
    else if(sekolahSMP == 4){
        cout << "\n\nMasukan Rara-rata Nilai rapot anda : ";
        cin >> nilai;
        if (nilai >= 85){
            cout<<"\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<"Tgl lahir : "<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Asal Sekolah : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMPN 04 BEKASI";
            cout<<"\nKami nyatakan LULUS !!!";
            
        }else{
            cout<<"\n\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Asal Sekolah : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMPN 04 BEKASI";
            cout<<"\nkami nyatakan TIDAK ULUS";
        }
    
    }
                        //Pilihan ke 5
    else if(sekolahSMP == 5){
        cout << "\n\nMasukan Rara-rata Nilai rapot anda : ";
        cin >> nilai;
        if (nilai >= 85){
            cout<<"\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<"Tgl lahir : "<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Asal Sekolah : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMPN 05 BEKASI";
            cout<<"\nKami nyatakan LULUS !!!";
            
        }else{
            cout<<"\n\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Asal Sekolah : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMPN 05 BEKASI";
            cout<<"\nkami nyatakan TIDAK ULUS";
        }
    
    }
                        //Daftar lagi atau selesai
            cout << "\n\nDaftar lagi atau selesai";
            cout << "\nKetik [Ya] untuk kembali, Ketik [Tidak] untuk keluar : ";
            cin >> input;

            if(input == "Ya" || input == "ya"){
                goto pilih;
            }else{
                break;
            }
    }

            //Jalur Prestasi
        else if(jalur == 3){
                        //Pilihan ke 1
         if(sekolahSMP == 1){
            cout << "Prestasi apa yang anda dapatkan : ";
         }    
        }
    return 0;
}
}
