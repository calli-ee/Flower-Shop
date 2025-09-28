//username: callie
//password: 2444666668888888

#include <iostream>
#include <fstream>
#include <windows.h>
#include <string>
#include <sstream>
#include <set>
#include <ctime>
using namespace std;

//necessary aesthetics
void mainheader();
void loading();
void loadingg();
void display();
void nameDisplay();

//add-ons
void addName();
void editName();
void searchName();
void deleteName();
void buyName();
void receiptName();

//menus
void mainMenu();
void adminMenu();
void customerMenu();

//read, check, update inventory, add balance
int count();
void updateInventory(int, int);
double addBalance(double);

//main program
void add();
void edit();
void search();
void deletee();
void buy();

int main() {
	mainheader();
	mainMenu();

	return 0;
}

//loading animation 1
void loading() {
	cout<<"\n\n\t\t\t\t\tLoading...";
	cout<<"\n\t\t\t\t\t";
	for(int i = 1; i <= 80; i++){
		cout<<"█";
		Sleep(1);
	}
}

//loading animation 2
void loadingg() {
	for (int i = 0; i <= 4; i++) {
		cout<<"\b\\"<<flush; // \b used for moving cursor back 1 space
        Sleep(100);
        cout<<"\b|"<<flush; //flush used for displaying faster
        Sleep(100);
        cout<<"\b/"<<flush;
        Sleep(100);
        cout<<"\b-"<<flush;
        Sleep(100);
	}
	cout<<"\b ";
}

//for displaying shop name
void nameDisplay() {
	cout<<"\n\n\t\t,------.,--.                                 ,--.   ,--.                       ,--. ,---.,--.    \n";
    cout<<"\t\t|  .---'|  | ,---. ,--.,--.,--.--. ,---.     |   `.'   | ,--,--. ,---. ,--,--, `--'/  .-'`--' ,---. ,--.,--. ,---.  ,---.  \n";
	cout<<"\t\t|  `--, |  || .-. :|  ||  ||  .--'(  .-'     |  |'.'|  |' ,-.  || .-. ||      |,--.|  `-,,--.| .-. ||  ||  || .-. :(  .-'  \n";
	cout<<"\t\t|  |`   |  ||   --.'  ''  '|  |   .-'  `)    |  |   |  || '-'  |' '-' '|  ||  ||  ||  .-'|  |' '-' |'  ''  '|   --..-'  `) \n";
	cout<<"\t\t`--'    `--' `----' `----' `--'   `----'     `--'   `--' `--`--'.`-  / `--''--'`--'`--'  `--' `-|  | `----'  `----'`----'  \n";
	cout<<"\t\t                                                                `---'                           `--'                       \n";
}

//opening animation
void mainheader() {
	string arr [] = {
	",------.,--.                                 ,--.   ,--.                       ,--. ,---.,--.                              ",
	"|  .---'|  | ,---. ,--.,--.,--.--. ,---.     |   `.'   | ,--,--. ,---. ,--,--, `--'/  .-'`--' ,---. ,--.,--. ,---.  ,---.  ",
	"|  `--, |  || .-. :|  ||  ||  .--'(  .-'     |  |'.'|  |' ,-.  || .-. ||      |,--.|  `-,,--.| .-. ||  ||  || .-. :(  .-'  ",
	"|  |`   |  ||   --.'  ''  '|  |   .-'  `)    |  |   |  || '-'  |' '-' '|  ||  ||  ||  .-'|  |' '-' |'  ''  '|   --..-'  `) ",
	"`--'    `--' `----' `----' `--'   `----'     `--'   `--' `--`--'.`-  / `--''--'`--'`--'  `--' `-|  | `----'  `----'`----'  ",
	"                                                                `---'                           `--'                       "
	}; 
	
	cout<<"\t\t"<<arr[4]<<"\n\t\t"<<arr[5]; 
	Sleep(25); system("cls");
	
	cout<<"\t\t"<<arr[3]<<"\n\t\t"<<arr[4]<<"\n\t\t"<<arr[5]; 
	Sleep(25); system("cls");
	
	cout<<"\t\t"<<arr[2]<<"\n\t\t"<<arr[3]<<"\n\t\t"<<arr[4]
		<<"\n\t\t"<<arr[5]; 
	Sleep(25); system("cls");
	
	cout<<"\t\t"<<arr[1]<<"\n\t\t"<<arr[2]<<"\n\t\t"<<arr[3]
		<<"\n\t\t"<<arr[4]<<"\n\t\t"<<arr[5]; 
	Sleep(25); system("cls");
	
	cout<<"\t\t"<<arr[0]<<"\n\t\t"<<arr[1]<<"\n\t\t"<<arr[2]
		<<"\n\t\t"<<arr[3]<<"\n\t\t"<<arr[4]<<"\n\t\t"<<arr[5]; 
	Sleep(25); system("cls");
	
	cout<<"\n\n\t\t"<<arr[0]<<"\n\t\t"<<arr[1]<<"\n\t\t"<<arr[2]
		<<"\n\t\t"<<arr[3]<<"\n\t\t"<<arr[4]<<"\n\t\t"<<arr[5]; 
	Sleep(35); system("cls");
	
	cout<<"\n\n\n\n\t\t"<<arr[0]<<"\n\t\t"<<arr[1]<<"\n\t\t"<<arr[2]
		<<"\n\t\t"<<arr[3]<<"\n\t\t"<<arr[4]<<"\n\t\t"<<arr[5]; 
	Sleep(35); system("cls");
	
	cout<<"\n\n\n\n\n\n\t\t"<<arr[0]<<"\n\t\t"<<arr[1]<<"\n\t\t"<<arr[2]
		<<"\n\t\t"<<arr[3]<<"\n\t\t"<<arr[4]<<"\n\t\t"<<arr[5]; 
	Sleep(35); system("cls");
	
	cout<<"\n\n\n\n\n\n\n\n\t\t"<<arr[0]<<"\n\t\t"<<arr[1]<<"\n\t\t"<<arr[2]
		<<"\n\t\t"<<arr[3]<<"\n\t\t"<<arr[4]<<"\n\t\t"<<arr[5]; 
	Sleep(35); system("cls");
	
	cout<<"\n\n\n\n\n\n\n\n\n\n\t\t"<<arr[0]<<"\n\t\t"<<arr[1]<<"\n\t\t"<<arr[2]
		<<"\n\t\t"<<arr[3]<<"\n\t\t"<<arr[4]<<"\n\t\t"<<arr[5]; 
	Sleep(35); system("cls");
	
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t"<<arr[0]<<"\n\t\t"<<arr[1]<<"\n\t\t"<<arr[2]
		<<"\n\t\t"<<arr[3]<<"\n\t\t"<<arr[4]<<"\n\t\t"<<arr[5]; 
	Sleep(35); system("cls");
	
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t"<<arr[0]<<"\n\t\t"<<arr[1]<<"\n\t\t"<<arr[2]
		<<"\n\t\t"<<arr[3]<<"\n\t\t"<<arr[4]<<"\n\t\t"<<arr[5]; 
	Sleep(200); cout<<"\n\n\t\t\t\t\t\t\t\tThe art of blooming your life.\n\n\n\n\n\n\n\n\n\n\n\n";
	
	Sleep(1000); loading();
}

