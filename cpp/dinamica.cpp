#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl "\n"

int N, M;

void printMatriz(int **m){
    cout<<"matriz"<<endl;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cout<<*(*(m+i)+j)<<" ";
        }
        cout<<endl;
    }
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);

    cin>>N>>M;

    int **m = (int**)malloc(sizeof(int*)*N);

    for(int i=0;i<N;i++){
        int *fil=(int*)malloc(sizeof(int)*M);
        for(int j=0;j<M;j++)
            cin>>*(fil+j);
        *(m+i)=fil;
    }

    //imprimir datos
    printMatriz(m);

	return 0;
}

