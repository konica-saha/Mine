#include<bits/stdc++.h>
using namespace std;
int main(){

    int T;
        cin>>T;
          int A,B,X,Y,c,d;
    for(int i=0;i<T;i++){

        cin>>A>>B>>X>>Y;
        c=A*B ;
        d=X*Y;
        if(d>=c)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}

