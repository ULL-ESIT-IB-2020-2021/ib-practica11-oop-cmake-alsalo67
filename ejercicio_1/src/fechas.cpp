/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Alejandro Melian Lemes
 * @date 6.enero.2021
 * @brief Este programa muestra mediante la utilización de clases la fecha introducida por el usuario.
 *        Así como si el año es bisiesto o no.
 * @see https://github.com/ULL-ESIT-IB-2020-2021/IB-P11-Classes-CMake/blob/master/Classes-CMake.md
 */

#include <iostream>
#include <stdexcept>
#include <limits>
#include <math.h>


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
    void bisiesto(){
        if (year_ % 4 == 0) {
            std::cout << "Es bisiesto" << std::endl;
        }
        else {
            std::cout << "No es bisiesto" << std::endl;
        }
    }
};
int main (int argc, char*argv[]){
    std::string conversion_1 = argv[1]; std::string conversion_2 = argv[2]; std::string conversion_3 = argv[3];
    int year = stoi(conversion_1); int month = stoi(conversion_2); int day = stoi(conversion_3); 
    Date today {year, month, day};
    today.printYear();
    today.bisiesto();
}
  