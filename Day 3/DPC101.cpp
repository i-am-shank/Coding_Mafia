#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a,b;
	while(true){
	    cin >> a >> b;
	    if(a==0 && b==0) {
	    	break;
	    }
	    int c=0,count=0,x,y;
	    while(a!=0 || b!=0){
	        x = a%10;
	        y = b%10;
	        c = (x+y+c)/10;
	        if(c>0) {
	        	count++;
	        }
	        a = a/10;
	        b = b/10;
	    }
	    if(count==1)
	        cout<<count<<" carry operation."<<endl;
	    else if(count==0)
	        cout<<"No carry operation."<<endl;
	    else
	        cout<<count<<" carry operations."<<endl;
	    
	}
	return 0;
}
