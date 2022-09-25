#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <conio.h>
#include <iomanip>
#define maksimum 8

using namespace std;

struct paket
{
    char jenis_brg[30];
    int berat;
    char kota[30];
};

paket kirim[maksimum];
// 28

void tambahdata(int x)
{
    if (x > maksimum)
    {
        cout << endl;
        cout << setfill(' ') << setw(47) << "Stack Sudah Penuh!\n";
        cout << setfill(' ') << setw(61) << "Ketik apapun untuk melanjutkan...";
        getch();
    }
    else
    {
        cout << endl;
        cout << setfill(' ') << setw(53) << "Masukkan Jenis Barang  : ";
        cin >> kirim[x].jenis_brg;
        cout << setfill(' ') << setw(53) << "Masukkan Berat Barang  : ";
        cin >> kirim[x].berat;
        cout << setfill(' ') << setw(53) << "Masukkan Kota Barang   : ";
        cin >> kirim[x].kota;
    }
}

void hapusdata(int x)
{
    if (x + 1 <= 0)
    {
        cout << endl;
        cout << setfill(' ') << setw(48) << "Stack Masih Kosong!\n";
    }
    else
    {
        cout << endl;
        cout << setfill(' ') << setw(51) << "Barang yang dihapus : \n";
        cout << setfill(' ') << setw(45) << "Jenis Barang   : " << kirim[x].jenis_brg << endl;
        cout << setfill(' ') << setw(45) << "Berat Barang   : " << kirim[x].berat << endl;
        cout << setfill(' ') << setw(45) << "Kota Barang    : " << kirim[x].kota << endl;
    }
    cout << setfill(' ') << setw(60) << "Klik apapun untuk melanjutkan...";
    getch();
}

void tampildata(int x)
{
    cout << endl;
    if (x - 1 <= 0)
    {
        cout << setfill(' ') << setw(60) << "Tidak Ada Apapun di Dalam Stack\n";
    }
    else
    {
        cout << setfill(' ') << setw(80) << "| No. | Jenis Barang | Berat Barang | Kota Barang |\n";
        for (int i = 1; i < x; i++)
        {
            cout << setfill(' ') << setw(30);
            cout << "| " << setfill(' ') << setw(3) << i << " | ";
            cout << setfill(' ') << setw(12) << kirim[i].jenis_brg << " | ";
            cout << setfill(' ') << setw(12) << kirim[i].berat << " | ";
            cout << setfill(' ') << setw(11) << kirim[i].kota << " |\n";
        }
    }
    cout << setfill(' ') << setw(61) << "Ketik apapun untuk melanjutkan...";
    getch();
}

void cekpenuh(int x)
{
    cout << endl;
    if (x >= maksimum + 1)
    {
        cout << setfill(' ') << setw(47) << "Stack Sudah Penuh!\n";
    }
    else
    {
        cout << setfill(' ') << setw(47) << "Stack Masih Terisi " << x - 1 << " Dari 8\n";
    }
    cout << setfill(' ') << setw(61) << "Ketik apapun untuk melanjutkan...";
    getch();
}

void cekkosong(int x)
{
    cout << endl;
    if (x - 1 <= 0)
    {
        cout << setfill(' ') << setw(60) << "Tidak Ada Apapun di Dalam Stack\n";
    }
    else
    {
        cout << setfill(' ') << setw(47) << "Stack Sudah Terisi " << x - 1 << " Dari 8\n";
    }
    cout << setfill(' ') << setw(61) << "Ketik apapun untuk melanjutkan...";
    getch();
}

int main()
{
    int top;
    int pilih;
    int datake = 1;
    do
    {
        system("cls");
        cout << "Muhammad Hafizh Dzaki / A11.2021.13370\n\n";
        cout << setfill(' ') << setw(51) << "Program Data Paket\n";
        cout << setfill(' ') << setw(55) << "--------------------------\n";
        cout << setfill(' ') << setw(39) << "MENU UTAMA\n";
        cout << setfill(' ') << setw(43) << "1. Tambah Data\n";
        cout << setfill(' ') << setw(42) << "2. Hapus Data\n";
        cout << setfill(' ') << setw(43) << "3. Tampil Data\n";
        cout << setfill(' ') << setw(45) << "4. Apakah Penuh?\n";
        cout << setfill(' ') << setw(46) << "5. Apakah Kosong?\n";
        cout << setfill(' ') << setw(38) << "6. Keluar\n";
        cout << setfill(' ') << setw(49) << "Pilihan Anda [1-6] : ";
        cin >> pilih;

        if (pilih == 1)
        {
            tambahdata(datake);
            if (datake < maksimum + 1)
            {
                datake++;
            }
            system("cls");
        }
        else if (pilih == 2)
        {
            if (datake - 1 > 0)
            {
                datake--;
            }
            hapusdata(datake);
            system("cls");
        }
        else if (pilih == 3)
        {
            tampildata(datake);
            system("cls");
        }
        else if (pilih == 4)
        {
            cekpenuh(datake);
            system("cls");
        }
        else if (pilih == 5)
        {
            cekkosong(datake);
            system("cls");
        }
        else
        {
            pilih = 6;
        }
    } while (pilih != 6);

    return 0;
}