#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    vector<int> arrayScore;
    unordered_map<string, vector<int>> isWeird;
    int howMany = 0;
    int studentScore;
    bool isAbnormal = false;

    cout << "How many students exam scores?: ";
    cin >> howMany;

    for (int i = 1; i <= howMany; i++) {
        cout << "Enter score #" << i << ": ";
        cin >> studentScore;
        arrayScore.push_back(studentScore);
    }

    for (int eval : arrayScore) {
        if (eval < 0) {
            isAbnormal = true;
            isWeird["Negatif value"].push_back(eval);
        } else if (eval > 100) {
            isAbnormal = true;
            isWeird["Overflow value"].push_back(eval);
        } else if (eval == 0) {
            isAbnormal = true;
            isWeird["No value"].push_back(eval);
        } else {
            isAbnormal = false;
            isWeird["Normal value"].push_back(eval);
        }

    }

    for (const auto& pair : isWeird) {
        cout << "Value: [";
        bool firstElement = true;
        for (int v : pair.second) {
            if (!firstElement) cout << ", ";
            cout << v;
            firstElement = false;
        }
        cout << "] -> " << pair.first << endl;
    }

    if (isAbnormal == true) {
        cout << "Retry inputing exam scores.";
    } else if (isAbnormal == false) {
        cout << "Exam scores are normal";
    }
    return 0;
}
