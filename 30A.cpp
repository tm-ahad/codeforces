#include<iostream>
#include<cmath>
#include<string>
using namespace std;

bool isPositive(int n) {
	if (n!= 0) {
		return n > 0;
	}
}

int root(a, b) {
	int init = 0;
	
	while(pow(a, init) != b) {
		init++
	}
}

int main() {
	int a, b, c;
	string msg = "No solution";
	
	cin>> a >> b >> c;
	float xpn = b/(float)a;
	
	if(a == 0 && b == 0){cout<<"1";}
    	if(a == 0 && b != 0){cout<<msg;}
    	if(a != 0 && b == 0){cout<<"0";}
    	if(b%a != 0) { cout<<msg; }
    	else {
		try {
    			int res = root(xpn, c);
    			
    			cout<< log(xpn) << " "<< log(c)<<endl;
    			cout<< res;
		} catch(...) {
			cout<< msg<<endl;
		}
	}
	
	
	return 0;
}
