#include<iostream>
#include <cmath>
using namespace std;
int main()
{
	cout << "TINH SO THOC TREN BAN CO VUA\n";
	int So0;
	double tongThoc = 0;
		cout << "Nhap so o: "; cin >> So0;

	    for (int i = 0; i < So0; i++)
	    {
			cout << "O thu " << i + 1 << " co " << pow(2, i) << "thoc\n";
			tongThoc = tongThoc + pow(2, i);
	    }
		cout << "Tong so thoc la: " << tongThoc;
	return 0;
}