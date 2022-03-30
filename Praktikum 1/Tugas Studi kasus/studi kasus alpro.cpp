#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    int jumlah_beli, bayar, diskon, jumlah[100], harga[100],total[50];
    float total_semua;
    string nama_barang[100];
    cout<<"\nMasukan Jumlah Beli :";
    cin>> jumlah_beli; 

    for (int i=0;i<jumlah_beli;i++){
    	cin.ignore();
        cout<<"\nMasukan barang ke- "<<i+1<<"\n\n";
        cout<<"Nama Barang : ";
        getline(cin,nama_barang[i]); 

        cout<<"Jumlah Barang : ";
        cin>>jumlah[i]; 

        cout<<"Harga Barang : ";
        cin>>harga[i]; 

        total[i] = jumlah[i]*harga[i]; 
        total_semua += total[i]; 

    }
    cout<<"\n======================";
    cout<<"\nCatatan Belanja";
    cout<<"\n======================";

    cout<<"\nNo\t Barang \t Jumlah \t Harga \t    Total\n";
    for (int i=0; i<jumlah_beli; i++ ){
        cout<<i+1<<setw(8)<<""<<nama_barang[i]<<setw(10)<<""<<jumlah[i]<<setw(12)<<""<<harga[i]<<setw(12)<<total[i]<<endl;
    }

    if(total_semua>=100000){
        diskon=0.06*total_semua;
    }else if(total_semua>= 50000){
        diskon=0.04;
    }else if(total_semua>= 25000){
        diskon=0.02;
    }else{
        diskon=0;
    }

    cout<<"\nJumlah Bayar : Rp."<<total_semua<<endl;
    cout<<"Diskon : Rp."<<diskon<<endl;
    cout<<"Total Bayar : Rp."<<total_semua - diskon<<endl;
    cout<<"Bayar : Rp.";
    cin>>bayar;
    cout<<"Kembalian : Rp."<<(bayar-(total_semua-diskon))<<endl;
    return 0;
}
