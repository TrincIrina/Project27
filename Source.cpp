#include<iostream>
#include<Windows.h>
using namespace std;

//Класс описывающий окружность
class Circle {
private:
	const double pi = 3.14;
	double r;
public:
	//Конструкторы
	Circle() { r = 0; }
	Circle(double r) { this->r = r;	}
	//getters & setters
	double get_r() { return r; }
	void set_r(double r) { this->r = r; }
	//метод ввода
	void input_r() {
		cout << "Введите радиус окружности: "; cin >> r;
	}
	//метод вывода
	void print() {
		cout << "R = " << r << endl;
	}
	//метод нахождеия длины окружности
	double length_circle() {
		return 2 * pi * r;
	}
	//метод нахождения площади круга
	double square_circle() {
		return pi * r * r;
	}
};

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//Применение класса "Окружность"
	Circle A;
	A.input_r();
	cout << "Длина окружности равна - " << A.length_circle() << endl;
	cout << "Площадь круга равна - " << A.square_circle() << endl << endl;
	Circle B(25);
	B.print();
	cout << "Площадь круга равна " << B.square_circle() << endl;
	B.set_r(13);
	cout << "Длина окружности равна с радиусом " << B.get_r() << " равна - " << B.length_circle() << endl;
}