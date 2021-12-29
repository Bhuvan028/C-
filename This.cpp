#include<bits/stdc++.h>
using namespace std;
class Sum {
int a,b;
public :
Sum(int a, int b )	{																			
this->a = a;
this->b = b;
}
int getSum(){
return	a	+	b;
}
 };
int main()
{
    Sum b(10,20);
    cout<<"Sum :"<<b.getSum()<<endl; 
    return 0;
}
