#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    int a[n],beg=0,end=n-1,flag=0,ans;
    
    for(int i=0;i<n;i++)
 {   cin>>a[i];}
    int key;
    cin>>key;
    while(beg<=end)
    {
        int mid=(beg+end)/2;
        if(a[mid]==key)
       { ans=mid+1;
          flag=1;
        break;}
        else if(a[mid]>key)
        end=mid-1;
        else
        beg=mid+1;
    }
    if(flag==0)
    cout<<"element not found";
    else
    cout<<"element found at"<<ans;
    

    return 0;
}
