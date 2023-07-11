#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void printSubsequence(string input, string output)
{
	
	// Base Case
	// if the input is empty print the output string
	
	if (input.empty()) 
	{
		cout << output << endl;
		return;
	}

	// output is passed with including
	// the Ist character of
	// Input string
	printSubsequence(input.substr(1), output + input[0]);

	// output is passed without
	// including the Ist character
	// of Input string
	printSubsequence(input.substr(1), output);
}

int main()
{
	// output is set to null before passing in as a parameter
	string output = "";
	string input = "abcd";

	printSubsequence(input, output);

	return 0;
}

