// AreaSideOfShape.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	float area, perimeter, radius, circumference, base, base2, height, t1, t2, t3, t4,
		width;
	int choice;

again:
	system("cls");
	cout << "-------------------------------------------------------" << endl
		<< "Press 1 to Find the Area & Perimeter of Square" << endl
		<< "Press 2 to Find the Area & Perimeter of Rectangle" << endl
		<< "Press 3 to Find the Area & Perimeter of Circle" << endl
		<< "Press 4 to Find the Area & Perimeter of parallelogram" << endl
		<< "Press 5 to Find the Area & Perimeter of Trapezium" << endl
		<< "Press any key to exit........." << endl
		<< "-------------------------------------------------------" << endl;

	cout << "Please choose a program to run: ";
	cin >> choice;

	cout << "\n\n\n";

	switch (choice) {
	case 1:
		//square
		cout << "Enter the side of square: ";
		cin >> height;

		area = pow(height, 2);
		perimeter = height * 4;

		cout << "\nThe area of Square is " << area << endl;
		cout << "The perimeter of Square is " << perimeter << endl;
		break;
	case 2:
		//rectangle
		cout << "Enter the height of Rectangle: ";
		cin >> height;

		cout << "Enter the width of Rectangle: ";
		cin >> width;

		area = height * width;
		perimeter = (height * 2) + (width * 2);

		cout << "\nThe area of Rectangle is " << area << endl;
		cout << "The perimeter of Rectangle is " << perimeter << endl;
		break;
	case 3:
		//circle
		cout << "Enter the radius of a circle: ";
		cin >> radius;

		area = 3.14 * (pow(radius, 2));
		circumference = 3.14 * (2 * radius);

		cout << "\nThe area of circle is " << area << endl;
		cout << "The circumference of circle is " << circumference << endl;
		break;
	case 4:
		//parallelotram
		cout << "Enter the Base of parallelogram: ";
		cin >> base;

		cout << "Enter the Height of paralelogram: ";
		cin >> height;

		area = base * height;
		perimeter = 2 * (base + height);

		cout << "\nThe area of parallelogram is " << area << endl;
		cout << "The perimeter of parallelogram is " << perimeter << endl;
		break;
	case 5:
		//trapezium 
		cout << "Give values to find the area of Trapezium" << endl;
		cout << "Enter the Base 1 of trapezium : ";
		cin >> base;
		cout << "Enter the Base 2 of trapezium : ";
		cin >> base2;
		cout << "Enter the Height of trapezium : ";
		cin >> height;

		cout << "Give values to find the perimeter of Trapezium" << endl;
		cout << "Enter the side 1 of trapezium : ";
		cin >> t1;
		cout << "Enter the side 2 of trapezium : ";
		cin >> t2;
		cout << "Enter the side 3 of trapezium : ";
		cin >> t3;
		cout << "Enter the side 4 of trapezium : ";
		cin >> t4;

		area = 0.5 * (base + base2) * 4;
		perimeter = t1 + t2 + t3 + t4;

		cout << "\nThe area of trapezium is " << area << endl;
		cout << "The perimeter of trapezium is " << perimeter << endl;
		break;

	default:
		return 0;
	}

	system("pause");
	goto again;
	return 0;
}