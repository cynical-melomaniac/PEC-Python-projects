#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

constexpr auto PI = 3.141;

using namespace std;

int add();
int subtract();
int hello_world();

int add_different_types_of_objects();
int average_of_three_numbers();
int income_tax();
int min_and_sec();
int sin_and_cos();

int bitwise_operators();
int details_of_student();
int greatest_of_three_numbers();
int string_manipulation();
int substring_checking();
int triangle_checking();

int next_date();

int main()
{
START:

	cout << "This is a recreation of all Python code made in PEC in C++. \n Here is a list of all code which can be run: \n";
	cout << " 0) Exit \n 1) Assignment-1 \n 2) Assignment-2 \n 9) Misc. Code\n";

	int code_set;
	cout << "Enter option: ";
	cin >> code_set;

	int code_index_within_set;

	switch (code_set)
	{
	case 0:
		return 0;
		break;

	case 1:
		cout << " 0) Exit \n";
		cout << " 1) Add different types of objects \n";
		cout << " 2) Average of three numbers \n";
		cout << " 3) Income tax calculator \n";
		cout << " 4) Minutes and Seconds \n";
		cout << " 5) Sine and Cosine results \n";

		cout << "Enter option: ";
		cin >> code_index_within_set;

		system("cls");

		switch (code_index_within_set)
		{
		case 0:
			return 0;
			break;
		case 1:
			add_different_types_of_objects();
			break;
		case 2:
			average_of_three_numbers();
			break;
		case 3:
			income_tax();
			break;
		case 4:
			min_and_sec();
			break;
		case 5:
			sin_and_cos();
			break;
		default:
			cout << "🫡";
			break;
		}
		break;

	case 2:
		cout << " 0) Exit \n";
		cout << " 1) Bitwise operators \n";
		cout << " 2) Details of student \n";
		cout << " 3) Greatest of three numbers \n";
		cout << " 4) String manipulation \n";
		cout << " 5) Substring Checking \n";
		cout << " 6) Checking for validity of triangles \n";

		cout << "Enter option: ";
		cin >> code_index_within_set;

		system("cls");

		switch (code_index_within_set)
		{
		case 0:
			return 0;
			break;
		case 1:
			bitwise_operators();
			break;
		case 2:
			details_of_student();
			break;
		case 3:
			greatest_of_three_numbers();
			break;
		case 4:
			string_manipulation();
			break;
		case 5:
			substring_checking();
			break;
		case 6:
			triangle_checking();
			break;
		default:
			cout << "🫡";
			break;
		}
		break;
	
	case 9:
		cout << " 0) Exit  \n 1) Addition of numbers \n 2) Subtraction of numbers \n 3) 'Hello World' \n";

		cout << "Enter option: ";
		cin >> code_index_within_set;

		system("cls");

		switch (code_index_within_set)
		{
		case 0:
			return 0;
			break;
		case 1:
			add();
			break;
		case 2:
			subtract();
			break;
		case 3:
			hello_world();
			break;
		default:
			cout << "🫡";
			break;
		}
		break;

	default:
		cout << "🫡";
		break;
	}

	string exit_string;
	cout << "Exit? (y/n): ";
	cin >> exit_string;
	if (exit_string == "y")
	{
		return 0;
	}
	else
	{
		system("cls");
		goto START;
	}

	return 0;
}

int add()
{
	int num1;
	int num2;

	cout << "Addition of two numbers.\n";
	cout << "Enter number 1:";
	cin >> num1;
	cout << "Enter number 2:";
	cin >> num2;

	cout << "Sum of the numbers: " << (num1 + num2) << endl;

	return 0;

}

int subtract()
{
	int num1;
	int num2;

	cout << "Addition of two numbers.\n";
	cout << "	Enter number 1:";
	cin >> num1;
	cout << "	Enter number 2:";
	cin >> num2;

	cout << "Subtract of the numbers: " << (num1 - num2) << endl;

	return 0;
}

int hello_world()
{
	cout << "Hello World.\n";
	return 0;
}

int add_different_types_of_objects()
{
	//Add-different-types-of-objects or some more beautiful name
	int a = 25;
	int b = stoi("25");
	int c = (int)25.0f;

	int sum = a + b + c;

	cout << a << endl << b << endl << c << endl << sum << endl;

	return 0;
}

int average_of_three_numbers()
{
	//Average-of-three-numbers

	int a;
	int b;
	int c;

	cout << "Enter number 1:";
	cin >> a;
	cout << "Enter number 2:";
	cin >> b;
	cout << "Enter number 3:";
	cin >> c;

	int average = (a + b + c) / 3;

	cout << "Average of the three numbers: " << average << endl;

	return 0;
}

