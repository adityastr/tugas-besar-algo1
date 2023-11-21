#include <iostream>
#include <string>

using namespace std;

int main(){

    string nama, asalSekolah, tempatLahir, tglLahir, bulanLahir, tahunLahir, nik, nisn,input;
    int jenjang;

    cout << "\n\n============================================================";
    cout << "\n==========> PENDAFTARAN PESERTA DIDIK BARU(PPDB) <==========";
    cout << "\n============================================================\n";
        //Identitas Peserta Didik
    cout<<"Masukan nama peserta = ";
    getline(cin,nama);
    cout<<"Masukan NIK peserta = ";
    getline(cin,nik);
    if (nik.length()!=16)
    {
        cout<<"INPUT SALAH";
        return false;
    }
    cout<<"Masukan NISN peserta = ";
    getline(cin,nisn);
    if (nisn.length()<5 || nisn.length()>10)
    {
        cout<<"INPUT SALAH";
    }
    else if(5<=nisn.length()<=10){
    
    cout<<"Sekolah terakhir : ";
    getline(cin,asalSekolah);
    cout<<"Tanggal lahir = ";
    getline(cin,tglLahir);
    cout<<"Tempat lahir = ";
    getline(cin,tempatLahir);
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
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
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
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SDN 01 BEKASI";
            cout<<"\nkami nyatakan TIDAK LULUS !!!!";
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
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SDN 02 BEKASI";
            cout<<"\nKami nyatakan LULUS !!!";
            
        }else{

            cout<<"\n\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SDN 02 BEKASI";
            cout<<"\nkami nyatakan TIDAK LULUS !!!!";
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
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SDN 03 BEKASI";
            cout<<"\nKami nyatakan LULUS !!!";
            
        }else{
            
            cout<<"\n\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SDN 03 BEKASI";
            cout<<"\nkami nyatakan TIDAK LULUS !!!!";
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
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SDN 04 BEKASI";
            cout<<"\nKami nyatakan LULUS !!!";
            
        }else{
            
            cout<<"\n\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SDN 04 BEKASI";
            cout<<"\nkami nyatakan TIDAK LULUS !!!!";
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
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SDN 05 BEKASI";
            cout<<"\nKami nyatakan LULUS !!!";
            
            }else{
            cout<<"\n\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SDN 05 BEKASI";
            cout<<"\nkami nyatakan TIDAK LULUS !!!!";
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
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
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
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMPN 01 BEKASI";
            cout<<"\nkami nyatakan TIDAK LULUS !!!!";
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
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMPN 02 BEKASI";
            cout<<"\nKami nyatakan LULUS !!!";
            
        }else{

            cout<<"\n\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMPN 02 BEKASI";
            cout<<"\nkami nyatakan TIDAK LULUS !!!!";
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
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMPN 03 BEKASI";
            cout<<"\nKami nyatakan LULUS !!!";
            
        }else{
            
            cout<<"\n\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMPN 03 BEKASI";
            cout<<"\nkami nyatakan TIDAK LULUS !!!!";
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
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMPN 04 BEKASI";
            cout<<"\nKami nyatakan LULUS !!!";
            
        }else{
            
            cout<<"\n\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMPN 04 BEKASI";
            cout<<"\nkami nyatakan TIDAK LULUS !!!!";
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
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMPN 05 BEKASI";
            cout<<"\nKami nyatakan LULUS !!!";
            
        }else{
            
            cout<<"\n\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMPN 05 BEKASI";
            cout<<"\nkami nyatakan TIDAK LULUS !!!!";
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
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMPN 01 BEKASI";
            cout<<"\nKami nyatakan LULUS !!!";
            
        }else{
            cout<<"\n\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMPN 01 BEKASI";
            cout<<"\nkami nyatakan TIDAK LULUS !!!!";
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
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMPN 02 BEKASI";
            cout<<"\nKami nyatakan LULUS !!!";
            
        }else{
            cout<<"\n\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMPN 02 BEKASI";
            cout<<"\nkami nyatakan TIDAK LULUS !!!!";
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
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMPN 03 BEKASI";
            cout<<"\nKami nyatakan LULUS !!!";
            
        }else{
            cout<<"\n\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMPN 03 BEKASI";
            cout<<"\nkami nyatakan TIDAK LULUS !!!!";
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
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMPN 04 BEKASI";
            cout<<"\nKami nyatakan LULUS !!!";
            
        }else{
            cout<<"\n\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMPN 04 BEKASI";
            cout<<"\nkami nyatakan TIDAK LULUS !!!!";
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
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMPN 05 BEKASI";
            cout<<"\nKami nyatakan LULUS !!!";
            
        }else{
            cout<<"\n\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMPN 05 BEKASI";
            cout<<"\nkami nyatakan TIDAK LULUS !!!!";
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
            int tingkatPrestasiSMP, prestasiSMP;
         if(sekolahSMP == 1){
            cout << "\n\nPrestasi apa yang anda dapatkan : ";
            cout<<"\n1. Akademik";
            cout<<"\n2. Non Akademik";
            cout<<"\nMasukan angka [1,2] : ";
            cin>>prestasiSMP;
            cout << endl;
            cout << "\n=====================================\n";

                //Pilih Tingkat Prestasi
            if(prestasiSMP == 1 || prestasiSMP == 2){
            cout<<"\nTingkat prestasi yang didapat : ";
            cout<<"\n1. Kelurahan";
            cout<<"\n2. Kecamatan";
            cout<<"\n3. Kota";
            cout<<"\n4. Provinsi";
            cout<<"\n5. Nasional";
            cout<<"\nMasukan angka [1,2,3,4,5] : ";
            cin>>tingkatPrestasiSMP;
            cout << "\n=====================================";
            //kelurahan
        if(tingkatPrestasiSMP==1){
            cout<<"\n\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMPN 01 BEKASI";
            cout<<"\nkami nyatakan TIDAK LULUS !!!!";
            }

            //Kecamatan
            else if(tingkatPrestasiSMP == 2){
            cout<<"\n\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMPN 01 BEKASI";
            cout<<"\nkami nyatakan TIDAK LULUS !!!!";
            }

            //Kota
            else if(tingkatPrestasiSMP == 3){
            cout<<"\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<"Tgl lahir : "<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMPN 01 BEKASI";
            cout<<"\nKami nyatakan LULUS !!!";
            }

            //Provinsi
            else if(tingkatPrestasiSMP == 4){
            cout<<"\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<"Tgl lahir : "<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMPN 01 BEKASI";
            cout<<"\nKami nyatakan LULUS !!!";
            }

            //Nasional
            else if(tingkatPrestasiSMP == 5){
            cout<<"\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<"Tgl lahir : "<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMPN 01 BEKASI";
            cout<<"\nKami nyatakan LULUS !!!";
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


                //Pilihan ke 2
         }else if(sekolahSMP == 2){
            cout << "\n\nPrestasi apa yang anda dapatkan : ";
            cout<<"\n1. Akademik";
            cout<<"\n2. Non Akademik";
            cout<<"\nMasukan angka [1,2] : ";
            cin>>prestasiSMP;
            cout << endl;
            cout << "\n=====================================\n";

                //Pilih Tingkat Prestasi
            if(prestasiSMP == 1 || prestasiSMP == 2){
            cout<<"\nTingkat prestasi yang didapat : ";
            cout<<"\n1. Kelurahan";
            cout<<"\n2. Kecamatan";
            cout<<"\n3. Kota";
            cout<<"\n4. Provinsi";
            cout<<"\n5. Nasional";
            cout<<"\nMasukan angka [1,2,3,4,5] : ";
            cin>>tingkatPrestasiSMP;
            cout << "\n=====================================";
            //kelurahan
        if(tingkatPrestasiSMP==1){
            cout<<"\n\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMPN 02 BEKASI";
            cout<<"\nkami nyatakan TIDAK LULUS !!!!";
            }

            //Kecamatan
            else if(tingkatPrestasiSMP == 2){
            cout<<"\n\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMPN 02 BEKASI";
            cout<<"\nkami nyatakan TIDAK LULUS !!!!";
            }

            //Kota
            else if(tingkatPrestasiSMP == 3){
            cout<<"\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<"Tgl lahir : "<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMPN 02 BEKASI";
            cout<<"\nKami nyatakan LULUS !!!";
            }

            //Provinsi
            else if(tingkatPrestasiSMP == 4){
            cout<<"\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<"Tgl lahir : "<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMPN 02 BEKASI";
            cout<<"\nKami nyatakan LULUS !!!";
            }

            //Nasional
            else if(tingkatPrestasiSMP == 5){
            cout<<"\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<"Tgl lahir : "<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMPN 02 BEKASI";
            cout<<"\nKami nyatakan LULUS !!!";
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

            //Pilihan ke 3
         }else if(sekolahSMP == 3){
            cout << "\n\nPrestasi apa yang anda dapatkan : ";
            cout<<"\n1. Akademik";
            cout<<"\n2. Non Akademik";
            cout<<"\nMasukan angka [1,2] : ";
            cin>>prestasiSMP;
            cout << endl;
            cout << "\n=====================================\n";

                //Pilih Tingkat Prestasi
            if(prestasiSMP == 1 || prestasiSMP == 2){
            cout<<"\nTingkat prestasi yang didapat : ";
            cout<<"\n1. Kelurahan";
            cout<<"\n2. Kecamatan";
            cout<<"\n3. Kota";
            cout<<"\n4. Provinsi";
            cout<<"\n5. Nasional";
            cout<<"\nMasukan angka [1,2,3,4,5] : ";
            cin>>tingkatPrestasiSMP;
            cout << "\n=====================================";
            //kelurahan
        if(tingkatPrestasiSMP==1){
            cout<<"\n\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMPN 03 BEKASI";
            cout<<"\nkami nyatakan TIDAK LULUS !!!!";
            }

            //Kecamatan
            else if(tingkatPrestasiSMP == 2){
            cout<<"\n\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMPN 03 BEKASI";
            cout<<"\nkami nyatakan TIDAK LULUS !!!!";
            }

            //Kota
            else if(tingkatPrestasiSMP == 3){
            cout<<"\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<"Tgl lahir : "<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMPN 03 BEKASI";
            cout<<"\nKami nyatakan LULUS !!!";
            }

            //Provinsi
            else if(tingkatPrestasiSMP == 4){
            cout<<"\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<"Tgl lahir : "<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMPN 03 BEKASI";
            cout<<"\nKami nyatakan LULUS !!!";
            }

            //Nasional
            else if(tingkatPrestasiSMP == 5){
            cout<<"\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<"Tgl lahir : "<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMPN 03 BEKASI";
            cout<<"\nKami nyatakan LULUS !!!";
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

            //Pilihan ke 4
            else if(sekolahSMP == 4){
            cout << "\n\nPrestasi apa yang anda dapatkan : ";
            cout<<"\n1. Akademik";
            cout<<"\n2. Non Akademik";
            cout<<"\nMasukan angka [1,2] : ";
            cin>>prestasiSMP;
            cout << endl;
            cout << "\n=====================================\n";

                //Pilih Tingkat Prestasi
            if(prestasiSMP == 1 || prestasiSMP == 2){
            cout<<"\nTingkat prestasi yang didapat : ";
            cout<<"\n1. Kelurahan";
            cout<<"\n2. Kecamatan";
            cout<<"\n3. Kota";
            cout<<"\n4. Provinsi";
            cout<<"\n5. Nasional";
            cout<<"\nMasukan angka [1,2,3,4,5] : ";
            cin>>tingkatPrestasiSMP;
            cout << "\n=====================================";
            //kelurahan
        if(tingkatPrestasiSMP==1){
            cout<<"\n\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMPN 04 BEKASI";
            cout<<"\nkami nyatakan TIDAK LULUS !!!!";
            }

            //Kecamatan
            else if(tingkatPrestasiSMP == 2){
            cout<<"\n\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMPN 04 BEKASI";
            cout<<"\nkami nyatakan TIDAK LULUS !!!!";
            }

            //Kota
            else if(tingkatPrestasiSMP == 3){
            cout<<"\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<"Tgl lahir : "<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMPN 04 BEKASI";
            cout<<"\nKami nyatakan LULUS !!!";
            }

            //Provinsi
            else if(tingkatPrestasiSMP == 4){
            cout<<"\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<"Tgl lahir : "<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMPN 04 BEKASI";
            cout<<"\nKami nyatakan LULUS !!!";
            }

            //Nasional
            else if(tingkatPrestasiSMP == 5){
            cout<<"\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<"Tgl lahir : "<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMPN 04 BEKASI";
            cout<<"\nKami nyatakan LULUS !!!";
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

            //Pilihan ke 5
            else if(sekolahSMP == 5){
                            cout << "\n\nPrestasi apa yang anda dapatkan : ";
            cout<<"\n1. Akademik";
            cout<<"\n2. Non Akademik";
            cout<<"\nMasukan angka [1,2] : ";
            cin>>prestasiSMP;
            cout << endl;
            cout << "\n=====================================\n";

                //Pilih Tingkat Prestasi
            if(prestasiSMP == 1 || prestasiSMP == 2){
            cout<<"\nTingkat prestasi yang didapat : ";
            cout<<"\n1. Kelurahan";
            cout<<"\n2. Kecamatan";
            cout<<"\n3. Kota";
            cout<<"\n4. Provinsi";
            cout<<"\n5. Nasional";
            cout<<"\nMasukan angka [1,2,3,4,5] : ";
            cin>>tingkatPrestasiSMP;
            cout << "\n=====================================";
            //kelurahan
        if(tingkatPrestasiSMP==1){
            cout<<"\n\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMPN 05 BEKASI";
            cout<<"\nkami nyatakan TIDAK LULUS !!!!";
            }

            //Kecamatan
            else if(tingkatPrestasiSMP == 2){
            cout<<"\n\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMPN 05 BEKASI";
            cout<<"\nkami nyatakan TIDAK LULUS !!!!";
            }

            //Kota
            else if(tingkatPrestasiSMP == 3){
            cout<<"\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<"Tgl lahir : "<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMPN 05 BEKASI";
            cout<<"\nKami nyatakan LULUS !!!";
            }

            //Provinsi
            else if(tingkatPrestasiSMP == 4){
            cout<<"\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<"Tgl lahir : "<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMPN 05 BEKASI";
            cout<<"\nKami nyatakan LULUS !!!";
            }

            //Nasional
            else if(tingkatPrestasiSMP == 5){
            cout<<"\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<"Tgl lahir : "<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMPN 05 BEKASI";
            cout<<"\nKami nyatakan LULUS !!!";
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

        //jenjang SMA
        case 3:
    int jalurSMA, sekolahSMA, nilaiSMA;
    float jarakSma;
    cout << "\n=====================================";
    cout<<"\n\nPilih sekolah tujuan: ";
    cout<<"\n1. SMAN 01 BEKASI: ";
    cout<<"\n2. SMAN 02 BEKASI: ";
    cout<<"\n3. SMAN 03 BEKASI: ";
    cout<<"\n4. SMAN 04 BEKASI: ";
    cout<<"\n5. SMAN 05 BEKASI: ";
    cout << "\nMasukan angka [1,2,3,4,5]: ";
    cin>>sekolahSMA;

    cout << "\n=====================================\n\n";
    
        //Pilih Jalur Pendaftaran
    cout<<"Pilih jalur penerimaan";
    cout<<"\n1. Zonasi";
    cout<<"\n2. Nilai";
    cout<<"\n3. Prestasi";
    cout << "\nMasukan angka [1,2,3] : ";
    cin>>jalurSMA;
    cout << "\n=====================================";

            //Jalur Zonasi    
        if (jalurSMA==1){
                        
            //Pilihan ke 1
        if(sekolahSMA == 1)
    {
        cout<<"\n\njarak rumah menuju sekolah (KM) : ";
        cin>>jarakSma;
        if (jarakSma<=20)
        {
            cout<<"\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<"Tgl lahir : "<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMAN 01 BEKASI";
            cout<<"\nKami nyatakan LULUS !!!";
            
        }
        else
        {
            cout<<"\n\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMAN 01 BEKASI";
            cout<<"\nkami nyatakan TIDAK LULUS !!!!";
        }
        
    }
                //Pilihan ke 2    
        else if(sekolahSMA == 2){

        cout<<"\n\njarak rumah menuju sekolah (KM) : ";
        cin>>jarakSma;
        if (jarakSma<=20){

            cout<<"\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<"Tgl lahir : "<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMAN 02 BEKASI";
            cout<<"\nKami nyatakan LULUS !!!";
            
        }else{

            cout<<"\n\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMAN 02 BEKASI";
            cout<<"\nkami nyatakan TIDAK LULUS !!!!";
        }
        }
                        //Pilihan ke 3        
        else if(sekolahSMA == 3){

        cout<<"\n\njarak rumah menuju sekolah (KM) : ";
        cin>>jarakSma;
        if (jarakSma<=20){

            cout<<"\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<"Tgl lahir : "<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMAN 03 BEKASI";
            cout<<"\nKami nyatakan LULUS !!!";
            
        }else{
            
            cout<<"\n\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMAN 03 BEKASI";
            cout<<"\nkami nyatakan TIDAK LULUS !!!!";
        }
        }
                        //Pilihan ke 4        
        else if(sekolahSMA == 4){

        cout<<"\n\njarak rumah menuju sekolah (KM) : ";
        cin>>jarakSma;
        if (jarakSma<=20){

            cout<<"\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<"Tgl lahir : "<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMAN 04 BEKASI";
            cout<<"\nKami nyatakan LULUS !!!";
            
        }else{
            
            cout<<"\n\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMAN 04 BEKASI";
            cout<<"\nkami nyatakan TIDAK LULUS !!!!";
        }
        }
                        //Pilihan ke 5
        else if(sekolahSMA == 5){

        cout<<"\n\njarak rumah menuju sekolah (KM) : ";
        cin>>jarakSma;
        if (jarakSma<=20){

            cout<<"\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<"Tgl lahir : "<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMAN 05 BEKASI";
            cout<<"\nKami nyatakan LULUS !!!";
            
        }else{
            
            cout<<"\n\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMAN 05 BEKASI";
            cout<<"\nkami nyatakan TIDAK LULUS !!!!";
        }
        }

        //jalur nilai
        else if (jalurSMA==2){
            
                        //Pilihan ke 1
         if(sekolahSMA == 1){
        cout << "\n\nMasukan Rara-rata Nilai rapot anda : ";
        cin >> nilaiSMA;

        if (nilaiSMA >= 85){
            cout<<"\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<"Tgl lahir : "<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMAN 01 BEKASI";
            cout<<"\nKami nyatakan LULUS !!!";
            
        }else{
            cout<<"\n\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMAN 01 BEKASI";
            cout<<"\nkami nyatakan TIDAK LULUS !!!!";
        }
        
    }
            //Pilihan ke 2
    else if(sekolahSMA == 2){

        cout << "\n\nMasukan Rara-rata Nilai rapot anda : ";
        cin >> nilaiSMA;

        if (nilaiSMA >= 85){
            cout<<"\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<"Tgl lahir : "<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMAN 02 BEKASI";
            cout<<"\nKami nyatakan LULUS !!!";
            
        }else{
            cout<<"\n\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMAN 02 BEKASI";
            cout<<"\nkami nyatakan TIDAK LULUS !!!!";
        }
        
    }   
            
            //Pilihan ke 3
    else if(sekolahSMA == 3){
        cout << "\n\nMasukan Rara-rata Nilai rapot anda : ";
        cin >> nilaiSMA;
        if (nilai >= 85){
            cout<<"\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<"Tgl lahir : "<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMAN 03 BEKASI";
            cout<<"\nKami nyatakan LULUS !!!";
            
        }else{
            cout<<"\n\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMAN 03 BEKASI";
            cout<<"\nkami nyatakan TIDAK LULUS !!!!";
        }
    
    }
                        //Pilihan ke 4
    else if(sekolahSMA == 4){
        cout << "\n\nMasukan Rara-rata Nilai rapot anda : ";
        cin >> nilaiSMA;
        if (nilaiSMA >= 85){
            cout<<"\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<"Tgl lahir : "<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMAN 04 BEKASI";
            cout<<"\nKami nyatakan LULUS !!!";
            
        }else{
            cout<<"\n\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMAN 04 BEKASI";
            cout<<"\nkami nyatakan TIDAK LULUS !!!!";
        }
    
    }
                        //Pilihan ke 5
    else if(sekolahSMA == 5){
        cout << "\n\nMasukan Rara-rata Nilai rapot anda : ";
        cin >> nilaiSMA;
        if (nilaiSMA >= 85){
            cout<<"\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<"Tgl lahir : "<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMAN 05 BEKASI";
            cout<<"\nKami nyatakan LULUS !!!";
            
        }else{
            cout<<"\n\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMAN 05 BEKASI";
            cout<<"\nkami nyatakan TIDAK LULUS !!!!";
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

            //Jalur Prestasi
        else if(jalur == 3){
            
            //Pilihan ke 1
            int tingkatPrestasiSMA, prestasiSMA;
         if(sekolahSMA == 1){
            cout << "\n\nPrestasi apa yang anda dapatkan : ";
            cout<<"\n1. Akademik";
            cout<<"\n2. Non Akademik";
            cout<<"\nMasukan angka [1,2] : ";
            cin>>prestasiSMA;
            cout << endl;
            cout << "\n=====================================\n";

                //Pilih Tingkat Prestasi
            if(prestasiSMA == 1 || prestasiSMA == 2){
            cout<<"\nTingkat prestasi yang didapat : ";
            cout<<"\n1. Kelurahan";
            cout<<"\n2. Kecamatan";
            cout<<"\n3. Kota";
            cout<<"\n4. Provinsi";
            cout<<"\n5. Nasional";
            cout<<"\nMasukan angka [1,2,3,4,5] : ";
            cin>>tingkatPrestasiSMA;
            cout << "\n=====================================";
            //kelurahan
        if(tingkatPrestasiSMA==1){
            cout<<"\n\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMAN 01 BEKASI";
            cout<<"\nkami nyatakan TIDAK LULUS !!!!";
            }

            //Kecamatan
            else if(tingkatPrestasiSMA == 2){
            cout<<"\n\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMAN 01 BEKASI";
            cout<<"\nkami nyatakan TIDAK LULUS !!!!";
            }

            //Kota
            else if(tingkatPrestasiSMA == 3){
            cout<<"\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<"Tgl lahir : "<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMAN 01 BEKASI";
            cout<<"\nKami nyatakan LULUS !!!";
            }

            //Provinsi
            else if(tingkatPrestasiSMA == 4){
            cout<<"\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<"Tgl lahir : "<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMAN 01 BEKASI";
            cout<<"\nKami nyatakan LULUS !!!";
            }

            //Nasional
            else if(tingkatPrestasiSMA == 5){
            cout<<"\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<"Tgl lahir : "<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMAN 01 BEKASI";
            cout<<"\nKami nyatakan LULUS !!!";
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


                //Pilihan ke 2
         }else if(sekolahSMA == 2){
            cout << "\n\nPrestasi apa yang anda dapatkan : ";
            cout<<"\n1. Akademik";
            cout<<"\n2. Non Akademik";
            cout<<"\nMasukan angka [1,2] : ";
            cin>>prestasiSMA;
            cout << endl;
            cout << "\n=====================================\n";

                //Pilih Tingkat Prestasi
            if(prestasiSMA == 1 || prestasiSMA == 2){
            cout<<"\nTingkat prestasi yang didapat : ";
            cout<<"\n1. Kelurahan";
            cout<<"\n2. Kecamatan";
            cout<<"\n3. Kota";
            cout<<"\n4. Provinsi";
            cout<<"\n5. Nasional";
            cout<<"\nMasukan angka [1,2,3,4,5] : ";
            cin>>tingkatPrestasiSMA;
            cout << "\n=====================================";
            //kelurahan
        if(tingkatPrestasiSMA==1){
            cout<<"\n\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMAN 02 BEKASI";
            cout<<"\nkami nyatakan TIDAK LULUS !!!!";
            }

            //Kecamatan
            else if(tingkatPrestasiSMA == 2){
            cout<<"\n\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMAN 02 BEKASI";
            cout<<"\nkami nyatakan TIDAK LULUS !!!!";
            }

            //Kota
            else if(tingkatPrestasiSMA == 3){
            cout<<"\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<"Tgl lahir : "<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMAN 02 BEKASI";
            cout<<"\nKami nyatakan LULUS !!!";
            }

            //Provinsi
            else if(tingkatPrestasiSMA == 4){
            cout<<"\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<"Tgl lahir : "<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMAN 02 BEKASI";
            cout<<"\nKami nyatakan LULUS !!!";
            }

            //Nasional
            else if(tingkatPrestasiSMA == 5){
            cout<<"\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<"Tgl lahir : "<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMAN 02 BEKASI";
            cout<<"\nKami nyatakan LULUS !!!";
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

            //Pilihan ke 3
         }else if(sekolahSMA == 3){
            cout << "\n\nPrestasi apa yang anda dapatkan : ";
            cout<<"\n1. Akademik";
            cout<<"\n2. Non Akademik";
            cout<<"\nMasukan angka [1,2] : ";
            cin>>prestasiSMA;
            cout << endl;
            cout << "\n=====================================\n";

                //Pilih Tingkat Prestasi
            if(prestasiSMA == 1 || prestasiSMA == 2){
            cout<<"\nTingkat prestasi yang didapat : ";
            cout<<"\n1. Kelurahan";
            cout<<"\n2. Kecamatan";
            cout<<"\n3. Kota";
            cout<<"\n4. Provinsi";
            cout<<"\n5. Nasional";
            cout<<"\nMasukan angka [1,2,3,4,5] : ";
            cin>>tingkatPrestasiSMA;
            cout << "\n=====================================";
            //kelurahan
        if(tingkatPrestasiSMA==1){
            cout<<"\n\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMAN 03 BEKASI";
            cout<<"\nkami nyatakan TIDAK LULUS !!!!";
            }

            //Kecamatan
            else if(tingkatPrestasiSMA == 2){
            cout<<"\n\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMAN 03 BEKASI";
            cout<<"\nkami nyatakan TIDAK LULUS !!!!";
            }

            //Kota
            else if(tingkatPrestasiSMA == 3){
            cout<<"\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<"Tgl lahir : "<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMAN 03 BEKASI";
            cout<<"\nKami nyatakan LULUS !!!";
            }

            //Provinsi
            else if(tingkatPrestasiSMA == 4){
            cout<<"\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<"Tgl lahir : "<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMAN 03 BEKASI";
            cout<<"\nKami nyatakan LULUS !!!";
            }

            //Nasional
            else if(tingkatPrestasiSMA == 5){
            cout<<"\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<"Tgl lahir : "<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMAN 03 BEKASI";
            cout<<"\nKami nyatakan LULUS !!!";
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

            //Pilihan ke 4
            else if(sekolahSMA == 4){
            cout << "\n\nPrestasi apa yang anda dapatkan : ";
            cout<<"\n1. Akademik";
            cout<<"\n2. Non Akademik";
            cout<<"\nMasukan angka [1,2] : ";
            cin>>prestasiSMA;
            cout << endl;
            cout << "\n=====================================\n";

                //Pilih Tingkat Prestasi
            if(prestasiSMA == 1 || prestasiSMA == 2){
            cout<<"\nTingkat prestasi yang didapat : ";
            cout<<"\n1. Kelurahan";
            cout<<"\n2. Kecamatan";
            cout<<"\n3. Kota";
            cout<<"\n4. Provinsi";
            cout<<"\n5. Nasional";
            cout<<"\nMasukan angka [1,2,3,4,5] : ";
            cin>>tingkatPrestasiSMA;
            cout << "\n=====================================";
            //kelurahan
        if(tingkatPrestasiSMA==1){
            cout<<"\n\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMAN 04 BEKASI";
            cout<<"\nkami nyatakan TIDAK LULUS !!!!";
            }

            //Kecamatan
            else if(tingkatPrestasiSMA == 2){
            cout<<"\n\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMAN 04 BEKASI";
            cout<<"\nkami nyatakan TIDAK LULUS !!!!";
            }

            //Kota
            else if(tingkatPrestasiSMA == 3){
            cout<<"\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<"Tgl lahir : "<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMAN 04 BEKASI";
            cout<<"\nKami nyatakan LULUS !!!";
            }

            //Provinsi
            else if(tingkatPrestasiSMA == 4){
            cout<<"\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<"Tgl lahir : "<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMAN 04 BEKASI";
            cout<<"\nKami nyatakan LULUS !!!";
            }

            //Nasional
            else if(tingkatPrestasiSMA == 5){
            cout<<"\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<"Tgl lahir : "<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMAN 04 BEKASI";
            cout<<"\nKami nyatakan LULUS !!!";
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

            //Pilihan ke 5
            else if(sekolahSMA == 5){
            cout << "\n\nPrestasi apa yang anda dapatkan : ";
            cout<<"\n1. Akademik";
            cout<<"\n2. Non Akademik";
            cout<<"\nMasukan angka [1,2] : ";
            cin>>prestasiSMA;
            cout << endl;
            cout << "\n=====================================\n";

                //Pilih Tingkat Prestasi
            if(prestasiSMA == 1 || prestasiSMA == 2){
            cout<<"\nTingkat prestasi yang didapat : ";
            cout<<"\n1. Kelurahan";
            cout<<"\n2. Kecamatan";
            cout<<"\n3. Kota";
            cout<<"\n4. Provinsi";
            cout<<"\n5. Nasional";
            cout<<"\nMasukan angka [1,2,3,4,5] : ";
            cin>>tingkatPrestasiSMA;
            cout << "\n=====================================";
            //kelurahan
        if(tingkatPrestasiSMA==1){
            cout<<"\n\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMAN 05 BEKASI";
            cout<<"\nkami nyatakan TIDAK LULUS !!!!";
            }

            //Kecamatan
            else if(tingkatPrestasiSMA == 2){
            cout<<"\n\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMAN 05 BEKASI";
            cout<<"\nkami nyatakan TIDAK LULUS !!!!";
            }

            //Kota
            else if(tingkatPrestasiSMA == 3){
            cout<<"\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<"Tgl lahir : "<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMAN 05 BEKASI";
            cout<<"\nKami nyatakan LULUS !!!";
            }

            //Provinsi
            else if(tingkatPrestasiSMA == 4){
            cout<<"\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<"Tgl lahir : "<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMAN 05 BEKASI";
            cout<<"\nKami nyatakan LULUS !!!";
            }

            //Nasional
            else if(tingkatPrestasiSMA == 5){
            cout<<"\nHASIL SELEKSI PESERTA DIDIK";
            cout<<"\nNama : "<<nama<<endl;
            cout<<"NISN : "<<nisn<<endl;
            cout<<"NIK : "<<nik<<endl;
            cout<<"Tgl lahir : "<<tglLahir<<" "<<bulanLahir<<" "<<tahunLahir<<endl;
            cout<<"Sekolah terakhir : "<<asalSekolah<<endl;
            cout<<"Tujuan Sekolah : SMAN 05 BEKASI";
            cout<<"\nKami nyatakan LULUS !!!";
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

        }

            default:                         
                        //Jika tidak ada yang dipilih        
            cout << "\n\nInput salah silahkan coba lagi";
            cout << "\nKetik [Ya] untuk kembali, Ketik [Tidak] untuk keluar : ";
            cin >> input;

            if(input == "Ya" || input == "ya"){
                goto pilih;
            }else{
                break;
            }


}
}    

return 0;
}