#include <iostream>
#include <math.h>
using namespace std;



int main()
{
    int noman,hasan;
    char s[80];
    cin>>noman>>hasan;
    cin>>s;
    char c;
    for(int i=0;i<hasan;i++){
        for(int mou=0;mou<noman-1;mou++){
            if(s[mou]=='B'&&s[mou+1]=='G'){
                c=s[mou];
                s[mou]=s[mou+1];
                s[mou+1]=c;
                mou++;
            }
        }
    }
    cout<<s;
    return 0;
}
