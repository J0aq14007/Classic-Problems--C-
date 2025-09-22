#include <iostream>
using namespace std;

    /**For this new solution, add a new function, the user input this numbers
       for the matrix, and while the number is not prime, 
       the program repeat the input
       until it is a prime number.
       
       The solution contain three functions:
       **Function to verify prime numbers
       **Function to input numbers
       **Function to print the matrix
       
    **/
    bool IsPrime(int x){
         
         if(x<2) {
            
            return false;
         }else{
            
            for(int i{2}; i*i <= x; i++){
               
                if(x % i==0){
                   
                   return false;
                }
            }
            return true;
         }
    }
    
    int InputValues(){
         
        int val; cin>>val;
        while(!IsPrime(val)){
             
             cout<<"El numero "<<val<<" no es primo, intentelo de nuevo";
             cin>>val;
        }
        return val;
    }
    
    void PrintMatrix(int n, int m){
        
         for(int i{0} ; i<n; i++){
            for(int j{0}; j<m; j++){
                
                int val = InputValues();
                cout<<val<<" ";
            }
            cout<<endl;
         }
    }
    

int main(){

    int n, m; cin>>n>>m;
    PrintMatrix(n,m);
    
    return 0;
}
