// Function declaration here
#include <iostream>
#include <string>

using namespace std;

#ifndef BMI_H
#define BMI_H

class BMI {
	
	public:
		//Default Constructor
		BMI();
		
		//Overload Constructor
		BMI(string, int, double);
		
		void printBMI();
		
		
	private:
		//Member variables
		string newName;
		int newHeight;
		double newWeight;
};


#endif
