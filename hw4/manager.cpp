#include<string>
#include<iostream>
#include<algorithm>
#include "manager.h"
#include "customer.h"
#include "service_quote.h"
using namespace std;

Manager::Manager(){
	vector<Customer> quotes;
	this->id = 0;
}
unsigned long Manager::getId() {
	return this->id;
}
void Manager::addQuote(ServiceQuote q){
	this->quotes.push_back(q);
	++this->id;
}
void Manager::cQwCn(string customer_name){
	int count = 0;
	for(auto &q : this->quotes){
		if(q.getCreator().getName() == customer_name){
			cout<<"Service quote #"<<q.getId()<<":"<<endl;
			cout<<"    Parts charges: "<<q.getPartsCharges()<<" dollors."<<endl;
			cout<<"    Labor charges: "<<q.getLaborCharges()<<" dollors."<<endl;
			cout<<"    Sales tax: "<<q.getSalesTax()<<" dollors."<<endl;
			cout<<"    Total charges: "<<q.getLaborCharges()<<" dollors."<<endl;
			cout<<endl;
			++count;
		}
	}
	cout<<count<<" Results found!"<<endl;
}
void Manager::cQwD(string date){
	int count = 0;
	for(auto &q : this->quotes){
		if(q.getDate() == date){
			cout<<"Service quote #"<<q.getId()<<":"<<endl;
			cout<<"    Parts charges: "<<q.getPartsCharges()<<" dollors."<<endl;
			cout<<"    Labor charges: "<<q.getLaborCharges()<<" dollors."<<endl;
			cout<<"    Sales tax: "<<q.getSalesTax()<<" dollors."<<endl;
			cout<<"    Total charges: "<<q.getLaborCharges()<<" dollors."<<endl;
			cout<<endl;
			++count;
		}
	}
	cout<<count<<" Results found!"<<endl;
}
void Manager::delQuote(unsigned long quote_id){
	for(vector<ServiceQuote>::iterator it = this->quotes.begin(); it != this->quotes.end(); ++it){
		if((*it).getId() == quote_id){
			this->quotes.erase(it);
			cout<<"Service quote #"<<quote_id<<" is deleted!"<<endl;
			return;
		}
	}
	cout<<"Service quote #"<<quote_id<<" is not found!"<<endl;
}