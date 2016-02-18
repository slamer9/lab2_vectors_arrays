// lab2.cpp : Defines the entry point for the console application.
// Author Duncan Reeves, C++, CP2

#include "stdafx.h"
#include <vector>
#include <array>
#include <iostream>
#include <iomanip>

using namespace std;


double TestSum;
vector<double> myVector;
double myArray[5];

double SumOfElements(double Array[])
{
	double Sum = 0;
	int numOfCells;
	//numOfCells = (sizeof(Array) / sizeof(double));
	for (int Z = 0; Z < 5; Z++)
	{
		Sum += Array[Z];
	}

	TestSum = Sum;

	return Sum;
}

int main()
{
	double SumOfInput;
	double input;

	cout << "Enter five float values." << endl;
	for (int X = 0; X < 5; X++)
	{
		cout << "Enter value " << X + 1 << ".  ";
		cin >> input;
		myVector.push_back(input);
	}

	for (int Y = 0; Y < 5; Y++)
	{
		myArray[Y] = myVector[Y];
	}


	SumOfInput = SumOfElements(myArray);

	cout << "The sum of your input is " << fixed << setprecision(2) << TestSum << endl;

    return 0;
}