#include <iostream>
#include <stdexcept>
#include <limits>
#include <math.h>

class Complejo{
private:
    double real_, imag;
public:
    Complejo(int arg1 = 0, int arg2 = 0){   
        real_ = arg1;
        imag = arg2;
    }
    void anadir(Complejo comp1, Complejo comp2){
        real_ = comp1.real_ + comp2.real_;
        imag = comp1.imag + comp2.imag;
    }
    void extraer(Complejo comp1, Complejo comp2){
        real_ = comp1.real_ - comp2.real_;
        imag = comp1.imag - comp2.imag;
    }
    void multiplicacion (Complejo comp1, Complejo comp2){
        real_ = comp1.real_ * comp2.real_ + -1 * (comp1.imag * comp2.imag);
        imag = comp1.imag * comp2.real_ + comp1.real_ * comp2.imag;
    }
    void division(Complejo comp1, Complejo comp2){
        Complejo conjugate_comp(comp2.real_, -1*comp2.imag); 
        double denom = pow(comp2.real_, 2) + pow(comp2.imag, 2);
        real_ = (comp1.real_ * conjugate_comp.real_ + -1 * (comp1.imag * conjugate_comp.imag)) / denom;
        imag = (comp1.imag * conjugate_comp.real_ + comp1.real_ * conjugate_comp.imag) / denom;
        std::cout << comp1.real_ * conjugate_comp.real_ + -1 * (comp1.imag * conjugate_comp.imag) << "/" << denom << " + " << comp1.imag * conjugate_comp.real_ + comp1.real_ * conjugate_comp.imag << "/" << denom << "i" << " ~= ";
    }
    void print(){
        imag < 0 ? std::cout << real_ << imag << "i" << std::endl : std::cout << real_ << " + " << imag << "i" << std::endl;
    }
};


int main (int argc, char*argv[]){
    std::string conversion_1 = argv[1]; std::string conversion_2 = argv[2]; std::string conversion_3 = argv[3];
    int valor_1 = stoi(conversion_1); int valor_2 = stoi(conversion_2); 
    Complejo valores {valor_1, valor_2};
    valores.anadir();
    valores.extraer();
    valores.multiplicacion();
    valores.division();
    valores.print();
}