int income_tax()
{
	//Fastest Income Tax calculator in these parts.

	//Get gross income
	int income;

	cout << "Enter Gross Income: ";
	cin >> income;

	int standard_deduction = 10000;      //Standard Deduction

	//Get number of dependents
	int dependents;

	cout << "Enter number of dependents: ";
	cin >> dependents;

	int dependent_deduction = 3000;      //Deduction on each individual dependent

	//Calculate taxable income
	int taxable_income = income - standard_deduction - (dependent_deduction * dependents);

	//Prevent taxable income to go into negative
	if (taxable_income < 0)
	{
		taxable_income = 0;
	}

	//Display taxable income
	cout << "Taxable income is: " << taxable_income << endl;

	cout << "Therefore tax applicable is: " << (taxable_income * 0.2) << endl;

	return 0;
}

int min_and_sec()
{
	int raw_seconds;
	cout << "Enter number of seconds: ";
	cin >> raw_seconds;

	int minutes = (raw_seconds - (raw_seconds % 60)) / 60;
	int seconds = raw_seconds % 60;

	cout << raw_seconds << " seconds have " << minutes << " minutes and " << seconds << " seconds.\n";

	return 0;
}

int sin_and_cos()
{
	int sine;
	int cosine;

	for (int i = 0; i < 23; i++)
	{
		sine = sin((i * 15) * PI / 180);
		cosine = cos((i * 15) * PI / 180);
		cout << i * 15 << " --- " << setprecision(5) << sine << setprecision(5) << cosine << endl;
	}

	return 0;
}

int bitwise_operators()
{
	int a = 56;
	int b = 10;

	cout << a << " " << b << endl;

	cout << (a & b)  << endl;
	cout << (a | b) << endl;
	cout << (a ^ b) << endl;

	cout << (a << 2) << endl;
	cout << (b << 2) << endl;
	
	cout << (a >> 2) << endl;
	cout << (b >> 4) << endl;

	return 0;
}

int details_of_student()
{
	string name = "Parth";
	int sid = 22106026;
	string department_name = "CSE DS";
	float cgpa = 10.0f;

	cout << "Hey, " << name << " here!" << endl;
	cout << "My SID is " << sid << endl;
	cout << "I am from " << department_name << " department and my CGPA is " << cgpa << endl;

	return 0;
}

int greatest_of_three_numbers()
{
	int a, b, c;
	cout << "Enter number 1: ";
	cin >> a;
	cout << "Enter number 2: ";
	cin >> b;
	cout << "Enter number 3: ";
	cin >> c;

	if (a > b && a > c)
	{
		cout << a << " is the greatest.\n";
	}
	if (b > a && b > c)
	{
		cout << b << " is the greatest.\n";
	}
	if (c > a && c > b)
	{
		cout << c << " is the greatest.\n";
	}
	
	return 0;
}

int string_manipulation()
{
	string given_string = "Python is a case sensitive language. So is C++.";

	cout << "Length of string: " << given_string.length() << endl;
	
	string reversed_string = given_string;
	reverse(reversed_string.begin(), reversed_string.end());

	cout << "String reversed: " << reversed_string << endl;

	//string sliced_string;

	cout << "Sliced string is: (fucked in C++ so I need to do some background shenanigans)" /*<< sliced_string*/ << endl;

	string replaced_string = given_string;
	given_string.replace(10, 16, "object oriented");
	cout << "String replaced 'a case sensitive' with 'object oriented' is: " << replaced_string << endl;

	cout << "Index of substring 'a': " << given_string.find('a') << endl;

	string removed_whitespaces_string = given_string;
	removed_whitespaces_string.erase(remove_if(removed_whitespaces_string.begin(), removed_whitespaces_string.end(), std::isspace), removed_whitespaces_string.end());
	cout << "String with removed whitespaces: " << removed_whitespaces_string << endl;

	return 0;
}

int substring_checking()
{
	string input_string, input_name;

	cout << "Input a string with a name (It dosen't really work with whitespaces right now): ";
	cin >> input_string;

	cout << "Input the name: ";
	cin >> input_name;

	if (input_string.rfind(input_name) != NULL)
	{
		cout << "Yes" << endl;
		return 0;
	}

	cout << "No" << endl;
	return 0;
}

int triangle_checking()
{
	int side_a, side_b, side_c;

	cout << "Enter the first side of the triangle:";
	cin >> side_a;
	cout << "Enter the second side of the triangle:";
	cin >> side_b;
	cout << "Enter the third side of the triangle:";
	cin >> side_c;

	if ((side_a + side_b) > side_c || (side_b + side_c) > side_a || (side_a + side_c) > side_b)
	{
		cout << "Yes\n";
		return 0;
	}

	cout << "No\n";
	return 0;
}