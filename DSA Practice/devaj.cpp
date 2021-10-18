#include <iostream>
using namespace std;
int main() 
{
	cout<<"Enter to the code:-\n";
	int t,n,i,j,k,count;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int arr[n];
	    for(i=1;i<=n;i++)
	    {
	        cin>>arr[i];
	    }
		for(i=1;i<=n;i++){
			cout<<arr[i]<<" ";
		}

		for(i=1;i<=n;i++)
	    {
	        k=arr[i];
	        count=0;
	        for(j=1;j<=n;j++)
	        {
	            if(k==arr[j])
	            {
	                count++;
	            }
	        }
	        if(count==1)
	        {
	            cout<<k<<"\n";
	            break;
	        }
	    }
	}
	return 0;
	cout<<"Thanks for supporting\n";
}
