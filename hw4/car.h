#ifndef __CAR_H__
#define __CAR_H__

#include<string>
using namespace std;

class Car{
	private:
		string make;
		string model;
		int year;
	public:
		Car();
		void setMake(string m);
		void setModel(string m);
		void setYear(int y);
		string getMake();
		string getModel();
		int getYear();
};

#endif