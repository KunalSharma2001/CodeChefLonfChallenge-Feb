#include <iostream>
using namespace std;
//Solution by T.I.H
//kindly change variables do not copy paste
int main() {
    int t;cin>>t;
    while(t--){
        int x,i;
        cin>>x;
        int draw=0,chef=0,carlsen=0;
        char str[14];
        for(i=0;i<14;i++){
            cin>>str[i];
            switch(str[i]){
                case 'C': carlsen+=2;
                        break;
                case 'N': chef+=2;
                        break;
                case 'D': carlsen+=1;chef+=1;
                        break;
            }
        }
        (carlsen>chef)? cout<<60*x : ((carlsen!=chef)? cout<<40*x : cout<<55*x);
        cout<<endl;       
    }
	return 0;
}