//main menu
void mainMenu() {
	system("cls");
	char choice;
	
	do {
		system("cls");
		nameDisplay();
		
		cout<<"\t\t\t\t\t\t\t\t_________________________________";
	    cout<<"\n\t\t\t\t\t\t\t\t|                               |";
	    cout<<"\n\t\t\t\t\t\t\t\t|                               |";
		cout<<"\n\t\t\t\t\t\t\t\t|          Choose Action        |"; 
	    cout<<"\n\t\t\t\t\t\t\t\t|                               |";
	    cout<<"\n\t\t\t\t\t\t\t\t|      [1] Admin                |";
	    cout<<"\n\t\t\t\t\t\t\t\t|      [2] Customer             |";
	    cout<<"\n\t\t\t\t\t\t\t\t|      [3] Exit                 |";
		cout<<"\n\t\t\t\t\t\t\t\t|                               |";
	    cout<<"\n\t\t\t\t\t\t\t\t|_______________________________|";
	    
	    cout<<"\n\n\n\t\t\tEnter your choice: ";
    	cin>>choice;
    	
    	switch (choice) {
    		case '1': {
    			loading();
    			system("cls");
    			nameDisplay();
    			string user = "", pass = "";
    			
    			cout<<"\n\n\t\t\t\t\t\t\t\t\t>>  Login  <<\n\n";
    			
    			for (int i = 2; i >= 0; i--) {
					cout<<"\n\n\t\t\tEnter Username: ";
					cin>>user;
					cout<<"\n\t\t\tEnter Password: ";
					cin>>pass;
					
					if (user == "callie" && pass == "2444666668888888") {
						cout<<"\n\n\t\t\tLogging in ";
						loadingg();
						cout<<"\n\n\n\t\t\t\t\t\t\t<< Logged in Successfully. Welcome Admin! >> \n\n";
						loading();
						adminMenu();
						break;
					} else {
						if (i != 0) {
							cout<<"\n\n\t\t\tAccount not found. Please try Again. "<<i<<" tries left.\n";
							Sleep(1000);
							loading();
							system("cls");
							nameDisplay();
							cout<<"\n\n\t\t\t\t\t\t\t\t\t>>  Login  <<\n\n";
						}
						
						else if (i == 0) {
							cout<<"\n\n\t\t\t\t\t\t\t\t   >>  System Locked!  <<\n\n";
							cout<<"\t\t\t\t\t\t\t\t>>  Terminating Program.  <<\n\n";
							loading();
							return;
						}
					}
				}
				break;
			}
            case '2':
                loading();
                customerMenu();
                break;
            case '3':
				cout<<"\n\n\t\t\t\t\t\t\t    >>  Thank you for visiting our store  <<\n\n";
                cout<<"\t\t\t\t\t\t\t\t      >>  Goodbye User!  <<\n\n";
                return;
        	default:
           		cout<<"\n\n\t\t\tYou entered an invalid command code. Please try again.\n\n";
            	loading();
				break;
		}    	
	} while(choice != '+'); //for infinite loop
}

//menu for admin
void adminMenu() {
	system("cls");
	char choice;
	
	do {
		system("cls");
		nameDisplay();
		cout<<"\n\t\t\t\t\t\t\t\t       ----- A D M I N ----- \n\n\n";
		
		cout<<"\t\t\t\t\t\t\t\t_________________________________";
	    cout<<"\n\t\t\t\t\t\t\t\t|                               |";
	    cout<<"\n\t\t\t\t\t\t\t\t|                               |";
		cout<<"\n\t\t\t\t\t\t\t\t|          Choose Action        |"; 
	    cout<<"\n\t\t\t\t\t\t\t\t|                               |";
	    cout<<"\n\t\t\t\t\t\t\t\t|      [1] Add Item             |";
	    cout<<"\n\t\t\t\t\t\t\t\t|      [2] Edit Item            |";
	    cout<<"\n\t\t\t\t\t\t\t\t|      [3] Search Item          |";
	    cout<<"\n\t\t\t\t\t\t\t\t|      [4] Delete Item          |";
	    cout<<"\n\t\t\t\t\t\t\t\t|      [5] Buy Item             |";
	    cout<<"\n\t\t\t\t\t\t\t\t|      [6] View Items           |";
		cout<<"\n\t\t\t\t\t\t\t\t|      [7] Return               |";
	    cout<<"\n\t\t\t\t\t\t\t\t|                               |";
	    cout<<"\n\t\t\t\t\t\t\t\t|_______________________________|";
	    
	    cout<<"\n\n\n\t\t\tEnter your choice: ";
    	cin>>choice;
    	
    	switch (choice) {
    		case '1':
    			loading();
                add();
                break;
            case '2':
                loading();
                edit();
                break;
            case '3':
                loading();
                search();
                break;
            case '4':
                loading();
                deletee();
                break;
            case '5':
                loading();
				buy();
                break;
            case '6': {
            	loading();
				system("cls");
				nameDisplay();
                display();
                string choice;
				
				do {
					cout<<"\n\t\t\tContinue? [yes]\t";
					cin>>choice;
					
					if(choice == "yes") {
						loading();					
						break;
					} else {
						cout<<"\n\n\t\t\tYou entered an invalid command code. Please try again.\n\n";
			            loading();
			            system("cls");
			            nameDisplay();
						display();
					}
				} while (choice != "(- _ -)");
            	
				break;
			}
            case '7':
                cout<<"\t\t\t\t\t\t\t\t      >>  Goodbye Admin!  <<\n\n";
                loading();
				break;
            default:
                cout<<"\n\n\t\t\tYou entered an invalid command code. Please try again.\n\n";
                loading();
				break;
		}    	
    	
	} while(choice != '7');                                                                                                                
}

