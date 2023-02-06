#include <iostream>
#include <string>

using namespace std;

int main(){

// Variable declaration using (string, int & long datatype)
    string name ;
    int age ;
    long phone ;

// Data input from user and stored in variable
    cout << "Please enter your name:";
    cin >> name  ;
    cout << "Please enter your age:";
    cin >> age  ;
    cout << "Please enter your mobile number:";
    cin >> phone  ;

    cout << "\n";
    cout << "-----------------------------------------------";
    cout << "\n\n";
    cout << "Here is your detail:\n";

// THe variable are output form the data input.

    cout <<"Name: \t" << name <<"\n";
    cout <<"Age: \t" << age <<"\n";
    cout <<"Mobile phone number: \t 0" << phone << endl;


}
