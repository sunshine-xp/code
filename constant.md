memset(a,0,sizeof(a))，在string.h中定义。
memcpy(b,a,sizeof(int)*k)  从数组a复制k个元素到数组b。
memcpy(b,a,sizeof(a)) 把a数组复制到数组b中。
strchr(s,c); char s[maxn]; char c; 
//在s字符串中查找字符c，如果找不到就返回NULL。
floor(sqrt(n)+0.5); //取n的算术平方根，+0.5是为了避免误差。
lower_bound(a,a+n,x);
//该函数二分查找大于或等于x的第一个位置，一般在排序后使用。待排序/查找的元素可以放在数组里，也可以放在vector里。
优先队列的语法
priority_queue<Type, Container, Functional>    

 其中Type 为数据类型， Container 为保存数据的容器，Functional 为元素比较方式。

 1.在STL中，默认情况下（不加后面两个参数）是以vector为容器，以 operator< 为比较方式，所以在只使用第一个参数时，优先队列默认是一个最大堆，每次输出的堆顶元素是此时堆中的最大元素。

 2.用到最小堆，则一般要把模板的三个参数都带进去。

STL里面定义了一个仿函数 greater<>，对于基本类型可以用这个仿函数声明最小堆(升序)
//构造一个空的优先队列（此优先队列默认为大顶堆）
priority_queue<int> big_heap;   

//另一种构建大顶堆的方法
priority_queue<int,vector<int>,less<int> > big_heap2;   
//构造一个空的优先队列,此优先队列是一个小顶堆
priority_queue<int,vector<int>,greater<int> > small_heap;   

如果要按照最小堆优先级
priority_queue<Type, Container, Functional>    

写入程序中就是priority_queue<int, vector<int>, greater<int> > q;

<iterator>	<functional>	<vector>	<deque>
<list>	<queue>	<stack>	<set>
<map>	<algorithm>	<numeric>	<memory>
<utility>
array 容器的大小是固定的，无法动态的扩展或收缩，这也就意味着，在使用该容器的过程无法借由增加或移除元素而改变其大小，它只允许访问或者替换存储的元素
（array 容器不会做默认初始化操作）
begin()	返回指向容器中第一个元素的随机访问迭代器。
end()	返回指向容器最后一个元素之后一个位置的随机访问迭代器，通常和 begin() 结合使用。
rbegin()	返回指向最后一个元素的随机访问迭代器。
rend()	返回指向第一个元素之前一个位置的随机访问迭代器。
cbegin()	和 begin() 功能相同，只不过在其基础上增加了 const 属性，不能用于修改元素。
cend()	和 end() 功能相同，只不过在其基础上，增加了 const 属性，不能用于修改元素。
crbegin()	和 rbegin() 功能相同，只不过在其基础上，增加了 const 属性，不能用于修改元素。
crend()	和 rend() 功能相同，只不过在其基础上，增加了 const 属性，不能用于修改元素。
size()	返回容器中当前元素的数量，其值始终等于初始化 array 类的第二个模板参数 N。
max_size()	返回容器可容纳元素的最大数量，其值始终等于初始化 array 类的第二个模板参数 N。
empty()	判断容器是否为空，和通过 size()==0 的判断条件功能相同，但其效率可能更快。
at(n)	返回容器中 n 位置处元素的引用，该函数自动检查 n 是否在有效的范围内，如果不是则抛出 out_of_range 异常。
front()	返回容器中第一个元素的直接引用，该函数不适用于空的 array 容器。
back()	返回容器中最后一个元素的直接应用，该函数同样不适用于空的 array 容器。
data()	返回一个指向容器首个元素的指针。利用该指针，可实现复制容器中所有元素等类似功能。
fill(val)	将 val 这个值赋值给容器中的每个元素。
array1.swap(array2)	交换 array1 和 array2 容器中的所有元素，但前提是它们具有相同的长度和类型。


