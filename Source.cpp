#include<iostream>
#include<Windows.h>
using namespace std;

//����� ����������� ����������
class Circle {
private:
	const double pi = 3.14;
	double r;
public:
	//������������
	Circle() { r = 0; }
	Circle(double r) { this->r = r;	}
	//getters & setters
	double get_r() { return r; }
	void set_r(double r) { this->r = r; }
	//����� �����
	void input_r() {
		cout << "������� ������ ����������: "; cin >> r;
	}
	//����� ������
	void print() {
		cout << "R = " << r << endl;
	}
	//����� ��������� ����� ����������
	double length_circle() {
		return 2 * pi * r;
	}
	//����� ���������� ������� �����
	double square_circle() {
		return pi * r * r;
	}
};

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//���������� ������ "����������"
	Circle A;
	A.input_r();
	cout << "����� ���������� ����� - " << A.length_circle() << endl;
	cout << "������� ����� ����� - " << A.square_circle() << endl << endl;
	Circle B(25);
	B.print();
	cout << "������� ����� ����� " << B.square_circle() << endl;
	B.set_r(13);
	cout << "����� ���������� ����� � �������� " << B.get_r() << " ����� - " << B.length_circle() << endl;
}