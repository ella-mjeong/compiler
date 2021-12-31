int main()
{
	int *numPtr;     
	int num1 = 10;    
	printf("%p\n", &num1); 

	numPtr = &num1;   

	*numPtr = 20;     

	printf("%d\n", *numPtr);    
	printf("%d\n", num1);       

	return 0;
}
