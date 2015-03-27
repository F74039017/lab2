#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;
class Person{
	public:
		Person();
		Person(double h, double w);
		string result();
		void cal_BMI();
		double getHeight();
		double getWeight();
		double getBMI();		
		void setHeight(double height);
		void setWeight(double weight);
			
	private:
		double height;
		double weight;
		double bmi;
};
#endif
