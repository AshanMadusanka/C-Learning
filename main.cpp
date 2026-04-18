#include <iostream>

void age(int age);
int main() {

    age(2);

    return 0;
}

void age(int age) {

    if (age > 18) {

        std::cout << "You entered " << age << " years old!\n";
    }
    else {
        std::cout << "You cant! " << age << " years old!\n";
    }

}