﻿// Task 1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
	double vuraz, x = 0.0, y = 0.0, a = 0.0;

	cout << "Îáëàñòü âèçíà÷åíü x: áóäü ÿêå ÷èñëî" << endl;
	cout << "Îáëàñòü âèçíà÷åíü a: áóäü ÿêå ÷èñëî" << endl;
	cout << "Îáëàñòü âèçíà÷åíü y: áóäü ÿêå ÷èñëî îêð³ì 0" << endl;
	cout << "Область визначень x: будь яке число" << endl;
	cout << "Область визначень a: будь яке число" << endl;
	cout << "Область визначень y: будь яке число окрім 0" << endl;
	cout << " " << endl;

	cout << "Ââåä³òü çíà÷åííÿ õ: ";
	cout << "Введіть значення õ: ";
	cin >> x;

	cout << "Ââåä³òü çíà÷åííÿ y: ";
	cout << "Введіть значення y: ";
	cin >> y;

	cout << "Ââåä³òü çíà÷åííÿ a: ";
	cout << "Введіть значення a: ";
	cin >> a;
	cout << " " << endl;

	if (y != 0)
	{
		vuraz = ((y * y - x) / (x * x - y + 1)) - ((a * a - x + 2)) / (x * x - exp(x) - 2);
		cout << "Çíà÷åííÿ âèðàçó = " << vuraz << endl;
		cout << "Значення виразу = " << vuraz << endl;
	}
	else
	{
		cout << "Âè ââåëè y=0, ïîðóøåíî óìîâó" << endl;
		cout << "Ви ввели y=0, порушено умову" << endl;
		exit;
	}
}
}
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