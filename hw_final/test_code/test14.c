int sum(int a, int b){
	return a+b;
}

int mul(int a, int b){
	return a*b;
}

int main(){
	int a = 2*4, b = 7, c = 3, ret;
	
	ret = mul(c,sum(a,b));

	printf("%d\n",ret);

	return 0;
}
