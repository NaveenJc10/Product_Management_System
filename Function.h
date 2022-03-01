#ifndef function_h
#define function_h
#include <iostream>
using namespace std;

//functions are arranged in alphabetical order
void divider(){
	//act as divider
	cout << "========================================" << endl;
}

void error_emptyRecord(){
	//display error message for no Table record stored
	cout << endl << "No Table record stored. " << endl;
}

void feature1_measurementHeight(){
	//ask the user to input height
	cout << "Height: ";
}

void feature1_measurementLength(){
	//ask the user to input length
	cout << endl 
		 << "Kindly input: " << endl
		 << "Length: ";
}

void feature1_measurementsAsk(){
	//ask the user whether wants to input the measurements or not 
	cout << endl
		 << "Do you have the length, width, and height for the Table? " << endl
		 << "If yes, kindly reply '1'. Otherwise, reply any other integer value. " << endl
		 << "Reply: ";
}

void feature1_measurementWidth(){
	//ask the user to input width
	cout << "Width: ";
}

void feature1_productName(){
	//ask the user to input product name
	cout << endl << "Kindly input Product Name: ";
}

void feature1_productNameAsk(){
	//ask the user whether wants to input the product name or not
	cout << endl
		 << "Do you have the Product Name? " << endl
		 << "If yes, kindly reply '1'. Otherwise, reply any other integer value. " << endl
		 << "Reply: ";
}

void feature1_productNumberAsk(){
	//ask the user to input product number
	cout << "Kindly input Product Number: ";
}

void feature1_productPrice(){
	//ask the user to input price
	cout << endl
		 << "Kindly input: " << endl
		 << "Price: ";
}

void feature1_productPriceAndQuantityAsk(){
	//ask the user whether wants to input the price and quantity or not
	cout << endl
		 << "Do you have the Price and Quantity for the Table? " << endl
		 << "If yes, kindly reply '1'. Otherwise, reply any other integer value. " << endl
		 << "Reply: ";
}

void feature1_productQuantity(){
	//ask the user to input quantity
	cout << "Quantity: ";
}

void feature1_success(){
	//display message for a new Table record created
	cout << endl << "New Table record created. " << endl;
}

void feature1_tableShape(){
	//ask the user to input shape
	cout << endl
		 << "Kindly input: " << endl
		 << "Shape: ";
}

void feature1_tableShapeAsk(){
	//ask the user whether wants to input the shape or not
	cout << endl
		 << "Do you have the Shape for the Table? " << endl
		 << "If yes, kindly reply '1'. Otherwise, reply any other integer value. " << endl
		 << "Reply: ";
}

void feature1_title(){
	//title for feature 1
	cout << "NEW TABLE RECORD";
}

void feature2_success(){
	//display message for the new measurements set successfully
	cout << endl << "Length, width, and height are set successfully. " << endl;
}

void feature2_title(){
	//title for feature 2
	cout << "CHANGE THE MEASUREMENTS OF A TABLE RECORD STORED";
}

void feature3_title(){
	//title for feature 3
	cout << "PRINT DETAILS OF A TABLE RECORD STORED";
}

void feature4_title(){
	//title for feature 4
	cout << "PRINT DETAILS OF ALL TABLE RECORDS STORED";
}

void featureExit(){
	//dislay message for terminating the program
	cout << "No feature selected. Program terminated. " << endl
		 << "Thank you for using. Have a nice day. " << endl;
}

void featuresAsk(){
	//ask the user to choose the features
	cout << "Kindly input " << endl
		 << "'1' to create a new Table record. " << endl
		 << "'2' to change the measurement(s) of a Table record stored using Product Number. " << endl
		 << "'3' to print the details of a Table record stored using Product Number. " << endl
		 << "'4' to print the details of all Table records stored. " << endl
		 << "'0' to terminate the program. " << endl
		 << "Input: ";
}

void productNumber_ask(){
	//ask the user to input product number for matching process
	cout << endl << "Kindly give a Product Number: ";
}

void productNumber_invalidError(){
	//display error message for no Table record stored found
	cout << "No Table record found based on the Product Number! " << endl;
}

void productNumber_repeatError(){
	//display error message for repeated product number
	cout << endl
		 << "Existing product number is entered! Please create an unique product number. " << endl
		 << "Do you want to continue creating a new Table record? " << endl
		 << "If yes, kindly reply '1'. Otherwise, reply any other integer value. " << endl
		 << "Reply: ";
}

void welcome(){
	//display message to welcome the user for using the program
	cout << "Welcome to Product Management System (PMS). You can create up to 100 Table records. " << endl;
}
#endif
