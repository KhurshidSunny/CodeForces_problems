#include<bits/stdc++.h>

using namespace std;

int main() {

        int t;
        cout<<"Enter test case : "<<endl;
        cin>>t;

        if(t > 0 && t <= 10000)
        {
             while(t--) {
           
            int currPowOfTen = 1;
            int n;
            cin>>n;

            vector<int> ans;
            if(n > 0 ) {
                while(n > 0 && n <= 10000) {
                int digit = (n % 10 );
                n /= 10;

                if(digit > 0) {
                    // cout<<digit * currPowOfTen<<" ";
                    ans.push_back( digit * currPowOfTen);
                }
                currPowOfTen*=10;
                

            }

        }
        cout<<ans.size()<<endl;
        for(int i : ans) {
            cout<<i<<" ";
        }
        cout<<endl;
    }

        }
       
       
    return 0;
}