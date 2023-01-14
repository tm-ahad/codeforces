#include<iostream>
#include<vector>
using namespace std;

int main() {
    int f;
    int s;
    int t;

    cin >> f;
    cin >> s;
    cin >> t;

    cout<< "YES\n";

    vector<int> res = {s+t+(f*2), s+t};
    
    cout<< res.at(0) << " ";
    cout<< res.at(1) << "\n";
}