#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> theArray;
    int howmany = 0;
    int values;

    cout << "Masukkan jumlah elemen: ";
    cin >> howmany;

    for (int i = 1; i <= howmany; i++) {
        cout << "Masukkan nilai ke-" << i << ": ";
        cin >> values;
        theArray.push_back(values);
        }

    double arraySum = 0;
    for (int i = 0; i < howmany; i++) {
        arraySum += theArray[i];
    }
    float arrayAvg = arraySum / howmany;

    int arrayMax = theArray[0];
    for (int i = 0; i < howmany; i++) {
        if (theArray[i] > arrayMax) {
            arrayMax = theArray[i];
        }
    }

    int arrayMin = theArray[0];
    for (int i = 0; i < howmany; i++) {
        if (theArray[i] < arrayMax) {
            arrayMin = theArray[i];
        }
    }

    int howmanyOdd = 0;
    for (int i = 0; i < howmany; i++) {
        if (theArray[i] % 2 == 1) {
            howmanyOdd += 1;
        }
    }

    int howmanyEven = 0;
    for (int i = 0; i < howmany; i++) {
        if (theArray[i] % 2 == 0) {
            howmanyEven += 1;
        }
    }

    cout << "\nRata-rata: " << arrayAvg;
    cout << "\nMaksimum: " << arrayMax;
    cout << "\nMinimum: " << arrayMin;
    cout << "\nJumlah bilangan ganjil: " << howmanyOdd;
    cout << "\nJumlah bilangan genap: " << howmanyEven;
}
