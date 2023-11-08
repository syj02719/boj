#include <iostream>

int main() {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    
    int A, B, C;
    std::cin >> A >> B; 
    std::cin >> C;

    if (B + C >= 60) {
        A = A + ((B + C) / 60);
        B = (B + C) % 60;
        if (A >= 24) {
            A -= 24;
        }
    }
    else {
        B += C;
    }

    std::cout << A << " " << B;
    return 0; 
}