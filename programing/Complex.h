#ifndef Complex_H
#define Complex_H
#include "Stroka.h"
class Complex :public Stroka{
public:
	Complex(int = 0); // ����������� �� ���������
	Complex(char*); // ����������� � ������� �� ������ �� �������
	bool friend operator == (const Complex&, const Complex&); // ��������������� ��������� ���������
	friend Complex operator + (const Complex&, const Complex&); // ��������������� ��������� �������� ���� ����������� �����
	~Complex(); // ����������
	friend Complex operator + (const Complex&, const char*); // ��������������� ��������� �������� ������������ ����� � ������
};
#endif Complex_H