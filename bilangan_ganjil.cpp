#include <iostream>

using namespace std;

int main() {
    int x,y,z;
    
    cout<<"Masukan bilangan bulat positif ";
    cin>>z;
    
    if(z<=0){
    	cout<<"Angka yang dimasukan tidak sesuai, ulangi lagi"; 
	} else {
	
	    cout<<"Bilangan ganjilnya antara lain ";
	    
	    for (x=1; x<=z ;x++){
	    y = x*2+1;
	    if(y<=z){
			cout<< y <<" ";	        	  
			}
	    }
	}
    
}
