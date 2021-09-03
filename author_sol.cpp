#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	cin.ignore();
	while (tt--) {
		string s;
		getline(cin, s);
		bool checker = true;
		// check if the size of string is EXACTLY equal to 5 and the middle element is '-'
		// the first character of the source cell and the destination cell must be a 
		// letter between 'a' and 'h' (inclusive), also, the second character of the source 
		// cell and the destination cell must be a number between '1' and '8' (inclusive)
		if ((int) s.size() != 5 || s[2] != '-') {
			checker = false;
		} else if (s[0] < 'a' || s[0] > 'h' || s[3] < 'a' || s[3] > 'h') {
			checker = false;
		} else if (s[1] < '1' || s[1] > '8' || s[4] < '1' || s[4] > '8') {
			checker = false;
		}
		if (!checker) {
			cout << "Error" << '\n';
			continue;
		}
		// if it's a valid string, then the distance between the two cells must be equal to 2
		int x1 = s[0] - 'a';
		int y1 = s[1] - '1';
		int x2 = s[3] - 'a';
		int y2 = s[4] - '1';
		cout << (abs(x2 - x1) * abs(y2 - y1) == 2 ? "Yes" : "No") << '\n';
	}
	return 0;
}
