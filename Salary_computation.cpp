/*This program computes pay base on a pay rate and hours worked with overtime*/
//payrate and hours worked are input from keyboard
//Pay is the output


#include <iostream>

using namespace std;

//function that compute the pay

int main(){

    double pay_rate{0};
    double hours_worked{0};
    double pay{0};

    cout << "Input the payrate" << "Input the hours worked";

    cin >> pay_rate >> hours_worked;

    if (hours_worked <= 40){

        pay = pay_rate * hours_worked;

    }
    else{

        pay = pay_rate * hours_worked + 1.5 * pay_rate * (hours_worked - 40);
    
    }

    cout << "The worker pay is : " << pay << ".";
}