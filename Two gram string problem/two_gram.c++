#include<bits/stdc++.h>

using namespace std;

int main() {
    string s;
    int len;
    cout<<"Enter length : ";
    cin>>len;
    cout<<"Enter the string : ";
    cin>>s;
    int maxFreq = 0;
    string maxString = "";
   

    for(int i = 0; i < len-1; i++) {
        int curFreq = 0;
        for(int j = 0; j < len-1; j++) {
            if(s[i] == s[j] && s[i+1] == s[j+1]) {
                curFreq++;
            }
        }

            if(curFreq > maxFreq) {
                maxFreq = curFreq;
                maxString.clear();

                maxString.push_back(s[i]);
                maxString.push_back(s[i+1]);
            }

 
    }

    cout<<maxString<<endl;
    
}