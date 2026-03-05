#include <iostream>
#include <string>
using namespace std;

int arr[20]; // Deklarasi variable global array a dengan 20
int n; // Deklarasi variable global n untuk menyimpan banayaknya elemen

void input() { // procedur untuk input
    while (true) {
        cout << "Masukkan banayaknya elemen pada array : "; // output ke layar 
        cin >> n;      // input dari pengguna
        if (n <= 20)   // jika n kurang dari atau sama dengan 20
            break;     // keluar dari loop
        else {         // jika n lebih dari 20
            cout << "\nArray dapat mempunyai maksimal 20 elemen. \n";
        }
    }
    cout << endl;
    cout << "==================" << endl;
    cout << "Masukkan Elemen Array" << endl;
    cout << "==================" << endl;

    for (int i=0; i < n; i++) {     // looping dengan i dimulai dari 0
        cout << "Data ke-" << (i=1) << ":"; // output ke layar
        cin >> arr[i];                  // input dari pengguna
    }
}

void bubbleSortArray(){
    int pass = 1;

    do {
        for (int j = 0; j  <= n - 1 - pass; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        pass = pass + 1;
        
        cout << "\nPass " << pass - 1 << ":";// Number of pass
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";          // Menampilkan data pada number of passs

        }
        cout << endl;

    } while (pass <= n - 1);
}

void display() {
    cout << endl;
    cout << "==================" << endl;
    cout << "Element Array yang telah tersusun" << endl;
    cout << "==================" << endl;
    cout << endl;
    for (int j = 0; j  <= n; j++) {
        cout << arr[j]; // menampilkan array
        if ( j < n - 1) {
            cout << " --> ";
        }
    }
    cout << endl;
    cout << endl;
    cout << "Jumlah pass = " << n - 1 << endl; // menampilkan jumlah dari pass
    cout << endl;
    cout << endl;
}

int main() {
    
    input();

    bubbleSortArray();
    display();

    system("pause");
    return 0;
}