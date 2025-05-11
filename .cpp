#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {

	string User1Choice, User2Choice;
	string User1Name, User2Name;
	string Answer;
	int User1Value = 0, User2Value = 0,User1Score = 0,User2Score = 0;
	bool UserInput = true;
	bool StopTheWhile = false;


	cout << "Please enter your name User 1 : ";
	getline(cin, User1Name);
	cout << "Please enter your name User 2 : ";
	getline(cin, User2Name);


	while (!StopTheWhile)
	{

		cout << "\nHi " << User1Name << " What are you going to choose Rock,Paper or Scissors (R,P,S) : ";
		getline(cin, User1Choice);
		User1Choice = toupper(User1Choice[0]);

		if (User1Choice == "P") {
			User1Choice = "Paper";
			
		}
		else if (User1Choice == "R") {
			User1Choice = "Rock";
			//User1Value = 1;
		}
		else if (User1Choice == "S") {
			User1Choice = "Scissors";
			//User1Value = 2;
		}
		else {
			cout << "Please note you need to enter a valid option";
			continue;
		}

		cout << "\nHi " << User2Name << "What are you going to chosse Rock,Paper or Scissors (R,P,S) : ";
		getline(cin, User2Choice);
		User2Choice = toupper(User2Choice[0]); // Converst the input to uppercase

		if (User2Choice == "P") {
			User2Choice = "Paper";
			//User2Value = 0;
		}
		else if (User2Choice == "R") {
			User2Choice = "Rock";
			//User2Value = 1;
		}
		else if (User2Choice == "S") {
			User2Choice = "Scissors";
			//User2Value = 2;
		}
		else {
			cout << "Please note you need to enter a valid answer";
			continue;
		}

		if (User1Choice == User2Choice) {
			cout << "\n\nHi " << User1Name << " and " << User2Name << " Please note you guys have tied, with both of you guys using " << User1Choice;
		}
		else if (User1Choice == "Paper" && User2Choice == "Rock") {
			cout << "Hi " << User1Name << " you has won this challange whule using " << User1Choice;
			User1Score++;
		}
		else if (User1Choice == "Paper" && User2Choice == "Scissors") {
			cout << "Hi " << User2Name << " you have won this challange using " << User2Choice;
			User2Score++;
		}
		else if (User1Choice == "Rock" && User2Choice == "Scissors") {
			cout << "Hi " << User1Name << " you have won this challange using " << User1Choice;
			User1Score++;
		}
		else if (User1Choice == "Rock" && User2Choice == "Paper") {
			cout << "Hi " << User2Name << " you have won this challange using " << User2Choice;
			User2Score++;
		}
		else if (User1Choice == "Scissors" && User2Choice == "Paper") {
			cout << "Hi " << User1Name << " you have won this challange using " << User1Choice;
			User1Score++;
		}
		else if (User1Choice == "Scissors" && User2Choice == "Rock") {
			cout << "Hi " << User2Name << " you have won this challange using " << User2Choice;
			User2Score++;
		}

		cout << "\n\nWould you like to continue (yes/no) : ";
		
		getline(cin,Answer);
		
		if (Answer == "no") {
			StopTheWhile = true;
			cout << "\nFinal Scores:\n"
				<< User1Name << ": " << User1Score << " points\n"
				<< User2Name << ": " << User2Score << " points\n";
			cout << "--------------------------------\n";
		}
		else {
			cout << "\n--------------------------------\n";
		}


	}
	
	//return 0;

	
	



}
