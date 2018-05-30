// Function Definitions
#include "BMI.h"
#include <math.h>

BMI::BMI() {
	newHeight = 0;
	newWeight = 0.0;
	
}

BMI::BMI(string name, int height, double weight){
	newName = name;
	newHeight = height;
	newWeight = weight;
}

void BMI::printBMI(){
	cout << "Hello " << newName << "!" << endl;
	cout << "You're BMI is " << (newWeight/(pow(newHeight,2)))*703 << endl;
}
