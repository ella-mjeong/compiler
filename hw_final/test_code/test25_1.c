int kim = 10+20;
float *park[3];

typedef struct s1 {
	char *name;
	int value;
	struct s1 *next;
}STR;

STR chang[5];

int fun(int x, int y){

	while(y>0){
		if(y%2)
			chang[2].value=y;
		x=x*2;
		y=y/2;
	}
	return (x+y);
}

int main(){
	int result;
	result = fun(kim,7);
}

