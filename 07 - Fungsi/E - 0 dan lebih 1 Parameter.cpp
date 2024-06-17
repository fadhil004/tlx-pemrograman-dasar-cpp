#include <iostream>
using namespace std;

int jantan[4] = {0,10,50,60};
int betina[4] = {7,80,9,40};

int denda(int a,int b){
	int selisih;
	selisih = a - b;
	if(selisih < 0){
		selisih *= -1;
	}
	return 1000 * selisih;
}

int main(){
	int total = 0;
	for(int i = 0;i < 4;i++){
		total += denda(jantan[i],betina[i]);	
	}
	cout << total << endl;
}
