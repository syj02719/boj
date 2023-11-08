#include <iostream>

int main() {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    
    int T, A, B;
    std::cin >> T;

    for (int count = 1; count <= T; count++) {
        std::cin >> A >> B;
        std::cout << A+B << "\n";
    } 
    
    return 0; 
}