struct s;

typedef struct { 
	struct s *f;
	int b;

}STR;

struct s{
	int a;
};


int main(){
	static int *abc[10], j = 20+30; 
	STR str;
	struct s ss;
	str.f->a = 3;

	return 0;
}
