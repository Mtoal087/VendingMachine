/*
Name: Matt Toal
Date: 12/9/2022
Assignment: Homework 3 - Jolly Tax Mutilator
*/


#include "header.h"
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    char new_tax_form;
    cout << "*** Jolly Tax Mutilator! ***\n\n";
    do {
        greetings();
        int wages, interest, ostriches, status, withholds;

        cout << "Wages? ";
        cin >> wages;

        cout << "Interest? ";
        cin >> interest;

        cout << "Number of ostriches? ";
        cin >> ostriches;

        cout << "Status? ( 0=dependent, 1=single, 2=married ) ";
        cin >> status;

        cout << "Amount Withheld? ";
        cin >> withholds;

        cout << endl;

        int agi = calc_AGI(wages, interest, ostriches);
        cout << "AGI: $" << agi << endl;

        int deduction = get_deduction(status);
        cout << "Deduction: $" << deduction << endl;

        int taxable = calc_taxable(agi, deduction);
        cout << "Taxable income: $" << taxable << endl;

        int tax = calc_tax(status, taxable);
        cout << "Tax: $" << tax << endl;

        int taxes_due = calc_tax_due(withholds, tax);
        cout << "Tax Due: $" << taxes_due << endl;

        cout << endl;

        cout << "Process another tax for? (y/n) ";
        cin >> new_tax_form;

    } while (new_tax_form == 'y');

    cout << endl;
    goodbye_message();

    return 0;
}