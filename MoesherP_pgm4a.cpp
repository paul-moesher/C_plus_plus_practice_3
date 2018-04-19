//----------------------------------------------------------------------------------------------------------------------------------
//														Program 4a:
// Paul Moesher											CS2010 Spring 2018									Class: MWF 10:30
// Project name: MoesherP_pgm4a																				Due: 2/28/18
// 
// Purpose:		To show the user how many calories they burned while running on the treadmill.
// Input:		Get the user to enter how many minutes that they ran (number must be divisible by 5).
// Processing:	Calualte calories burned for 5,10,15,20, exc. minutes. 
// Output:		The program will show how many calories the user has burned every 5 minutes of running.
#include <iostream>
using namespace std;

int main()
{
		// int declarations
		int min = 5; // The minutes are in increments of 5
		int Max_mins; // The max amount of minutes the user would be working out

		// Constant declarations
		const double Calories_Burned_Per_Min = 3.9; // The amount of calories burned per minute.

		//Double declarations
		double caloriesburned; // The amount of calories burned

		// Get max amount of work out minutes from user
		cout << "Enter the maxium minutes for your workout (number should be at least 5 and evenly divisble by 5) ";
		cin >> Max_mins; 
		cout  << endl; // This line is just 9for spacing purposes on the output display
		while (Max_mins % 5 != 0 || Max_mins < 5)
			{
				cout << "This is not a valid number your number should be at least 5 and evenly divisble by 5 ";
				cin >> Max_mins;
			}

		//Explain what the display is
		cout << "Calories Burned on Treadmill" << endl;
		cout << "Minutes                                    Calories Burned" << endl;

		//Calulate calories burned

		while (min >= 5 && min <= Max_mins) {
			caloriesburned = min * Calories_Burned_Per_Min; // calculating calories burned
			cout << min << "                                         " << caloriesburned << endl;
			min += 5;
		}
		
		cout << endl;
		system("pause");
		return 0;

	}