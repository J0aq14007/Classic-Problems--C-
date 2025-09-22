#include <iostream>
using namespace std;

    /**For this solution we have use a functions **/
    /**
       This logic contain 2 main functions:
        ***Function to find prime number
        ***Function to print matrix
    */
   
    bool IsPrime(int x){
    
         if(x < 2){
           
            return false;
         }else{
            
            for(int i{2}; i*i<=x; i++){
                
                if( x % i ==0){
                
                    return false; 
                }
            }
            return true; 
            
         }
    }
    
    void PrintMatrix(int n, int m){
         
         int counter{2};
         
         for(int i{0}; i<n; i++){
             for(int j{0}; j<m; j++){
                
                 while(!IsPrime(counter)){
                       
                       counter++;
                 }
                 cout<<counter<<" ";
                 counter ++; //move the next number for the verification
             }
             cout<<endl;
         }
    }

int main(){

    int n, m; cin>>n>>m;
    PrintMatrix(n,m);
    

    return 0;
}
