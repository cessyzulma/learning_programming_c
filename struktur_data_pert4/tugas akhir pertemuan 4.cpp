#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

void  DisplayNumbers(char *Nbr[], int r, int c);
int main()
{
 system("COLOR F9");
    char number[2][10] = { { 'U', 'N', 'I', 'V', 'E', 'R', 'S', 'I', 'T', 'A' },
                         { 'S', '-', 'P', 'A', 'M', 'U', 'L', 'A', 'N', 'G' } };

    char *pNumbers[2];

    *pNumbers = number[0];

    for(int i = 0; i < 6; i++)
        (*pNumbers)[i] = number[0][i];

    *(pNumbers+1) = number[1];

    for(int i = 0; i < 6; i++)
        (*(pNumbers+1))[i] = number[1][i];
 cout<<"KOMBINASI PROGRAM ARRAY DUA DIMENSI DENGAN POINTER"<<endl;
 cout<<"\nMencetak semua elemen yang terdapat pada array dua dimensi dengan pointer"<<endl;
    cout<<"\nDaftar Huruf"<<endl;
    DisplayNumbers(pNumbers, 2, 10);

    return 0;
}
void  DisplayNumbers(char *nbr[], int rows, int columns)
{
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < columns; j++)
            cout << "\nIndeks ke - [" << i << "][" << j << "]: " << (*(nbr+i))[j];

}
