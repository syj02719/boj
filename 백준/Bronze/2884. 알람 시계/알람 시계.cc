#include <iostream>

int main() {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    
    int H, M;
    std::cin >> H; 
    std::cin >> M; 

    if (H >= 0 && M >= 45) {
        M -= 45;
    }
    else if (H > 0 && M < 45) {
        H -= 1;
        M = 60 - (45 - M);
    }
    else if (H < 0 && M >= 45) {
        H = 23;
        M -= 45;
        }
    else if (H <= 0 && M < 45) {
        H = 23;
        M = 60 - (45 - M);
    }
    else {
        std::cout << "다시 입력하세요.";
    }

    std::cout << H << " " << M;
    return 0; 
}