### deque
deque 是 double-ended queue 的缩写，又称双端队列容器。
表 1 deque 容器的成员函数
函数成员	函数功能
begin()	返回指向容器中第一个元素的迭代器。
end()	返回指向容器最后一个元素所在位置后一个位置的迭代器，通常和 begin() 结合使用。
rbegin()	返回指向最后一个元素的迭代器。
rend()	返回指向第一个元素所在位置前一个位置的迭代器。
cbegin()	和 begin() 功能相同，只不过在其基础上，增加了 const 属性，不能用于修改元素。
cend()	和 end() 功能相同，只不过在其基础上，增加了 const 属性，不能用于修改元素。
crbegin()	和 rbegin() 功能相同，只不过在其基础上，增加了 const 属性，不能用于修改元素。
crend()	和 rend() 功能相同，只不过在其基础上，增加了 const 属性，不能用于修改元素。
size()	返回实际元素个数。
max_size()	返回容器所能容纳元素个数的最大值。这通常是一个很大的值，一般是 232-1，我们很少会用到这个函数。
resize()	改变实际元素的个数。
empty()	判断容器中是否有元素，若无元素，则返回 true；反之，返回 false。
shrink _to_fit()	将内存减少到等于当前元素实际所使用的大小。
at()	使用经过边界检查的索引访问元素。
front()	返回第一个元素的引用。
back()	返回最后一个元素的引用。
assign()	用新元素替换原有内容。
push_back()	在序列的尾部添加一个元素。
push_front()	在序列的头部添加一个元素。
pop_back()	移除容器尾部的元素。
pop_front()	移除容器头部的元素。
insert()	在指定的位置插入一个或多个元素。
erase()	移除一个元素或一段元素。
clear()	移出所有的元素，容器大小变为 0。
swap()	交换两个容器的所有元素。
emplace()	在指定的位置直接生成一个元素。
emplace_front()	在容器头部生成一个元素。和 push_front() 的区别是，该函数直接在容器头部构造元素，省去了复制移动元素的过程。
emplace_back()	在容器尾部生成一个元素。和 push_back() 的区别是，该函数直接在容器尾部构造元素，省去了复制移动元素的过程。

### list
list 容器，又称双向链表容器，即该容器的底层是以双向链表的形式实现的。这意味着，list 容器中的元素可以分散存储在内存空间里，而不是必须存储在一整块连续的内存空间中。
begin()	返回指向容器中第一个元素的双向迭代器。
end()	返回指向容器中最后一个元素所在位置的下一个位置的双向迭代器。
rbegin()	返回指向最后一个元素的反向双向迭代器。
rend()	返回指向第一个元素所在位置前一个位置的反向双向迭代器。
cbegin()	和 begin() 功能相同，只不过在其基础上，增加了 const 属性，不能用于修改元素。
cend()	和 end() 功能相同，只不过在其基础上，增加了 const 属性，不能用于修改元素。
crbegin() 	和 rbegin() 功能相同，只不过在其基础上，增加了 const 属性，不能用于修改元素。
crend()	和 rend() 功能相同，只不过在其基础上，增加了 const 属性，不能用于修改元素。
empty()	判断容器中是否有元素，若无元素，则返回 true；反之，返回 false。
size()	返回当前容器实际包含的元素个数。
max_size()	返回容器所能包含元素个数的最大值。这通常是一个很大的值，一般是 232-1，所以我们很少会用到这个函数。
front()	返回第一个元素的引用。
back()	返回最后一个元素的引用。
assign()	用新元素替换容器中原有内容。
emplace_front()	在容器头部生成一个元素。该函数和 push_front() 的功能相同，但效率更高。
push_front()	在容器头部插入一个元素。
pop_front()	删除容器头部的一个元素。
emplace_back()	在容器尾部直接生成一个元素。该函数和 push_back() 的功能相同，但效率更高。
push_back()	在容器尾部插入一个元素。
pop_back()	删除容器尾部的一个元素。
emplace()	在容器中的指定位置插入元素。该函数和 insert() 功能相同，但效率更高。
insert() 	在容器中的指定位置插入元素。
erase()	删除容器中一个或某区域内的元素。
swap()	交换两个容器中的元素，必须保证这两个容器中存储的元素类型是相同的。
resize()	调整容器的大小。
clear()	删除容器存储的所有元素。
splice()	将一个 list 容器中的元素插入到另一个容器的指定位置。
remove(val)	删除容器中所有等于 val 的元素。
remove_if()	删除容器中满足条件的元素。
unique()	删除容器中相邻的重复元素，只保留一个。
merge()	合并两个事先已排好序的 list 容器，并且合并之后的 list 容器依然是有序的。
sort()	通过更改容器中元素的位置，将它们进行排序。
reverse()	反转容器中元素的顺序。

