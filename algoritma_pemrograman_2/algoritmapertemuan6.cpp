#include <iostream>
#include <string>
using namespace std;
int main()
{
    {
        system("COLOR 76");
        int pilih, i, semester, nilai[7];
        float nilaitotal, nilaitotal2, ip, ip2, ipk;
        char grade[7], kembali, Nilai[7];
        string nama, nim, alamat, email, agama;
    atas:
        cout << "==============================================================================" << endl;
        cout << "-------------------------------Nurul Cessy Zulma--------------------------------" << endl;
        cout << "==============================================================================" << endl;
        cout << "1. Data Mahasiswa" << endl;
        cout << "2. Indeks Nilai Mahasiswa" << endl;
        cout << "3. Nilai IPK" << endl;
        cout << "4. Keluar" << endl;
        cout << "==============================================================================" << endl;
        cout << "Masukkan Pilihan Anda : ";
        cin >> pilih;

        if (pilih == 1)
        {
            system("cls");
            cout << "==============================================================================" << endl;
            cout << "Data Mahasiswa" << endl;
            cout << "==============================================================================" << endl;
            cout << endl;
            cout << "Nama			: ";
            cin >> nama;
            cout << "NIM			: ";
            cin >> nim;
            cout << "Email			: ";
            cin >> email;
            cout << "Agama			: ";
            cin >> agama;
            cout << "Alamat			: ";
            cin >> alamat;
            system("cls");
            {
                goto atas;
            }
        }

        else if (pilih == 2)
        {
            system("cls");
            cout << "============================================================================" << endl;
            cout << "Indeks Nilai Mahasiswa" << endl;
            cout << "============================================================================" << endl;
            cout << "Masukkan Semester Anda : ";
            cin >> semester;

            if (semester == 1)
            {
                system("cls");

                cout << "===========================================================================" << endl;
                cout << "Mata Kuliah					||	SKS	||	Grade Nilai		" << endl;
                cout << "===========================================================================" << endl;
                cout << "Pendidikan Agama				||	2	||		";
                cin >> grade[0];	
                cout << "Literasi TIK					||	2	||		";
                cin >> grade[1];			
                cout << "K3LH							||	2	||		";
                cin >> grade[2];
                cout << "Matematika Telekomunikasi I	||	3	||		";
                cin >> grade[3];
                cout << "DasTekKomPro					||	3	||		";
                cin >> grade[4];
                cout << "Rangkaian Listrik				||	3	||		";
                cin >> grade[5];
                cout << "Bengkel Mekanikal				||	2	||		";
                cin >> grade[6];
                cout << "DaSisTel						||	3	||		";
                cin >> grade[7];		
                cout << "==========================================================================" << endl;

                for (int i = 0; i < 8; i++)
                {
                    if (grade[i] == 'A')
                    {
                        nilai[i] = 4;
                    }
                    else if (grade[i] == 'B')
                    {
                        nilai[i] = 3;
                    }
                    else if (grade[i] == 'C')
                    {
                        nilai[i] = 2;
                    }
                    else if (grade[i] == 'D')
                    {
                        nilai[i] = 1;
                    }
                    else
                    {
                        nilai[i] = 0;
                    }
                }

                nilaitotal = nilai[0] * 2 + nilai[1] * 2 + nilai[2] * 2 + nilai[3] * 3 + nilai[4] * 3 + nilai[5] * 3 + nilai[6] * 2 + nilai[7] * 3;

                cout << "IP Semester 1 : " << nilaitotal / 20 << endl;
                cout << "Apakah anda ingin kembali ke menu utama? (Y/N) : ";
                cin >> kembali;
                if (kembali == 'Y')
                {
                    system("cls");
                    goto atas;
                }
                else
                {
                    system("cls");
                    goto bawah;
                }
            }

            else if (semester == 2)
            {
                system("cls");
                cout << "===========================================================================" << endl;
                cout << "Mata Kuliah		  ||	SKS	||	Grade Nilai		" << endl;
                cout << "===========================================================================" << endl;
                cout << "Kalkulus		      ||	4	||		";
                cin >> grade[0];
                cout << "Fisika Dasar		  ||	3	||		";
                cin >> grade[1];
                cout << "PTI			      ||	2 	||		";
                cin >> grade[2];
                cout << "Sistem Digital	   	  ||	2	||		";
                cin >> grade[3];
                cout << "PSO                  ||	2	||		";
                cin >> grade[4];
                cout << "Logika Informatika	  ||	2	||		";
                cin >> grade[5];
                cout << "Bahasa Inggris	      ||	2	||		";
                cin >> grade[6];
                cout << "Agama	              ||	2  	||		";
                cin >> grade[7];
                cout << "===========================================================================" << endl;

                for (int i = 0; i < 8; i++)
                {
                    if (grade[i] == 'A')
                    {
                        nilai[i] = 4;
                    }
                    else if (grade[i] == 'B')
                    {
                        nilai[i] = 3;
                    }
                    else if (grade[i] == 'C')
                    {
                        nilai[i] = 2;
                    }
                    else if (grade[i] == 'D')
                    {
                        nilai[i] = 1;
                    }
                    else
                    {
                        nilai[i] = 0;
                    }
                }

                nilaitotal2 = nilai[0] * 3 + nilai[1] * 2 + nilai[2] * 2 + nilai[3] * 3 + nilai[4] * 3 + nilai[5] * 3 + nilai[6] * 2 + nilai[7] * 3;
                cout << "IP Semester 2 : " << nilaitotal2 / 21 << endl;
                cout << "Apakah anda ingin kembali ke menu utama? (Y/N) : ";
                cin >> kembali;
                if (kembali == 'Y')
                {
                    system("cls");
                    goto atas;
                }
                else
                {
                    system("cls");
                    goto bawah;
                }
            }
        }
            else if (pilih == 3)
            {
                system("cls");
                cout << "===============================================================================" << endl;
                cout << "Nilai IPK" << endl;
                cout << "===============================================================================" << endl;
                cout << "Nilai IP semester 1 anda adalah : " << nilaitotal / 20 << endl;
                cout << "Nilai IP semester 2 anda adalah : " << nilaitotal2 / 21 << endl;
                ipk = (nilaitotal + nilaitotal2) / 41;
                cout << "Nilai IPK anda adalah : " << ipk << endl;
                cout << "Apakah anda ingin kembali ke menu utama? (Y/N) : ";
                cin >> kembali;
                if (kembali == 'Y')
                {
                    system("cls");
                    goto atas;
                }
                else
                {
                    system("cls");
                    goto bawah;
                }
            }

            else
            {
                system("cls");
                goto bawah;
            }
        }

    bawah:
        system("pause");
        return 0;
    }


