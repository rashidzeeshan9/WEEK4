#include<iostream>
#include<math.h>

using namespace std;
int main(){
	float a,b,c,d,r1,r2;
	cout<<"Enter the value of a, b, c respectively: ";
	cin>>a>>b>>c;
	d=(b*b)-(4*a*c);
	if (d < 0){
		cout<< "The roots are imaginery";
	}
	else{
		r1 = (-b + sqrt(d))/2*a;
		r2 = (-b - sqrt(d))/2*a;
		cout<<"First root"<<r1<<endl;
		cout<<"Second root"<<r2<<endl;
	}
	return 0;
}
