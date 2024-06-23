#include<stdio.h>
int main(){
    long long int fibo;
    int n;
    scanf("%d", &n);

    int k=1;
    int prime;
    int count=0;
    fibo=2;
    int store;

    if ( n >= 3){
    for (int i=1; i<=n; i++){
        prime = fibo;
        for ( int j=2; j<=prime; j++){
            if ( prime % j == 0 && j!= prime){
                break;
            }
            else if ( j == prime){
                count++;
            }
        }
        store = fibo;
        fibo += k;
        k = store;
    }
    printf("%d", (count-2));
    }
    else if ( n>-1 && n<3) 
    {
        printf("0");
    }
    return 0;
}