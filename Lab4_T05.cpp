//*******************************************************************************
// Course Number and Section: CSCI 1380-04
// Course Semester: Fall 2022
// Your Name: Luis Trevino
// --Only if he helped you with the assignment--
// Teammate Name:
// ---------------------------------------------
// Program Description:
//
// find the average of the grades
//
//*******************************************************************************
//libraries
//use for inputs and outputs
#include <iostream>
//file manipulation
#include <fstream>
//use for manipulating number outputs
#include <iomanip>

//	DO NOT MODIFY THE LINE BELOW
#include <limits>

using namespace std;

int main(){
	//2)
	// declaring integer varables "grade" And "tota" and seting it to zero
	int grade = 0, total = -1;
	//3)
	//declaring integer varables"sum" and "totalPass" and setting hem to zero
	int sum = 0, totalPass = 0;
	//4)
	//declarign a double bariable and setting it to 0.0
	double avg = 0.0;

	//5)
	// set a variable to read files
	ifstream infileA;
	//6)
	//open file "input txt"
	infileA.open("input.txt");
	//7)
	//check if the file exust
	if (!infileA) {
		//if not print out a error
		cout << "Error opening a file..." << endl;
		cout << endl << "Press eny key to continue..." << endl;
		//terminate with -1
		return -1;
	}

	//8)
	do {
		//print "How many grades do you want to procces"
		cout << "How many grades do you want to procces" << endl;
		//set the input to teh corrext variable
		cin >> total;
		//if input fail
		if (!cin) {
			//clear the input "history'
			cin.clear();
			return -1;
		}
	}while (total <= 0 && total < 100);

	//9
	// while counter is less than total  sum the grades and keep doing it til the countr is gradether than total
	for (int counter = 0; counter < total; counter++) {
		sum += grade;
		infileA >> grade;
	}

	//10
	//total is not zero
	if (total != 0) {
		//find the average of the grades
		avg = sum / total;
	}
	//else print an error occure
	else {
		cout << " No values to processs.." << endl;
		cout << endl << "Press any key to continue..." << endl;
		//terminate the program with 0
		return 0;
	}

	//11
	// set the variable to decimal
	cout << fixed;
	// round the answer
	totalPass = static_cast<double>(static_cast<int>((sum * 100) + 0.5) / 100);
	//12
	//set the presition to 2 decimal places
	cout << setprecision(totalPass);
	// end the forcing to decimal
	cout.unsetf(ios::fixed);

	//13
	//print "the verage of [totalPass] passing grade(s) only" 
	cout << "the verage of " << totalPass << " passing grade(s) only" << endl;
	//print "the verage of [totalPass] passing grade(s) only" 
	cout << endl << "the verage of " << totalPass << " passing grade(s) only" << avg << endl;
	//print "Press any key to continue..." 
	cout << endl << "Press any key to continue..." << endl;

	//14
	//	DO NOT MODIFY THE LINE BELOW
	cin.get();
	//	DO NOT MODIFY THE LINE BELOW
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	//15
	return 0;
}