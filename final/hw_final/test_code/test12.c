int main(){
	int num = 20;    
	int *numPtr;    
	int *numPtr2;   

	numPtr = &num; 
	numPtr2 = malloc(sizeof(int));    

	printf("%p\n", numPtr);   
	printf("%p\n", numPtr2);     

	return 0;
}
