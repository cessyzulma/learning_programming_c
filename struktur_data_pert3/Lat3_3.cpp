#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
struct Mahasiswa{
    char Nama[20];
    char NIM[25];
    char Alamat[40];
    int umur;
};
main(){
    Mahasiswa Mhs[3];
    int i;
    cout<<"\t====================="<<endl;
    cout<<"\t\tINPUT"<<endl;
    cout<<"\t====================="<<endl<<endl;
    for(i=0;i<3;i++){
    cout<<" Nama   :   ";
    cin>>Mhs[i].Nama;
    cout<<" NIM    :   ";
    cin>>Mhs[i].NIM;
    cout<<" Alamat :   ";
    cin>>Mhs[i].Alamat;
    cout<<" Umur   :   ";
    cin>>Mhs[i].umur;
    cout<<endl;
    }
    cout<<"\t====================="<<endl;
    cout<<"\t\tOUTPUT"<<endl;
    cout<<"\t====================="<<endl<<endl;
    for(i=0;i<3;i++){
        cout<<"\n\n Nama   :  "<<Mhs[i].Nama;
        cout<<"\n NIM    :  "<<Mhs[i].NIM;
        cout<<"\n Alamat :  "<<Mhs[i].Alamat;
        cout<<"\n Umur   :  "<<Mhs[i].umur;
    }
    getch();
    
}
