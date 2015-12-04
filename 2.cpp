#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;

int main(int argc, char** argv) {
        ifstream fin("2.txt");
        int w, h, l;
        char c;
        long long area = 0;
        while (fin.good()) {
            if (!(fin >> w)) {
                break;
            }
            fin >> c >> h >> c >> l;
            int a = w*h;
            int b = w*l;
            int c = h*l;
            int m = min(min(a,b),c);
            area += (a + b + c) *2 + m;
           
        }
        cout << area << endl;
        return 0;
}    
