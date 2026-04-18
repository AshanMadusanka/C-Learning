#include <iostream>

void age(int *age);
int main() {
 int myage = 18;

 std::cout << myage << std::endl;
 age(&myage);
 std::cout << myage << std::endl;
}



void age(int *age) {

 ++(*age);

}