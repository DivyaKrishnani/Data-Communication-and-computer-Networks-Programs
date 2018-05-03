#include<iostream>
#include <cstdlib>
#define MAX 30
using namespace std;

int main(){
	int i,n,a[MAX],b[MAX];
	cout << "Enter no. of frames: ";
	cin >> n;
	cout << "Enter data to be transmitted: ";
	//for(i=0;i<n;i++)
		//cin >> a[i];
	int x=0;	
	for(i=0;i<n;i++){
		l:
		b[i] = rand()%2;
		if(b[i]==0){
			cout << "Frame " << i+1<< " Accepted" <<endl;
			
		}
		else{
			cout <<"Frame "<<i+1<<" is lost. Transmitting Again"<< endl;
			
			goto l;
		}
	}	

}
