int find(substr)
int find(substr,x)x开始位置
string substr(i,len)i开始位置，len截取长度
string substr(i)截取i以后的字符串
void erase(i,len)
void erase(i)
insert(i,s)下标为i位置插入字符串s
replace(i,len,str)

//c++11
int stoi(s)
ll stoll(s)
f stof(s)
to_string(n)


字符
bool isalpha(c)
bool islower(C)
bool isupper(c)
bool isditit(c)
void tolower(c)
void toupper(c)

sort(start,end+1)地址
reverse(start,end+1)地址
swap(a,b)

//最大公约数
int gys(int a,int b) {
    int t;
    while(a%b!=0) {
        t = a%b;
        a = b;
        b =t;
    }
    return b;
}
bool cmp(char a,char b){
    if(a > b) return true;
    else return false;
}
bool cmp(int a,int b){
    if(a > b) return true;
    else return false;
}
bool cmp(string a,string b){
    if(a+b>a+b) return true;
    else return false;
}

