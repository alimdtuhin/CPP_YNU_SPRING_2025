#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    cout << s.substr(1, s.size() - 2);
    return 0;
}