#include<iostream>
#include "car.h"
#include "customer.h"
#include "service_quote.h"
#include "manager.h"
using namespace std;

void generate_new_service_quote(Manager &m);
void check_service_quotes(Manager &m);
void delete_service_quotes(Manager &m);

int main(){
	cout<<"S1154012 HUANG-XIAN-YI :)"<<endl;
	Manager m;
	string input;
	while(true){
		cout<<endl;
		cout<<"What are you going to do?"<<endl;
		cout<<"1) Generate new service quote."<<endl;
		cout<<"2) Check service quotes."<<endl;
		cout<<"3) Delete service quotes."<<endl;
		cout<<endl;
		while(true){
			cout<<"Your desicion: ";
			getline(cin,input);
			if(input == "1"){
				generate_new_service_quote(m);
				break;
			}
			if(input == "2"){
				check_service_quotes(m);
				break;
			}
			if(input == "3"){
				delete_service_quotes(m);
				break;
			}
			else
				cout<<"Invalid input, please enter again!"<<endl;
		}
	}
}

void generate_new_service_quote(Manager &m){
	cout<<endl;
	cout<<"Generate new service quote."<<endl;
	cout<<"You can enter 'EXIT' anytime if you want to go back to previous page."<<endl<<endl;
	string input;
	while(true){
		Customer c;
		ServiceQuote q;
		cout<<"Please enter the name of the customer:"<<endl;
		getline(cin,input);
		if(input=="EXIT")
			return;
		c.setName(input);
		cout<<"Please enter the address of the customer:"<<endl;
		getline(cin,input);
		if(input=="EXIT")
			return;
		c.setAddress(input);
		cout<<"Please enter the phone number of the customer:"<<endl;
		getline(cin,input);
		if(input=="EXIT")
			return;
		c.setPhone(input);
		cout<<"Please enter the parts charges:"<<endl;
		getline(cin,input);
		if(input=="EXIT")
			return;
		q.setPartsCharges(stod(input));
		cout<<"Please enter the labor charges:"<<endl;
		getline(cin,input);
		if(input=="EXIT")
			return;
		q.setLaborCharges(stod(input));
		cout<<"Please enter the date today (yyyy/mm/dd):"<<endl;
		getline(cin,input);
		if(input=="EXIT")
			return;
		q.setDate(input);
		q.setId(m.getId());
		cout<<endl;
		cout<<"Please confirm that this service quote is correct:"<<endl;
		cout<<"Customer name: "<<c.getName()<<endl;
		cout<<"Customer address: "<<c.getAddress()<<endl;
		cout<<"Customer phone number: "<<c.getPhone()<<endl;
		cout<<"Parts charges: "<<q.getPartsCharges()<<endl;
		cout<<"Labor charges: "<<q.getLaborCharges()<<endl;
		cout<<"Sales tax: "<<q.getSalesTax()<<endl;
		cout<<"Total charges: "<<q.getTotalCharges()<<endl;
		cout<<"Date: "<<q.getDate()<<endl;
		cout<<"Id: #"<<q.getId()<<endl;
		cout<<endl;
		cout<<"If it is correct, please enter 'T'."<<endl;
		cout<<"If it is wrong, please enter 'F'."<<endl;
		while(true){
			cout<<"(T/F) ";
			getline(cin,input);
			if(input=="EXIT")
				return;
			else if(input == "T"){
				q.setCreator(c);
				m.addQuote(q);
				cout<<"Confirmed! A new service quote is generated!"<<endl;
				return;
			}
			else if(input == "F"){
				cout<<"Seems there's something wrong, please enter every thing again."<<endl<<endl;
				break;
			}
			else{
				cout<<"Invalid input! Please enter again!"<<endl;
			}
		}
	}
}

void check_service_quotes(Manager &m){
	string input;
	cout<<endl;
	cout<<"Search service quotes by:"<<endl;
	cout<<"1) Customer name"<<endl;
	cout<<"2) Service quote create date"<<endl;
	cout<<endl;
	while(true){
		cout<<"Your desicion: ";
		getline(cin,input);
		cout<<endl;
		if(input == "1"){
			cout<<"Enter customer name:"<<endl;
			getline(cin,input);
			cout<<endl;
			m.cQwCn(input);
			break;
		}
		else if(input == "2"){
			cout<<"Enter date:"<<endl;
			getline(cin,input);
			cout<<endl;
			m.cQwD(input);
			break;
		}
		else
			cout<<"Invalid input, please enter again!"<<endl;
	}
}

void delete_service_quotes(Manager &m){
	cout<<endl<<"Enter 'EXIT' anytime if you want to go back to previous page."<<endl;
	string input;
	cout<<endl;
	while(true){
		cout<<"Please enter the id of the service quote:"<<endl;
		getline(cin,input);
		if(input == "EXIT")
			return;
		m.delQuote(stoul(input));
	}
}