#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> words;
    
    // Read all words into the vector
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        words.push_back(s);
    }

    // Process and print the words
    for (const string& s : words) {
        if (s.size() <= 10) {
            cout << s << endl;
        } else {
            string ans;
            ans.push_back(s[0]);
            ans += to_string(s.size() - 2);
            ans.push_back(s[s.size() - 1]);
            cout << ans << endl;
        }
    }

    return 0;
}
