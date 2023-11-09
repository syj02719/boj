#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, M;
    cin >> N >> M;

    vector<int> baskets(N+1, 0);
    
    for (int i = 1; i < N+1; i++) {
        baskets[i] = i;
    }

    for (int a = 0; a != M; ++a) {
        int i, j, k;
        cin >> i >> j;
        k = baskets[i];
        baskets[i] = baskets[j];
        baskets[j] = k;
    }

    for (int a = 1; a < N+1; ++a) {
        cout << baskets[a] << " ";
    }

    return 0; 
}