//menu for customer
void customerMenu() {
	system("cls");
	char choice;
	
	do {
		system("cls");
		nameDisplay();
		cout<<"\n\t\t\t\t\t\t\t\t   ----- C U S T O M E R -----\n\n\n";
		
		cout<<"\t\t\t\t\t\t\t\t_________________________________";
	    cout<<"\n\t\t\t\t\t\t\t\t|                               |";
	    cout<<"\n\t\t\t\t\t\t\t\t|                               |";
		cout<<"\n\t\t\t\t\t\t\t\t|          Choose Action        |"; 
	    cout<<"\n\t\t\t\t\t\t\t\t|                               |";
	    cout<<"\n\t\t\t\t\t\t\t\t|      [1] Buy Item             |";
	    cout<<"\n\t\t\t\t\t\t\t\t|      [2] Search Item          |";
	    cout<<"\n\t\t\t\t\t\t\t\t|      [3] View Items           |";
	    cout<<"\n\t\t\t\t\t\t\t\t|      [4] Return               |";
		cout<<"\n\t\t\t\t\t\t\t\t|                               |";
	    cout<<"\n\t\t\t\t\t\t\t\t|_______________________________|";
	    
	    cout<<"\n\n\n\t\t\tEnter your choice: ";
    	cin>>choice;
    	
    	switch (choice) {
    		case '1':
    			loading();
                buy();
                break;
            case '2':
                loading();
                search();
                break;
            case '3': {
            	loading();
				system("cls");
				nameDisplay();
                display();
                string choice;
				
				do {
					cout<<"\n\t\t\tContinue? [yes]\t";
					cin>>choice;
					
					if(choice == "yes") {
						loading();					
						break;
					} else {
						cout<<"\n\n\t\t\tYou entered an invalid command code. Please try again.\n\n";
			            loading();
			            system("cls");
			            nameDisplay();
			            display();
					}
				} while (choice != "(- _ -)");
            	
				break;
			}
            case '4':
            	cout<<"\n\n\t\t\t\t\t\t\t    >>  Thank you for visiting our store  <<\n\n";
                cout<<"\t\t\t\t\t\t\t\t      >>  Goodbye User!  <<\n\n";
                loading();
				return;
            default:
                cout<<"\n\n\t\t\tYou entered an invalid command code. Please try again.\n\n";
                loading();
				break;
		}    	
    	
	} while(choice != '+');
}

//used to count number of products/items in the txt file
int count() {
	string inventory;
	int items = 0;
	ifstream readFile("inventory.txt");
	while (getline(readFile, inventory)) {
        items++;
    }
	readFile.close();
	return items;
}

//for displaying contents of inventory.txt file
void display() {
	cout<<"\t\t\t\t\t\t\t\t       --- Inventory ---\n\n";
	
	string inventory; //for storing each line of the inventory.txt file
	
	cout<<"\t\t\t_________________________________________________________________________________________________________\n";
	cout<<"\t\t\t|\tID\t|\t\t   Name   \t\t|\t  Price  \t|\tQuantity\t|";
	cout<<"\n\t\t\t|---------------|---------------------------------------|-----------------------|-----------------------|\n";
	
	ifstream readFile("inventory.txt");
	while (getline(readFile, inventory)) {
		string idStr, name, priceStr, quantityStr;
        stringstream ss(inventory);
        getline(ss, idStr, ','); getline(ss, name, ','); 
		getline(ss, priceStr, ','); getline(ss, quantityStr, ',');
		cout<<"\t\t\t|\t"<<idStr<<"\t|\t\t "<<name<<"   \t\t|\t  "<<priceStr<<"  \t|\t   "<<quantityStr<<"       \t|\n";
	}
    cout<<"\t\t\t|_______________|_______________________________________|_______________________|_______________________|\n";
	cout<<"\n\n\t\t\t\t\t\t\t\t    --- End of inventory --- \n\n";
    readFile.close();
}

//for heaader of add function
void addName() {
	cout<<"\n\n\t\t\t\t\t\t     ,---.     ,--.   ,--.    ,--.  ,--.                    \n";
    cout<<"\t\t\t\t\t\t    /  O  \\  ,-|  | ,-|  |    |  |,-'  '-. ,---. ,--,--,--. \n";
	cout<<"\t\t\t\t\t\t   |  .-.  |' .-. |' .-. |    |  |'-.  .-'| .-. :|        | \n";
	cout<<"\t\t\t\t\t\t   |  | |  |\\ `-' |\\ `-' |    |  |  |  |  \\   --.|  |  |  | \n";
	cout<<"\t\t\t\t\t\t   `--' `--' `---'  `---'     `--'  `--'   `----'`--`--`--' \n";
	cout<<"\t\t\t\t\t\t\t\t ----- 𝓕𝓵𝓮𝓾𝓻𝓼 𝓜𝓪𝓰𝓷𝓲𝓯𝓲𝓺𝓾𝓮𝓼 -----\n\n\n";
}

//for heaader of edit function
void editName() {
	cout<<"\n\n\t\t\t\t\t\t  ,------.   ,--.,--.  ,--.      ,--.  ,--.                    \n";
    cout<<"\t\t\t\t\t\t  |  .---' ,-|  |`--',-'  '-.    |  |,-'  '-. ,---. ,--,--,--. \n";
	cout<<"\t\t\t\t\t\t  |  `--, ' .-. |,--.'-.  .-'    |  |'-.  .-'| .-. :|        | \n";
	cout<<"\t\t\t\t\t\t  |  `---.\\ `-' ||  |  |  |      |  |  |  |  \\   --.|  |  |  | \n";
	cout<<"\t\t\t\t\t\t  `------' `---' `--'  `--'      `--'  `--'   `----'`--`--`--' \n";
	cout<<"\t\t\t\t\t\t\t\t ----- 𝓕𝓵𝓮𝓾𝓻𝓼 𝓜𝓪𝓰𝓷𝓲𝓯𝓲𝓺𝓾𝓮𝓼 -----\n\n\n";
}

//for heaader of edit function
void searchName() {
	cout<<"\n\n\t\t\t\t\t   ,---.                              ,--.         ,--.  ,--.                    \n";
	cout<<"\t\t\t\t\t  '   .-'  ,---.  ,--,--.,--.--. ,---.|  ,---.     |  |,-'  '-. ,---. ,--,--,--. \n";
	cout<<"\t\t\t\t\t  `.  `-. | .-. :' ,-.  ||  .--'| .--'|  .-.  |    |  |'-.  .-'| .-. :|        | \n";
	cout<<"\t\t\t\t\t  .-'    |\\   --.\\ '-'  ||  |   \\ `--.|  | |  |    |  |  |  |  \\   --.|  |  |  | \n";
	cout<<"\t\t\t\t\t  `-----'  `----' `--`--'`--'    `---'`--' `--'    `--'  `--'   `----'`--`--`--' \n";
	cout<<"\t\t\t\t\t\t\t\t ----- 𝓕𝓵𝓮𝓾𝓻𝓼 𝓜𝓪𝓰𝓷𝓲𝓯𝓲𝓺𝓾𝓮𝓼 -----\n\n\n";
}

