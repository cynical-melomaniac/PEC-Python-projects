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

int main()
{
START:

	cout << "This is a recreation of all Python code made in PEC in C++. \n Here is a list of all code which can be run: \n";
	cout << " 0) Misc. Code \n 1) Assignment-1 \n 2) Assignment-2 \n";

	int code_set;
	cout << "Enter option: ";
	cin >> code_set;

	int code_index_within_set;

	switch (code_set)
	{
	case 0:
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
		cout << " 5) Checking for validity of triangles \n";

		cout << "Enter option: ";
		cin >> code_index_within_set;

		system("cls");

		break;

		/*switch (code_index_within_set)
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
		break;*/

	default:
		cout << "🫡";
		break;
	}


	// Lets speedrun all python code.

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
	cout << "	Enter number 1:";
	cin >> num1;
	cout << "	Enter number 2:";
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

	cout << raw_seconds << "seconds have " << minutes << "minutes and " << seconds << "seconds.\n";

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