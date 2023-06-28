#include <iostream>

using namespace std;
int myCount (string, char);
int main() {
    string str;
    char a;
    int result;
    cout<<"Write a string"<<endl;
    cin>>str;
    cout<<endl<<"Choose a character from a string"<<endl;
    cin>>a;
    result=myCount(str,a);
    cout<<a<<" "<<"has occurrence of "<<result;
    return 0;
}

int myCount (string s, char c)
{
    int _occurCount=0;
    int n, rv;
        for (n=0; n<s.size(); n++) {
                if (s[n]==c) {
                    _occurCount ++;
                }
          }
          rv=_occurCount;
        return rv;
}
