#include<string>
#include "car.h"
using namespace std;

Car::Car() {}
void Car::setMake(string m) {this->make = m;}
void Car::setModel(string m) {this->model = m;}
void Car::setYear(int y) {this->year = y;}
string Car::getMake() {return this->make;}
string Car::getModel() {return this->model;}
int Car::getYear() {return this->year;}
