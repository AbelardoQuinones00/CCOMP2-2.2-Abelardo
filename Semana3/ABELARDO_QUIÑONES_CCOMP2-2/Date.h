#include <iostream>
#include <string>

class Date {
    public:
        Date(int M,int D,int Y){
            if (M <= 12 && M > 0)
                month = M;    
            day = D;
            year = Y;
        }

        void displayDate(){
            std::cout << "\nDate: " << month << "/" << day << "/" << year;
        }
        
        // Gets & Sets

        void SetMonth(int Month){
            if (Month <= 12 && Month > 0)
                month = Month;
            month = Month;
        }
        int getMonth(){
            return  month;
        }
        void SetDay(int Day){
            day = Day;
        }
        int getDay(){
            return day;
        }
        void Set(int Year){
            year = Year;
        }
        int getYear(){
            return year;
        }

    private:
        int month{1};
        int day;
        int year;
};