#include <iostream>
#include <cmath>

using namespace std;

bool eh_primo(int x){
	if(x < 5 || x%2== 0 || x%3 == 0)
        return (x == 2 || x == 3);

    int maxP = sqrt(x)+2;

    for(int p=5; p<maxP; p+=6)
        if(x%p==0||x%(p+2)==0)
            return false;

    return true;
}

int main(){
	int x;

	cin>>x;

	if(eh_primo(x)){
		cout<<"S"<<"\n";
	}else{
		cout<<"N"<<"\n";
	}
}