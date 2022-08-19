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
#define SLINE "---------------------------------------------------------"
#define WELCOME  " Welcome to the Renovation-For-All billing system."
#define DESCRIPTION  " This program makes it possible to calculate the invoice for the installation of a floor\n in the given"\
	             "surface according to the price per square foot and the type of floor."  
#define MENU "*** Menu of choice ***"\
             "\n1.  Invoice the installation of a floor"\
             "\n2.  Display the number of floors installed and the total amount of all installations"\
	     "\n3.  Quit the program"\
	     "\n\nEnter your choice : "  
#define MSG_SOLL_F_NAME "Enter customer`s first name : "
#define MSG_SOLL_L_NAME "Enter customer`s last name : "
#define MSG_SOLL_PHONE "Enter customer`s phone number : "
#define MSG_SOLL_ADDR "Enter customer`s address : "
#define MSG_SOLL_FLOOR "Enter the floor type (1 for ceramic, \n  2 for the vinyl tiles, "\
                       "3 for linoleum, \n  4 for hardwood, 5 for floating floor) : "

#define MSG_SOLL_SURFACE "Enter the area to be covered in square feet (greather than 0) : "
#define MSG_SOLL_BUILD "Enter building type (R or r for residential, and E or e for company) : "
#define MSG_SOLL_PAY "Enter payment method (S for cash, D for debit, and C for credit) : "
#define  RFA "Renovation-For-All"
#define INVOICE_NBR "Invoice No: "
#define DTHR "Date et Heure: "
#define FLNAME "Last name and first name: "
#define ADDRESS "Customer`s address: "
#define SURFACE "Surface to be covered: "
#define BUILDING "Type of building: "
#define FLOOR "Type of floor: "
#define PAYEMENT "Payment method: "
#define PSQ  "Price by square feet"
#define ST "Sub-total"
#define TPS "TPS amount"
#define TVQ "TVQ amount"
#define TT "Total amount"
#define THANKS "Thank you for your trust!"
#define TAB "\t"
#define NL "\n"
#define ONE   1 
#define TWO   2 
#define THREE 3
#define SIX   6
#define MSG_ERR "Entry Invalid !"


using namespace std; 



int main() {

	//program variables 
	int choice; 
    bool quit;
	bool validation; 
	string lname;
    string fname;
	string phone;
	string address;
	int floor;
	int surface;
	char building;
	char payment;

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

			//Enter the customer last-name 
			cout<<NL<<NL<<MSG_SOLL_L_NAME;
            cin>>lname;   	

			//Enter the customer first-name 
			cout<<NL<<MSG_SOLL_F_NAME;
            cin>>fname; 

			//Enter the customer phone number
			cout<<NL<<MSG_SOLL_PHONE; 
			cin>>phone; 

			//Enter the customer address 
			cout<<NL<<MSG_SOLL_ADDR;
			cin>>address;

            validation = false;
			while(!validation) {

			//Enter the floor type 
			cout<<NL<<MSG_SOLL_FLOOR;
            cin>>floor;
             if (floor >= ONE && floor <SIX)
			 	validation = true;
			 else 
			 	cout<<NL<<MSG_ERR<<NL<<NL;

           }
 
			//Enter the surface
			cout<<NL<<MSG_SOLL_SURFACE;
			cin>>surface;

			//Enter the building 
			cout<<NL<<MSG_SOLL_BUILD;
			cin>>building;

			//Enter the payment method 
			cout<<NL<<MSG_SOLL_PAY;
			cin>>payment; 
			
			


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
