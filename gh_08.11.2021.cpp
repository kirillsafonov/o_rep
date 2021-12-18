// gh_08.11.2021.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
//Формирование и заполнение одномерного динамического массива
int main() {
	srand(time(NULL));
	int size;
	std::cout << "Input size: ";
	std::cin >> size;
	int* arr = new int[size];
	for (int i = 0;i<size;++i) {
		arr[i] = rand() % 10;
	}
	for (int i = 0;i<size;++i) {
		std::cout << arr[i] << " ";
	}
	delete [] arr;
	return 0;
}

//Формирование и заполнение одномерного динамического массива с ячейки, указанной пользователем
int main() {
	srand(time(NULL));
	int size;
	std::cout << "Input size: ";
	std::cin >> size;
	int* arr = new int[size];
	int x;
	std::cout << "Input x: ";
	std::cin >> x;
	for (int i = x-1;i < size;++i) {
		arr[i] = rand() % 10;
	}
	for (int i = 0;i < size;++i) {
		std::cout << arr[i] << " ";
	}
	delete[] arr;
	return 0;
}

//Формирование и заполнение двумерного динамического массива
int main() {
	srand(time(NULL));
	int rows, cols;
	std::cout << "Input rows: ";
	std::cin >> rows;
	std::cout << "Input cols ";
	std::cin >> cols;
	int** arr = new int* [rows];
	for (int i = 0;i<rows;++i) {
		arr[i] = new int[cols];
	}
	for (int i = 0;i<rows;++i) {
		for (int j = 0;j<cols;++j) {
			arr[i][j] = rand() % 10;
	   }
	}
	for (int i = 0;i<rows;++i) {
		for (int j = 0;j<cols;++j) {
			std::cout << arr[i][j] << "   ";
		}
		std::cout << std::endl;
	}
	for (int i = 0;i<rows;++i) {
		delete[]arr[i];
	}


	delete[] arr;
}

//Заполнение двумерного динамического массива по спирали
int pospirali(int** arr, int rows, int cols, int a) {
	for (int i = 0; i < cols / 2 + 1;++i) {
		for (int j = 0;j<cols-i;++j) {
			arr[i][j] = ++a;
		}
		for (int d = i + 1;d<cols-i;++d) {
			arr[d][cols - i - 1] = ++a;
		}
		for (int j = cols - i - 2;j>=i;--j) {
			arr[cols - i - 1][j] = ++a;
		}
		for (int d = cols - i - 2;d>i;--d) {
			arr[d][i] = ++a;
		}
	}
}

//Заполнение двумерного динамического массива змейкой
int zmeikoy(int** arr, int rows, int cols, int a) {

		for (int i = 0; i < rows; ++i) {
			if (i % 2 == 0) {
				for (int j = 0; j < cols; ++j) {
					arr[i][j] = ++a;
				}
			}
			if (i % 2 != 0) {
				for (int j = cols - 1; j >= 0; --j) {

					arr[i][j] = ++a;
				}
			}
		}
	}
}