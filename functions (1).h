#include <algorithm>
#include <cmath>
#include <iostream>
#include <list>
#include <sstream>
#include <string>
using namespace std; 

string decimalToBinary(int input)
{
	string answer = "";
	if (input == 0)
		return "0";
	else
	{
		for (int i = 10; i >= 0; i--)
		{
			int x = input >> i;
			answer += to_string(x % 2);
		}
		while (answer.at(0) == '0')
			answer.erase(answer.begin());

		return answer;
	}
}

string hexadecimalToBinary(string input)
{
	string answer = "";
	char x = input.front();
	int inputLength = input.length();
	for (int i = 0; i < inputLength; i++)
	{
		x = input.front();
		if (x == 'A' || x == 'a')
		{
			answer = answer + " 1010";
		}

		else if (x == 'B' || x == 'b')
		{
			answer = answer + " 1011";
		}

		else if (x == 'C' || x == 'c')
		{
			answer = answer + " 1100";
		}

		else if (x == 'D' || x == 'd')
		{
			answer = answer + " 1101";
		}

		else if (x == 'E' || x == 'e')
		{
			answer = answer + " 1110";
		}

		else if (x == 'F' || x == 'f')
		{
			answer = answer + " 1111";
		}

		else
		{
			string y = decimalToBinary(x);
			for (int i = 0; i < y.length() % 4; i++)
			{
				y = "0" + y;
			}

			for (int i = 0; i < 4; i++)
			{
				y.erase(0, 1);
			}

			answer += " " + y;
		}
		input.erase(0, 1);
	}
	return answer;
}