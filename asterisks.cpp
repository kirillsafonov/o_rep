// asterisks1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
//Asterisks_4
int main() {
    int n;
    do {
        std::cout << "Input odd n:";
        std::cin >> n;
    } while (n % 2 == 0);
    int x = 1;
    while (x <= (double)(n + 1) / 2.) {
        for (int i = (n - (x * 2 - 1)) / 2;i > 0;i-=1) {
            std::cout << " ";
        }
        for (int i = 1;i <= x * 2 - 1;++i) {
            std::cout << "*";
        }
        std::cout << std::endl;
        ++x;
    }
    x = (n-1)/2;
    while (x > 0) {
        for (int i = 1;i<=(n+1)/2-x;++i) {
            std::cout << " ";
        }
        for (int i =0;i < x*2-1;++i) {
            std::cout << "*";
        }
        std::cout << std::endl;
        x -= 1;
    }
}

//Asterisks_3
int main() {
    int n;
    std::cout << "Input n:";
    std::cin >> n;
    int x=1;
    while (x<=n) {
        for (int i =n-x;i>0;i-=1) {
            std::cout <<" ";
        }
        for (int i = 1;i<=x;++i) {
            std::cout << "*";
        }
        std::cout << std::endl;
        ++x;
    }
}

//Asterisks_2
int main() {
    int n;
    std::cout << "Input n:";
    std::cin >> n;
    int x = 1;
    while (x<=n) {
        for (int i=n-x+1;i>0;i-=1) {
            std::cout << "*";
        }
        std::cout << std::endl;
        ++x;
    }

}

//Asterisks_1
int main()
{
    int n;
    std::cout << "Input n:";
    std::cin >> n;
    int x = 1;
    while (x <= n) {
        for (int i = 1;i<=x;++i) {
            std::cout << "*";
        }
        std::cout << std::endl;
        ++x;
    }
}
