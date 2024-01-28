#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int num, A;
    int count = 0;
    int p[42] = {0};

    for (int i = 0; i < 10; i++) {
        cin >> num;
        A = num % 42;
        p[A] += 1;
    }

    for (int i = 0; i < 42; i++) {
        if (p[i] != 0) {
            count++;
        }
    }
    
    cout << count;
    
    return 0; 
}
