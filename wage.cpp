#include <iostream>
#include <iomanip> // Using iomanip library to support std::setprecison function //
using namespace std;
int main (){
  int  hours;
  float grosspay;
  float netpay;
  float hourlywage;
  float deductions;
// asks for the hours the users has worked//
  cout << "How many hours did you worked" << endl;
  cin >> hours;

// if he enters the hours less than zero or a negative input then this function runs //
   while(hours < 0){
    cout << "You have entered a negative number for worked hour" << endl;
    cout << "Terminating the program" << endl;
    return 0;
  }
// if the user the user enters a negative number less than zero // 
    cout << "How much do you make per hour " <<endl;
  cin  >> hourlywage;
  while(hourlywage < 0){
    cout << "Your hourly wage is less than 0 Please Try again" << endl;
    cin >> hourlywage;
  }

  // The Wage Calculator //
  cout << "" <<endl;
  cout << "Wage Calculator " <<endl;
    cout << "" <<endl;

  cout << "Hours Worked           " <<hours<<endl;
  cout << "Hourly Wage            " <<hourlywage<<endl;
  cout << "" <<endl;
  cout << "------------------------" <<endl;
  grosspay = hours*hourlywage;


// if the user has worked less than  40 hours //
   if (hours > 40){
    grosspay = 40 * hourlywage + (hours -40) * hourlywage *1.5;
  }
  cout << "Gross Pay              " << std::fixed<< std::setprecision(2)<<grosspay << endl;
// using precision to print the answer with 2 decimal places //

// Wage conditions if the user makes less than $100// 
  if (grosspay <= 100.01 ){
    deductions = 0.02*grosspay;
    cout << "Deductions             " << std::fixed<< std::setprecision(2)<<deductions << endl;
  } 
 // if he makes less than 500 //
 //New comment 
else if (grosspay <= 500.00){
    deductions = 0.05*grosspay;
    cout << "Deductions             " << std::fixed<< std::setprecision(2)<<deductions << endl;
  }
// if he makes less than 500 //

//if he makes more than or equal to 500 //
  else if (grosspay >= 500){
    deductions = 0.09*grosspay;
    cout << "Deductions             " << std::fixed<< std::setprecision(2)<<deductions << endl;
  }   
 
// net pay//
  netpay = grosspay - deductions;
  cout << "" <<endl;
  cout << "--------------------------"<<endl;
  cout << "NetPay                   "<<std::fixed<< std::setprecision(2)<< netpay <<endl;
  
return 0;
// used std::fixed to print out all the decimals and then used std::precision to set them to 2 decimal places//
  
}
