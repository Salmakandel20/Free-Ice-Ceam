#include<iostream>
using namespace std;
int main(){
int num_of_kids=0,n,y;
long long num_of_peaks;
char operation;
cin>>n>>num_of_peaks;
for (int i=0;i<n;i++){
cin>> operation >>y;
if(operation=='+') num_of_peaks+=y;
else if (operation=='-'){
	if(num_of_peaks<y) 
	{
		num_of_kids++;
	}
	else 
	{
	    num_of_peaks-=y;
	}
}	
}
cout<<num_of_peaks<<" "<< num_of_kids;
}
