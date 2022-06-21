memset(a,0,sizeof(a))，在string.h中定义。
memcpy(b,a,sizeof(int)*k)  从数组a复制k个元素到数组b。
memcpy(b,a,sizeof(a)) 把a数组复制到数组b中。
strchr(s,c); char s[maxn]; char c; 
//在s字符串中查找字符c，如果找不到就返回NULL。
floor(sqrt(n)+0.5); //取n的算术平方根，+0.5是为了避免误差。
lower_bound(a,a+n,x);
//该函数二分查找大于或等于x的第一个位置，一般在排序后使用。待排序/查找的元素可以放在数组里，也可以放在vector里。
