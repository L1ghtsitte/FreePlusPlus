#include <iostream> 

int main()
{
//    if (УСЛОВИЕ)
//    {
//        // body if
//    }

    int if_a = 10;

    if (if_a > 5)
    {
        std::cout << "if_a больше 5" << std::endl;
    }

    if (if_a > 20)
    {
        std::cout << "if_a больше 20" << std::endl;
    }

    bool if_b = true;

    if (if_b)
    {
        std::cout << "if_b истина" << std::endl;
    }

    int if_c = 0; // false

    if (if_c)
    {
        std::cout << "не выведется" << std::endl;
    }

    int if_d = 42;

    if (if_d)
    {
        std::cout << "выведся, так как не 0" << std::endl;
    }

    int if_e = 15;

    if (if_e > 10 && if_e < 20)
    {
        std::cout << "if_e в диапозоне 10-20" << std::endl;
    }

    if(if_e < 5 || if_e > 10)
    {
        std::cout << "if_e меньше 5 илил больше 10" << std::endl;
    }

    int if_f = 5;

    if (if_f > 100) 

    std::cout << "положительное" << std::endl;
    std::cout << "это уже не if" << std::endl;

    int x = 3;

    if (x = 5) // == 
    {
        // x = 5;
        x++;
    }

    // Задание к уроку 3

    // Напиши программу которая:

    // 1. Считывает целое число с клавиатуры
    // 2. Если число больше 100 - выводит "большое"
    // 3. Если число кратно 7 - выводит "кратно семи"
    // 4. Если число равно нулю - выводит "ноль"

    // Подсказка: три отдельных if. Число может подходить под несколько условий сразу.

}