#1) 默认构造函数，即创建空的 pair 对象
pair();
#2) 直接使用 2 个元素初始化成 pair 对象
pair (const first_type& a, const second_type& b);
#3) 拷贝（复制）构造函数，即借助另一个 pair 对象，创建新的 pair 对象
template<class U, class V> pair (const pair<U,V>& pr);


### map

begin()	返回指向容器中第一个（注意，是已排好序的第一个）键值对的双向迭代器。如果 map 容器用 const 限定，则该方法返回的是 const 类型的双向迭代器。
end()	返回指向容器最后一个元素（注意，是已排好序的最后一个）所在位置后一个位置的双向迭代器，通常和 begin() 结合使用。如果 map 容器用 const 限定，则该方法返回的是 const 类型的双向迭代器。
rbegin()	返回指向最后一个（注意，是已排好序的最后一个）元素的反向双向迭代器。如果 map 容器用 const 限定，则该方法返回的是 const 类型的反向双向迭代器。
rend()	返回指向第一个（注意，是已排好序的第一个）元素所在位置前一个位置的反向双向迭代器。如果 map 容器用 const 限定，则该方法返回的是 const 类型的反向双向迭代器。
cbegin()	和 begin() 功能相同，只不过在其基础上，增加了 const 属性，不能用于修改容器内存储的键值对。
cend()	和 end() 功能相同，只不过在其基础上，增加了 const 属性，不能用于修改容器内存储的键值对。
crbegin()	和 rbegin() 功能相同，只不过在其基础上，增加了 const 属性，不能用于修改容器内存储的键值对。
crend()	和 rend() 功能相同，只不过在其基础上，增加了 const 属性，不能用于修改容器内存储的键值对。
find(key)	在 map 容器中查找键为 key 的键值对，如果成功找到，则返回指向该键值对的双向迭代器；反之，则返回和 end() 方法一样的迭代器。另外，如果 map 容器用 const 限定，则该方法返回的是 const 类型的双向迭代器。
lower_bound(key)	返回一个指向当前 map 容器中第一个大于或等于 key 的键值对的双向迭代器。如果 map 容器用 const 限定，则该方法返回的是 const 类型的双向迭代器。
upper_bound(key)	返回一个指向当前 map 容器中第一个大于 key 的键值对的迭代器。如果 map 容器用 const 限定，则该方法返回的是 const 类型的双向迭代器。
equal_range(key)	该方法返回一个 pair 对象（包含 2 个双向迭代器），其中 pair.first 和 lower_bound() 方法的返回值等价，pair.second 和 upper_bound() 方法的返回值等价。也就是说，该方法将返回一个范围，该范围中包含的键为 key 的键值对（map 容器键值对唯一，因此该范围最多包含一个键值对）。
empty() 	若容器为空，则返回 true；否则 false。
size()	返回当前 map 容器中存有键值对的个数。
max_size()	返回 map 容器所能容纳键值对的最大个数，不同的操作系统，其返回值亦不相同。
operator[]	map容器重载了 [] 运算符，只要知道 map 容器中某个键值对的键的值，就可以向获取数组中元素那样，通过键直接获取对应的值。
at(key)	找到 map 容器中 key 键对应的值，如果找不到，该函数会引发 out_of_range 异常。
insert()	向 map 容器中插入键值对。
erase()	删除 map 容器指定位置、指定键（key）值或者指定区域内的键值对。后续章节还会对该方法做重点讲解。
swap()	交换 2 个 map 容器中存储的键值对，这意味着，操作的 2 个键值对的类型必须相同。
clear()	清空 map 容器中所有的键值对，即使 map 容器的 size() 为 0。
emplace()	在当前 map 容器中的指定位置处构造新键值对。其效果和插入键值对一样，但效率更高。
emplace_hint()	在本质上和 emplace() 在 map 容器中构造新键值对的方式是一样的，不同之处在于，使用者必须为该方法提供一个指示键值对生成位置的迭代器，并作为该方法的第一个参数。
count(key)	在当前 map 容器中，查找键为 key 的键值对的个数并返回。注意，由于 map 容器中各键值对的键的值是唯一的，因此该函数的返回值最大为 1

