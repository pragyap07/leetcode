class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int k=s.size();
        int l=spaces.size();
        string st(l+k, ' ');
        int j=0;
        for(int i=0;i<k;i++){
            if(j<l && i==spaces[j]){
                j++;
            }
            st[i+j]=s[i];
        }
        return st;
    }
};