#include <iostream>

int main() {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    
    int T, A, B;
    std::cin >> T;

    for (int i = 1; i < T+1; i++) {
        std::cin >> A >> B;
        std::cout << "Case #" << i << ": " << A << " + " << B << " = " << A+B << "\n";
    }

    return 0; 

}
