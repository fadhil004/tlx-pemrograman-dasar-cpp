#include <iostream>
using namespace std;

int main() {
    bool lampu[101];

	for(int i = 1; i <= 100;i++){
		lampu[i] = false;
	}

    for(int i = 1;i <= 10;i++){
    	for(int j = i; j <= 100;j++){
    		if(j % i == 0){
    			lampu[j] = !lampu[j];
			}
		}
	}
	
	int total = 0;
	
	for(int i = 1; i <=100;i++){
		if(lampu[i] == true){
			total++;
		}
	}
	
	cout << total << endl;
}

