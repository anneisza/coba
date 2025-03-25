#include <iostream>
using namespace std;

int arr[20]; // Membuat Array dengan panjang data 20
int n; // Membuat Variale inputan n

void input()
{ // Procedure Input
    while (true)
    {
        cout << "Masukkan Jumgitlah Data pada Array : "; // Membuat Inputan jumlah element Array
        cin >> n; // memanggil variable inputan n

        if (n <= 20)
        { // Membuat Kondisi n tidak lebih dari 20
            break;
        }
            else
        {
            cout << "\nArray yang anda masukkan maksimal 20 Elemen.\n"; // Menampilkan Pesan jika data lebih dari 20
        }
    }
    cout << endl; // Membuat jarak per baris program
    cout << "=================" << endl; // Membuat tampilan susunan data element array
    cout << "Masukkan Element Array" << endl;
    cout << "=================" << endl;

    for (int i = 0; i < n; i++) //Menggunakan perulangan for untuk menyimpan data pada array
    {
        cout << "Data ke-" << (i + 1) << ": "; //Memasukkan atau menginputkan nilai data n
        cin >> arr[i]; // Menyimpan nilai data n ke dalam array arr
    }
}

void insertionSort()
{// Procedure InsertionSort

    int temp; // Membuat variable data temporer atau penyimpanan sementara
    int j, i; // Membuat variable j sebagai penanda

    for (int i = 1; i <= n - 1; i++)
    {// Step 1

    temp = arr[i]; // Step 2

    j = i - 1; // Step 3

    while (j >= 0 && arr[j] > temp) // Step 4
    {
        arr[j + 1] = arr[j]; //Step 4a
        j--; // Step 4b
    }
    
    arr[j+ 1] = temp; //Step 5
    }
}


