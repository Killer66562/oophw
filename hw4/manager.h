#ifndef __MANAGER_H__
#define __MANAGER_H__

#include<string>
#include<vector>
#include "service_quote.h"
using namespace std;

class Manager{
	private:
		vector<ServiceQuote> quotes;
		unsigned long id;
	public:
		Manager();
		unsigned long getId();
		void addQuote(ServiceQuote q);
		void cQwCn(string customer_name);
		void cQwD(string date);
		void delQuote(unsigned long quote_id);
};

#endif