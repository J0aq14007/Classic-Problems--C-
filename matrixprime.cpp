#include <iostream>
using namespace std;

int main(){
    
    /*This solve contain Brute Force, remembering that it is for beginners **/
    int counter{2};
    
    int n,m; cin>>n>>m;
    
    //Creating matrix
    for(int i=0; i<n; i++){
       for(int j=0; j<m; j++){
           
           //For verify number we have a boolean variable
           bool prime{false};
           
           //This loop is for go increment those prime numbers from 2 to length of matrix
           while(!prime){
           
                 prime = true;
                 //This condition says and ensure that there are no other numbers to start the count
                 if(counter < 2){
                    
                    prime = false;
                    
                 }else{
                    //This loop verify the prime numbers ****
                    for(int k{2}; k*k <= counter; k++){
                    
                        if(counter % k ==0){
                            prime=false; 
                            break; 
                        }
                    }
                  //This condition to know if it is not yet prime, continue counting.
                 }if(!prime) {
                    
                     counter++;
                  }else{
                  
                     break;
                  }
           }//Print the counter with prime numbers
           cout<<counter<<" ";
           counter ++; //move the next number for the verification
           
       }cout<<endl; 
     
    }
    return 0;
    ////////////NEXT SOLUTION ?///////////

}
