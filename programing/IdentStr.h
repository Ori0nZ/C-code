#ifndef IdentStr_H
#define IdentStr_H
#include "Stroka.h"
class IdentStr : public Stroka
{
public:
	IdentStr(int = 0); // ����������� �� ���������
	IdentStr(char ch); // ����������� � ������� ������ � ����� ��������
	IdentStr(char*); // ����������� � ������� ������ �� �������
	IdentStr(const IdentStr &); // ����������� � ������� ������ � ���������� ���� IdentStr
	~IdentStr(); // ����������
	bool friend operator == (const IdentStr&, const IdentStr&); // ��������������� ��������� ���������
	IdentStr & operator = (const IdentStr &); // ��������������� ��������� ������������
	int & operator () (char); // ����� ������� �������� � ������ �� �������
	//char operator [] (int);
};
#endif IdentStr_H