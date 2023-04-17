#ifndef __SERVICE_QUOTE_H__
#define __SERVICE_QUOTE_H__

#include<string>
#include "customer.h"

class ServiceQuote{
	private:
		unsigned long id;
		Customer creator;
		string date;
		double partsCharges;
		double laborCharges;
	public:
		ServiceQuote();
		void setId(unsigned long id);
		void setCreator(Customer c);
		void setDate(string d);
		void setPartsCharges(double c);
		void setLaborCharges(double c);
		unsigned long getId();
		Customer &getCreator();
		string getDate();
		double getPartsCharges();
		double getLaborCharges();
		double getSalesTax();
		double getTotalCharges();
};

#endif