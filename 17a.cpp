#include <iostream>
#include <vector>

using namespace std;

void print_array10(ostream& os, int* a){
	for (int i=0; i<10; i++){
		os<<a[i] << endl;
		}

}


void print_array(ostream& os, int* a, int n){
	for (int i=0; i<n; i++){
		os<<a[i] << endl;
		}

}


void print_vector(ostream& os, vector<int>& a, int n){
	for (int i=0; i<n; i++){
		os<<a[i] << endl;
		}

}

int main(){
	int* t= new int[10];
	for (int i=0; i<10; i++){
		cout<<t[i] << endl;
	}
	
	delete[] t;

	int* v= new int[10];
	for (int i=0; i<10; i++){
		v[i]=100+i;
	}
	print_array10(cout, v);
	int* x= new int[11];
	for (int i=0; i<11; i++){
		x[i]=100+i;
		cout<<x[i]<<endl;
	}
	int* h= new int[20];
	for (int i=0; i<20; i++){
		h[i]=100+i;
	
	} 
	print_array(cout, h, 20);
	delete[] v,x,h;



	vector<int> vect(10);
	for (int i=0; i<10; i++){
		vect[i]=100+i;
	}
	vector<int> hal(11);
	for (int i=0; i<11; i++){
		hal[i]=100+i;
	}

	vector<int> raj(20);
	for (int i=0; i<20; i++){
		raj[i]=100+i;
	}

	print_vector(cout,vect, vect.size());
	print_vector(cout,hal, vect.size());
	print_vector(cout,raj, vect.size());
}

