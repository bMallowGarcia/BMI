#include <iostream>
#include <string>

#include "BMI.h"

using namespace std;



int main(){
		
	string name;
	int height;
	double weight;
	
	cout << "Enter your name: ";
	cin >> name;
	cout << "Enter your height (in inches): ";
	cin >> height;
	cout << "Enter your weight (in pounds): ";
	cin >> weight; 
	
	BMI student_1(name,height,weight);
	student_1.printBMI();	
}

