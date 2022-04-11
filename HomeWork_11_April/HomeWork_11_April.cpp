﻿//1. От 1 до n.
//Дано натуральное число n.Выведите все числа от 1 до n.
//Ввод: 5
//Вывод : 1 2 3 4 5

#include <iostream>

using namespace std;

void fun(int m)
{
	if (m == 1)
	{
		cout << m << " ";
		return;
	}
	else
	{
		fun(m - 1);
		cout << m << " ";
	}
}

int main()
{
	fun(5);
}
	/*int n;
	cout << "Enter number\n";
	cin >> n;
	if (n > 0) fun(n);*/
//}

//2. От A до B.
//Даны два целых числа A и В.Выведите все числа от A до B включительно, в порядке возрастания, 
// если A < B, или в порядке убывания в противном случае.
//Ввод : 5 1
//Вывод : 5 4 3 2 1

//#include <iostream>
//
//using namespace std;
//int A = 5;
//int main()
//{
//	int local = A;
//	cout << A << endl;
//	A--;
//	int B = 1;
//	if (A < B) return B;
//	main();
//}

	//3. Точная степень двойки.
	//Дано натуральное число N.Выведите слово YES, если число N является точной степенью двойки,
	//  или слово NO в противном случае.
	//Операцией возведения в степень пользоваться нельзя!
	//Ввод : 3 8
	//Вывод : NO YES

	//4. Сумма цифр числа.
	//Дано натуральное число N.Вычислите сумму его цифр.
	//При решении этой задачи нельзя использовать строки, списки, массивы, 
	// глобальные переменные(ну и циклы, разумеется).
	//Ввод : 179
	//Вывод : 17

	//5. Цифры числа справа налево.
	//Дано натуральное число N.Выведите все его цифры по одной, в обратном порядке,
	//  разделяя их пробелами.
	//При решении этой задачи нельзя использовать строки, списки, массивы(ну и циклы, разумеется).
	// Разрешена только рекурсия и целочисленная арифметика.
	//Ввод : 179
	//Вывод : 9 7 1
	 
	
	//6. Цифры числа слева направо.
	//Дано натуральное число N.Выведите все его цифры по одной, в обычном порядке, разделяя их 
	// пробелами или новыми строками.
	//При решении этой задачи нельзя использовать строки, списки, массивы(ну и циклы, разумеется).
	// Разрешена только рекурсия и целочисленная арифметика.
	//Ввод : 179
	//Вывод : 1 7 9