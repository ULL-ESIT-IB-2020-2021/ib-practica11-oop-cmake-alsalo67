#include <iostream>
#include <stdexcept>
#include <limits>
#include <math.h>

class Complex{
private:
    double real_, imag;
public:
    Complex(int arg1 = 0, int arg2 = 0){   
        real_ = arg1;
        imag = arg2;
    }
    void add(Complex comp1, Complex comp2){
        real_ = comp1.real_ + comp2.real_;
        imag = comp1.imag + comp2.imag;
    }
    void subst(Complex comp1, Complex comp2){
        real_ = comp1.real_ - comp2.real_;
        imag = comp1.imag - comp2.imag;
    }
    void multiplicate(Complex comp1, Complex comp2){
        real_ = comp1.real_ * comp2.real_ + -1 * (comp1.imag * comp2.imag);
        imag = comp1.imag * comp2.real_ + comp1.real_ * comp2.imag;
    }
    void divide(Complex comp1, Complex comp2){
        Complex conjugate_comp(comp2.real_, -1*comp2.imag); 
        double denom = pow(comp2.real_, 2) + pow(comp2.imag, 2);
        real_ = (comp1.real_ * conjugate_comp.real_ + -1 * (comp1.imag * conjugate_comp.imag)) / denom;
        imag = (comp1.imag * conjugate_comp.real_ + comp1.real_ * conjugate_comp.imag) / denom;
        std::cout << comp1.real_ * conjugate_comp.real_ + -1 * (comp1.imag * conjugate_comp.imag) << "/" << denom << " + " << comp1.imag * conjugate_comp.real_ + comp1.real_ * conjugate_comp.imag << "/" << denom << "i" << " ~= ";
    }
    void print(){
        imag < 0 ? std::cout << real_ << imag << "i" << std::endl : std::cout << real_ << " + " << imag << "i" << std::endl;
    }
};

class Racional{
private:
    double num_, denom_;
public:
    Racional(double arg1 = 0, double arg2 = 0){   
        num_ = arg1;
        denom_ = arg2;
    }
    
    void reduceFraction (){
        for (double i = denom_ * num_; i > 1; i--) {
            if ((fmod(denom_, i) == 0) && (fmod(num_, i) == 0)) {  
                num_ /= i;  
                denom_ /= i;  
            }        
        }
        while(fmod(num_, 10) == 0 && fmod(denom_, 10) == 0){
            num_ /= 10;
            denom_ /= 10;
        }

    }
    void add(Racional rac1, Racional rac2){
        std::cout << rac1.num_ << "/" << rac1.denom_ << " + " << rac2.num_ << "/" << rac2.denom_ << " = ";
        float num1 = rac1.num_;
        float denom1 = rac1.denom_;
        float num2 = rac2.num_;
        float denom2 = rac2.denom_;

        num_ = denom2 * num1 + denom1 * num2;
        denom_ = denom1 * denom2;
        reduceFraction();
    }
    void subst(Racional rac1, Racional rac2){
        std::cout << rac1.num_ << "/" << rac1.denom_ << " - " << rac2.num_ << "/" << rac2.denom_ << " = ";
        float num1 = rac1.num_;
        float denom1 = rac1.denom_;
        float num2 = rac2.num_;
        float denom2 = rac2.denom_;

        num_ = denom2 * num1 - denom1 * num2;
        denom_ = denom1 * denom2;
        reduceFraction();
    }
    void multiplicate(Racional rac1, Racional rac2){
        std::cout << rac1.num_ << "/" << rac1.denom_ << " * " << rac2.num_ << "/" << rac2.denom_ << " = ";
        float num1 = rac1.num_;
        float denom1 = rac1.denom_;
        float num2 = rac2.num_;
        float denom2 = rac2.denom_;

        num_ = num1 * num2;
        denom_ = denom1 * denom2;
        reduceFraction();
    }
    void divide(Racional rac1, Racional rac2){
        std::cout << rac1.num_ << "/" << rac1.denom_ << " / " << rac2.num_ << "/" << rac2.denom_ << " = ";
        float num1 = rac1.num_;
        float denom1 = rac1.denom_;
        float num2 = rac2.num_;
        float denom2 = rac2.denom_;
        num_ = num1 * denom2;
        denom_ = num2 * denom1;
        reduceFraction();
    }
    void print(){
        std::cout << num_ << "/" << denom_ << " ~= " << static_cast<double> (num_/denom_) << std::endl;
    }
};

int main (int argc, char*argv[]){
    std::string conversion_1 = argv[1]; std::string conversion_2 = argv[2]; std::string conversion_3 = argv[3];
    int year = stoi(conversion_1); int month = stoi(conversion_2); int day = stoi(conversion_3); 
    Date Complex {year, month, day};
    today.printYear();
    today.bisiesto();
