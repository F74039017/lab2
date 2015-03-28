#include <iostream>
#include <iomanip>
#include <fstream>
#include "Person.h"
using namespace std;

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
