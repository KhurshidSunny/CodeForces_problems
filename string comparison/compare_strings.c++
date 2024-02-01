#include<bits/stdc++.h>

using namespace std;

int main() {
    string str1, str2;
    cout<<"Enter string 1 : ";
    cin>>str1;
    cout<<"Enter string 2 : ";
    cin>>str2;

    int n = str1.length();
    int count = 0;
   
        for(int i = 0; i < n; i++) {
            
            if(str1.length() != str2.length()) {
                cout<<"the size of both strings must be equal"<<endl;
                break;
            }
            str1[i] = tolower(str1[i]);
            str2[i] = tolower(str2[i]);

            if(str1[i] < str2[i]){
                cout<<"-1"<<endl;
                break;
            }
            else if(str2[i] < str1[i]) {
                cout<<"1"<<endl;
                break;
            }
            else if(str1[i] == str2[i]) {
                count++;
            }
        }
        if(count == n) {
            cout<<"0"<<endl;
        }
}