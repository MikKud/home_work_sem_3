#pragma once
#include "stdafx.h"
#include <stack>
#include <vector>
#include <string>
#include <queue>
#include <map>
#include <iostream>
#include <deque>
using namespace std;

class Parcer
{
public:
	Parcer()=default;
	Parcer(string);
	int goPolish();
	int count();
	//void buildTree();
	void logPolish();
	void setValues(map<char,char>);
	~Parcer()=default;

private:
	bool isOperator(char);
	bool isVariable(char);
	bool higherPrecedence(char, char);
	string input;
	deque<char> output;
	stack<char> operations;
	map<char, int> precedence;
	map<char, char> values;
};

