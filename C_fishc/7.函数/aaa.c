int fact(int n){//定义阶乘函数
	if(n==1) return 1;//输入的参数是1，直接返回1
	else return n*fact(n-1);//递归算法
}