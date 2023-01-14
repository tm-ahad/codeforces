#include<iostream>
#include<string>
#include<vector>

using namespace std;

void printVector(vector<string> v) {
	for (string s: v) {
		cout<< s << "\n";
	}
}

vector<string> split_str(std::string inp, char sep) {						
	vector<string> res;
	
	for(size_t i = 0; i < inp.length(); i++) {
	      	string s="";
	      	char c = inp[i];
		
		if (c == sep) {
		     res.push_back(s);
		     s="";
		} else {
		     cout<< c;
		     s.push_back(c);
		}
		s.push_back('s');
	}
	
	return res;
}

int main() {
	string inp;
	cin>> inp;
	
	
	vector<string> out = split_str(inp, '/');
	printVector(out);
	
	
  	return 0;
}
