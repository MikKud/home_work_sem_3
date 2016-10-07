// Homework_3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <stack>
#include <vector>
#include "operations.h"

using namespace std;

int main()
{
	string data = "(A+B)+(C+D)+((E+F)+G)";
	operations ex(data);
	ex.devider();
	ex.log_parts();
	
	

	system("pause");
    return 0;
}

