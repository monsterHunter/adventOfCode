#include <iostream>
#include <stdlib.h>
#include "md5.h"
#include <string>
using namespace std;

#define SEED "ckczppom"

int main (int argc, char** argv ) {
    long long grape = 0;
    while(1) {
        string result = md5(SEED + to_string(grape++));
        // check
        if (result.substr(0,6) == "000000") {
            cout << grape -1 << endl;
        }
    }
    return 1;
}
