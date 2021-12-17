// gh_18.10.2021.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
int sum_char() {
    unsigned char n;
    std::cin >> n;
    int count = 0;
    double sum = 0;
    for (n = 1; n <= 255; ++n) {
        sum += 1. / double(n * n);
        count += 1;
        if (n == 255) {
            break;
        }
    }
    std::cout << "sum: " << sum << std::endl;
    std::cout << "iteration: " << count << std::endl;
}

int sum_short() {
    unsigned short n;
    std::cin >> n;
    int count = 0;
    double sum = 0;
    for (n = 1; n <= SHRT_MAX; ++n) {
        sum += 1. / double(n * n);
        count += 1;
    }
    std::cout << "sum: " << sum << std::endl;
    std::cout << "iteration: " << count << std::endl;
}

int sum_int() {
    unsigned int n;
    std::cin >> n;
    int count = 0;
    double sum = 0;
    for (n = 1; n <= INT_MAX; ++n) {
        sum += 1. / double(n * n);
        count += 1;
    }
    std::cout << "sum: " << sum << std::endl;
    std::cout << "iteration: " << count;
}

void sum_long() {
    unsigned long n;
    std::cin >> n;
    int count = 0;
    double sum = 0;
    for (n = 1; n <= LONG_MAX; ++n) {
        sum += 1. / double(n * n);
        count += 1;
    }
    std::cout << "sum: " << sum << std::endl;
    std::cout << "iteration: " << count;
}

int sixteenth() {
    int x, ch, count = 0;
    std::string str;
    std::cin >> x;
    char arr[16] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };
    while (x > 0) {
        ch = x % 16;
        for (int i = 0; i <= 15; ++i) {
            if (ch == i) {
                str += arr[i];
                break;
            }
        }
        count += 1;
        x /= 16;
    }
    for (int i = count - 1; i >= 0; --i) {
        std::cout << str[i];
    }
}

//Day of the week
int main() {
    int day, mounth, year;
    std::cout << "Input date..." << std::endl;
    std::cout << "Day: ";
    std::cin >> day;
    std::cout << "Mounth: ";
    std::cin >> mounth;
    std::cout << "Year: ";
    std::cin >> year;
    int a = (14 - mounth) / 12;
    int y = year - a;
    int m = mounth + 12 * a - 2;
    int dw = (7000 + (day + y + y / 4 - y / 100 + y / 400 + 31 * m / 12));
    switch (dw % 7) {
       case 1:std::cout << "Mon"; break;
       case 2:std::cout << "Thu"; break;
       case 3:std::cout << "Wen"; break;
       case 4:std::cout << "Thr"; break;
       case 5:std::cout << "Fry"; break;
       case 6:std::cout << "Sat"; break;
      default:std::cout << "Sun";
    }
    std::cout << std::endl;
    return 0;
}