### multimap
multimap 容器具有和 map 相同的特性，即 multimap 容器也用于存储 pair<const K, T> 类型的键值对（其中 K 表示键的类型，T 表示值的类型），其中各个键值对的键的值不能做修改；并且，该容器也会自行根据键的大小对存储的所有键值对做排序操作。和 map 容器的区别在于，multimap 容器中可以同时存储多（≥2）个键相同的键值对。

begin()	返回指向容器中第一个（注意，是已排好序的第一个）键值对的双向迭代器。如果 multimap 容器用 const 限定，则该方法返回的是 const 类型的双向迭代器。
end()	返回指向容器最后一个元素（注意，是已排好序的最后一个）所在位置后一个位置的双向迭代器，通常和 begin() 结合使用。如果 multimap 容器用 const 限定，则该方法返回的是 const 类型的双向迭代器。
rbegin()	返回指向最后一个（注意，是已排好序的最后一个）元素的反向双向迭代器。如果 multimap 容器用 const 限定，则该方法返回的是 const 类型的反向双向迭代器。
rend()	返回指向第一个（注意，是已排好序的第一个）元素所在位置前一个位置的反向双向迭代器。如果 multimap 容器用 const 限定，则该方法返回的是 const 类型的反向双向迭代器。
cbegin()	和 begin() 功能相同，只不过在其基础上，增加了 const 属性，不能用于修改容器内存储的键值对。
cend()	和 end() 功能相同，只不过在其基础上，增加了 const 属性，不能用于修改容器内存储的键值对。
crbegin()	和 rbegin() 功能相同，只不过在其基础上，增加了 const 属性，不能用于修改容器内存储的键值对。
crend()	和 rend() 功能相同，只不过在其基础上，增加了 const 属性，不能用于修改容器内存储的键值对。
find(key)	在 multimap 容器中查找首个键为 key 的键值对，如果成功找到，则返回指向该键值对的双向迭代器；反之，则返回和 end() 方法一样的迭代器。另外，如果 multimap 容器用 const 限定，则该方法返回的是 const 类型的双向迭代器。
lower_bound(key)	返回一个指向当前 multimap 容器中第一个大于或等于 key 的键值对的双向迭代器。如果 multimap 容器用 const 限定，则该方法返回的是 const 类型的双向迭代器。
upper_bound(key)	返回一个指向当前 multimap 容器中第一个大于 key 的键值对的迭代器。如果 multimap 容器用 const 限定，则该方法返回的是 const 类型的双向迭代器。
equal_range(key)	该方法返回一个 pair 对象（包含 2 个双向迭代器），其中 pair.first 和 lower_bound() 方法的返回值等价，pair.second 和 upper_bound() 方法的返回值等价。也就是说，该方法将返回一个范围，该范围中包含的键为 key 的键值对。
empty() 	若容器为空，则返回 true；否则 false。
size()	返回当前 multimap 容器中存有键值对的个数。
max_size()	返回 multimap 容器所能容纳键值对的最大个数，不同的操作系统，其返回值亦不相同。
insert()	向 multimap 容器中插入键值对。
erase()	删除 multimap 容器指定位置、指定键（key）值或者指定区域内的键值对。
swap()	交换 2 个 multimap 容器中存储的键值对，这意味着，操作的 2 个键值对的类型必须相同。
clear()	清空 multimap 容器中所有的键值对，使 multimap 容器的 size() 为 0。
emplace()	在当前 multimap 容器中的指定位置处构造新键值对。其效果和插入键值对一样，但效率更高。
emplace_hint()	在本质上和 emplace() 在 multimap 容器中构造新键值对的方式是一样的，不同之处在于，使用者必须为该方法提供一个指示键值对生成位置的迭代器，并作为该方法的第一个参数。
count(key)

