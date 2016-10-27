// binari_math.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "Parcer.h"
map<char, char> placeValues()
{
	map<char, char> val;
	char c;
	char v;
	int n;
	cout << "Enter amount of variables" << endl;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Enter name of variable A-Z" << endl;
		cin >> c;
		cout << "Enter value for the variable 0-1" << endl;
		cin >> v;
		val[c] = v;
	}
	return val;
}
int main()
{
	string input("A|B&C&(D|G)+C+A");
	Parcer data(input);
	data.goPolish();
	data.logPolish();
	data.setValues(placeValues());
	data.count();
	system("pause");
    return 0;
}

