class Solution {
private:
    const string letterMap[10] = {
            " ",    //0
            "",     //1
            "abc",  //2
            "def",  //3
            "ghi",  //4
            "jkl",  //5
            "mno",  //6
            "pqrs", //7
            "tuv",  //8
            "wxyz"  //9
    };
    int num;
    vector<string> res;

    void findCombination(int index, const string &s){
        if(index == digits.size()){
            res.push_back(s);
            return;
        }
        char c = digits[index];
        string letters = letterMap[c - '0'];
        for(int i = 0 ; i < letters.size() ; i ++)
            findCombination(index+1, s + letters[i]);
        return;
    }
public:
    vector<string> letterCombinations(string digits) {
        res.clear();
        if(digits == "")
            return res;
       num = digits
       findCombination(0,"");
    }
};

void printVec(const vector<string>& vec){
    for(string s: vec)
        cout << s << endl;
}

int main() {

    printVec(Solution().letterCombinations("234"));

    return 0;
}