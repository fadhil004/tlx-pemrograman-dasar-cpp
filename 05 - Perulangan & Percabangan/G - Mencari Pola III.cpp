#include <iostream>
using namespace std;

int main() {
    int N = 10;

    for (int i = 1; i <= N; i++) {
        for(int j = 1; j <= N; j++){
        	if(j == i || j == N-i+1){
        		cout << "*";
        		continue;
			}
			cout << ".";
		}
		cout << endl;
    }
}

