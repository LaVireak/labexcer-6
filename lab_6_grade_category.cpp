// Write a diagram to read the exam score 
#include <iostream> // This is the directive for input and output
using namespace std; // Allow to use math function
int main() // Main function 
{ // To open the main function block
    int A =0; // declare of valuable A
    int B =0; // declare of valuable B
    int C =0; // declare of valuable C
    int D =0; // declare of valuable D
    int F =0; // declare of valuable F
    float examscore; // decalre numeric varaible examscore
    cout << "Enter examscores:"; // ask the user to enter the scores
    cin >> examscore; // accept the score and store in the examscore
    while (examscore > 0 && examscore <=100) // condition if the exam score range from 0-100
    { // open while loop
        if (examscore > 89 && examscore <=100) // condition for the examscore is bigger than 89 but smaller than 100
        { // open if function
            A++; // A+1
            cin >> examscore; // accept examscore
        } // close if function
        else if (examscore > 79 && examscore <=89) // condition the examscore is bigger than 79 but smaller than 89 
        { // open else if function
            B++; // B+1
            cin >> examscore; // accept examscore
        } // close else if function
        else if (examscore > 69 && examscore <=79) // condition if examscore bigger than 69 and less than or equal to 79
        {  // open else if function
            C++; // C+1
            cin >> examscore;  // accept examscore
        } // close else if function
        else if (examscore > 59 && examscore <=69) // condition if examscore is smaller than 59 to smaller or equal to 69
        { // open else if function
            D++; // D+1
            cin >> examscore; // accept examscore
        } // close else if function
        else if (examscore >= 0 && examscore <=59) // condition if examscore if bigger or equal to 0 to smaller or equal to 59
        { // open else if function
            F++; // F+1
            cin >> examscore; // accept examscore
        } // close else if function
        else // else condition
        { // open else function
           cout << "Invalid inputs" ; // display invalid inputs to the user
        } // close else function
    }  // close while loop
    cout << "Numbers of A's: " << A << endl ;  // display the total numebr of A
    cout << "Numbers of B's: " << B << endl ;  // display the total numebr of B
    cout << "Numbers of C's: " << C << endl ;  // display the total numebr of C
    cout << "Numbers of D's: " << D << endl ;  // display the total numebr of D
    cout << "Numbers of F's: " << F << endl ;  // display the total numebr of F 
    int total = A + B + C + D + F;  //declare varaible total
    cout << "Total Number of Scores: " << total << endl; // print the total number of scores
    return 0; // Return 0 to the console 
} // Close the main function 