//for heaader of delete function
void deleteName() {
	cout<<"\n\n\t\t\t\t\t  ,------.         ,--.         ,--.             ,--.  ,--.                    \n";
    cout<<"\t\t\t\t\t  |  .-.  \\  ,---. |  | ,---. ,-'  '-. ,---.     |  |,-'  '-. ,---. ,--,--,--. \n";
	cout<<"\t\t\t\t\t  |  |  \\  :| .-. :|  || .-. :'-.  .-'| .-. :    |  |'-.  .-'| .-. :|        | \n";
	cout<<"\t\t\t\t\t  |  '--'  /\\   --.|  |\\   --.  |  |  \\   --.    |  |  |  |  \\   --.|  |  |  | \n";
	cout<<"\t\t\t\t\t  `-------'  `----'`--' `----'  `--'   `----'    `--'  `--'   `----'`--`--`--' \n";
	cout<<"\t\t\t\t\t\t\t\t ----- 𝓕𝓵𝓮𝓾𝓻𝓼 𝓜𝓪𝓰𝓷𝓲𝓯𝓲𝓺𝓾𝓮𝓼 -----\n\n\n";
}

//for heaader of buy function
void buyName() {
	cout<<"\n\n\t\t\t\t\t\t  ,-----.                       ,--.  ,--.                    \n";
    cout<<"\t\t\t\t\t\t  |  |) /_ ,--.,--.,--. ,--.    |  |,-'  '-. ,---. ,--,--,--. \n";
	cout<<"\t\t\t\t\t\t  |  .-.  \\|  ||  | \\  '  /     |  |'-.  .-'| .-. :|        | \n";
	cout<<"\t\t\t\t\t\t  |  '--' /'  ''  '  \\   '      |  |  |  |  \\   --.|  |  |  | \n";
	cout<<"\t\t\t\t\t\t  `------'  `----' .-'  /       `--'  `--'   `----'`--`--`--' \n";
	cout<<"\t\t\t\t\t\t                   `---'                                      \n";
	cout<<"\t\t\t\t\t\t\t\t ----- 𝓕𝓵𝓮𝓾𝓻𝓼 𝓜𝓪𝓰𝓷𝓲𝓯𝓲𝓺𝓾𝓮𝓼 -----\n\n\n";
}

//for heaader of receipt 
void receiptName() {
	cout<<"\n\n\t\t\t\t\t\t\t,------.                     ,--.         ,--.   \n";
    cout<<"\t\t\t\t\t\t\t|  .--. ' ,---.  ,---. ,---. `--' ,---. ,-'  '-. \n";
	cout<<"\t\t\t\t\t\t\t|  '--'.'| .-. :| .--'| .-. :,--.| .-. |'-.  .-' \n";
	cout<<"\t\t\t\t\t\t\t|  |\\  \\ \\   --.\\ `--.\\   --.|  || '-' '  |  |   \n";
	cout<<"\t\t\t\t\t\t\t`--' '--' `----' `---' `----'`--'|  |-'   `--'   \n";
	cout<<"\t\t\t\t\t\t\t                                 `--'            \n";
	cout<<"\t\t\t\t\t\t\t\t ----- 𝓕𝓵𝓮𝓾𝓻𝓼 𝓜𝓪𝓰𝓷𝓲𝓯𝓲𝓺𝓾𝓮𝓼 -----\n\n\n";
}

//add item 
void add() {
	system("cls");
	
	addName();
	display();
	
	//checker if inventorry has already 20 items
	int items = count();
    if (items == 20) {
        cout<<"\n\t\t\tMaximum number of items reached.\n"
            <<"\t\t\tDelete from your inventory to be able to add again.\n\n";
        
		Sleep(2000);
        loading();
        
    } else {
        int id, price, quantity;
        string name;
        
        cout<<"\t\t\tEnter product ID: ";
        cin>>id;
        
        //404 can't be used as product id. "404" is used for exit in buy function
        if (id == 404) {
        	cout<<"\n\n\t\t\tProduct ID entered cannot be used. Enter a different product ID.\n\n";
        	loading();
			add();
    		
		} else {
			string inventory;
	        bool check = false;
	        
			ifstream readFile("inventory.txt");
	        while (getline(readFile, inventory)) {
	            stringstream ss(inventory); //for contents of the string inventory
	            int existingId; //for storing the id's from the inventory.txt file
	            if (ss >> existingId && existingId == id) { //reads id's from the txt file and checks if the input id matches the id's read
	                check = true;
	                
	                cout<<"\n\n\t\t\tProduct ID already taken. Enter a different product ID.\n\n";
					loading();
					add();
	            }
	        }
	        readFile.close();

		    if (!check) {
		        cout<<"\t\t\tEnter product name: ";
		        cin.ignore();
		        getline(cin, name);
		        cout<<"\t\t\tEnter product price: ";
		        cin>>price;
		        cout<<"\t\t\tEnter product quantity: ";
		        cin>>quantity;
		
		        ofstream mainFile("inventory.txt", ios::app);
		        mainFile<<id<<", "<<name<<", "<<price<<", "<<quantity<<"\n";
		        mainFile.close();
				
				cout<<"\n\n\t\t\tAdding product to inventory ";
				loadingg();
				
		        cout<<"\n\n\t\t\t\t\t\t\t<< Product added to inventory successfully >> \n";
		        Sleep(1000);
		        loading();
		        system("cls");
		        addName();
				display();
		        Sleep(2000);
		        loading();
		    }
		}
	}
}

