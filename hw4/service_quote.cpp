#include<string>
#include "service_quote.h"
#include "customer.h"
using namespace std;

ServiceQuote::ServiceQuote() {}
void ServiceQuote::setId(unsigned long id) {this->id = id;}
void ServiceQuote::setCreator(Customer c) {this->creator = c;}
void ServiceQuote::setDate(string d) {this->date = d;}
void ServiceQuote::setLaborCharges(double c) {this->laborCharges = c;}
void ServiceQuote::setPartsCharges(double c) {this->partsCharges = c;}
unsigned long ServiceQuote::getId() {return this->id;}
Customer &ServiceQuote::getCreator() {return this->creator;}
string ServiceQuote::getDate() {return this->date;}
double ServiceQuote::getLaborCharges() {return this->laborCharges;}
double ServiceQuote::getPartsCharges() {return this->partsCharges;}
double ServiceQuote::getSalesTax() {return (this->laborCharges + this->partsCharges)*0.03;}
double ServiceQuote::getTotalCharges() {return this->getLaborCharges() + this->getPartsCharges() + this->getSalesTax();}
