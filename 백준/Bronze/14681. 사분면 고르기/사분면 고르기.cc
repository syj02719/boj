#include <iostream>

int main() {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    
    int x, y;
    std::cin >> x; 
    std::cin >> y; 

    if (x > 0 && y > 0) {
        std::cout << "1";
    }
    else if (x < 0 && y > 0) {
        std::cout << "2";
    }
    else if (x < 0 && y < 0) {
            std::cout << "3";
        }
    else if (x > 0 && y < 0) {
        std::cout << "4";
    }
    else {
        std::cout << "다시 입력하세요.";
    }

    return 0; 
}