#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, M;
    cin >> N >> M;

    vector<int> baskets(N+1, 0);

    for (int a = 0; a != M; ++a) {
        int i, j, k;
        cin >> i >> j >> k;

        for (int b = i; b < j+1; ++b) {
                baskets[b] = k;
        }
    }

    for (int a = 1; a < N+1; ++a) {
        cout << baskets[a] << " ";
    }

    return 0; 
}
