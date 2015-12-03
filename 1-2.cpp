#include <fstream>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    ifstream fin("1.txt");
    char c;
    int floor = 0;
    long long counter = 0;
    while(fin >> c) {
        if (c == '(') {
            floor++;
        } else if (c == ')') {
            floor--;
        }
        counter++;
        if (floor == -1) {
            break;
        }
    }
    cout << counter << endl;
    return 1;
}
