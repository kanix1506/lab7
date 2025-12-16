#include<iostream>
using namespace std;

char before(char x){
	if(int (x)-1 >= 65 && int (x)-1 <= 90){
	    return x-1;
    }
    if(int (x)-1 == 64){
        return 'Z';
    }
    else{ 
        return '0';  
    }
}

int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}
