class Solution {
public:
    void reverseString(vector<char>& s) {
        
        int low=0;
        int high=s.size()-1;
        while(low<=high)
        {
            swap(s[low],s[high]);
            low++;
            high--;
        }
        
        for(int i=0;i<s.size();i++)
        {
            cout<<s[i]<<" ";
        }
    }
};

//Another approches below

class Solution {
public:
    string reverseString(string s) {
        int n = s.size();
        for(int i = 0; i < n/2; i++) {
            swap(s[i], s[n - 1 - i]);
        }
        return s;
    }
};
///////////////////
class Solution {
public:
    string reverseString(string s) {
        return { s.rbegin(), s.rend() };
    }
};
////////////////////
string reverseString(string s) {

    int length= s.size();
    string str;
    for(int i=length-1; i>=0; i--){
        str+=(char) s[i];
        
    }
    return str;
        
}
