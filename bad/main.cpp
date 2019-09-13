#include <iostream>

using namespace std;

int main()
{
    int a=100,b=0,c=0;
    while(b<a){
        if(b%3==0||b%5==0){c=c+b;}
        b++;
    }
    cout<<c<<endl;
    return 0;
}
