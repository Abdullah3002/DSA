#include<bits/stdc++.h>
using namespace std;

/*
A school has following rules for grading system:
a. Below 25 - F
b. 25 to 44 - E
c. 45 to 49 - D
d. 50 to 59 - C
e. 60 to 79 - B
f. 80 to 100 - A
Ask user to enter marks and print the corresponding grade
*/

int main() {

        int grade;
        cin >> grade;

        if(grade>=80 && grade <= 100){
            cout<< "A";
        }
        else if (grade >=60 && grade <=79){
            cout<< "B";
        }
        else if (grade >=50 && grade <=59){
            cout<< "C";
        }
        else if (grade >=45 && grade <=49){
            cout<< "D";
        }
        else if (grade >=25 && grade <=44){
            cout<< "E";
        }
        else if (grade < 25  ){
            cout<< "F";
        }
        else {
            cout<< " It is not correct number ";
        }


    return 0;
}