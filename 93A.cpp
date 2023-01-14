#include <iostream>
#include <string>
#include<cmath>
#include <iomanip>

using namespace std;

int main()
{
    int n, m, a, b;
    int bigfOOT = 1000000000;
    
    cin >> n >> m >> a >> b;
    
    cout<< (bigfOOT >= n >= 1) << (bigfOOT >= m >= 1) << (0 >= 9 >= 3 >= 1) << a<< n<<b;
    
    if (bigfOOT >= n >= 1 && bigfOOT >= m >= 1 && n >= b >= a >=1) {
    	int folders = (b-a)+1;
 	int plus = (a-1)+(folders%m);
 	int plusrow = ceil(plus/m);
 	
 	float pl = plus + 0.00;
 	float mf = m + 0.00;
 	float ex = pl/mf;
 	
 	if (ceil(ex) > 1) {
 		plusrow += 1;
 	}
 	
 	int result = 1 + plusrow;
 	
 	cout<< result;
 	
    	
    }
}
