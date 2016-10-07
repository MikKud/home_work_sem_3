#pragma once
#include "stdafx.h"
#include <iostream>
#include <stack>
#include <vector> 
#include <string>
#include <boost/algorithm/string.hpp>

using namespace std;
using namespace boost;



class operations
{
public:
	operations() = default;
	~operations() = default;
	operations(string);
	void devider();
	void log_task();
	void log_parts();

private:
	int counter = 0;
	string task;
	vector<string> parts;
	stack<char> st_char;
	
};

