#include <iostream>

int main() {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    
    int N;
    std::cin >> N;

    for (int i = 1; i < N+1; i++) {
        for (int j = 1; j < i+1; j++) {
            std::cout << "*";
        }
        std::cout << "\n";
    }
    return 0; 

}