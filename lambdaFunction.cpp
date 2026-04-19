#include <iostream>

using namespace std;
int main() {
/******Capture list[] Parameter list()******/

 /* auto func =  []() {
        std::cout << "Hello World!\n";
    };

    func();
*/

    /*Calling Directly Lambda Function*/



    // [](double a,double b) {
    //
    // cout << "a + b: " <<a+b<< endl;
    // }(7.5,4.3);

    // Lmbda Function Returning something

    [](double a, double b) {
        return a + b;
    }(10,12);

    cout << "a+b: "<< [](double a, double b) {
        return a + b;
    }(10,12.5) <<endl;

    cout << "a+b: "<< [](double a, double b) -> int {
        return a + b;
    }(10,12.5) <<endl;
    return 0;
}



