//1.链表元素的移除
//2.返回链表中间结点，，奇数个返回中间，偶数个返回第二个
//3.返回倒数第k个结点
//4.销毁--两种--外面使用，外面置空--传二级指针，里面置空
//5.反转链表
//遍历链表头插过来
//6.合并两个有序链表
// 比较将小的结点尾插
//7.链表分割，带有头哨兵的链表---可以减少tail讨论情况--需要malloc、开辟，最后记得释放
//不用讨论空结点的
// 在同一个链表不要既有插入和删除--这就是搞事情
//移除的还看前面等等是否是NULL
// 单链表要删除不简单--要分很多情况
//插入既要找前面一个又要找后一个
//中间插入删除不要搞，找别的方法，尾插尾删
//尾插 是改变前面的next
//头插是改变后面的 next
//----回环
//链表的回文结构--对称
//解决：1.找到中间结点
//2.逆转中间结点之后的
//3.与中间结点之前结点比较
//判断两个链表是否相交；
// 首先判断两个链表是否相交：尾结点的地址相同。
//1.遍历两个链表，求出长度
//2.先让长的链表走长度差
//3.然后让两个链表一起走，当地址相同时，为相交结点。