### set
不再以键值对的方式存储数据，因为 set 容器专门用于存储键和值相等的键值对，因此该容器中真正存储的是各个键值对的值（value）；
set 容器在存储数据时，会根据各元素值的大小对存储的元素进行排序（默认做升序排序）；
存储到 set 容器中的元素，虽然其类型没有明确用 const 修饰，但正常情况下它们的值是无法被修改的；
set 容器存储的元素必须互不相等。

和 map、multimap 容器不同，使用 set 容器存储的各个键值对，要求键 key 和值 value 必须相等。
begin()	返回指向容器中第一个（注意，是已排好序的第一个）元素的双向迭代器。如果 set 容器用 const 限定，则该方法返回的是 const 类型的双向迭代器。
end()	返回指向容器最后一个元素（注意，是已排好序的最后一个）所在位置后一个位置的双向迭代器，通常和 begin() 结合使用。如果 set 容器用 const 限定，则该方法返回的是 const 类型的双向迭代器。
rbegin()	返回指向最后一个（注意，是已排好序的最后一个）元素的反向双向迭代器。如果 set 容器用 const 限定，则该方法返回的是 const 类型的反向双向迭代器。
rend()	返回指向第一个（注意，是已排好序的第一个）元素所在位置前一个位置的反向双向迭代器。如果 set 容器用 const 限定，则该方法返回的是 const 类型的反向双向迭代器。
cbegin()	和 begin() 功能相同，只不过在其基础上，增加了 const 属性，不能用于修改容器内存储的元素值。
cend()	和 end() 功能相同，只不过在其基础上，增加了 const 属性，不能用于修改容器内存储的元素值。
crbegin()	和 rbegin() 功能相同，只不过在其基础上，增加了 const 属性，不能用于修改容器内存储的元素值。
crend()	和 rend() 功能相同，只不过在其基础上，增加了 const 属性，不能用于修改容器内存储的元素值。
find(val)	在 set 容器中查找值为 val 的元素，如果成功找到，则返回指向该元素的双向迭代器；反之，则返回和 end() 方法一样的迭代器。另外，如果 set 容器用 const 限定，则该方法返回的是 const 类型的双向迭代器。
lower_bound(val)	返回一个指向当前 set 容器中第一个大于或等于 val 的元素的双向迭代器。如果 set 容器用 const 限定，则该方法返回的是 const 类型的双向迭代器。
upper_bound(val)	返回一个指向当前 set 容器中第一个大于 val 的元素的迭代器。如果 set 容器用 const 限定，则该方法返回的是 const 类型的双向迭代器。
equal_range(val)	该方法返回一个 pair 对象（包含 2 个双向迭代器），其中 pair.first 和 lower_bound() 方法的返回值等价，pair.second 和 upper_bound() 方法的返回值等价。也就是说，该方法将返回一个范围，该范围中包含的值为 val 的元素（set 容器中各个元素是唯一的，因此该范围最多包含一个元素）。
empty()	若容器为空，则返回 true；否则 false。
size()	返回当前 set 容器中存有元素的个数。
max_size()	返回 set 容器所能容纳元素的最大个数，不同的操作系统，其返回值亦不相同。
insert()	向 set 容器中插入元素。
erase()	删除 set 容器中存储的元素。
swap()	交换 2 个 set 容器中存储的所有元素。这意味着，操作的 2 个 set 容器的类型必须相同。
clear()	清空 set 容器中所有的元素，即令 set 容器的 size() 为 0。
emplace()	在当前 set 容器中的指定位置直接构造新元素。其效果和 insert() 一样，但效率更高。
emplace_hint()	在本质上和 emplace() 在 set 容器中构造新元素的方式是一样的，不同之处在于，使用者必须为该方法提供一个指示新元素生成位置的迭代器，并作为该方法的第一个参数。
count(val)	在当前 set 容器中，查找值为 val 的元素的个数，并返回。注意，由于 set 容器中各元素的值是唯一的，因此该函数的返回值最大为 1。

