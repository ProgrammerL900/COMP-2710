/* FILE NAME: project1_Wilson_lgw0020.cpp
 * AUTHOR: Laura Wilson
 * userID: lgw0020
 * version: 1/14/2022
 * Sources: Stack Overflow on while loop exceptions
 * complie: g++ project1_Wilson_lgw0020.cpp
 * another complie: g++ project1_Wilson_lgw0020.cpp -o project1_Wilson_lgw0020 
 * run: ./a.out project1_Wilsonlgw0020.cpp
 * 
 */ 
 
#include <iostream>


using namespace std;
int main() {
  
   double interestRate,interestRateC,loan,monthlyPaid,interestTotal=0;
   int currentMonth=0;


// VARIABLE INITIALIZATION
// CURRENCY FORMATTING
cout.setf(ios ::fixed);
cout.setf(ios ::showpoint);
cout.precision(2);


// USER INPUT
// NOTE: For valid input, the loan, interest, and monthly payment must
// be positive. The monthly payment must also be large enough to
// terminate the loan.

//Loan amount
cout << "\nLoan Amount: ";
   cin >> loan;
while(true){
   
   if(loan > 0) {
    break;   
   }
   else {
       cout<< "Invalid loan";

       
   }
   
}

//Interest Rate

 cout << "Interest Rate (% per year): ";
cin >> interestRate;

while(true){
   
if(interestRate > 0)   {
    break;
}
else{
    cout<<"Invalid interest rate.\n";
    
}

}


// GET PROPER INTEREST RATES FOR CALCULATIONS
interestRate /= 12;
interestRateC = interestRate / 100;


//Monthly payment

while(monthlyPaid <= 0 || monthlyPaid <= loan * interestRateC){
cout << "Monthly Payments: ";
cin >> monthlyPaid;

//while loop exception. Stack overflow
if ((interestRateC * loan) >= monthlyPaid) {
    cout << "Insufficient payment\n";
}
}

cout << endl;



// AMORTIZATION TABLE
cout << "*****************************************************************\n"
<< "\tAmortization Table\n"
<< "*****************************************************************\n"
<< "Month\tBalance\t\tPayment\tRate\tInterest\tPrincipal\n";

// LOOP TO FILL TABLE

while (loan > 0) {
if (currentMonth == 0) {
cout << currentMonth++ << "\t$"<< loan;
if (loan < 1000) cout << "\t"; // Formatting MAGIC
cout << "\t" << "N/A\tN/A\tN/A\t\tN/A\n";
}

else {
    double interest_payment = loan * interestRateC;
    double principal_payment = monthlyPaid - interest_payment;
    loan -= principal_payment;
    interestTotal += interest_payment;

if (loan < 0) {
    principal_payment += loan;
    monthlyPaid += loan;
    loan = 0;
}

cout << currentMonth++ << "\t$" << loan;
			if (loan < 1000) cout << "\t";
			cout << "  $" << monthlyPaid << "\t" << interestRateC * 100 << "\t$" << interest_payment << "\t\t$" << principal_payment << "\n";



/* Properly calculate and display “montlypaid” and “principal” when
(1) loan * (1 + interestRateC) < monthlyPaid
and (2) loan * (1 + interestRateC) >= monthlyPaid
*/
 
 

}
}


cout << "****************************************************************\n";
cout << "\nIt takes " << -- currentMonth << " months to pay off "
<< "the loan.\n"
<< "Total interest paid is: $" << interestTotal;
cout << endl << endl;
return 0;
}