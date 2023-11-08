#include <iostream>

int main() {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    
    int N;
    std::cin >> N;
    int count = N / 4;

    for (int i = 1; i < count+1; i++) {
        std::cout << "long ";
    }
    std::cout << "int";

    return 0; 

}