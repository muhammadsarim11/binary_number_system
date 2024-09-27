#include<iostream>
using namespace std;

int bintdec(int binn){
	int ans = 0;
	int power =1;
	while(binn>0){
		int rem = binn%10;
		binn/=10;
		ans +=(rem*power);
		power*=2;
	}
	
	return ans;
}

	int dectbin(int decn){
		int answ = 0;
		int power = 1;
		
		while(decn>0){
			int rem = decn%2;
			decn /= 2;
			answ +=(rem*power);
			power*=10;
		}
		
		return answ;
}
	
int main(){
	
	int decn = 6;
//	cout<<dectbin(decn);
	int binn =110;
	cout<<bintdec(binn);
	return 0;
}