﻿// Tasr 3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{

    float a;
    float z1, z2;

    std::cout << "Введіть значення а:";
    std::cin >> a;


    z1 = cos(a) + cos(2 * a) + cos(6 * a) + cos(7 * a);      /* result is z = 1.83823 */
    std::cout << "Значення першого виразу:" << z1 << endl;

    z2 = 4 * cos(a / 2) * cos(5 * a / 2) * cos(4 * a);     /* result is z = 1.83823 */
    std::cout << "Значення другого виразу:" << z2 << endl;

    return 0;
}
// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.