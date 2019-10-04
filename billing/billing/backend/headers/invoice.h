#pragma once

#define INOVICE_H

#include <string.h>
#include <vector>

//forward declarations
struct Date;
class Items;

class Invoice
{
public:
	//default constructor/destructor
	Invoice();
	~Invoice();
	
	// copy constructor
	Invoice(const Invoice&);

public:
	std::string getInvoiceNumber() const;
	std::string getInvoiceDate() const;
	const std::vector<Items>& getItems() const;
	const CustomerDetails getCustomr() const;

private:

	CustomerDetails m_customer;
	Date m_invoiceDate;
	int number;
	std::vector<Items> m_items;
	ShippingDetails m_shpDetails;

};