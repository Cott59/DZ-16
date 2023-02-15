#include <iostream>
#include<cstdlib>
#include<ctime>

int main() {
	setlocale(LC_ALL, "Russian");
	
	const int n = 10;
	int arr[n];
	srand(time(NULL));
	int sum = 0;
	int counter = 0;
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 11;
		std::cout << arr[i] << ' ';
		sum += arr[i];
	}
	std::cout << "\n\n";
	std::cout << " Среднеарифметическое массива = " << (double)sum / n << '\n';
	double m = (double)sum / n;
	for (int i = 0; i < n; i++) {
		if (arr[i] < m)
			counter++;
	}
	std::cout <<' '<< counter << " элементов меньше среднего \n\n";

	const int a = 5;
	std::cout << " Массив 1 \n";
	int arr1[a][a];
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < a; j++) {
			arr1[i][j] = rand() % 11;

			std::cout << arr1[i][j] << '\t';
		}
		std::cout << '\n';
	}
	std::cout << '\n';
	std::cout << " Массив 2 \n";
	int arr2[a][a];
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < a; j++) {
			arr2[i][j] = rand() % 11;

			std::cout << arr2[i][j] << '\t';
		}
		std::cout << '\n';
	}
	std::cout << '\n';
	std::cout << " Массив 3 - суммарный \n";
	int arr3[a][a];
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < a; j++) {
			arr3[i][j] = arr1[i][j] + arr2[i][j];
			std::cout << arr3[i][j] << '\t';
		}
		std::cout << '\n';
	}
	std::cout << '\n';
	
	std::cout << " Задача 3 \n";
	int arr4[6];
	int r, d, del = 100000;
	std::cout << " Введите шестизначное число - ";
	std::cin >> r;
	if (r >= 100000 && r < 1000000) {
		for (int i = 0; i < 6; i++) {
			d = r / del;
			r %= del;
			del /= 10;
			arr4[i] = d;
			std::cout << arr4[i] << '\t';
		}
	}
	else
		std::cout << " Ошибка, неверное число! \n\n";
	std::cout << "\n\n";







	return 0;
}