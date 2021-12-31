int main(){
	int abc = 3;

	if(abc == 5){
		printf("abc is 5\n");
	}
	else{
		while(abc != 5){
			abc++;
			continue;
			abc--;
		}
	}

	return 0;
}
