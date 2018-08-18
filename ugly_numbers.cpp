#include<bits/stdc++.h>
using namespace std;

////typdef long long ll
//ll mod=1e9+7;
//program to find nth number whose factors are only n1,n2,n3.
//1 is included as the first prime number by convention
int main()
{
int n;
cin>>n;
int n1,n2,n3;
cin>>n1>>n2>>n3;
int ugly[n];
int l=0,j=0,k=0;
ugly[0]=1;

for(int i=1;i<n;i++){
int next_ugly=min(n1,min(n2,n3));
ugly[i]=next_ugly;
if(n1==next_ugly){
	l++;
	n1=ugly[l]*2;

}
else if(n2==next_ugly){
	j++;
	n2=ugly[j]*3;
}
else
{
	k++;
	n3=ugly[k]*5;
}


}


cout<<ugly[n-1];















}