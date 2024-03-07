#include <iostream>
using namespace std;

int arr[20];
int n;

void input() {
    while (true) {
        cout << "masukan banyaknya elemen pada array :";
        cin >> n;
        if (n <= 20)
            break; 
        else {
            cout << "\nArray dapat mempunyai maksimal 20 elemen. \n";
        }
    }
    cout << endl;
    cout << "================" << endl;
    cout << "masukan Elemen Array" << endl;
    cout << "================" << endl;

    for (int i = 0; i < n; i++) {
        cout << "data ke-" << (i + 1) << "; ";
        cin >> arr[i];
    }

}

void bubblesortarray() { //procedur untuk mengurutkan array

    int pass = 1; // step 1
    do {
        for (int j = 0; j <= n - 1 - pass; j++) { //step 2
            if (arr [j] > arr[j +1]) { // step3
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

            } 
        }
        pass = pass + 1; // step 4

    } while (pass <= n); //step5
    
}

void display() {
    cout << endl;
    cout << "================" << endl;
    cout << "Element array yang telah tersusun" << endl;
    cout << "================" << endl;
    for (int j = 0; j < n; j++) {
        cout << arr[j] << endl; // output setiap element array pada garis baru

    }
    cout << "jumlah pass = " << n - 1 << endl; // menampilkan total
    cout << endl;

}


int main()
{
    input(); //memanggil prosedur untuk menginput data 
    bubblesortarray(); //memanggil prosedur bubblesort
    display(); // memanggil prosedur untuk menampilkan data yang telah diproses
    system("pause");


    return 0;

    cout << "Hello World!\n";
}

