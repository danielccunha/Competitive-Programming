#include <cstdio>

int main()
{
    long long int H, O;
    while(scanf("%lli %lli", &H, &O) != EOF)        
        printf("%lli\n", (H <= O) ? O-H : H-O);    

    return 0;
}