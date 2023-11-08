#include <iostream>

int main() {
    std::ios::sync_with_stdio(0); // std::를 사용해야 합니다.
    std::cin.tie(0);
    
    int A, B;
    std::cin >> A >> B; // >> 연산자를 사용하여 변수 A와 B에 값을 입력받아야 합니다.
    if (A > B) {
        std::cout << ">"; // ">"를 출력할 때는 따옴표 안에 넣어야 합니다.
    }
    else if (A < B) {
        std::cout << "<"; // "<"를 출력할 때는 따옴표 안에 넣어야 합니다.
    }
    else {
        std::cout << "=="; // "=="를 출력할 때는 따옴표 안에 넣어야 합니다.
    } 

    return 0; // main 함수의 반환값을 명시해야 합니다.
}
