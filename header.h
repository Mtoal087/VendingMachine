#ifndef HEADER_H
#define HEADER_H

/*
Desc: Outputs greeting message to the user
Pre: None
Post: None
*/
void greetings();

/*
Desc: Calculates AGI
Pre: Must have wages (int), interest (int), and number of ostriches (int) to calculate
Post: Returns AGI
*/
int calc_AGI(const int wages, const int interest, const int ostriches);

/*
Desc: Finds the deduction amount
Pre: Must know status (int) of user
Post: Returns deduction amount based on status
*/
int get_deduction(const int status);

/*
Desc: Calculates the taxable amount
Pre: Must have agi and deduction calculated
Post: Returns taxable amount (int)
*/
int calc_taxable(const int agi, const int deduction);

/*
Desc: Calculates the tax amount based on status and taxable income
Pre: Must know status and taxable income
Post: Returns tax amount (int, rounded to nearest integer)
*/
int calc_tax(const int status, const int income);

/*
Desc: Calculates the amount of tax due (tax - withheld)
Pre: Taxes must be found, and withheld must be input by user
Post: Returns amount due for user taxes (int)
*/
int calc_tax_due(int withheld, const int tax);

/*
Desc: Prints a goodbye message
Pre: User must end the while-loop by inputting "n"
Post: None
*/
void goodbye_message();
#endif