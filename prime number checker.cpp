#include <iostream>
using namespace std ;

int check (int n ){
    
bool prime = true ; 
if (n<=1 ){
        cout << "IT's neither prime nor composite ";

}else {
for (int i =2 ; i <= n-1 ; i ++)
{
    if (n%i == 0 ){

        prime = false ;
    }
}    
if (prime == true){
    cout << "IT's a prime number ";

}else {
  cout << "IT's a composite number ";


}
}


    return 0 ;
}
int main ()
{
    int num ;
    cout<< "ENTER YOUR NUMBER : "; 
    cin>> num ;
    check (num); 

}