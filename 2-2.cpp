#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;

int main(int argc, char** argv) {
    ifstream fin("2-2.input");
    int w, h, l;
    long long area = 0;
    char c;

    while (fin >> w) {
        fin >> c >> h >> c >> l;
        int longest = max (max(w, h), l);
        int ribbon = (w+h+l - longest) * 2;
        int are = w * h * l;
        area += are + ribbon;
    }
    cout << area << endl;
    return 1;
}
