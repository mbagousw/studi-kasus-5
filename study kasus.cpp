#include <iostream>
#include <stdlib.h>

using namespace std;



int main(){
  string nama,mk1,mk2,mk3,prodi;
  float prodi1, prodi2, prodi3, tsks, tp;
  int pd, sks1, sks2, sks3;
  long int nim;

  cout<<"-----------------------------------------\n";
  cout<<"Nama             : ";cin>>nama;
  cout<<"NIM              : ";cin>>nim;
  cout<<"Mata Kuliah 1    : ";cin>>mk1;
  cout<<"SKS 1            : ";cin>>sks1;
  cout<<"Mata Kuliah 2    : ";cin>>mk2;
  cout<<"SKS 2            : ";cin>>sks2;
  cout<<"Mata Kuliah 3    : ";cin>>mk3;
  cout<<"SKS 3            : ";cin>>sks3;
  cout<<"-----------------------------------------\n";

  cout<<"Prodi Anda"<<endl;
  cout<<"1. Informatika"<<endl;
  cout<<"2. Teknik Mesin"<<endl;
  cout<<"3. Teknik Elektro"<<endl;
  cout<<"Pilih <1/2/3>  : ";cin>>pd;
  cout<<endl;
  
if(pd==1){
  prodi1=120000;
  prodi="Informatika";
  cout<<"prodi anda Informatika"<<endl;
  tsks=sks1+sks2+sks3;
  tp=tsks*prodi1;
  
}else if(pd==2){
  prodi=120000;
  prodi="Teknik Mesin";
  cout<<"prodi anda Teknik Mesin"<<endl;
  tsks=sks1+sks2+sks3;
  tp=tsks*prodi2;
   
}else if(pd==3){
  prodi3=120000;
  prodi="Teknik Elektro";
  cout<<"prodi anda Teknik Elektro"<<endl;
  tsks=sks1+sks2+sks3;
  tp=tsks*prodi3;
}else{
  cout<<"data yang anda input salah"<<endl;
}

cout<<endl;
cout<<endl;

cout<<"---------------Pembayaran SKS---------------";
cout<<endl;
cout<<"Nama                : "<<nama<<endl;
cout<<"NIM                 : "<<nim<<endl;
cout<<"Prodi               : "<<prodi<<endl;
cout<<"Total SKS           : "<<tsks<<endl;
cout<<"Total Pembayaran    : Rp. "<<tp<<endl;
cout<<"--------------------------------------------";
}

