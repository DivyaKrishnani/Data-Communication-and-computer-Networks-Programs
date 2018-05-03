#include<iostream>
#define MAX 50
using namespace std;

int xor1(int a,int b){
     if(a == 0 && b == 0)
          return 1;
     else if(a == 0 && b == 1)
          return 0;           
          
     else if(a == 1 && b == 0)
          return 0;    
               
     else if(a == 1 && b == 1)
          return 1;

}

int main(){
     int i,j,k,a[MAX],n,r,g[MAX],newlen;
     cout << "Enter length of msg: ";
     cin >> n;
     cout << "Enter msg: ";
     for(i=0;i<n;i++)
          cin >> a[i];
     cout << "Enter length of generator: ";
     cin >> r;
     cout << "Enter generator: ";     
     for(i=0;i<r;i++)
          cin >> g[i];

     for(i=n;i<n+r-1;i++)
          a[i] = 0;
     newlen =n+r-1;
     for(i=0;i<newlen;i++)
          cout << a[i]  << " ";  
     cout << endl;  
     
     for(i=0;i<=newlen-r;i++){
          int count=0;
          if(a[i] = 1){
               for(j=i;j<i+r;j++){
                    a[j] = xor1(a[j],g[count]);
                    count++;
               }
         }      
          else if(a[i] == 0){
               for(k=i;k<i+r;k++){
                    a[k] = xor1(a[k],0);
               }
          
          }
      }
     
     
     for(i=0;i<newlen;i++)
          cout << a[i]  << " ";    
     cout << endl; 
}
