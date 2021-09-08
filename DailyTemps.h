
//FILE: DailyTemps.h
//CLASS PROVIDED: DailyTemps

#ifndef TEMPERATURE_HEADER
#define TEMPERATURE_HEADER

//CLASS DailyTemps
class DailyTemps
{
    //ACCESS SPECIFIER public
    public:
        
        //DEFAULT CONSTRUCTOR reads in userInput for everyday of the week
        DailyTemps(); //7 inputs, 1 for each index
        
        //MODIFICATION MEMBER FUNCTIONS
        void setTemp(bool yes); 
        
        //CONSTANT MEMEBER FUNCTIONS
        int Freezing() const;
        void Warmest() const;
        void printTemps();
        
    //ACCESS SPECIFIER private
    private:
            
        //CREATE array for DailyTemps where Monday starts at array[0] and Sunday ends at array[6] 
        int dailyTemps[7]; //array[7] = {0,1,2,3,4,5,6}
        //CREATE days
        const char *days[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
        //CREATE userInput for index (day of the week)
        int index;
        //CREATE userInput for temperature
        int temps;

};
//END CLASS


#endif