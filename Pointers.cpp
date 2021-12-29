#include<bits/stdc++.h>
using namespace std;

int* call(int *p){
    //cout<<*p<<endl;
    return p;
}
int main()
{    int i =10;
 int *p = &i;
 call(p);
cout<<call(p);
    return 0;
}
