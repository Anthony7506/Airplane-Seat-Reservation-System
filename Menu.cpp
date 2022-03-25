//   Purpose: Project 2
//   Author: Anthony Tenn
//   Creation Date: 11/24/2021
//   Last Modification Date: 12/5/2021
#include "Header.h"
// Menu function
int Menu(int& userSelection) {
cout << "------------------------Menu----------------------------" << endl;
cout << "1. Display Seat Chart" << endl;
cout << "2. Reserve Seat" << endl;
cout << "3. Cancel Reservation" << endl;
cout << "4. Save Seat Chart to File" << endl;
cout << "5. Statistics" << endl;
cout << "6. Help" << endl;
cout << "7. Quit" << endl;
cout << "--------------------------------------------------------" << endl;
do {
if (cin.fail()){
cin.clear();
cin.ignore();
}
cout << "Please Enter Your Choice(1 - 7) : ";
cin >> userSelection;
} while (cin.fail());
return userSelection;
}
