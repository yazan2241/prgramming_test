#include <bits/stdc++.h>

using namespace std;

void mult(){

    int n;
    cin>>n;
    int k;

    for(int i=0;i<=n;i++){
        k=i;
        if(i==0){cout<<"\t"; k=1;}
        else cout<<i<<"\t";
        for(int j=1;j<=n;j++){
            cout<<j*k<<"\t";
        }
        cout<<endl;
    }

}

int main()
{

    mult();

    return 0;
}
