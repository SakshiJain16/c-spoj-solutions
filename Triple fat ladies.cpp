#include <iostream>
using namespace std;

int main() {
	
	// your code here
	int t;
	cin>>t;
	long long int n,ans;
	while(t--)
	{
		cin>>n;
		ans=192+(n-1)*250;
		cout<<ans<<endl;
	}

	return 0;
}
