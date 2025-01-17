#include "Fraction.h"

int main() {
	setlocale(LC_ALL, "rus");
	
	try{
		std::cout << "������ ��������� ��������� � ������� �������������� �������� � �������� ���������.\n";
		//��� ����� �������������� ������: ������� ������� ����� �����, ������������ ������� � ����� �����, 0 � �����������.
		Fraction one;
		Fraction two;
		std::cout << "������� ��������� � ����������� ������ �����. ����� ����� ������� �������� ������� Enter.\n";
		std::cin >> one;
		std::cout << "������� ��������� � ����������� ������ �����. ����� ����� ������� �������� ������� Enter.\n";
		std::cin >> two;
		
		std::cout << "������ �����: \n" << one;
		std::cout << "������ �����: \n" << two;

		std::cout << "��������� �������� ������:\n" << one + two;
		std::cout << "��������� ��������� ������:\n" << one - two;
		std::cout << "��������� ��������� ������:\n" << one * two;
		std::cout << "��������� ������� ������:\n" << one / two;

		std::cout << "��������� ������:\n";
		std::cout << "������ ����� ����� ������?:\n" << (one == two) << "\n";
		std::cout << "������ ����� �� ����� ������?:\n" << (one != two) << "\n";
		std::cout << "������ ����� ������ ������?:\n" << (one > two) << "\n";
		std::cout << "������ ����� ������ ������?:\n" << (one < two) << "\n";
		std::cout << "������ ����� ������ ��� ����� ������?:\n" << (one >= two) << "\n";
		std::cout << "������ ����� ������ ��� ����� ������?:\n" << (one <= two) << "\n";
		std::cout << "����� �� ������ ����� ��������� ��������?:\n" << !(one) << "\n";
		std::cout << "����� �� ������ ����� ��������� ��������?:\n" << !(two) << "\n";

		std::cout << "��������� ������������ ���������� ������ �����:\n" << one++;
		std::cout << "��������� ����������� ���������� ������ �����:\n" << ++one;
		std::cout << "��������� ������������ ���������� ������ �����:\n" << two--;
		std::cout << "��������� ����������� ���������� ������ �����:\n" << --two;
	}
	catch (const std::domain_error &ex) {
		std::cerr << ex.what() << "\n";
	}
	catch (const std::invalid_argument &ex){
		std::cerr << ex.what() << "\n";
	}

	return 0;
}