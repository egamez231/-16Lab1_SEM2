#include <iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;

int main(){

    // Datatype declaration
    long acct;
    int n,i;
    float total,avg;

    //Input from the user
    cout << "***T&B SYSTEM***\n";
    cout << "Please enter bill account number:";
    cin >> acct;
    cout << "Please enter the number of month";
    cin >> n;

    //Data declaration for array
    float pay [n];

    // Loop use to input the data into the array
    for (i=0;i<n;i++){
        cout << "Please enter amount for the month" << i + 1 << "(RM): ";
        cin >>  pay [i];
    }

    // Loop to sum up the data in the array
    for (i=0;i<n;i++){
     total += pay [i];
    }

    // Variable "avg" are use to calculate the average of the bill
    avg = total / n;

    cout << "\n";
    cout << "--------------------------------------------------------";
    cout << "\n";


    // The data are output
    cout << "Account Number: " << acct << endl;
    cout << "Sum bill for" << n << " month RM" << total << endl;

    // "setprecision" are use to set the decimal point of the average into 2 decimal places
    // library must be declare are "#include<bits/stdc++.h>" ----- SEE LINE 3

    cout << "The average bills charges : RM"<< fixed << setprecision(2) << avg << endl;

    // (if...else) statement used to determine the level of usage based on the average calculated

    if (avg > 110.00){
        cout << "Your electricity usage is HIGH." << endl;
    }
    else if (avg > 109.00 && avg < 40.00){
        cout << "Your electricity usage is MEDIUM." << endl;
    }
    else{
        cout << "Your electricity usage is LOW." << endl;
    }
}