//edit item
void edit() {
	system("cls");
	
	editName();
	display();
	
	string id, name, price, quantity, newId, inventory;
	bool check = false;
	set<string> ids; //for holding the id's from the txt file
	
	ifstream readId("inventory.txt");
    string line;
    while (getline(readId, line)) {
        stringstream ss(line);
        string idStr; //temporary holder of the id
        getline(ss, idStr, ','); //stores the id's in the string IdStr
        ids.insert(idStr); //stores the id's in the set ids
    }
    readId.close();
	
	cout<<"\n\t\t\tEnter product ID to edit: ";
	cin.ignore();
    getline(cin, id);
    
	ifstream readFile("inventory.txt");
    ofstream fileTemp("inventory_temp.txt");
    
    while (getline(readFile, inventory)) {
        string idStr, nameStr, priceStr, quantityStr;
        stringstream ss(inventory);
        getline(ss, idStr, ','); getline(ss, nameStr, ','); 
		getline(ss, priceStr, ','); getline(ss, quantityStr, ',');
		
		string temp = inventory; //copy of inventory
        size_t pos = temp.find(","); //finds first comma in temp
        
        if (pos != string::npos && temp.substr(0, pos) == id) { //looks for the first comma in temp and if the string before it matches the input id
            check = true;
            cout<<"\n\n\t\t\tEditing product details for product ID "<<id<<".\n\n";
            loading();
        	system("cls");
        	
        	editName();
        	
            cout<<"\n\n\t\t\tCurrent product details: \n";
            
            cout<<"\t\t\t_________________________________________________________________________________________________________\n";
			cout<<"\t\t\t|\tID\t|\t\t   Name   \t\t|\t  Price  \t|\tQuantity\t|";
			cout<<"\n\t\t\t|---------------|---------------------------------------|-----------------------|-----------------------|\n";
			cout<<"\t\t\t|\t"<<idStr<<"\t|\t\t "<<nameStr<<"   \t\t|\t  "<<priceStr<<"  \t|\t   "<<quantityStr<<"       \t|\n";
			cout<<"\t\t\t|_______________|_______________________________________|_______________________|_______________________|\n\n\n";
			
			for (;;) {
				cout<<"\t\t\tEnter new product ID: ";
            	getline(cin, newId);
            	
            	if (newId == "404") { //404 can't be used as product id. "404" is used for exit in buy function
					cout<<"\n\n\t\t\tProduct ID entered cannot be used. Enter a different product ID.\n\n";
        			loading();
        			
        			system("cls");
            		editName();
            		
            		cout<<"\n\n\t\t\tCurrent product details: \n";
            
		            cout<<"\t\t\t_________________________________________________________________________________________________________\n";
					cout<<"\t\t\t|\tID\t|\t\t   Name   \t\t|\t  Price  \t|\tQuantity\t|";
					cout<<"\n\t\t\t|---------------|---------------------------------------|-----------------------|-----------------------|\n";
					cout<<"\t\t\t|\t"<<idStr<<"\t|\t\t "<<nameStr<<"   \t\t|\t  "<<priceStr<<"  \t|\t   "<<quantityStr<<"       \t|\n";
					cout<<"\t\t\t|_______________|_______________________________________|_______________________|_______________________|\n\n\n";
				}
            	
            	else if (ids.find(newId) != ids.end() && newId != id) {
            		cout<<"\n\n\t\t\tProduct with ID "<<newId<<" already in use. Please use a different ID.\n\n\n";
            		
            		loading();
            		system("cls");
            		editName();
            		
            		cout<<"\n\n\t\t\tCurrent product details: \n";
            
		            cout<<"\t\t\t_________________________________________________________________________________________________________\n";
					cout<<"\t\t\t|\tID\t|\t\t   Name   \t\t|\t  Price  \t|\tQuantity\t|";
					cout<<"\n\t\t\t|---------------|---------------------------------------|-----------------------|-----------------------|\n";
					cout<<"\t\t\t|\t"<<idStr<<"\t|\t\t "<<nameStr<<"   \t\t|\t  "<<priceStr<<"  \t|\t   "<<quantityStr<<"       \t|\n";
					cout<<"\t\t\t|_______________|_______________________________________|_______________________|_______________________|\n\n\n";
				} else {
					cout<<"\t\t\tEnter new product name: ";
		            getline(cin, name);
		            cout<<"\t\t\tEnter new product price: ";
		            getline(cin, price);
		            cout<<"\t\t\tEnter new product quantity: ";
		            getline(cin, quantity);
		            
		            temp = newId + ", " + name + ", " + price + ", " + quantity; //sets the new details in the temp
		            break;
				}
			}
        }
        fileTemp<<temp<<endl;
    }

    readFile.close();
    fileTemp.close();
    
    if (check) {
        remove("inventory.txt");
        rename("inventory_temp.txt", "inventory.txt");
        
        cout<<"\n\n\t\t\tUpdating item details ";
        loadingg();
        
        cout<<"\n\n\t\t\t\t\t\t\t    << Item details edited successfully >> \n\n";
        loading();
        system("cls");
		editName();
		display();
        Sleep(3000);
        loading();
        
    } else {
        cout<<"\n\n\t\t\tProduct with ID "<<id<<" not found. Please try again.\n\n";
        loading();
        remove("inventory_temp.txt");
        return;
    }
}

