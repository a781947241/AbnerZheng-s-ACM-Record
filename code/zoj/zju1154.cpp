#include <iostream>
#include <string.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	char a[10]={'0'};
	int b;

	while(n--){
		while(cin>>b && b){
			cin>>a;
			int N = strlen(a);
			int sumBase10 = 0;
			int sumOfDigit = 0;
			for (int i=0; i < N; i++){
				sumOfDigit += a[i] - '0';
				sumBase10 = sumBase10*b + a[i] - '0';
			}
			if (sumBase10 % sumOfDigit) cout<<"no\n";
			else cout<<"yes\n";

		}
		if (n) cout<<endl;

	}
}

