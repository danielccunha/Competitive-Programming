#include <iostream>
#include <cctype>

using namespace std;

string title(string F){
	for(int i = 0; i < (int)F.size(); ++i)
    {
        if(i == 0 || !isalpha(F[i-1]))
            F[i] = toupper(F[i]);
        else
            F[i] = tolower(F[i]);
    }

    return F;
}

int main(){ 
	string F;

	getline(cin, F);

	cout<<title(F)<<"\n";
}