#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main(){
	int a{7};
	int* p1=&a;
	cout<< *p1 << endl <<p1 << endl;
	int* p2= new int[7];
	for (int i=0; i<7; i++){
		p2[i]= pow(2,i);
	}
	cout<< *p2 << endl << p2 << endl;
	int* p3= p2;
	p1=p2;
	p3=p2;
	cout<< *p1 << endl<< p1 << endl << *p2 << endl << p2 << endl;
	delete[] p2;
	p1 = new int[10];
	for (int i=0; i<10; i++){
		p1[i]= pow(2,i);
	}
	p2 = new int[10];
	for (int i=0; i<10; i++){
		p2[i]= p1[i]; 
	}
	vector<int> v1(10);
	for (int i=0; i<0; i++){
		v1[i]=pow(2,i);
	}
	vector<int> v2(10);
	for (int i=0; i<0; i++){
		v2[i]=v1[i];
	}
	
}
