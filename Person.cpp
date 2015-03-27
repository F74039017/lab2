#include "Person.h"
#include <iostream>
#include <string>
using namespace std;

Person::Person()
	: height(0), weight(0), bmi(0)
{
}

Person::Person(double h, double w)
{
	height = h;
	weight = w;
}

string Person::result()
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
}

void Person::cal_BMI()
{
	double temp = height/100;
	bmi = weight / temp / temp;
}

double Person::getHeight()
{
	return height;
}

double Person::getWeight()
{
	return weight;
}

double Person::getBMI()
{
	return bmi;
}	

void Person::setHeight(double height)
{
	this->height = height;
}

void Person::setWeight(double weight)
{
	this->weight = weight;
}
