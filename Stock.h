#pragma once
#include <string>

class Stock
{
private:
	std::string stockName;
	double stockPrice;
public:
	void setStockName(const std::string stockName) {
		this->stockName = stockName;
	}
	void setStockPrice(const double price) {
		this->stockPrice = price;
	}
	std::string getStockName() {
		return this->stockName;
	}
	double getStockPrice() {
		return this->stockPrice;
	}
	
};

