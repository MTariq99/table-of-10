#include <iostream>
using namespace std;

int main() {

int n ;
int choice ;
int i ;
string t;

 

cout << "Enter the value for table : " ;
cin >> n;
cout << "Ener your choice :";
cin >> choice;
i = 1 ;

for (i =1; i <=choice; i++){
    if ( i <= choice) {
 cout << n << "X" << i  << "=" << n*i << endl;
} else if(i > choice) {
    cout << "Do you want to continue another time :" <<endl;
    cin >> t;
}

}


return 0;
}