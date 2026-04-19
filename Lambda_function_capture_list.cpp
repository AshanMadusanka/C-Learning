#include <iostream>


int main() {
/*
    int a{10};
    int b{50};

    auto func = [a,b]() {
        std::cout << "a+b " <<  a+b << std::endl;
    };

    func();
*/
    int a{10};
    int b{50};

    auto func = [a,b]() {
        std::cout << "Inner Value:  " <<  a << std::endl;
    };

    for (int i = 0; i < 5; i++) {
        std::cout << "Outer Value: " << a << std::endl;
        func();
        a++;
    }

    return 0;
}

