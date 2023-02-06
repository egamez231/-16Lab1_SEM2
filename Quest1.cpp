#include <iostream>
#include <string>

using namespace std;

int main(){

// Variable declaration using (string, int & long datatype)
    string name [2];
    int age [2],i;
    long phone [2];

 // Loop to repeat the process 2 time (as in the i are set to be 2)
 // The data are stored in array type of data
    for (i=0; i<2; i++){
        cout << "Write a name :";
        cin >> name[i]  ;
        cout << "Write a age :";
        cin >> age [i] ;
        cout << "Write a phone number:";
        cin >> phone [i] ;
    }

// Data display
    cout << "\n\n";
    cout << "NAME \t AGE\t PHONE\n";

// Loop to display out all the data from the array
    for (i=0; i<2; i++){
        cout << name[i] <<"\t"<< age[i] <<"\t 0" << phone [i] <<"\n";
    }

}
