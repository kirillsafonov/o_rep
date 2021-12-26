#include <iostream>
//Умножение матрицы на число
int** multMatrix(int** A, int row, int column, int number) {
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            A[i][j] *= number;
        }
    }
    return A;
}

//Перестановка строк с зависимыми элементами
int exLin(int arr[], int rows, int cols, int a, int b) {
    int tmp;
    for (int j = 0; j < cols; ++j) {
        tmp = arr[(a - 1) * cols + j];
        arr[(a - 1) * cols + j] = arr[(b - 1) * cols + j];
        arr[(b - 1) * cols + j] = tmp;
    }
    return 0;
}

//Вывод шестнадцетиричного числа заданного размера
int main() {
    srand(time(NULL));
    int n;
    std::cout << "Input n: ";
    std::cin >> n;
    char hx[16] = { '0', '1', '2', '3', '4', '5', '6','7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', };
    char* hxn = new char[n];
    for (int i = 0;i < n;++i) {
        hxn[i] = hx[rand() % 16];
        std::cout << hxn[i];
    }
    delete[]hxn;
}

//Перестановка столбцов с зависимыми элементами
int exCol(int arr[], int rows, int cols, int a, int b) {
    int tmp;
    for (int i = 0; i < rows; ++i) {
        tmp = arr[i * cols + a-1];
        arr[i * cols + a-1] = arr[i * cols + b-1];
        arr[i * cols + b-1] = tmp;
    }
    return 0;
}
