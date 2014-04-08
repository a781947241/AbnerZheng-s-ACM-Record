#include <iostream>
#define MAXN 5843
using namespace std;
int humbleNum[MAXN];

int min4(int a, int b, int c, int d){
	int temp1 = a<b?a:b;
	int temp2 = c<d?c:d;
	return temp1<temp2?temp1:temp2;

}
int main(){
	int i2,i3,i5,i7;
	i2=i3=i5=i7=1;  // present the multiply of 2,3,5,7
    int n;
	humbleNum[1]=1; //special case

	// Making the humblenum table
	for (int i=2; i<MAXN; i++){
		int min = min4(humbleNum[i2]*2,humbleNum[i3]*3,humbleNum[i5]*5,humbleNum[i7]*7);
		humbleNum[i]=min;
		if (min==humbleNum[i2]*2)
			i2++;
		if (min==humbleNum[i3]*3)
			i3++;
		if (min==humbleNum[i5]*5)
			i5++;
		if (min==humbleNum[i7]*7)
			i7++;
	}

	while(cin>>n && n){
		//print out
		cout<<"The "<<n;
		int ten = n/10 % 10;
		if(n%10==1 && ten != 1) cout<<"st";
		else if(n%10==2 && ten != 1) cout<<"nd";
		else if(n%10==3 && ten !=1) cout<<"rd";
		else cout<<"th";
		cout<<" humble number is "<<humbleNum[n]<<"."<<endl;


	}

	//pint out


}




