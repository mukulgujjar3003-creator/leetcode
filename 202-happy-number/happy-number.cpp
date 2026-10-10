class Solution {
public:
    bool isHappy(int n) {
        int sum=0;
        unordered_set <int> s;
       while(n!=1){ 
            s.insert(n);
            string x= to_string(n);
            sum=0;
            for(char z:x){
                sum+=(z-'0')*(z-'0');
            }
            n=sum;
            if(s.count(n)==1){
                return false;
            }
       }
       return true;
    }
};