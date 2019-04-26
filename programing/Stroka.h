#ifndef Stroka_H
#define Stroka_H
#pragma warning (disable : 4996)
#include <stdlib.h>
#include <iostream>
#include <sstream>
#include <string>
using namespace std;
class Stroka
{
protected:
	int len; // �����
	char *pCh; // ���������� ������ (������)
public:
	Stroka(int = 0); // ����������� �� ���������
	Stroka(char*); // ����������� � ������� ������ �� �������
	Stroka(const Stroka &); // ����������� � ������� ������ � ���������� ���� Stroka
	~Stroka();
	char & operator [] (int); // ����� ������� � ������ �� ��� �������	
	Stroka & operator = (const Stroka &); // ��������������� �������� ������������
	char* GetStr(void) { return pCh; } // ������� �� ������ (���������) ������
	int GetLen(void) { return len; } // ������� �� ������ (���������) ������
	void Show(void); // ������� ������
};
#endif Stroka_H