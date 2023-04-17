#ifndef __CUSTOMER_H__
#define __CUSTOMER_H__

#include<string>
using namespace std;

class Customer{
	private:
		string name;
		string address;
		string phone;
	public:
		Customer();
		void setName(string n);
		void setAddress(string a);
		void setPhone(string p);
		string getName();
		string getAddress();
		string getPhone();
};

#endif