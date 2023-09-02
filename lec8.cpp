odd and even
#include<iostream>
using namespace std;
 bool isEven(int a){
    //_odd 
    if(a&1){
        return 0;
    }
    else {
        return 1;
    }
 }
 int main (){
    int num;
    cin >> num;
    if(isEven(num)){
        cout << "number is even"<< endl;
    }
    else{
        cout << "number is odd"<<endl;
    }
    return 0;
 }

----------------------------------------------------------------------------------------------
  nCr
  #include<iostream>
using namespace std;
 int factorial (int n){
    int fact =1;
    for (int i=1; i<=n;i++){
        fact =fact*i;
    }
    return fact ;
 }
 int ncr (int n, int r){
    int num = factorial (n);
    int denom = factorial (r) * factorial(n-r);
    return num/denom;
 }
 int main (){
    int n,r;
    cin >> n>>r;
    cout << "answer is " << ncr(n,r) << endl;
    return 0;
 } 
-----------------------------------------------------------------------------------------
  pass by value
  #include<iostream>
using namespace std;
void dummy (int n){
    n++;
    cout << "n is " << n<< endl;
}
        int main (){
            int n;
            cin >> n;
            dummy(n);
            cout << "number n is " << n << endl;
            return 0;
        }
    
-----------------------------------------------------------------------------
  prime number
  #include<iostream>
using namespace std;
bool isprime(int n){
    for(int i=2; i<n; i++){
        if (n%i==0){
            return 0;
        }
    }
    return 1;
}
int main() {
    int n;
    cin >> n;
    if((n)) {
        cout <<"is a prime number " << endl;
    }
    else {
        cout << "not a prime number " << endl;
    }
}
-------------------------------------------------------------------------
  power
  #include<iostream> 
using namespace std;
int power (int num1, int num2){
    int ans =1;
    for(int i=1; i<=num2;i++){
        ans = ans*num1;
    }
    return ans;
}
int main (){
    int c,d;
    cin >>c >> d ;
    int answer = power(c,d);
    cout << "answer is " << answer << endl;
    return 0;
} 
------------------------------------------------------------------------------
  counting
  #include<iostream>
using namespace std;

void printcounting (int num){
    for(int i=1; i<=num; i++){
        cout<<i<< " ";
    }
    cout << endl;
}
int main (){
    int n;
    cin>>n;
    printcounting(n);
    return 0;
}
