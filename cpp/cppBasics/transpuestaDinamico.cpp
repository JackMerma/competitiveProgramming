#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"

int N,M;

void print(int **m){
    cout<<"matriz"<<endl;

    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++)
            cout<<*(*(m+i)+j)<<" ";
        cout<<endl;
    }
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);

    cin>>N>>M;

    int **m=(int **)malloc(sizeof(int *)*M);

    for(int i=0;i<M;i++)
        *(m+i)=(int*)malloc(sizeof(int)*N);

    //entrada de datos
    for(int i=0;i<N;i++)
        for(int j=0;j<M;j++)
            cin>>*(*(m+j)+i);

    //imprimiendo datos
    print(m);

	return 0;
}

