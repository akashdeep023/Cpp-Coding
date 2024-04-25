#include <iostream>
using namespace std;

int main(){
    // Conditional Statements (if, else, else if, ternary operator, switch) --------------------------------
    // if, else ------------------------
    // int age;
    // cout << "Enter your age: ";
    // cin >> age;
    // if(age>=18){ // condition check => true => execute
    //     cout << "CAN VOTE" << endl;
    // }else{ // if condition false => execute
    //     cout << "CANNOT VOTE" << endl;
    // }
    // if(age>=40){
    //     cout << "YOU ARE OLD" << endl;
    // }

    // int marks;
    // cout << "Enter your marks: ";
    // cin >> marks;

    // if(marks >= 33){
    //     cout << "PASS" << endl;
    // }else{
    //     cout << "FAIL" << endl;
    // }

    // else if ------------------------

    // int marks;
    // cout << "Enter your marks: ";
    // cin >> marks;
    // if(marks >=90){ // condition check => true => execute
    //     cout << "Grade A" << endl;
    // }else if (marks >= 80){ // if condition false then condition check => true => execute
    //     cout << "Grade B" << endl;
    // }else{ // if and else if condition false => execute
    //     cout << "Grade C" << endl;
    // }

    // ternary operator ------------------------

    // int age;
    // cout << "Enter your age: ";
    // cin >> age;
    // bool adult;
    // adult = (age >= 18)? true : false; // condition true => store 1st value otherwise 2nd value
    // cout << "adult : " << adult << endl;

    // int a;
    // cout << "Enter a number: ";
    // cin >> a;
    // bool even;
    // even = (a % 2 == 0) ? true : false;
    // cout << "even : " << even << endl;

    // switch ------------------------

    int day;
    cout << "Enter a number: ";
    cin >> day;
    switch (day){ // day == case => execute this case then break switch;
    case 1:
        cout << "MONDAY" << endl;
        break;
    case 2:
        cout << "TUESDAY" << endl;
        break;
    case 3:
        cout << "WEDNESDAY" << endl;
        break;
    case 4:
        cout << "THURSDAY" << endl;
        break;
    case 5:
        cout << "FRIDAY" << endl;
        break;
    case 6:
        cout << "SATURDAY" << endl;
        break;
    case 7:
        cout << "SUNDAY" << endl;
        break;
    default:
        cout << "INVALID DAY" << endl;
        break;
    }

    return 0;
}