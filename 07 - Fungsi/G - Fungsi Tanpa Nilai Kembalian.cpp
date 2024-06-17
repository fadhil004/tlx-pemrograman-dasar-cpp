#include <iostream>
using namespace std;

int kandang_bebek[11] = {0};

void isi_bebek_ke_dalam_kandang(int a, int b, int banyak_bebek){
	for(a; a <= b; a++){
		kandang_bebek[a] += banyak_bebek;
	}
}

int main(){
	isi_bebek_ke_dalam_kandang(1, 8, 2);
    isi_bebek_ke_dalam_kandang(2, 9, 10);
    isi_bebek_ke_dalam_kandang(5, 6, 2);
    isi_bebek_ke_dalam_kandang(9, 10, 3);
    isi_bebek_ke_dalam_kandang(1, 4, 7);
    isi_bebek_ke_dalam_kandang(1, 4, 2);
    isi_bebek_ke_dalam_kandang(4, 8, 6);
    
    int kandang_max = 0;
    for(int i = 0; i <= 11; i++){
    	kandang_max = max(kandang_max,kandang_bebek[i]);
	}
	cout << kandang_max << endl;
}
