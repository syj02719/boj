#include <iostream>

int main() {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    
    int A, B;

    while (true) {
        std::cin >> A >> B; // 입력 연산자는 ">>"가 아닌 "<<"입니다.
        if (A == 0 && B == 0) {
            break; // A와 B가 모두 0이면 반복문을 종료합니다.
        }
        std::cout << A + B << "\n"; // 출력 연산자는 "<<"입니다.
    }

    return 0; 

}
