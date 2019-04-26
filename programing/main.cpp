//
//  main.cpp
//  programing
//
//  Created by RACA HAMA on 25/04/2019.
//  Copyright © 2019 RACA HAMA. All rights reserved.
//
#include "Stroka.h"
#include "IdentStr.h"
#include "Complex.h"
int main()
{
    setlocale(LC_ALL, "rus");
    Complex obj1("1i1");
    Complex obj2("13i14");
    Complex obj;
    bool b = (obj1 == obj2);
    cout << b << endl;
    obj = obj1 + obj2;
    
    cout << "–ÂÁÛÎ¸Ú‡Ú ÒÎÓÊÂÌËˇ: " << obj.GetStr() << endl << endl;
    int n;
    cout << "¬‚Â‰ËÚÂ ÍÓÎË˜ÂÒÚ‚Ó ÍÓÏÔÎÂÍÒÌ˚ı ˜ËÒÂÎ:" << endl;
    cin >> n;
    Stroka **array = new Stroka *[n];
    Complex obj3("0i0");
    for (int i(0); i < n; i++)
    {
        char* a = new char[100];
        cin >> a;
        array[i] = new Complex(a);
        delete[] a;
        obj3 = obj3 + *(Complex*)array[i];
    }
    cout << "ÒÛÏÏ‡ ˝Î-ÚÓ‚:" << obj3.GetStr() << endl << endl;
    cout << "¬‚Â‰ËÚÂ ÍÓÎË˜ÂÒÚ‚Ó ÒÚÓÍ:" << endl;
    cin >> n;
    Stroka **array1 = new Stroka *[n];
    for (int i(0); i < n; i++)
    {
        cout << "\n¬‚Â‰ËÚÂ ÒÚÓÍÛ: " << endl;
        char* a = new char[100];
        cin >> a;
        array1[i] = new IdentStr(a);
        delete[] a;
        char b;
        cout << "¬‚Â‰ËÚÂ cËÏ‚ÓÎ: " << endl;
        cin >> b;
        int d = (*(IdentStr*)array1[i])(b);
        cout << "»Ì‰ÂÍÒ ÒËÏ‚ÓÎ‡ " << b << ": " << d << endl;
        int index;
        cout << "¬‚Â‰ËÚÂ ËÌ‰ÂÍÒ ˝Î-Ú‡: " << endl;
        cin >> index;
        char c = (*array1[i])[index - 1];
        cout << "—ËÏ‚ÓÎ ÔÓ‰ index = " << index << ": " << c << endl;
        
    }
    system("pause");
    return 0;
}
