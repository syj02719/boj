#include <iostream>

int main() {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    
    int n;
    int count = 0;
    std::cin >> n;

    for (int i = 1; i <= n; i++) {
        count = count + i;
    } 
    
    std::cout << count;
    return 0; 

}