//search item
void search() {
	char choice;
	
	do {
		system("cls");
		searchName();
		
		cout<<"\t\t\t\t\t\t\t\t_________________________________";
	    cout<<"\n\t\t\t\t\t\t\t\t|                               |";
	    cout<<"\n\t\t\t\t\t\t\t\t|                               |";
		cout<<"\n\t\t\t\t\t\t\t\t|        Search Item By:        |"; 
	    cout<<"\n\t\t\t\t\t\t\t\t|                               |";
	    cout<<"\n\t\t\t\t\t\t\t\t|      [1] ID                   |";
	    cout<<"\n\t\t\t\t\t\t\t\t|      [2] Name                 |";
	    cout<<"\n\t\t\t\t\t\t\t\t|      [3] View All             |";
	    cout<<"\n\t\t\t\t\t\t\t\t|                               |";
	    cout<<"\n\t\t\t\t\t\t\t\t|_______________________________|";
	    
	    cout<<"\n\n\n\t\t\tEnter your choice: ";
    	cin>>choice;
    	loading();
    	
    	switch (choice) {
    		case '1': {
    			system("cls");
				searchName();
    			
    			int id;
    			string inventory;
    			
    			cout<<"\n\t\t\tEnter product ID to search: ";
    			cin>>id;
    			
    			cout<<"\n\n\t\t\tSearching for product with ID "<<id<<"  ";
                loadingg();
    			
    			bool check = false;
    			
    			ifstream readFile("inventory.txt");
    			while(getline(readFile, inventory)) {
					stringstream ss(inventory);
            		int existingId;
            		
            		if (ss >> existingId && existingId == id) { //reads id's from the txt file and checks if the input id matches the id's read
                		check = true;
                		
					    cout<<"\n\n\t\t\t\t\t\t\t\t   << Product with ID "<<id<<" found >>\n\n\n";
					    
					    string idStr, nameStr, priceStr, quantityStr;
						stringstream ss(inventory);
						
						getline(ss, idStr, ','); getline(ss, nameStr, ',');
						getline(ss, priceStr, ','); getline(ss, quantityStr, ',');
						
						cout<<"\n\t\t\tProduct details: \n";
						cout<<"\t\t\t_________________________________________________________________________________________________________\n";
						cout<<"\t\t\t|\tID\t|\t\t   Name   \t\t|\t  Price  \t|\tQuantity\t|";
						cout<<"\n\t\t\t|---------------|---------------------------------------|-----------------------|-----------------------|\n";
						cout<<"\t\t\t|\t"<<idStr<<"\t|\t\t "<<nameStr<<"   \t\t|\t  "<<priceStr<<"  \t|\t   "<<quantityStr<<"       \t|\n";
						cout<<"\t\t\t|_______________|_______________________________________|_______________________|_______________________|\n\n\n";
					    
						break;
            		}
				}
				readFile.close();
								
				if(!check) {
					cout<<"\n\n\n\t\t\tProduct with ID "<<id<<" not found.\n\n";
					Sleep(1500);
					loading();
					system("cls");
				} else {					
					string choice;
					
					do {
						cout<<"\n\t\t\tContinue searching? [yes or no]\t";
						cin>>choice;
						
						if(choice == "yes") {
						loading();
						break;
						} 
						
						else if (choice == "no"){
							loading();
							system("cls");
							return;
						} else {
							cout<<"\n\n\t\t\tYou entered an invalid command code. Please try again.\n\n";
			                loading();
			                
			                system("cls");
							searchName();
						}
					} while (choice != "(- _ -)");
				}
				break;
			}
            case '2': {
            	system("cls");
				searchName();
    			
    			string nameFind, inventory;
    			
    			cout<<"\n\t\t\tEnter product name to search: ";
    			cin>>nameFind;
    			
    			cout<<"\n\n\t\t\tSearching for product "<<nameFind<<"  ";
                loadingg();
    			
    			bool check = false;
    			
    			ifstream readFile("inventory.txt");
    			while(getline(readFile, inventory)) {
    				string idStr, nameStr, priceStr, quantityStr;
					stringstream ss(inventory);
						
					getline(ss, idStr, ','); getline(ss, nameStr, ',');
					getline(ss, priceStr, ','); getline(ss, quantityStr, ',');
					
    				if(nameStr.find(nameFind) != string::npos) { //checks if nameFind matches inventory
    					check = true;
    					
    					cout<<"\n\n\t\t\t\t\t\t\t\t<< Product with the name "<<nameFind<<" found >>\n\n\n";
						
						cout<<"\n\t\t\tProduct details: \n";
						cout<<"\t\t\t_________________________________________________________________________________________________________\n";
						cout<<"\t\t\t|\tID\t|\t\t   Name   \t\t|\t  Price  \t|\tQuantity\t|";
						cout<<"\n\t\t\t|---------------|---------------------------------------|-----------------------|-----------------------|\n";
						cout<<"\t\t\t|\t"<<idStr<<"\t|\t\t "<<nameStr<<"   \t\t|\t  "<<priceStr<<"  \t|\t   "<<quantityStr<<"       \t|\n";
						cout<<"\t\t\t|_______________|_______________________________________|_______________________|_______________________|\n\n\n";
					
						break;
					}
				}
				readFile.close();
				
				if(!check) {
					cout<<"\n\n\n\t\t\tProduct with the name "<<nameFind<<" not found.\n\n";
					Sleep(800);
					loading();
					system("cls");
				} else {
					string choice;
					
					do {
						cout<<"\n\t\t\tContinue searching? [yes or no]\t";
						cin>>choice;
						
						if(choice == "yes") {
						loading();
						break;
						} 
						
						else if (choice == "no"){
							loading();
							system("cls");
							return;
						} else {
							cout<<"\n\n\t\t\tYou entered an invalid command code. Please try again.\n\n";
			                loading();
			                
			                system("cls");
							searchName();
						}
					} while (choice != "(- _ -)");
				}
				break;
			}
			case '3': {
				system("cls");
				
				string choice;
				searchName();
				display();
				
				do {
					cout<<"\n\t\t\tContinue searching? [yes or no]\t";
					cin>>choice;
					
					if(choice == "yes") {
					loading();
					break;
					} 
					
					else if (choice == "no"){
						loading();
						system("cls");
						return;
					} else {
						cout<<"\n\n\t\t\tYou entered an invalid command code. Please try again.\n\n";
		                loading();
		                
		                system("cls");
						searchName();
						display();
					}
				} while (choice != "(- _ -)");
				
				break;
			}
            default:
                cout<<"\n\n\t\t\tYou entered an invalid command code. Please try again.\n\n";
                loading();
                break;
		}    	
	} while(choice != '+');                                                                                                                
}

//delete item
void deletee() {
	system("cls");
	
	deleteName();
	
	display();
	
	int id;
	string inventory;
    bool check = false;
    
    cout<<"\t\t\tEnter product ID to delete: ";
    cin>>id;
    
    ifstream readFile("inventory.txt");
    ofstream fileTemp("inventory_temp.txt");

    while (getline(readFile, inventory)) {
    	string temp = inventory;
        stringstream ss(temp);
	    int existingId;
	    if (ss >> existingId && existingId == id) { //reads id's from the txt file and checks if the input id matches the id's read
	        check = true;
	        continue; //skips the line where the id matches
	    }
        fileTemp<<temp<<endl;
    }

    readFile.close();
    fileTemp.close();

    if (check) {
        remove("inventory.txt");
        rename("inventory_temp.txt", "inventory.txt");
        
        cout<<"\n\n\t\t\tDeleting product ";
        loadingg();
        
		cout<<"\n\n\n\t\t\tProduct with ID "<<id<<" successfully deleted.\n";
		loading();
        system("cls");
        deleteName();
		display();
        Sleep(3000);
        loading();
        
    } else {
        cout<<"\n\n\t\t\tProduct with ID "<<id<<" not found. Please try again.\n\n";
        loading();
        deletee();
    }
}

