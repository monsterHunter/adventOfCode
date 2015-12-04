#include <iostream>
#include <fstream>
#include <set>

using namespace std;

#define uu set

int main(int argc, char** argv) {
    ifstream fin("3.txt");
    char c;
    uu<pair<int, int> > m;
    pair<int, int> cur1 = make_pair(0,0);
    pair<int, int> cur2 = make_pair(0,0);
    pair<int, int>*cur = &cur2;
    m.insert(cur1);
    while (fin >> c) {
        if (cur == &cur2 ) 
            cur = &cur1;
        else 
            cur = &cur2;
        switch(c) {
        case '>' :
            cur->first++;
            m.insert(*cur);
            break;
        case '<' :
            cur->first--;
            m.insert(*cur);
            break;
        case '^' :
            cur->second++;
            m.insert(*cur);
            break;
        case 'v' :
            cur->second--;
            m.insert(*cur);
            break;
        default:
            break;
        }
    }
    cout << m.size() << endl;
    return 0;
}    
