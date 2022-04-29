#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	int a, b, x;
	while(t--){
	    cin >> a >> b >> x;
	    int dif = b - a;
	    int y = dif/x;
	    cout << y << endl;
	}
	return 0;
}
