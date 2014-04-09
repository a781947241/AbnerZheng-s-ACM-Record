#include <iostream>
using namespace std;

int main(){
	int Nblock;
	int n,m;
	cin>>Nblock;

	while(Nblock--){
		int index = 1;
		while(cin>>n>>m && (n||m)){
			int pairs = 0;
			for (int i=1; i < n-1; i++){
				for(int j=i+1; j < n; j++){
					if ((i*i+j*j+m)%(i*j)==0) pairs++;
				}
			}
			cout<<"Case "<< index<<":"<<pairs<<endl;
		}
		if(Nblock) cout<<endl;
	}
}

