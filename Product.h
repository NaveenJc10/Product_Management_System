#ifndef product_h
#define product_h
#include <iostream>
#include <iomanip>
using namespace std;

class Product{
	private:
		//declare variables
		string productNumber, productName;
		int quantity;
		double price;
	public:
		//default constructor
		Product(){
			productNumber = "-1";
			productName = "Name Unknown";
			price = 0;
			quantity = 0;
		}
		//parameterized constructor
		Product(string name){
			productNumber = "-1";
			productName = name;
			price = 0;
			quantity = 0;
		}
		
		//setter
		void setProductNumber(string code){
			productNumber = code;
		}
		void setProductName(string name){
			productName = name;
		}
		void setPrice(double rrp){
			price = rrp;
		}
		void setQuantity(int qty){
			quantity = qty;
		}
		
		//getter
		string getProductNumber(){
			return productNumber;
		}
		string getProductName(){
			return productName;
		}
		double getPrice(){
			return price;
		}
		int getQuantity(){
			return quantity;
		}
		
		//query
		//set the suitable decimal places
		void display(){
			cout << "Product Number: " << productNumber << endl
				 << "Product Name: " << productName << endl
				 << fixed << showpoint << setprecision(2)
				 << "Price: " << price << endl
				 << "Quantity: " << quantity << endl
				 << fixed << showpoint << setprecision(3);
		}
};
#endif
