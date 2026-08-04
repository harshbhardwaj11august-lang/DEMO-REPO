#include <iostream>
using namespace std;
int decimalBinary(int n ){
     
    int power = 1 ,answer =  0 ;

while (n > 0){ 
    int remain = n % 2 ;
n = n / 2 ;
answer = answer + power * remain ;
power = power * 10 ; 
}
cout << answer ; 

return 0 ;
}
int binaryDecimal(int n){
int answer = 0 ; 
int power = 1 ; 
while(n > 0){
    int rem = n % 10  ; 
     n = n/10 ;
     answer+= rem * power ; 
     power *= 2 ;
}
cout << answer ; 



    return 0 ;
}
int main (){
    int num ;
    char d ; 
    cout  << "for decimal to binary type d " << endl <<  "for binary  to decimal type b : "; 
    cin >> d ;

  
    
    cout << "ENTER YOU NUMBER : ";
    cin >> num ;
   
    if(d=='d'){
 decimalBinary(num);
    }else if (d == 'b'){
        binaryDecimal(num);
    }
    else {
        cout << "invalid input " ;
    }

    return 0 ; 
}
