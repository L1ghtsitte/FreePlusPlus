#include <iostream>

int main ()
{
    int a = 10;
    int b = 3;

    int sum = a + b; // 13
    std::cout << sum << std::endl;
    int diff = a - b; // 7
    std::cout << diff << std::endl;
    int mul = a * b; // 30
    std::cout << mul << std::endl;
    int div = a / b; // 3
    std::cout << div << std::endl;
    int mod = a % b; // 1
    std::cout << mod << std::endl;  

    int x = 7;
    int y = 2;

    int r1 = x / y; // 3
    std::cout << r1 << std::endl;
    float r2 = (float)x / y; // 3.5
    std::cout << r2 << std::endl;
    double r3 = 7.0 / 2; // 3.5
    std::cout << r3 << std::endl;

    int r4 = 17 % 5; // 2, 17 = 5 * 3 + 2
    std::cout << r4 << std::endl;
    int r5 = 10 % 2; // 0 
    std::cout << r5 << std::endl;
    int r6 = 3 % 7; // 3 
    std::cout << r6 << std::endl;

    int w1 = 5;
    int w2 = 10;

    bool w3 = (w1 == w2); // false / 0, (5 == 10)
    std::cout << w3 << std::endl;
    bool w4 = (w1 != w2); // true / 1, (5 != 10)
    std::cout << w4 << std::endl;
    bool w5 = (w1 > w2); // false / 0, (5 > 10)
    std::cout << w5 << std::endl;
    bool w6 = (w1 < w2); // true / 1, (5 < 10)
    std::cout << w6 << std::endl;
    bool w7 = (w1 >= w2); // flase / 0, (5 >= 10)
    std::cout << w7 << std::endl;
    bool w8 = (w1 <= w2); // true / 1, (5 <= 10)
    std::cout << w8 << std::endl;

    int w9 = 10;

    w9 = 3;
    std::cout << w9 << std::endl;
    w9 == 10; // false / 0

    int age = 20;
    bool has_ticket = true;

    bool q1 = (age >= 18) && has_ticket; // true / 1
    std::cout << q1 << std::endl;
    bool q2 = (age >= 18) && !has_ticket; // false / 0
    std::cout << q2 << std::endl;
    bool q3 = (age <= 18) && has_ticket; // false / 0
    std::cout << q3 << std::endl;

    int score = 45;

    bool q4 = (score >= 50) || (score == 45); // true / 1
    std::cout << q4 << std::endl;
    bool q5 = (score >= 90) || (score <= 10); // false / 0
    std::cout << q5 << std::endl;

    bool is_online = false;

    bool q6 = !is_online; // true / 1
    std::cout << q6 << std::endl;
    bool q7 = !!is_online; // false / 0
    std::cout << q7 << std::endl;


    int q8 = 6 & 3; // 2, 0110 & 0011 = 0010
    std::cout << q8 << std::endl;

    int q9 = 6 | 3; //7, 0110 | 0011 = 0111
    std::cout << q9 << std::endl;

    int q10 = 6 ^ 3; // 5, 0110 ^ 0011 = 0101
    std::cout << q10 << std::endl;

    int q11 = ~6; // -7, 00000000 00000000 00000000 00000110 = 11111111 11111111 11111111 11111001 
    std::cout << q11 << std::endl;

    int sd1 = 6 << 1; // 12, 0110 << 1 = 1100 
    std::cout << sd1 << std::endl;

    int sd2 = 6 >> 1; // 3, 0110 >> 1 = 0011
    std::cout << sd2 << std::endl;

    int sd3 = 1 << 4; // 16, 0000 0001 << 4 = 0001 0000
    std::cout << sd3 << std::endl;

    int sd4 = 1 << 8; // 256, 0000 0000 0001 << 8 = 0001 0000 0000
    std::cout << sd4 << std::endl;


    int f1 = 7;
    int f2 = 9;
    int f3 = 3;
    int f4 = 5;
    int f5 = 17;

    f1 += 3; // f1 = f1 + 3, = 10
    std::cout << f1 << std::endl;
    f2 -= 4; // f2 = f2 - 4, = 5
    std::cout << f2 << std::endl;
    f3 *= 2; // f3 = f3 * 2, = 6
    std::cout << f3 << std::endl;
    f4 /= 2; // f4 = f4 / 2, = 2
    std::cout << f4 << std::endl;
    f5 %= 5; // f5 = f5 % 5, = 2
    std::cout << f5 << std::endl;

    int f6 = 6;

    f6 &= 3; // f6 = f6 & 3, = 2
    std::cout << f6 << std::endl;

    f6 |= 5; // f6 = f6 | 5, = 7
    std::cout << f6 << std::endl;

    f6 ^= 1; // f6 = f6 ^ 1, = 6
    std::cout << f6 << std::endl;

    f6 <<= 2; // f6 = f6 << 2, = 24
    std::cout << f6 << std::endl;

    f6 >>= 1; // f6 = f6 >> 1, = 12
    std::cout << f6 << std::endl;

    int y1 = 5;

    y1++; // = 6, y1 = y1 + 1
    ++y1; // = 7, y1 = y1 + 1
    y1--; // = 6, y1 = y1 - 1
    --y1; // = 5, y1 = y1 - 1

    int y2 = 5;
    int y3 = ++y2; // = 6
    std::cout << y2 << ' ' << y3 << std::endl;

    int y4 = 5;
    int y5 = y4++; // = 5
    std::cout << y4 << ' ' << y5 << std::endl;

    int y6 = 10;
    int y7 = --y6; // = 9
    std::cout << y6 << ' ' << y7 << std::endl;

    int y8 = 10;
    int y9 = y8--; // = 10
    std::cout << y8 << ' ' << y9 << std::endl;

    const float PI = 3.14159265;
    constexpr double GRAVITY = 9.81;
    constexpr int MAX_PLAYER = 8;


}