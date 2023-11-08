#include <iostream>

int main() {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    
    int X, N, a, b;
    std::cin >> X;
    std::cin >> N;
    int price = 0;

    for (int i = 1; i <= N; i++) {
        std::cin >> a >> b;
        price += a * b;
    }
 
    if ( X == price ) {
        std::cout << "Yes";
    }
    else {
       std::cout << "No";
    }

    return 0; 

}