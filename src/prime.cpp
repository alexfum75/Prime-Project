#include <iostream>
#include <sys/utsname.h>
#include <stdio.h>
#include <stdlib.h>
#include <set>
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    int a = 2;
    long long int b = 20;

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
    set<int> num;
    num.insert(10);
    num.insert(20);
    cout << "Test C++11" << endl;
    //for (set<int>::iterator it = num.begin(); it != num.end(); ++it) {
    for (auto it = num.begin(); it != num.end(); ++it) {
        cout << "Val: " << (*it) << endl;
    }

    struct utsname name;
    if (uname(&name))
        exit(1);
    std::cout << "Ciao da " << " " << name.sysname <<
              " " << name.release << std::endl;

    ofstream outputFile("/data/PolluxFts/newFile.txt");
    outputFile << "writing to file";
    outputFile.close();
}
