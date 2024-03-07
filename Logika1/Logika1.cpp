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
        cout << "data ke-" << (i + i) << "; ";
        cin >> arr[i];
    }

}

void bubblesortarray() { //procedur untuk mengurutkan array
    int pass = 1;
}

int main()
{
    cout << "Hello World!\n";
}

