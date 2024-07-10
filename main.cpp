#include <iostream>

void evenDigits(long long number, int &answer) {
    if (number % 2 == 0) {
        answer++;
    }
    if (number / 10 == 0) {
        return ;
    }
    number /= 10;
    evenDigits(number, answer);
}

int main() {
    int answer = 0;
    evenDigits(9223372036854775806, answer);
    std::cout << answer;

    return 0;
}