//for updating the inventory after the user buys 
void updateInventory(int id, int newQuantity) {
	ifstream readFile("inventory.txt");
    ofstream tempFile("inventory_temp.txt");
    string line;

    while (getline(readFile, line)) {
        stringstream ss(line);
        int existingId;
        string idStr, nameStr, priceStr, quantityStr;

        getline(ss, idStr, ','); getline(ss, nameStr, ',');
        getline(ss, priceStr, ','); getline(ss, quantityStr, ',');

		existingId = stoi(idStr);
		int quantityInventory = stoi(quantityStr);

		if (existingId == id) {
			quantityInventory = newQuantity;
		}
		//excludes product with 0 quantity
        if (quantityInventory > 0) {
            tempFile << idStr << ',' << nameStr << ',' << priceStr << ", " << quantityInventory << '\n';
        }
    }

    readFile.close();
    tempFile.close();
    
    remove("inventory.txt");
	rename("inventory_temp.txt", "inventory.txt");
}

//for adding balance 
double addBalance(double currentBalance) {
    double additionalBalance;
    cout << "\n\t\t\tEnter additional balance: ";
    cin >> additionalBalance;
    cout<<"\n\n\t\t\tAdding to balance ";
	loadingg();
	cout<<"\n\n\n\t\t\t\t\t\t\t      << Added to balance successfully >>\n\n";
    return currentBalance + additionalBalance;
}

