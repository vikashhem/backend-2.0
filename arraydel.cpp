#include <iostream>
using namespace std;

int main() {
	int a[5]={1,3,4,5,6};
	int i;
	int dl;
	cin>>dl;
	for(i=0;i<5;i++){
		if(a[i]==dl){
			for(int j=i;j<4;j++){     //delete the element from the array
				a[j]=a[j+1];
			}
		}			
	}
	for(i=0;i<4;i++){
		cout<<a[i]<<endl;
	}
	
	return 0;
}
