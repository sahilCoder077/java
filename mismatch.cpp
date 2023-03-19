#include <iostream>
using namespace std;  
int main() {
	
	int T;
	cin>>T;
    	   
	while(T--){
	       string M;
	       cin>>M;
	       string N;
	       cin>>N;
	       
         for(int i=0;i<5;i++){
             
               if(M[i]==N[i]){
                   
                    cout<<'G';

             }else{
                    cout<<'B';
                    
               }
         }   
         cout<<endl;
	}	
	return 0;
}


/* match miss match 
3
ABCDE
EDCBA
ROUND
RINGS
START
STUNT

BBGBB
GBBBB
GGBBG

*/

