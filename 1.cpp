#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char** argv) {
        ifstream fin("1.txt");
        char c;
        int floor = 0;
        while (fin >> c) {
                if (c == '(' ) {
                        floor++;
                } else if ( c == ')') {
                        floor--;
                }
        }
        cout << floor << endl;
        return 0;
}    
