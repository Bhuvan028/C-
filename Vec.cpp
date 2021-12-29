#include<bits/stdc++.h>
using namespace std;

void print_theE(vector<int> &ra)
{  cout << "The size of Vector : "<<ra.size() << endl;
    cout << "The elements are :"<<endl;
    for(int i=0;i<ra.size();i++){
        cout<<ra[i]<<endl;
    }
}

int main(){
     vector<int> bhu;
     cout << "Enter the num of elements : " <<endl;
     int  n,x;
     cin>>n;
     cout<<"Enter the elements :" <<endl;
     for(int i=0;i<n;i++){
         cin>>x;
         bhu.push_back(x);
     }
     print_theE(bhu);
     bhu.pop_back();
     bhu.pop_back();
     print_theE(bhu);
     vector<int> :: iterator  sta = bhu.end();
     bhu.insert(sta,87);
     print_theE(bhu);

    return 0;
}
