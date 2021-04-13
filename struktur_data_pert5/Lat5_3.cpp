#include <iostream>
#include <conio.h>

int Maksimum (int a, int b, int c);
using namespace std;
main()
{
    int a=8, b=12, c=5;
    cout<<"Nilai a = "<<a;
    cout<<"\nNilai b = "<<b;
    cout<<"\nNilai c = "<<c;
    cout<<"\nNilai Terbesar : "<<Maksimum (a,b,c);
    getch();
}

int Maksimum (int x, int y, int z)
{
    int Besar = x;
    if (y > Besar)
        Besar = y;
    if (z > Besar)
        Besar = z;
    return (Besar);
}
