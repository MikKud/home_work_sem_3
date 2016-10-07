
#include "stdafx.h"
#include "operations.h"
#include <stdio.h>

string operators = "+^|";
string variabl = "ABCDEFGHIJKLMNOPQRSTUVW";

operations::operations(string input)
{
	task = "(";
	task = task+input+")";
	
	cout << "Entered task is " << endl << task << endl;
}

void operations::devider()
{
	if (!task.empty())
	{
		for ( int i = 0; i < task.size();i++)
		{
			if (task[i] != ')')
			{
				st_char.push(task[i]);
			}
			if (task[i] == ')')
			{
				string temp1="";
				string temp2="";

				{
					while (st_char.top() != '(')
					{
						temp1.push_back(st_char.top());
						st_char.pop();
					}
					for (int j = temp1.size() - 1; j >= 0; --j)
						temp2.push_back(temp1[j]);
					parts.push_back(temp1);
					st_char.pop();
				}
				vector<string> parcer;
				
				typedef vector< string > split_vector_type;
				split_vector_type SplitVec; // #2: Search for tokens
				for (int i = 0; i < parts[counter].size(); i++)
				{
					
					split(SplitVec, parts[counter], is_any_of(operators), token_compress_on);
				}
				cout << "spliter" << endl;
				for (auto i : SplitVec)
				{
					cout<<i<<endl;
				}
				
				char b[16]; // <-- сюда записываем результат
				sprintf_s(b, "%d", counter);
				
				for (int i = 0; i < strlen(b);i++)
				st_char.push(b[i]);
				++counter;
			}
		}
	}
	else
	{
		cout << "please enter the task and try again" << endl;
	}
}

void operations::log_parts()
{

	cout << "patrs" << endl;
	for (int i = 0; i < parts.size(); i++)
	{
		cout << parts[i] << endl;
	}
}
void operations::log_task()
{
	cout << task << endl;
}