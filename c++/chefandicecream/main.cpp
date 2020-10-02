#include<iostream>
using namespace std ;

int main()
{
    int t;
    cin>>t ;
    for( int i = 0 ; i<t ; i++ )
    {
        int n;
        cin>>n ;
        int l = 0 ;
        int arr[n] ;
        int y = 1 ;
        for( int j = 0 ; j<n ; j++)
        {
            cin>>arr[j] ;
        }
        int result[4]={0};
        for(int i = 0 ; i<n ; i++)
        {
           int m = arr[i]/5;

        if(m == 1){
            result[m]++;

        }
        else if(m==2){
            if(result[m-1]>=1){
                result[m-1]--;
                result[m]++;

            }
            else{
                cout<<"NO\n";
                y=0 ;
                break;
            }
        }
        else if(m==3){
            if(ans[2]>=1){
                ans[2]--;
                ans[3]++;
                continue;
            }
            else if(ans[1]>=2){
                ans[1]-=2;
                ans[3]++;

            }
            else{
                cout<<"NO\n";
                y=0 ;
                break;
            }
        }


        }
        if( y==1)
        {
         cout<<"YES\n";
        }

    }
}

