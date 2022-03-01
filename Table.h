#ifndef table_h
#define table_h
#include "Product.h"
#include <iostream>
using namespace std;

class Table : public Product{
	private:
		//declare variables
		string shape;
		double length, width, height;
	public:
		//default constructor
		Table() : Product(){
			shape = "Shape Unknown";
			length = 1.0;
			width = 1.0;
			height = 1.0;
		}
		//parameterized constructor
		Table(double le, double wi, double he) : Product(){
			length = le;
			width = wi;
			height = he;
		}
		
		//setter
		void setShape(string sh){
			shape = sh;
		}
		void setLength(double le){
			length = le;
		}
		void setWidth(double wi){
			width = wi;
		}
		void setHeight(double he){
			height = he;
		}
		
		//getter
		string getShape(){
			return shape;
		}
		double getLength(){
			return length;
		}
		double getWidth(){
			return width;
		}
		double getHeight(){
			return height;
		}
		
		//query
		void display(){
			Product::display();
			cout << "Shape: " << shape << endl
				 << "Length: " << length << endl
				 << "Width: " << width << endl
				 << "Height: " << height << endl;
		}
};
#endif
