#include <iostream>
using namespace std;

int main() {
    string s;
    string temp = "";

    cout << "Enter a string: "; //getline(cin, s);
    cin >> s;

    for (int i = 0; i < s.size(); ++i) {
        if (!(s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            s[i] = '\0';
        }
    }
    cout << "Output String: " << s;
    return 0;
}