### nultset
multiset 容器遵循 set 容器的前 3 个特性，仅在第 4 条特性上有差异。和 set 容器不同的是，multiset 容器可以存储多个值相同的元素。
begin()	返回指向容器中第一个（注意，是已排好序的第一个）元素的双向迭代器。如果 multiset 容器用 const 限定，则该方法返回的是 const 类型的双向迭代器。
end()	返回指向容器最后一个元素（注意，是已排好序的最后一个）所在位置后一个位置的双向迭代器，通常和 begin() 结合使用。如果 multiset 容器用 const 限定，则该方法返回的是 const 类型的双向迭代器。
rbegin()	返回指向最后一个（注意，是已排好序的最后一个）元素的反向双向迭代器。如果 multiset 容器用 const 限定，则该方法返回的是 const 类型的反向双向迭代器。
rend()	返回指向第一个（注意，是已排好序的第一个）元素所在位置前一个位置的反向双向迭代器。如果 multiset 容器用 const 限定，则该方法返回的是 const 类型的反向双向迭代器。
cbegin()	和 begin() 功能相同，只不过在其基础上，增加了 const 属性，不能用于修改容器内存储的元素值。
cend()	和 end() 功能相同，只不过在其基础上，增加了 const 属性，不能用于修改容器内存储的元素值。
crbegin()	和 rbegin() 功能相同，只不过在其基础上，增加了 const 属性，不能用于修改容器内存储的元素值。
crend()	和 rend() 功能相同，只不过在其基础上，增加了 const 属性，不能用于修改容器内存储的元素值。
find(val)	在 multiset 容器中查找值为 val 的元素，如果成功找到，则返回指向该元素的双向迭代器；反之，则返回和 end() 方法一样的迭代器。另外，如果 multiset 容器用 const 限定，则该方法返回的是 const 类型的双向迭代器。
lower_bound(val)	返回一个指向当前 multiset 容器中第一个大于或等于 val 的元素的双向迭代器。如果 multiset 容器用 const 限定，则该方法返回的是 const 类型的双向迭代器。
upper_bound(val)	返回一个指向当前 multiset 容器中第一个大于 val 的元素的迭代器。如果 multiset 容器用 const 限定，则该方法返回的是 const 类型的双向迭代器。
equal_range(val)	该方法返回一个 pair 对象（包含 2 个双向迭代器），其中 pair.first 和 lower_bound() 方法的返回值等价，pair.second 和 upper_bound() 方法的返回值等价。也就是说，该方法将返回一个范围，该范围中包含所有值为 val 的元素。
empty()	若容器为空，则返回 true；否则 false。
size()	返回当前 multiset 容器中存有元素的个数。
max_size()	返回 multiset 容器所能容纳元素的最大个数，不同的操作系统，其返回值亦不相同。
insert()	向 multiset 容器中插入元素。
erase()	删除 multiset 容器中存储的指定元素。
swap()	交换 2 个 multiset 容器中存储的所有元素。这意味着，操作的 2 个 multiset 容器的类型必须相同。
clear()	清空 multiset 容器中所有的元素，即令 multiset 容器的 size() 为 0。
emplace()	在当前 multiset 容器中的指定位置直接构造新元素。其效果和 insert() 一样，但效率更高。
emplace_hint()	本质上和 emplace() 在 multiset 容器中构造新元素的方式是一样的，不同之处在于，使用者必须为该方法提供一个指示新元素生成位置的迭代器，并作为该方法的第一个参数。
count(val)	在当前 multiset 容器中，查找值为 val 的元素的个数，并返回。

### unordered_map
unordered_map 容器，直译过来就是"无序 map 容器"的意思。所谓“无序”，指的是 unordered_map 容器不会像 map 容器那样对存储的数据进行排序。换句话说，unordered_map 容器和 map 容器仅有一点不同，即 map 容器中存储的数据是有序的，而 unordered_map 容器中是无序的。
