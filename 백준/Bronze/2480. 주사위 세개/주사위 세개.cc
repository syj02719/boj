#include <iostream>

int main() {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    
    int A, B, C;
    int max, price;
    std::cin >> A >> B >> C;

    if (A == B && B == C) {
        price = 10000 + A * 1000;
    }
    else if (A == B || A == C) {
        price = 1000 + A * 100;
    }
    else if (B == C) {
        price = 1000 + B * 100;
    }
    else {
        if (A > B && B > C) {
            max = A;
        }
        else if (B > A && B > C) {
            max = B;
        }
        else if (A > B && B < C) {
            if (A > C) {
                max = A;
            }
            else if (C > A) {
                max = C;
            }
            else if (A == C) {
                price = 1000 + A * 100;
            }
        }
        else if (B > A && A < C) {
            if (B > C) {
                max = B;
            }
            else if (C > B) {
                max = C;
            }
            else if (B == C) {
                price = 1000 + B * 100;
            }
        }
        price = max * 100;
        
    }

    

    std::cout << price;
    return 0; 
}
