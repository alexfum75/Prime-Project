#include <iostream>
#include <sys/utsname.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() {
    int a = 2;
    long long int b = 1000;

    for (int i = a; i <= b; i++) {
        for (int j = 2; j <= i; j++) {
            if (!(i % j) && (i != j)) {
                break;
            }
            if (j == i) {
                cout << i << endl;
            }
        }
    }
    struct utsname name;
    if (uname(&name))
        exit(1);
    std::cout << "Ciao da " <<" " << name.sysname <<
                 " " << name.release << std::endl;
}
