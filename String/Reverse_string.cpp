#include<bits/stdc++.h>
#include<math.h>

using namespace std;
class Solution {
public:
    void reverseString(vector<char>& s) {
        int l=0;
        int h=s.size()-1;
        while(l<h){
            char temp=s[l];
            s[l]=s[h];
            s[h]=temp;
            l++;
            h--;
        }
    }
};