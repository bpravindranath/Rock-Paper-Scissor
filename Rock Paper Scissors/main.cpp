#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>


char check_input(char player_input_1);
// Match Player Input to Character

char check_input_2 (char cinput);
//Check Player input for correct input

void get_input (char& input);
//get user input

void play_game(char& c_input);
//main function for the game

void end_game();
//Function to end game

int main () {
    
    using namespace std;
    
    char player_input, check;
    bool game = true; 

    get_input(player_input); 
    //Asking User to input values 
    //and returns value to variable player_input
      
    check = check_input_2(check_input(player_input));
    //After user input, this pairs input with correct char
    //and inputs value into check_input_2 actual parameter. 
    //check_input_2 takes function parameter and checks if input was correct,
    //or prompts user to renter input. 
    //It returns final value into variable: check.
        
        while (game) {  //main body for game
        
            play_game(check); //Matches Input with correct output
        
            end_game(); //Asking if player wants to end or continue game
      
            get_input(player_input); // Get Player Input  
 
            check = check_input_2(check_input(player_input));
            //Match Player Input to Character
            //Check Player Input for Correct Input
        
            } 
        
return 0; 
}


void get_input (char& input) {
    using namespace std;
    cout << "Enter R for Rock, P for Paper, and S for Scissor! ";
    cin >> input;
    cout << " " << endl;
    return;
    }

void play_game(char& c_input) { 
    using namespace std;
    srand(time(0));
       switch (c_input)  { //character_input//Matches Player Input with Valid Response    
            case 'R':    
            {
                int computer_guess = rand() % 3 + 1; // rock (1), paper (2), scissors (3)
                cout << "Player Chose Rock!" << endl;

                        if (computer_guess == 2) {
                            cout << "Computer Chose Paper!" << endl;
                            cout << "Computer wins: Paper Covers Rock!" << endl;
                            cout << " " << endl;
                        }
                        else if (computer_guess == 3) {
                            cout << "Computer Chose Rock!" << endl;
                            cout << "No Winner! Try Again!" << endl;
                            cout << "" << endl;
                        }
                        else //For Scissors
                        {
                            cout << "Computer Chose Scissors!" << endl;
                            cout << "Player wins: Rock Smashes Scissors!" << endl;
                            cout << " " << endl;
                        }
                break;
            }
            case 'P':
            {
                int computer_guess = rand() % 3 + 1; // rock (1), paper (2), scissors (3)
                cout << "Player chooses Paper!" << endl;
                        if (computer_guess == 3) {
                            cout << "Computer Chose Scissors!" << endl;
                            cout << "Computer Wins: Scissors cuts Paper!" << endl;
                            cout << " " << endl;
                        }
                        else if (computer_guess == 2) {
                            cout << "Computer Chose Paper!" << endl;
                            cout << "No Winner! Try Again!" << endl;
                            cout << "" << endl;
                        }
                        else //For Rock 
                        {
                            cout << "Computer Chose Rock!" << endl;
                            cout << "Player wins: Paper Covers Rock!" << endl;
                            cout << " " << endl;
                        }
                break; 
            }
            case 'S':
                {     
                int computer_guess = rand() % 3 + 1; // rock (1), paper (2), scissors (3)
                cout << "Player chooses Scissors!" << endl;
                
                        if (computer_guess == 1) {
                            cout << "Computer Chose Rock!" << endl;
                            cout << "Computer wins: Rock Smashes Scissors!" << endl;
                            cout << " " << endl;
                        }
                        else if (computer_guess == 3) {
                            cout << "Computer Chose Scissors!" << endl;
                            cout << "No Winner! Try Again!" << endl;
                            cout << "" << endl;
                        }
                        else //For Paper
                        {
                            cout << "Computer Chose Paper!" << endl;
                            cout << "Player wins: Scissors Cuts Paper!" << endl;
                            cout << " " << endl;
                        }
                break;  
                }
        }
  }

void end_game() {
    using namespace std;
    int input;
    
    cout << "Enter 0 to Exit or 1 to Keep Playing Rock-Paper-Scissors! ";
        cin >> input;
        cout << " " << endl;
            
        if (input <= 0) //to end loop
            {
                cout << " " << endl;
                cout << "Thank you for playing!" << endl;
                exit(1);
                }    
    return;    
}

char check_input_2 (char cinput) {
    int check_1 = 1;
    char input;
    using namespace std;
    while (check_1 != 0) {
            if (cinput == ' ') { // checking if user typed wrong message
                cout << "Please Re-enter R for Rock, P for Paper, and S for Scissor! ";
                cin >> input;
                cout << " " << endl;
                cinput = check_input(input);
                }   
            else {
                cout << " " << endl;  
                return cinput;
                check_1 = 0;
                }
        }
    
}

char check_input(char player_input_1) {
    using namespace std;
    
    
    if ((player_input_1 == 'R') || (player_input_1 == 'r')) {        
        return 'R';
    }
       
    else if ((player_input_1 == 'P') || (player_input_1 == 'p')) {
        return 'P';
    }

    else if ((player_input_1 == 'S') || (player_input_1 == 's')) {
        return 'S';
    }
    else {
        cout << " " << endl;
        cout << "Wrong Input! ";
        return ' ';          
    }
    
}