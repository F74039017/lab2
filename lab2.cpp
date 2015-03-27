#include <iostream>
#include <iomanip>
#include <fstream>
#include "Person.h"
using namespace std;

/*string result(double bmi)
{
	if(bmi<15)
		return "Very severly underweight";
	else if(15<=bmi && bmi<16)
		return "Severly underweight";
	else if(16<=bmi && bmi<18.5)
		return "Underweight";
	else if(18.5<=bmi && bmi<25)
		return "Normal";
	else if(25<=bmi && bmi<30)
		return "Overweight";
	else if(30<=bmi && bmi<35)
		return "Obese Class I (Moderately obese)";
	else if(35<=bmi && bmi<40)
		return  "Obese Class II (Severely obese)";
	else
		return "Obese Class III (Very severely obese)";
}*/

int main()
{
	ofstream outfile("file.out", ios::out);
	ifstream infile("file.in", ios::in);
	if(!infile)
	{
		cerr << "Failed opening" << endl;
		return -1;
	}
	double height, weight;
	Person person;
	while(infile >> height >> weight)
	{
		if(!height || !weight)
			continue;
		person.setHeight(height);
		person.setWeight(weight);
		person.cal_BMI();
		outfile <<  setprecision(4) << setw(6) << left <<  person.getBMI() << "  " << right <<  person.result() << endl;	
	}
	return 0;
}
