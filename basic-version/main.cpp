/**
 * R-F-A is a simple software that allows you to place orders
 * for the installation of different floor, then automate 
 * order taking to facilitate the work of clerks and then 
 * provide activity statistics for owners. 
 *
 * @author Saliou.
 *
 * @version 2022-07-16. 
 */ 

#include <iostream>


#define LINE  "---------------------------------------------------------------------------------------" 
#define WELCOME  " Welcome to the Renovation-For-All billing system."
#define DESCRIPTION  " This program makes it possible to calculate the invoice for the installation of a floor\n in the given"\
	             "surface according to the price per square foot and the type of floor."  
#define MENU "*** Menu of choice ***"\
             "\n1.  Invoice the installation of a floor"\
             "\n2.  Display the number of floors installed and the total amount of all installations"\
	     "\n3.  Quit the program" 
#define TAB "\t"
#define NL "\n"

using namespace std; 

enum OPTIONS {ONE = 1 , TWO = 2, THREE = 3};

int main() {

	//program variables 
	int choice; 
        bool quit;
        OPTIONS opt1 = ONE;
        OPTIONS opt2 = TWO;
	OPTIONS opt3 = THREE;

	//Initializing variables 
	quit = false;



	/***The program***/ 

	//Display the menu of the program 
	
 	cout<<LINE<<endl<<WELCOME<<endl<<DESCRIPTION<<endl<<LINE<<endl;
        
	
        while (!quit) {

	//Menu of choice
	cout<<NL<<MENU<<endl;
	cin>>choice;
	 
		switch(choice){ 
			case 'opt1':
			break;
			case 'opt2':
			break; 
			case 'opt3'	
			quit = true; 
			break;
		}
	}	

	return 0; 
        
 }
