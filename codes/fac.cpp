#include <iostream>
#include<conio.h>
using namespace std;
int fac(int d){
    int r=1;
    for(int i=1;i<=d;i++){
             r = r * i; 
        }
       return r;
    }
main(){
     cout << fac(5);     
     getch();
     return 0;
}
