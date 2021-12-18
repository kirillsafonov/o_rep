// gh_25.10.2021.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
//Целочисленный статический массив
int compare(const void* a, const void* b) {
    const int* x = (int*)a;
    const int* y = (int*)b;

    if (*x > *y) {
        return 1;
    }
    else if(*x<*y){
        return -1;
    }
    return 0;
}
int main()
{
    const int n = 9;
    int arr[n];
    int sum = 0;
    
    for (int i = 0;i<n;++i) {     //инициализация массива
        arr[i] = rand() % 10;
    }
    int min = arr[0];
    std::cout << "Massive: "<<std::endl;   //вывод массива на экран
    for (int i = 0;i < n;++i) {
        std::cout << i + 1 << ".  "; //номер элемента
        sum += arr[i];
        std::cout << arr[i]<<" ";
        std::cout << std::endl;
        if (arr[i]<min) {
            min = arr[i];
        }
    }
    std::cout << "Minimal element: " << min << std::endl; //минимальный элемент массива
    std::cout << "Arithmetic mean: " << (double)sum / (double)n<<std::endl; //среднее арифметическое элементов
    std::cout << "Reverse massive: " << std::endl;   //вывод элементов в обратном порядке
    for (int i = n-1;i != -1;--i) {
        std::cout << arr[i] << " ";
        std::cout << std::endl;
    }
    qsort(arr, n, sizeof(int), compare);
    std::cout << "New massive: " << std::endl;  //массив с элементами упорядоченными по возрастанию
    for (int i = 0;i < n;++i) {
        std::cout << i + 1 << ".  "; 
        std::cout << arr[i] << " ";
        std::cout << std::endl;
    }


}

//16-й массив
int main() {
    srand(time(NULL));
    int n;
    std::cout << "Input n: ";
    std::cin >> n;
    char hx[16] = { '0', '1', '2', '3', '4', '5', '6','7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', };
    char* hxn = new char[n];
    for (int i = 0;i<n;++i) {
        hxn[i] = hx[rand()%16];
        std::cout << hxn[i];
    }
    delete[]hxn;
}

//Двумерный статический массив
int main() {
    srand(time(NULL));
    const int rows = 4;
    const int cols = 6;
    int matrix[rows][cols];
    for (int i = 0;i<rows;++i) {
        for (int j = 0;j<cols;++j) {
            matrix[i][j] = rand() % 10;
        }
    }
    std::cout << "Matrix: " << std::endl;
    for (int i = 0;i<rows;++i) {
        for (int j = 0;j<cols;++j) {
            std::cout << matrix[i][j]<<"   ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
    std::cout << "Matrix(reverse rows): " << std::endl;
    for (int i = rows-1;i >-1;--i) {
        for (int j = 0;j < cols;++j) {
            std::cout << matrix[i][j] << "   ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
    std::cout << "Matrix(reverse cols): " << std::endl;
    for (int i = 0;i < rows;++i) {
        for (int j = cols-1;j>-1;--j) {
            std::cout << matrix[i][j] << "   ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
    std::cout << "Matrix(transposition): " << std::endl;
    for (int i = 0;i < cols;++i) {
        for (int j = 0;j < rows;++j) {
            std::cout << matrix[j][i] << "   ";
        }
        std::cout << std::endl;
    }

}