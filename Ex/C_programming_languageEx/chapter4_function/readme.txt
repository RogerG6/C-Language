4-1: 编写函数strrindex(s, t)，它返回字符串t在s中最右边出现的位置。如果s中不包含t，则返回-1 
4-2: 对atof函数进行扩充，使它可以处理形如：
 	 123.45e-6的科学表示法，其中，浮点数后面会紧跟一个e或E以及一个指数(可能有正负号) 
4-3: 在有了基本框架后，对计算器程序进行扩充就比较简单了。在该程序中加入取模(%)运算符，并注意考虑负数的情况 
4-4: 在栈操作中添加几个命令，分别用于在不弹出元素的情况下
	 打印栈顶元素、复制栈顶元素、交换栈顶元素、清空栈 
4-5: 给计算器程序增加访问sin、exp和pow等库函数的操作。有关这些库函数的详细信息 
4-6: 给计算器程序增加处理变量的命令(提供26个具有单个英文字母变量名的变量很容易) 
	 增加一个变量存放最近打印的值 
4-7: 编写一个函数ungets(s)，将整个字符串s压回到输入中。ungets函数需要使用buf和bufp吗？
     它能仅使用ungetch函数？ 
4-8: 假定最多只压回一个字符。请相应地修改getch与ungetch这2个函数 
4-9：以上介绍的getch与ungetch函数不能正确地处理压回的EOF。考虑压回EOF时应该如何处理？请实现你的设计方案
4-10：另一种方法是通过getline函数读入整个输入行，这种情况下可以不使用getch与ungetch函数。请运用这一方法修改计算器程序
4－11：修改getop函数，使其不必使用ungetch函数。提示：可以使用一个static类型的内部变量解决该问题
4-12：运用printd函数的设计思想编写一个递归版本的itoa函数，即通过递归调用把整数转换成字符串
4-13：写一个递归版本的reverse(s)函数，以将字符串倒置
4-14：定义宏swap(t, x, y)以交换t类型的两个参数。(使用程序块结构会对你有所帮助)