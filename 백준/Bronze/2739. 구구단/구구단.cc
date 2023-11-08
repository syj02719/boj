#include <iostream>

int main() {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    
    int N;
    int count = 1;
    std::cin >> N;

    while (count <= 9) {
        std::cout << N << " * " << count << " = " << N*count << "\n";
        count++;
    } 
    
    return 0; 
}