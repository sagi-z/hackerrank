#include <cmath>
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <map>
#include <string>
#include <iterator>
#include <list>
#include <initializer_list>

using namespace std;


int main() {
    map<string, string> pb;
    int cnt = 0;
    string name;
    string num;

    cin >> cnt;
    for (int i = 0; i < cnt; ++i ) {
        cin >> name;
        cin >> num;
        pb[name] = num;
    }

    list<string> queries(istream_iterator<string>(cin), {});

    for (auto name : queries) {
        try {
            num = pb.at(name);
            cout << name << "=" << num << endl;
        } catch(const out_of_range &ex) {
            cout << "Not found" << endl;
        }
    } 

    return 0;
}
