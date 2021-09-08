
#include <iostream>
#include <string>
#include "DailyTemps.h"

//namespace
using namespace std;

//MAIN BEGIN
int main()
{
    //CREATE new object
    DailyTemps object1;

    //Set Tempurature 
    object1.setTemp(true);
    
    //PRINT Freezing() and Warmest() statements to console
    cout << "\nThe number of freezing days is: " << object1.Freezing();
    cout << "\nThe warmest day is: "; 
    object1.Warmest(); 
    cout <<"\n\n";
    object1.printTemps();
    
    //EXIT_SUCCESS
    return EXIT_SUCCESS;
    
//MAIN END    
}
