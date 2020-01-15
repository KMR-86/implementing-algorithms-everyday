#include<bits/stdc++.h>
using namespace std;
int *seive(int n){
    int *prime_bool = new int[n+1];
    for(int i = 0; i<= n;i++){
        prime_bool[i]=0;
    }
    prime_bool[1]=1;
    for(int i=2;i<=n;i++){
        if(prime_bool[i]==0 && (long long)i*i <= n){
            for(int j=i*i;j<=n;j=j+i){
                prime_bool[j]=1;
            }
        }
    }

    return prime_bool;

}


int main(){
int n;
cin>>n;
int *prime=seive(n);
printf("list of primes are:\n");
for(int i=1;i<=n;i++){
    if(prime[i]==0){
        printf("%d\n",i);
    }
}
main();
return 0;
}
