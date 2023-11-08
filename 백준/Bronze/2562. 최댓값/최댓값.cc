#include <iostream>
#include <vector>

using namespace std;

int N;
    int number[8];
    int i;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    for (int i = 0; i < 9; i++) {
        cin >> number[i];
    }

    int max_n = number[0];
    int count = 0;

    for (i = 0; i < 9; i++) {
        if (max_n < number[i]) {
            max_n = number[i];
            count = i;
        }
    }

    cout << max_n << "\n";
    cout << count+1;

    return 0; 
}