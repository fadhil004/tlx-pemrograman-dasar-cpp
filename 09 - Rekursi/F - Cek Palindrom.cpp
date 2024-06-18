#include <iostream>
#include <string>
using namespace std;

bool palindrom(string s) {
	int n = s.length() - 1;
    if(n <= 0){
    	return true;	
	}
	if(s[0] != s[n]){
		return false;
	}
	return palindrom(s.substr(1,n-1));
}

int main() {
    cout << palindrom("") << endl;
    cout << palindrom("x") << endl;
    cout << palindrom("aa") << endl;
    cout << palindrom("ab") << endl;
    cout << palindrom("ini") << endl;
    cout << palindrom("itu") << endl;
    cout << palindrom("anna") << endl;
    cout << palindrom("ibu ratna antar ubi") << endl;
    cout << palindrom("rumah murah") << endl;
    cout << palindrom("aku suka rajawali bapak apabila wajar aku suka") << endl;
}