//buy item
void buy() {
	system("cls");
	buyName();
		
	double balance = 0, total = 0;
	int quantity = 0;
	
	cout<<"\t\t\tEnter balance: ";
	cin>>balance;
	
	system("cls");
	
	string choice;
	for (;;) {
		system("cls");
		buyName();
		display();
		
		int id;
		
		cout<<"\t\t\tBalance: "<<balance;
		cout<<"\n\n\t\t\tEnter the product ID you want to buy: [enter 404 to exit] ";
		
		cin>>id;
		
		//if user chooses to exit
		if (id == 404) { 
			loading();
			for (;;) {
				system("cls");
				receiptName();
				
				if (quantity == 0) { //if the user exits without buying items
					cout<<"\n\t\t\t\t\t\t\t\t     >> No Items Bought <<\n\n";
					Sleep(1500);
					loading();
					return;
				}
				
				//receipt
				string inventoryR;
				
				ifstream receipt("receipt.txt");
				
				cout<<"\n\t\t\t\t\t\t\t\t       𝓕𝓵𝓮𝓾𝓻𝓼 𝓜𝓪𝓰𝓷𝓲𝓯𝓲𝓺𝓾𝓮𝓼 \n";
				cout<<"\t\t\t\t\t\t\t\t   Bagumbayan Sur, Naga City \n";
				cout<<"\t\t\t\t\t\t\t\t      Owned && Managed By: \n";
				cout<<"\t\t\t\t\t\t\t\t\t   C & N Inc. \n";	
				cout<<"\n\t\t\t\t\t\t    Order No: 1G\t\t\t     ID: 231001990 \n";
				
				cout<<"\t\t\t\t\t\t    ======================================================\n";
				cout<<"\t\t\t\t\t\t     Quantity\t\t\t\t\t   Amount\n";
				cout<<"\t\t\t\t\t\t    ======================================================\n";
				
				//displays the items bought
				while (getline(receipt, inventoryR)) {
					string nameR, priceR, quantityR, totalR;
					stringstream ss(inventoryR);
					getline(ss, nameR, ','); getline(ss, priceR, ',');
					getline(ss, quantityR, ','); getline(ss, totalR, ',');
					
					int priceI = stoi(priceR);
					int quantityI = stoi(quantityR);
					int totalI = stoi(totalR);
					
					cout<< "\t\t\t\t\t\t    " << quantityR << "\t\t   " << nameR << "        \t\t  " << priceR << "\n";
				}
				
				// Get current time
			    time_t now = time(nullptr);
			    
			    // Convert to local time
			    tm * local_time = localtime(&now);
				
				cout<<"\t\t\t\t\t\t    ======================================================\n";
				cout<<"\t\t\t\t\t\t     Amount Due\t\t\t\t\t    "<<total<<"\n\n";
				cout<<"\t\t\t\t\t\t     Amount Tendered:\n";
				cout<<"\t\t\t\t\t\t     Balance"<<"\t\t\t\t\t    "<<balance + total<<"\n";
				cout<<"\t\t\t\t\t\t     Change "<<"\t\t\t\t\t    "<<balance<<"\n";
				cout<<"\t\t\t\t\t\t    ======================================================\n";
				
				cout<<"\n\t\t\t\t\t\t\t\t\t   Supplier: \n";
				cout<<"\t\t\t\t\t\t\t\t     Burakan Sa Kabukidan \n";
				cout<<"\t\t\t\t\t\t\t       Date && Time: "
						<<(1900 + local_time->tm_year)<<"/" //for displaying current date and time
			        	<< (1 + local_time->tm_mon)<<"/"
			        	<< local_time->tm_mday<<" "
			            << local_time->tm_hour<<":"
			            << local_time->tm_min<<":"
			            << local_time->tm_sec<<"\n";
			    cout<<"\n\t\t\t\t\t\t\t\tThis serves as a SALES INVOICE \n";
				
				receipt.close();
				
				cout<<"\n\t\t\tContinue? [Enter]\t";
				cin.ignore();
				cin.get();
				loading();
				remove("receipt.txt");
				return;
			}
		}
		
		string inventory;
		bool check = false;
		bool update = false;
		bool exitB = false;
		
		ifstream readFile("inventory.txt");
		while (getline(readFile, inventory)) {
			stringstream ss(inventory);
			int existingId;
			if (ss >> existingId && existingId == id) {
				check = true;
				
				loading();
				system("cls");
				buyName();
				cout<<"\n\n\t\t\t\t\t\t\t\t << Product with ID "<<id<<" found >>\n\n\n";
			
				string idStr, nameStr, priceStr, quantityStr;
				stringstream ss(inventory);
						
				getline(ss, idStr, ','); getline(ss, nameStr, ',');
				getline(ss, priceStr, ','); getline(ss, quantityStr, ',');
				
				cout<<"\n\t\t\tProduct details: \n";
				cout<<"\t\t\t_________________________________________________________________________________________________________\n";
				cout<<"\t\t\t|\tID\t|\t\t   Name   \t\t|\t  Price  \t|\tQuantity\t|";
				cout<<"\n\t\t\t|---------------|---------------------------------------|-----------------------|-----------------------|\n";
				cout<<"\t\t\t|\t"<<idStr<<"\t|\t\t "<<nameStr<<"   \t\t|\t  "<<priceStr<<"  \t|\t   "<<quantityStr<<"       \t|\n";
				cout<<"\t\t\t|_______________|_______________________________________|_______________________|_______________________|\n\n\n";
				
				double priceInventory = stod(priceStr);
				int quantityInventory = stoi(quantityStr);
				int quantityBuy = 0;
				double totalTemp = 0;
				
				cout<<"\t\t\tBalance: "<<balance;
				cout<<"\n\n\t\t\tHow many would you like to buy: ";
				cin>>quantityBuy;
				
				if (quantityBuy > quantityInventory || priceInventory * quantityBuy > balance) { //checker if there is enough quantity of the product
					update = false;																 //and if the user has enough money
					if (quantityBuy > quantityInventory) {
						cout<<"\n\n\t\t\t\t\t\t\t     <<  Insufficient product quantity.  >>\n";
						cout<<"\t\t\t\t\t\t\t\t<<  Only "<<quantityInventory<<nameStr<<" remain.  >>";
						Sleep(1000);
						break;
					} 
					
					else if (priceInventory * quantityBuy > balance) {
						cout<<"\n\n\n\t\t\t\t\t\t\t\t  <<  Insufficient Balance  >>\n";
						Sleep(1000);
						
						cout<<"\n\n\n\t\t\tWould you like to add more balance? [yes or no] ";
                        cin>>choice;
                        
                        if (choice == "yes") { //if user wants to add more balance
                            balance = addBalance(balance);
                            //continue;
                        } else {
                            break;
                        }
					}
				} else {
					totalTemp = priceInventory * quantityBuy;
					balance = balance - totalTemp;
					
					quantity += quantityBuy;
					total += totalTemp;
					
					int newQuantity = quantityInventory - quantityBuy;
                    updateInventory(id, newQuantity);
					
					cout<<"\n\n\t\t\t"<<quantityBuy<<nameStr<<" purchased.\n";
					cout<<"\t\t\tAmount: "<<totalTemp;
					
					//creates new txt file for receipt
					ofstream receipt("receipt.txt", ios::app);
					receipt << nameStr << ", " << priceStr << ", " << quantityBuy << ", " << totalTemp << "\n";
					receipt.close();
					
					if (balance == 0) {
						check = true;
						exitB = true;
						break;
					} else {
						do {
							cout<<"\n\n\n\t\t\tWould you like to buy again? [yes or no] ";
							cin>>choice;
							
							if(choice == "yes") {
								update = true;
								break;
							} 
							
							else if (choice == "no"){
								update = true;
								exitB = true;
								break;								
							} else {
								cout<<"\n\n\t\t\tYou entered an invalid command code. Please try again.\n\n";
				                loading();
				                
				                system("cls");
								nameDisplay();
								cout<<"\n\t\t\t\t\t\t\t\t\t>>  View All Items  <<\n\n";
							}
						} while (choice != "(- _ -)");
					}
				}
			}
		}
		readFile.close();
		
		if (update) {
			remove("inventory.txt");
		    rename("inventory_temp.txt", "inventory.txt");
		}
		
		if (check) {
			loading();
		} else {
			cout<<"\n\n\t\t\tProduct with ID "<<id<<" not found. Please try again.\n\n";
        	loading();
        	system("cls");
		}
		
		if (exitB) {
			if (balance == 0) {
				system("cls");
				buyName();
				cout<<"\n\n\n\t\t\t\t\t\t\t\t    >>  No Balance Left  <<\n";
				Sleep(1000);
				loading();
			}
			for (;;) {
				string choice;
				system("cls");
				receiptName();
				
				string inventoryR;
				
				ifstream receipt("receipt.txt");
				
				cout<<"\n\t\t\t\t\t\t\t\t       𝓕𝓵𝓮𝓾𝓻𝓼 𝓜𝓪𝓰𝓷𝓲𝓯𝓲𝓺𝓾𝓮𝓼 \n";
				cout<<"\t\t\t\t\t\t\t\t   Bagumbayan Sur, Naga City \n";
				cout<<"\t\t\t\t\t\t\t\t      Owned && Managed By: \n";
				cout<<"\t\t\t\t\t\t\t\t\t   C & N Inc. \n";	
				cout<<"\n\t\t\t\t\t\t    Order No: 1G\t\t\t     ID: 231001990 \n";
				
				cout<<"\t\t\t\t\t\t    ======================================================\n";
				cout<<"\t\t\t\t\t\t     Quantity\t\t\t\t\t   Amount\n";
				cout<<"\t\t\t\t\t\t    ======================================================\n";
		
				while (getline(receipt, inventoryR)) {
					string nameR, priceR, quantityR, totalR;
					stringstream ss(inventoryR);
					getline(ss, nameR, ','); getline(ss, priceR, ',');
					getline(ss, quantityR, ','); getline(ss, totalR, ',');
					
					int priceI = stoi(priceR);
					int quantityI = stoi(quantityR);
					int totalI = stoi(totalR);
					
					cout<< "\t\t\t\t\t\t    " << quantityR << "\t\t   " << nameR << "        \t\t  " << priceR << "\n";
				}
				
				// Get current time
			    time_t now = time(nullptr);
			    
			    // Convert to local time
			    tm * local_time = localtime(&now);
				
				cout<<"\t\t\t\t\t\t    ======================================================\n";
				cout<<"\t\t\t\t\t\t     Amount Due\t\t\t\t\t    "<<total<<"\n\n";
				cout<<"\t\t\t\t\t\t     Amount Tendered:\n";
				cout<<"\t\t\t\t\t\t     Balance"<<"\t\t\t\t\t    "<<balance + total<<"\n";
				cout<<"\t\t\t\t\t\t     Change "<<"\t\t\t\t\t    "<<balance<<"\n";
				cout<<"\t\t\t\t\t\t    ======================================================\n";
				
				cout<<"\n\t\t\t\t\t\t\t\t\t   Supplier: \n";
				cout<<"\t\t\t\t\t\t\t\t     Burakan Sa Kabukidan \n";
				cout<<"\t\t\t\t\t\t\t       Date && Time: "
						<<(1900 + local_time->tm_year)<<"/" //for displaying current date and time
			        	<< (1 + local_time->tm_mon)<<"/"
			        	<< local_time->tm_mday<<" "
			            << local_time->tm_hour<<":"
			            << local_time->tm_min<<":"
			            << local_time->tm_sec<<"\n";
			    cout<<"\n\t\t\t\t\t\t\t\tThis serves as a SALES INVOICE \n";
				
				receipt.close();
				
				cout<<"\n\t\t\tContinue? [Enter]\t";
				cin.ignore();
				cin.get();
				loading();
				remove("receipt.txt");
				return;
			}
		}
	}
}