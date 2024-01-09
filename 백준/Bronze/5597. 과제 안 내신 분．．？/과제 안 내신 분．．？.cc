#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int num, student[31] = {0};

    for (int i = 1; i < 29; i++) {
        cin >> num;
        student[num] = 1;
    }

    for (int i = 1; i < 31; i++) {
        if (student[i] == 0) {
            cout << i << "\n";
        }
    }
    
    return 0; 
}