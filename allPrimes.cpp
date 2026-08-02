#include <iostream>
using namespace std ; 
int checkprime(int n )
{
     if (n >1){
  
   
    
    bool prime =true ;
    for(int i =2 ; i <=n-1 ; i ++ ){
        if(n%i == 0){
            prime = false;
        }
    }
if (prime == true)
{
    cout << n << " " ;
    

}
 }else {
        cout  << "invalid" ;
    }
return 0 ;
}

int loop(int n)
{
    for(int i = 2 ; i<n ; i++){
        checkprime(i) ; 
        
    }
}
int main (){
    int num ;
    cout << "ENTER YOUR NUMBER : " ;
    cin >>  num ; 

    loop(num ) ;
   
    return 0 ;
}
