class Solution {
public:
    int myAtoi(string s) {
        int num = 0 ,i=0 ,sign = 1; //+ve
          //skip leading whitespaces
        while(s[i] == ' '){
            i++;
        }
        //check for the sign
        if(i < s.size() && (s[i] == '-'  || s[i] == '+')){
            sign = s[i] == '+' ? 1 : -1;
            ++i;
        }

        // convert character to digit
        while(i<s.size() && isdigit(s[i])){
             //out of range case handled
            if(num>INT_MAX/ 10 || (num == INT_MAX /10 && s[i] > '7')){
                return sign == -1 ? INT_MIN : INT_MAX;
            }
            num = num * 10 + (s[i] - '0');
            ++i;
        }
        return sign*num;
    }
};