#include<string>
#include "customer.h"
using namespace std;

Customer::Customer(){}
void Customer::setAddress(string a) {this->address = a;}
void Customer::setName(string n) {this->name = n;}
void Customer::setPhone(string p) {this->phone = p;}
string Customer::getAddress() {return this->address;}
string Customer::getName() {return this->name;}
string Customer::getPhone() {return this->phone;}
