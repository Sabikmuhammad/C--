#include <iostream>
using namespace std;
int main(){
    int t,a,b,c,d;
    cin>>t;
    while(t--){
            cin>>a>>b>>c>>d;
            cout<<((a == c || b == d) ? "YES" : "NO") << endl;
    }
    return 0;
}