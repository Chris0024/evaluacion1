#include <iostream>

using namespace std;
int mayorfac(int a){
    unsigned int b=2,mayor=0;
    while(b<a){
        if(a%b==0){mayor=b;}

        b++;
    }
    return mayor;
}
bool primo(int a){
    unsigned int con=0,div=2;
    while(div<a && con==0){
        if(a%div==0){con++;}
        div++;
    }
    return((con==0)?1:0);
}
int main()
{
   unsigned int a,b;
    cin>>a;
   b=mayorfac(a);
   while(!(primo(b))){
        b=mayorfac(b);
   }
   cout<<b<<endl;


    return 0;
}
