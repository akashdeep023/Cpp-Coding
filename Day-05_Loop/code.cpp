#include <iostream>
using namespace std;

int main (){
    // Loop (for, while, do-while) --------------------------------
    // for loop --------------------------------
    // for(initialisation,condition,updation){ // loop run while condition is true
        // do some work
    // }
    // iterate -> run , iteration -> single run , iterator -> loop variable (counter variable)

    // for (int i = 1; i <= 5; i++){
    //     cout << i << " ";
    // }
    // cout << endl;

    // while loop --------------------------------
    // initialisation value
    // while(condition){  // loop run while condition is true
    // do some work
    // update value
    // }

    // int num = 1;
    // while (num <= 5){
    //     cout << num << " ";
    //     num++;
    // }
    // cout << endl;

    // do-while loop --------------------------------
    // do{
    // do some work
    // }while(condition);

    // int num = 1;
    // do{ // 1st iteration then check condition
    //     cout << num << " ";
    //     num++;
    // }while(num <= 5); // loop run while condition is true
    // cout << endl;

    // while loop different between do-while ----

    // while(1<0){ // false
    //     cout << "Hello, Jack! - while loop" << endl; // not execute
    // }

    // do{
    //     cout << "Hello, Jack! - do-while loop" << endl; // execute 1st time
    // } while (1 < 0); // false

    // break statement -> to exit the loop --------------------------------
    // for (int i = 1; i <= 5; i++){
    //     if (i == 3){
    //         break;
    //     }
    //     cout << i << " ";
    // }
    // cout << endl << "out of loop now" << endl;

    // continue statement -> to skip the current iteration --------------------------------

    for (int i = 0; i <= 10; i++) {
        if(i == 4){
            cout << "SKIP" << endl;
            continue; // loop to next iteration
        }
        cout << i << endl;
    }

        return 0;
}