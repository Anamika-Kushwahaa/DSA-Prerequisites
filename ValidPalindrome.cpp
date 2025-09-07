//VALID PALINDROME

class Solution {
private:
//remove alphanumeric (faltu) character
bool valid(char ch){
    if((ch>='a'&&ch<='z')||(ch>='A' && ch<='Z')||(ch>='0' && ch<='9')){
        return 1;
    }
    return 0;
}
//upper case to lower case
char tolower(char ch){
    if((ch>='a'&&ch<='z')||(ch>='0'&&ch<='9')){
        return ch;
    }else{
        char temp=ch-'A'+'a';
        return temp;
    }
}
bool checkPalindrome(string str){
    int s=0;
    int e=str.length()-1;
    while(s<=e){
        if(str[s]!=str[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

public:
    bool isPalindrome(string s) {
        string temp= "";
        //removing faltu character
        for(int j=0 ; j<s.length() ; j++){
            if(valid(s[j])){
                temp.push_back(s[j]);
            }
        }
        //upper to lower case
        for(int j=0 ; j<temp.length() ; j++){
            temp[j]= tolower(temp[j]);
        }
        //check palindrome
        return checkPalindrome(temp);
    }
};


// Input: s = "A man, a plan, a canal: Panama"
// Output: true
