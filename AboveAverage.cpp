#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        double sum=0.0;
        int num;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>num;
            arr[i]=num;
            sum=sum+num;
        }
        sum=sum/n;
        double cnt=0.0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>sum) cnt++;
        }
        cout.setf(ios::fixed,ios::floatfield);
        cout.precision(3);
        cout<<(cnt*100.000)/n<<"%"<<endl;
    }
    return 0;
}