#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){       
        int n,k;
        cin >> n >> k;
        if(k == (n*n) - 1){
        cout << "No" << endl;
        continue;
    }
    else{
            cout << "Yes" << endl;
        }
 
        int not_escaped = n*n - k;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                not_escaped--;            
                if(not_escaped < 0){   
                    cout << "D";        
                }                          
                else if(i != 0 && not_escaped == 0){    
                    cout << "U";                      
                }
                else if(j == 0){         
                    cout << "R";        
                }                        
                else{
                    cout << "L";
                }
            }
            cout << endl;
        }
 
    }
    return 0;
}