//Code by claycot :)

#include <iostream>
#include <string>

using namespace std;

//Prototyping functions
int drawMenu(int numCases);
int inputInt(int numCases);
void displayHelp();
void optionsMenu();
string fetchLink(string nameChannel, string vidQuality);

//Begin main function
int main(){
	//Placeholder for user input of channel and quality
	string channel, quality = "";	
	
	//Loop the menu until the user decides to quit
	for(;;){
		
		//Call the menu with the number of options currently implemented
		switch(drawMenu(4)){
			
			//Main link fetcher, take in channel and quality
			case 1: fetchLink(channel, quality);
				break;
				
			//Display the help menu; will talk about input format, etc.
			case 2: displayHelp();
				break;
				
			//Display the options menu; will contain things like
			//default quality; will read and write from file
			case 3: optionsMenu();
				break;
				
			//End the program
			case 4: return 0;
		}
	}
}

//Draw the current menu options given number of options implemented
int drawMenu(int numCases){
	cout << "\n1. Fetch a channel link"
		 << "\n2. Read the help file"
		 << "\n3. Select options"
		 << "\n4. Quit"
		 << "\nType the number of your selection: ";
		 
	//Call another function to return user input in an integer form
	return inputInt(numCases);
}

//Return user input in integer form
int inputInt(int numCases){
	string rawInput;
	string numbers = "0123456789";
	int userInput;
	
	//Get user input until it's satisfactory
	do {
		//Get user input
		cin >> rawInput;
		
		//Check user input to see if it's satisfactory
		for (int index = 1; index <= numCases; index++){
			if (numbers.substr(index, 1) == rawInput){
				return index;
			}
			else {
				userInput = -1;
			}
		}
	} while (userInput == -1);
}	 

//Help menu will contain information such as input format
void displayHelp(){
	cout << "\nPlaceholder help file.\n";
}	

//Options menu will contain information about default settings in file
void optionsMenu(){
	cout << "\nPlaceholder options menu.\n";
}

//This is the big boi that does everything that matters
//That means it will likely be very bad
string fetchLink(string	nameChannel, string vidQuality){
	cout << "\nThis is a placeholder for the link fetcher.\n";
	return "";
}
