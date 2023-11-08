#include <iostream>
#include <vector>

using namespace std;

int N;
    int number[1000000];
    int max_n, min_n;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> number[i];
    }

    max_n = min_n = number[0];

    for (int i = 0; i < N; i++) {
        max_n = max(max_n, number[i]);
        min_n = min(min_n, number[i]);
    }

    cout << min_n << " " << max_n;

    return 0; 
}
