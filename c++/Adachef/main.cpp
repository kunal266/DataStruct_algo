#include <iostream>

using namespace std;


int main(){

int t ;
cin>>t ;

  for(int s ; s < t ; s++) {
  int k ;
  cin>>k ;
  char arr[8][8] ={'X'};

  for( int i = 0 ; i<8 ; i++)
  {
   for( int j =0 ; j<8 ; j++ )
   {

    if( k<=0)
    {
      break ;
    }
    arr[i][j] = '.' ;
    k-- ;
    }

    }
    arr[0][0] = 'O';

    for( int i = 0 ; i<8 ; i++ ){
      for( int j = 0 ; j<8 ; j++ ){
        if( arr[i][j] == '.' || arr[i][j] =='O'){
        cout<<arr[i][j] ;
        }
        else{
            cout<<"X";
        }
    }
        cout<<"\n";
    }

    cout<<"\n";
    }
}
