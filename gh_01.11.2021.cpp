// g.h_01.11.2021.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
//Представление двумерного массива одномерным
int main()
{
    const int n = 4, m = 5;
    int A[n * m];
    for (int i = 0;i<n;++i) {
        for (int j = 0;j<m;++j) {
            A[i * m + j] = i + j;
        }
    }
    std::cout << "Matrix = " << std::endl;
    for (int i = 0;i<n;++i) {
        for (int j = 0;j<m;++j) {
            std::cout << A[i * m + j]<<" ";
        }
        std::cout << std::endl;
    }
    return 0;
}
