#include <iostream>

using namespace std;

int main()
{
    int a,b=1,con=0,div=2;
    cin>>a;
    while(b<a){
        con=0;
        div=1;
        while(div<b){
            if(b%div==0){con+=div;}
            div++;
        }
        if(con==b){cout<<b<<" es perfecto"<<endl;}



        b++;
    }



    return 0;
}
