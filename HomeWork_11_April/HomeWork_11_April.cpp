//1. От 1 до n.
//Дано натуральное число n.Выведите все числа от 1 до n.
//Ввод: 5
//Вывод : 1 2 3 4 5

//#include <iostream>
//
//using namespace std;
//
//void fun(int m)
//{
//	if (m == 1)
//	{
//		cout << m << " ";
//		return;
//	}
//	else
//	{
//		fun(m - 1);
//		cout << m << " ";
//	}
//}
//
//int main()
//{
//	fun(5);
//}
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
//void between(int A, int B)
//{
//	
//	if (A == B)
//		{
//			cout << A << " ";
//			return;
//		}
//	else if(A < B)
//		{
//		between(A , B-1);
//			cout << B << " ";
//		}
//	else if (A > B)
//	{
//		between(A, B+1);
//		cout << B << " ";
//		
//	}
//		
//}
//int main()
//{
//	between(1, 6);
//	cout << "\n";
//	between(8,1);
//}

	//3. Точная степень двойки.
	//Дано натуральное число N.Выведите слово YES, если число N является точной степенью двойки,
	//  или слово NO в противном случае.
	//Операцией возведения в степень пользоваться нельзя!
	//Ввод : 3 8
	//Вывод : NO YES

//#include <iostream>
//
//using namespace std;
//
//void fun(int m, int i)
//{
//	if (m == 2 && i == 1)
//	{
//		//cout << m << " ";
//		cout << "YES";
//		return ;
//	}
//	else if (m % 2 != 0 && i != 1)
//	{
//		cout << "NO";
//		return;
//	}
//	else
//	{
//		fun(m / 2, i - 1);
//		//cout << m << " ";
//	}
//}
//
//int main()
//{
//	fun(16, 4);
//	cout << "\n";
//	fun(15, 4);
//	cout << "\n";
//	fun(16, 3);
//	cout << "\n";
//	int a, b;
//	cin >> a >> b;
//	fun(a, b);
//}

	//4. Сумма цифр числа.
	//Дано натуральное число N.Вычислите сумму его цифр.
	//При решении этой задачи нельзя использовать строки, списки, массивы, 
	// глобальные переменные(ну и циклы, разумеется).
	//Ввод : 179
	//Вывод : 17

//#include <iostream>
//using namespace std;
//int sum;
//void summa(int num)
//{
//	int local = sum;
//	int dig=0;
//	if (num < 10)
//	{
//		sum = sum + num % 10;;
//		cout << sum;
//		return;
//	}
//	else
//	{
//		dig = num % 10;
//		sum += dig;
//		summa( num / 10);
//	}
//}
//int main()
//{
//	int n;
//	cin >> n;
//	summa(n);
//}


	//5. Цифры числа справа налево.
	//Дано натуральное число N.Выведите все его цифры по одной, в обратном порядке,
	//  разделяя их пробелами.
	//При решении этой задачи нельзя использовать строки, списки, массивы(ну и циклы, разумеется).
	// Разрешена только рекурсия и целочисленная арифметика.
	//Ввод : 179
	//Вывод : 9 7 1
	 
//#include <iostream>
//using namespace std;
//
//void summa(int num)
//{
//	int dig = 0;
//	if (num < 10)
//	{
//		cout << num << " ";
//		return;
//	}
//	else
//	{
//		dig = num % 10;
//		cout << dig << " ";
//		summa(num / 10);
//	}
//}
//int main()
//{
//	int n;
//	cin >> n;
//	summa(n);
//}
	
	//6. Цифры числа слева направо.
	//Дано натуральное число N.Выведите все его цифры по одной, в обычном порядке, разделяя их 
	// пробелами или новыми строками.
	//При решении этой задачи нельзя использовать строки, списки, массивы(ну и циклы, разумеется).
	// Разрешена только рекурсия и целочисленная арифметика.
	//Ввод : 179
	//Вывод : 1 7 9

//#include <iostream>
//using namespace std;
//
//void rev(int n)
//{
//	if (n > 0)
//	{
//		int mod = n % 10;
//		n = n / 10;
//		rev(n);
//		cout << mod << " ";
//	}
//}
//int main()
//{
//	int n;
//	cin >> n;
//	rev(n);
//}

// 1. Пузырьки
//#include <iostream>
//#include <Windows.h>
//#include <time.h>
//#include <algorithm>
//
//using namespace std;
//
//template <typename T1>

//void Bubble(T1 arr[], const int SIZE)
//{
//	int num = 0;
//	for (int i = 0; i < SIZE - 1; i++)
//	{
//		for (int j = SIZE - 1; j > i; j--)
//		{
//			if (arr[j] < arr[j - 1])
//			{
//				num = arr[j - 1];
//				arr[j - 1] = arr[j];
//				arr[j] = num;
//			}
//		}
//	}
//}
//
//int main()
//{
//	srand(time(0));
//	const int SIZE = 20;
//	int arr[SIZE];
//	for (int i = 0; i < SIZE; i++)
//	{
//		arr[i] = rand() % 21;
//		cout << arr[i] << ", ";
//	}
//	cout << endl;
//	Bubble(arr, SIZE);
//	
//	for (int i = 0; i < SIZE; i++)
//	{
//	cout << arr[i] << ", ";
//	}
//}

//2. Insert
//
//#include <iostream>
//#include <Windows.h>
//#include <time.h>
//#include <algorithm>
//
//using namespace std;
//
//template <typename T1>
//void Insert(T1 arr[], const int SIZE)
//{
//	T1 num = 0;
//	for (int i = 0; i < SIZE; i++)
//	{
//		num = arr[i];
//		for (int j = i - 1; j >= 0 && arr[j] > num; j--)
//		{
//			arr[j + 1] = arr[j];
//			arr[j] = num;
//		}
//	}
//}
//
//int main()
//{
//	srand(time(0));
//
//	const int SIZE = 20;
//	int arr[SIZE];
//
//	for (int i = 0; i < SIZE; i++)
//	{
//		arr[i] = rand() % 26 + (-5);
//		cout << arr[i] << ", ";
//	}
//
//	Insert(arr, SIZE);
//	cout << endl;
//
//	for (int i = 0; i < SIZE; i++)
//	{
//		cout << arr[i] << ", ";
//	}
//}

//3. Choice
//
//#include<iostream>
//#include<Windows.h>
//#include<time.h>
//#include<algorithm>
//
//using namespace std;
//
//template <typename T1>
//
//void choice(T1 arr[], const int SIZE)
//{
//	sort(arr, arr + SIZE);
//}
//
//int main()
//{
//	srand(time(0));
//	const int SIZE = 20;
//	int arr[SIZE];
//	for (int i = 0; i < SIZE; i++)
//	{
//		arr[i] = rand() % 25 - 10;
//		cout << arr[i] << ", ";
//	}
//
//	choice(arr, SIZE);
//	cout << endl;
//
//	for (int i = 0; i < SIZE; i++)
//	{
//		cout << arr[i] << ", ";
//	}
//}
//
