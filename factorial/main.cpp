#include <iostream>

using namespace std;
int fack(int a){
    if(a==1 || a==0){return 1;}
    else{return(a*fack(a-1));}
}
int fact(int a){
    int b=1,c=2;
    while(c<=a){
        b*=c;
        c++;


    }
    return b;
}
int main()
{
    int a;
    cin>>a;
    cout<<fact(a)<<endl;
    cout<<fack(a)<<endl;
    return 0;
}
