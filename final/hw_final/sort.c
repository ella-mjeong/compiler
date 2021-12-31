void sort(int a[], int n){
	int i,j,x;
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j=j+1)
			if(a[i] < a[j]){
				x=a[i];
				a[i]=a[j];
				a[j]=x;
			}
}
