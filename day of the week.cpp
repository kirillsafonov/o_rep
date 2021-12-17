// Age in days.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
//Day of the week
int main() {
	int day, mounth, year;
	std::cout << "Input date..."<<std::endl;
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
	switch(dw % 7) {
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
