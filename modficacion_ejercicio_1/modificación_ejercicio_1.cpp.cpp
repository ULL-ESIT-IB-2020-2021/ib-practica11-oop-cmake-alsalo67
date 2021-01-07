#include <iostream>
#include <limits>
#include <math.h>
#include <cassert>
#include <stdlib.h>

class Date{
private:
    int day_, month_, year_;
public:
    Date(int arg1, int arg2, int arg3){
        day_ = arg3;
        month_ = arg2;
        year_ = arg1;
    }
    void setDay(int input){
        day_ = input;
    }
    void setMonth(int input){
        month_ = input;
    }
    void setYear(int input){
        year_ = input;
    }
    void printYear(){
        std::cout << day_ << '/' << month_ << '/' << year_ << std::endl;
    }
    bool bisiesto(){
        if (year_ % 4 == 0) {
            std::cout << "Es bisiesto" << std::endl;
            return true;
        }
        else {
            std::cout << "No es bisiesto" << std::endl;
            return false;
        }
    }
};
int main (int argc, char*argv[]){
    std::string conversion_1 = argv[1]; std::string conversion_2 = argv[2]; std::string conversion_3 = argv[3];
    int year = stoi(conversion_1); int month = stoi(conversion_2); int day = stoi(conversion_3); 
          Date today {year, month, day};
         
          if (today.bisiesto(true)) {
              if (day > 29 && month == 2) {
                        std::cerr << "La fecha introducida debe estar acorde al calendario gregoriano" << std::endl;
                        EXIT_FAILURE;
              }
          }
          else {
              if (day > 28 && month == 2) {
        std::cerr << "La fecha introducida debe estar acorde al calendario gregoriano" << std::endl;
         EXIT_FAILURE;
    }
          }

         if (month > 12) {
             std::cerr << "La fecha introducida debe estar acorde al calendario gregoriano" << std::endl;
             EXIT_FAILURE;
        }
    today.printYear();
    today.bisiesto();
}

