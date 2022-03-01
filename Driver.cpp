#include "Table.h"
#include "Function.h"
#include <iostream>
using namespace std;

int main(){
	//declare and initialize variables
	//declare array table
	const int RECORD = 100;
	Table table[RECORD];
	int counter = 0, matcher, feature, yesORno, yesORno2 = 1, qty;
	string name, code, number, sh;
	double rrp, le, wi, he;
	
	//call welcome()
	welcome();
	
	//allow the user to use the program for unlimited times until feature 0 is chosen
	do{
		//call featuresAsk()
		//set the input as feature
		featuresAsk();
		cin >> feature;
		
		//clear the screen for a less distracting view
		system("CLS");
		
		//if the user chooses to create a new Table record (feature 1)
		if(feature == 1){
			//call feature1_title() 
			feature1_title();
			
			//if the total Table record stored hasn't reached the limit
			if(counter < RECORD){
				//call feature1_productNameAsk()
				//set the input as yesORno
				feature1_productNameAsk();
				cin >> yesORno;
				
				//if the user chooses to enter the product name
				if(yesORno == 1){
					//call feature1_productName()
					//ignore previous input(s)
					//set the whole input as name
					feature1_productName();
					cin.ignore(256, '\n');
					getline(cin, name);
				}
				//if the user chooses not to enter the product name
				else{
					//set the name to "Name Unknown" 
					name = "Name Unknown";
					
					//to make it neat
					cout << endl;
				}
				
				//call feature1_productNumberAsk()
				//set the input as code
				feature1_productNumberAsk();
				cin >> code;
				
				//for loop to access each product number in the array until it reaches the counter
				for(matcher = 0; matcher < counter; matcher++){
					//set the product number from the current array as number for comparision
					number = table[matcher].getProductNumber();
					
					//if the existing product number is found
					if(code == number){
						//call productNumber_repeatError()
						//set the input as yesORno2
						productNumber_repeatError();
						cin >> yesORno2;
						
						//to make it neat
						cout << endl;
						
						//if the user chooses to reenter the product number
						if(yesORno2 == 1){
							//call feature1_productNumberAsk()
							//set the input as code
							feature1_productNumberAsk();
							cin >> code;
							
							//reset the matcher to -1 to let the system chack again the validity of the new product number
							matcher = -1;
						}
						//if the user chooses not to reenter the product number and exit feature 1
						else{
							//exit feature 1
							break;
						}
					}
				}
				
				//skip the functions below if the user chooses to exit feature 1 in previous for loop
				if(yesORno2 == 1){
					//call feature1_productPriceAndQuantityAsk()
					//set the input as yesORno
					feature1_productPriceAndQuantityAsk();
					cin >> yesORno;
					
					//if the user chooses to enter the product price
					if(yesORno == 1){
						//call feature1_productPrice() and feature1_productQuantity()
						//set the inputs as rrp and qty
						feature1_productPrice();
						cin >> rrp;
						feature1_productQuantity();
						cin >> qty;
					}
					
					//call feature1_tableShapeAsk()
					//set the input as yesORno
					feature1_tableShapeAsk();
					cin >> yesORno;
					
					//if the user chooses to enter the shape
					if(yesORno == 1){
						//call feature1_tableShape()
						//set the input as sh
						feature1_tableShape();
						cin >> sh;
					}
					//if the user chooses not to enter the shape
					else{
						//set the sh to "Shape Unknown" 
						sh = "Shape Unknown";
					}
					
					//call feature1_measurementsAsk()
					//set the input as yesORno
					feature1_measurementsAsk();
					cin >> yesORno;
					
					//if the user chooses to enter the measurements
					if(yesORno == 1){
						//call feature1_measurementLength(), feature1_measurementWidth(), and feature1_measurementHeight()
						//set the inputs as le, wi, and he
						feature1_measurementLength();
						cin >> le;
						feature1_measurementWidth();
						cin >> wi;
						feature1_measurementHeight();
						cin >> he;
						
						//create new Table record with length, width, and height
						table[counter] = Table(le, wi, he);
					}
					//if the user chooses not to enter the measurements
					else{
						//create new Table record with default constructor
						table[counter] = Table();
					}
					
					//store the variables in corresponding attributes in the class
					table[counter].setProductName(name);
					table[counter].setProductNumber(code);
					table[counter].setPrice(rrp);
					table[counter].setQuantity(qty);
					table[counter].setShape(sh);
					
					//increase the counter by 1
					counter++;
					
					//call feature1_success()
					feature1_success();
					
					//
					//if there is only 1 Table record stored
					if(counter == 1)
						cout << "Total of " << counter << " Table is created successfully. " << endl;
					//if there are more than 1 Table record stored
					else
						cout << "Total of " << counter << " Tables are created successfully. " << endl;
				}
				
				//reset yesORno2 to 1
				yesORno2 = 1;
			}
			//if the total Table record stored has reached the limit
			else{
				//display error message for reaching the limit of Table record stored
				cout << endl << "You have reached the limit of your Table record stored! You can only create " << RECORD << " Table records. " 
					 << endl << endl;
			}
			
			//pause the system to let the user views the error message
			//then clear the screen for a less distracting view
			system("pause");
			system("CLS");
		}
		
		//if the user chooses to change the measurements of a Table record stored (feature 2)
		else if(feature == 2){
			//call feature2_title()
			feature2_title();
			
			//if there is no Table record stored
			if(counter == 0){
				//to make it neat
				cout << endl;
				
				//call error_emptyRecord()
				error_emptyRecord();
				
				//pause the system to let the user views the error message
				system("pause");
			}
			//if there is(are) Table record(s) stored
			else{
				//call productNumber_ask()
				//set the input as code
				productNumber_ask();
				cin >> code;
				
				//to make it neat
				cout << endl;
				
				//for loop to access each product number in the array until it reaches the counter
				for(matcher = 0; matcher < counter; matcher++){
					//set the product number from the current array as number for comparision
					number = table[matcher].getProductNumber();
					
					//if the existing product number is found
					if(code == number){
						//ask for measurements
						//set the inputs as le, wi, and he
						//store them in corresponding measurements in the class
						cout << "Set the length for " << name << ": ";
						cin >> le;
						table[matcher].setLength(le);
						cout << "Set the width  for " << name << ": ";
						cin >> wi;
						table[matcher].setWidth(wi);
						cout << "Set the height for " << name << ": ";
						cin >> he;
						table[matcher].setHeight(he);
						
						//call feature2_success()
						feature2_success();
						
						//pause the system to let the user views the error message
						system("pause");
						
						//exit for loop
						break;
					}
					
					//if the matcher reaches the last counter and no matched product number is found
					if(matcher == counter - 1){
						//call productNumber_invalidError()
						productNumber_invalidError();
						
						//pause the system to let the user views the error message
						system("pause");
					}
				}
			}
			
			//clear the screen for a less distracting view
			system("CLS");
		}
		
		//if the user chooses to print the details of a Table record stored (feature 3)
		else if(feature == 3){
			//call feature3_title()
			feature3_title();
			
			//if there is no Table record stored
			if(counter == 0){
				//to make it neat
				cout << endl;
				
				//call error_emptyRecord()
				error_emptyRecord();
				
				//pause the system to let the user views the error message
				system("pause");
			}
			//if there is(are) Table record(s) stored
			else{
				//call productNumber_ask()
				//set the input as code
				productNumber_ask();
				cin >> code;
				
				//to make it neat
				cout << endl;
				
				//for loop to access each product number in the array until it reaches the counter
				for(matcher = 0; matcher < counter; matcher++){
					//set the product number from the current array as number for comparision
					number = table[matcher].getProductNumber();
					
					//if the existing product number is found
					if(code == number){
						//display output
						cout << endl << "Result " << endl;
						table[matcher].display();
						cout << endl;
						
						//pause the system to let the user views the error message
						system("pause");
						
						//exit for loop
						break;
					}
					
					//if the matcher reaches the last counter and no matched product number is found
					if(matcher == counter - 1){
						//call productNumber_invalidError()
						productNumber_invalidError();
						
						//pause the system to let the user views the error message
						system("pause");
					}
				}
			}
			
			//clear the screen for a less distracting view
			system("CLS");
		}
		
		//if the user chooses to print the details of all Table record stored(feature 4)
		else if(feature == 4){
			//call feature4_title()
			feature4_title();
			
			//to make it neat
			cout << endl;
			
			//if there is(are) Table record(s) stored
			if(counter != 0){
				for(int z = 0; z < counter; z++){
					//display output
					divider();
					cout << "Table " << z + 1 << ". " << endl;
					table[z].display();
					divider();
					cout << endl;
				}
			}
			//if there is no Table record stored
			else{
				//call error_emptyRecord()
				error_emptyRecord();
			}
			
			//pause the system to let the user views the error message
			system("pause");
			
			//clear the screen for a less distracting view
			system("CLS");
		}
		
		//if the user chooses to terminate the program(feature 0)
		else if(feature == 0){
			//call featureExit()
			featureExit();
		}
	}while(feature != 0);
	
	return 0;
}
