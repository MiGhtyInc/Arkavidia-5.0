#include <iostream>
#include <string.h>
using namespace std;
int main() {
	int h=0,t,a;
	string s;
	cin>>t;
	for (int i=0;i<t;i++) {
		cin>>s;
		if (s=="donate"){
			cin >>a;
			h=h+a;
		}
		else if (s=="report") {
			cout << h << endl;
		}
	}
	return 0;
}