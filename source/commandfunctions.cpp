#include <iostream>
#include <string>
#include <map>
#include <vector>

#include "../include/main.h"
#include "../include/math.h"

using std::cout;
using std::string;
using std::cin;
using std::endl;
using std::map;
using std::vector;

int exit_func(vector<string> args)
{
	exit = true;
	return 0;
}

int help_func(vector<string> args)
{
	cout << "Command - Usage" << endl << endl;
	for(auto iterator = help_strings.begin(); iterator != help_strings.end(); iterator++)
	{
		cout << iterator->first << " - " << iterator->second << endl;
	}

	return 0;
}

int info_func(vector<string> args)
{
	cout << short_name << endl;
	cout << long_name << endl;
	cout << "V" << version << endl;
	cout << "The code for JAWS can be found at www.github.com/josephbowes99/jaws" << endl;

	return 0;
}

int math_func(vector<string> args)
{
	//float num_one = (args[1], NULL);
	//float num_two = (args[3], NULL);

	if (args[2] == "+")
	{
		//add_math(num_one, num_two);
	}
	else if (args[2] == "-")
	{

	}

	return 0;
}
