struct s{
	int a;
	float v;
};
struct t{
	char c;
};

int main(){
	struct s ss;
	struct t tt;
	ss = tt;

	return 0;
}
