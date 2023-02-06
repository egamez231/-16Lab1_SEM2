#include <iostream>
using namespace std;

int main(){

    // Dattype declaration
    int n,i;
    float total;

    // Input by the user
    cout << "Enter number of resistor:";
    cin >> n;

    // Variable declaration for array that the array size are depending on the user input "n"
    float rst [n];

    // Input Loop to fill the data from the user into the array
    for (i= 0; i< n; i++){

        cout << "Resistor " << i+1 << " (Ohm): ";
        cin >> rst [i];
     }

    // Loop for the calculation to sum up the total of the data in the array
    for (i= 0; i< n; i++){

        total += rst[i];
     }

     // The total are displayed
    cout << "Sum of resistor value is " << total;

}
