#include <iostream>
using namespace std;

int main(){

    // Datatype declareration
    int Num1,Num2;
    float Num3,Num4, result;

    // Input from the user
    cout << "Program to multiply 4 number." << endl;
    cout << "Please input first number:";
    cin >> Num1;
    cout << "Please input second number:";
    cin >> Num2;
    cout << "Please input first float number:";
    cin >> Num3;
    cout << "Please input second float number:";
    cin >> Num4;

    // Calculation for multiplication each number stored in "Result" variable
    result= Num1 * Num2 * Num3 * Num4;

    // "Result variable are display"
    cout <<"The product of the number is:" << result;

}
