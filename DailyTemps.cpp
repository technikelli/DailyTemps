
//FILE: DailyTemps.cpp
#include <cassert>
#include <iostream>
#include <string>
#include <cstring>
#include <stdlib.h>
#include "DailyTemps.h"

//namespace
using namespace std;

//CONSTRUCTOR prompts user to enter values into dailyTemps[] according to each day of the week
DailyTemps::DailyTemps()
{
    //CREATE int index for loop
    int i=0;
    
    //DO-WHILE loop to go through day[i] and get userInput for each temperature
    do 
    {
        //Precondition: i <= 6
        //Postcondition: The loop outputs each index of days[] and reads userInput for each index of dailyTemps[]
        cout << "Enter a temperature for " << days[i] << ": \t ";
        cin >> dailyTemps[i];
        i++;
    }
    while (i <= 6); 
}

//METHOD setTemps() lets user re-set temp for a specific day
void DailyTemps::setTemp(bool yes) 
{
    //Prompt user for specific day and make sure the input is valid
    string userInput;
    int newTemp;
    char userChoice;
            cout << "\nWould you like to set a new temperature? (Y/N):\t";
            cin >> userChoice;
            if (userChoice == 'Y' || userChoice == 'y'){
                
            
                cout << "\nSelect the day you want to update:\t";
                cin >> userInput;
            

                if (userInput == days[0]){
                    cout << "what is the new temperature?\t\t";
                    cin  >> newTemp;
                    dailyTemps[0] = newTemp;
                } 
                else if (userInput == days[1]){
                    cout << "what is the new temperature?\t\t";
                    cin >> newTemp;
                    dailyTemps[1] = newTemp;
                } 
                else if (userInput == days[2]){
                    cout << "what is the new temperature?\t\t";
                    cin >> newTemp;
                    dailyTemps[2] = newTemp;
                } 
                else if (userInput == days[3]){
                    cout << "what is the new temperature?\t\t";
                    cin >> newTemp;
                    dailyTemps[3] = newTemp;
                } 
                else if (userInput == days[4]){
                    cout << "what is the new temperature?\t\t";
                    cin >> newTemp;
                    dailyTemps[4] = newTemp;
                } 
                else if (userInput == days[5]){
                    cout << "what is the new temperature?\t\t";
                    cin >> newTemp;
                    dailyTemps[5] = newTemp;
                } 
                else if (userInput == days[6]){
                    cout << "what is the new temperature?\t\t";
                    cin >> newTemp;
                    dailyTemps[6] = newTemp;
                } 
                else {
                    cout << "Invalid Input\n";
                }
            }
            //else {
                
            //}

}

//METHOD Freezing() returns num. of days with temps below freezing (temp <=32F) for the week
int DailyTemps::Freezing() const{
    
    //CREATE counter and set at 0
    int counter = 0;
    
    //FOR-LOOP iterates through each index of dailyTemps[] to count the number of values <= 32
    for(int i=0; i <= 6; i++) {
        //Precondition i <= 6
        //Postcondition count adds 1 to it's value everytime a value of dailyTemps[i] is <=32
        if (dailyTemps[i] <= 32){
            counter += 1;
        }
    }
    return counter;
}

//METHOD Warmest() returns the first warmest day of the week 
void DailyTemps::Warmest() const{
    
    //CREATE int and set equal to first index to compare with temperatures in dailyTemps[]
    int warmest = dailyTemps[0];
    
    //CREATE char for warmestDay to assign the day[] value
    const char* warmestDay;
    
    //FOR-LOOP iterates throught array and compares each value 
    for(int i=0; i <= 6; i++) {
        //Precondition i <= 6
        //Postcondition the warmest (or first warmest) temperature is selected in the array dailyTemps[] and warmestDay is assigned
        if (warmest < dailyTemps[i]){
            warmest = dailyTemps[i];
            warmestDay = days[i];
        }
    }
    //PRINT warmestDay
    cout << warmestDay;
}

//METHOD printTemps() OUTPUTS the temps for everyday of the week 
void DailyTemps::printTemps() {
    
    //CREATE int for index
    int i=0;
    
    cout << "This week's temperatures are: \n\n";
    
    //DO-WHILE Loop iterates each day and temp in both arrays
    do
    {
        //Precondition i<=6 or 
        //Postcondition each line gives new day with it's complementary temperature
        cout << days[i] << "  \t";
        cout << dailyTemps[i] << "\n";
        i+=1;
    }
    while (i <= 6);
}