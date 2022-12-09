#include "header.h"
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void greetings(){
    cout << "Welcome!\n";
    cout << "Please enter the following information:\n";
    return;
}

int calc_AGI(const int wages, const int interest, const int ostriches){
    int subsidies = abs(ostriches) * 650;
    int AGI = abs(wages) + abs(interest) + subsidies;
    return AGI;
}

int get_deduction(const int status){
    int deduction;
    if(status == 0)
    {
        deduction = 7000;
    } 
    else if (status == 1)
    {
        deduction = 14000;
    } 
    else if (status == 2)
    {
        deduction = 28000;
    } 
    else 
    {
        deduction = 5000;
    }
    return deduction;
}

int calc_taxable(const int agi, const int deduction){
    int taxable = agi - deduction;
    if(taxable < 0){
        taxable = 0;
    }
    return taxable;
}

int calc_tax(const int status, const int income){
    double tax;
    if (status == 2){
        if(income > 80000){
            tax = ((income - 80000) *.22) + 9200;
        } else if (income > 20000){
            tax = ((income - 20000) *.12) + 2000;
        } else {
            tax = income * .10;
        }
    } else {
        if(income > 85000){
            tax = ((income - 85000) *.24) + 14500;
        } else if(income > 40000){
            tax = ((income - 40000) *.22) + 4600;
        } else if(income > 10000){
            tax = ((income - 10000) *.12) + 1000;
        } else{
            tax = income *.10;
        }
    }
    
    return round(tax);
}

int calc_tax_due(int withheld, const int tax){
    if(withheld < 0){
        withheld = 0;
    }
    return tax - withheld;
}

void goodbye_message(){
    cout << "Thank you for using the Jolly Tax Mutilator!\n";
    return;
}