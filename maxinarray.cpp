#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> ArrayObject;
    int Elements;
    char Options;
    do {
        cout << "Input elements: ";
        cin >> Elements;
        ArrayObject.push_back(Elements);

        cout << "Continue? (Y/n): ";
        cin >> Options;
        system("cls");

    } while (Options == 'Y' || Options == 'y');

    int MaxValue = ArrayObject[0];
    for (int i = 0; i < ArrayObject.size(); i++) {
        if (ArrayObject[i] > MaxValue) {
            MaxValue = ArrayObject[i];
        }
    }

    cout << "Elements in the array: ";
    for (int i = 0; i < ArrayObject.size(); i++) {
        cout << ArrayObject[i] << " ";
        }

    cout << endl;

    cout << "Biggest elements in the array: " << MaxValue;
    return 0;
}
