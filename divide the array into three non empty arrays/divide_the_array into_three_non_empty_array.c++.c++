#include<bits/stdc++.h>

using namespace std;


/*

In this problem it is given that solution always exits so,
For negative product we can just print a single negative element so its product is always negative.
For positive element we can  print all positive element so its product is always positive and if
 there is no positive element then we can print two negative element ,product of two negative element is
  positive.
For zero procduct print rest of element.


*/

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin>> arr[i];
    }

    vector<int>neg;
    vector<int>pos;
    vector<int>zero;

    for(int i = 0; i < n; i++) {
        if(arr[i] > 0) {
            pos.push_back(arr[i]);
        }
        else if(arr[i] < 0) {
            neg.push_back(arr[i]);
        }
        else {
            zero.push_back(arr[i]);
        }
    }

    if(pos.size() == 0) {
        pos.push_back(neg.back());
        neg.pop_back();
        pos.push_back(neg.back());
        neg.pop_back();
    }



    // output style
    cout<< 1 << " " <<neg[0]<<endl;

    cout<<pos.size()<<" ";
    for(int i = 0; i < pos.size(); i++) {
        cout<<pos[i]<<" ";
    }

    cout<<endl;

    cout<<(neg.size() - 1) + zero.size()<< " ";
    for(int i = 1; i < neg.size(); i++) {
        cout<<neg[i]<<" ";
    }


    for(int i = 0; i < zero.size(); i++) {
        cout<<zero[i]<<" ";
    }

}