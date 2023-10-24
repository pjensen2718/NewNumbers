#include <iostream>

#include "BigNumber.h"
#include "PreciseNumber.h"

using namespace std;

void testBN();
void testPN();

int main() {
    try {
        int choice;
        cout << "Select test: [1] BigNumbers [2] PreciseNumbers:\n";
        cin >> choice;
        choice == 1 ? testBN() : testPN();
    }
    catch (runtime_error &e) {
        cerr << "ERROR: exited with code 1 with message: " << e.what() << endl;
        return 1;
    }

    return 0;
}

void testBN() {
    cout << "Testing BigNumbers...\n";
    BigNumber num;
    cout << num;
    cout << "FIXME\n";
}

void testPN() {
    cout << "Testing PreciseNumbers...\n";
    cout << "FIXME\n";
    throw runtime_error("hi!");
}