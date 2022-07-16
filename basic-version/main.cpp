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
	     "\n3.  Quit the program"\
	     "\n\nEnter your choice : "  

#define TAB "\t"
#define NL "\n"
#define ONE   1 
#define TWO   2 
#define THREE 3
#define MSG_ERR "Entry Invalid !"


using namespace std; 



int main() {

	//program variables 
	int choice; 
        bool quit;
	bool validation; 


	//Initializing variables 
	quit = false;
	validation = true;


	/***The program***/ 

	//Display the menu of the program 
	
 	cout<<LINE<<endl<<WELCOME<<endl<<DESCRIPTION<<endl<<LINE<<endl;
        
	
        while (!quit) {

	//Menu of choice
	
	while (validation) {
        
	//Enter your choise
	cout<<NL<<MENU;
	cin>>choice;

	//Verify the menu options
	if (choice >= ONE && choice <= THREE) 
	       validation = false;
	else 
		cout<<NL<<MSG_ERR<<NL<<NL;
		
        
	}
	 
		switch(choice){ 
			case ONE:
			break;
			case TWO:
			break; 
			case THREE:	
			quit = true; 
			break;
		}
	}	

	return 0; 
        
 }
