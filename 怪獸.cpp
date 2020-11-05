#include<stdio.h>

int main(){
	int n,a,b,c,d,e=1,f=1,g=1,h=1,m;
	scanf("%d",&n);
	a=n/1000;
	b=n%1000/100;
	c=n%100/10;
	d=n%10;
	if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&d!=c)
	m=d+10+100*c+1000+10000*b+100000+1000000*a+10000000;
	else{
		if(a==b)
		e += 1;
		if(a==c)
		e += 1;
		if(a==d)
		e += 1;
		if(e==1){
			if(b==c&&b!=d&&c!=d)
			m=d+10+100*c+2000+10000*a+100000;
			else if(b==c&&b!=d&&c!=d)
			m=c+10+100*b+2000+10000*a+100000;
			else if(d==c&&b!=c&&b!=d)
			m=d+20+b*100+1000+10000*a+100000;
			else if(b==c&&c==d)
			m=d+30+100*a+1000;
		}
		if(e==2){
			if(a==b){
				if(c==d)
				m=c+20+100*a+2000;
				else
				m=d+10+c*100+1000+10000*a+200000;
			}
			if(a==c){
				if(b==d)
				m=d+20+100*a+2000;
				else
				m=d+10+b*100+1000+10000*a+200000;
			}
			if(a==d){
				if(b==c)
				m=c+20+100*a+2000;
				else
				m=c+10+b*100+1000+10000*a+200000;
			}
			}
		if(e==3){
			if(a!=b)
			m=b+10+100*a+3000;
			if(a!=c)
			m=c+10+100*a+3000;
			if(a!=d)
			m=d+10+100*a+3000;
			}
		if(e==4)
		m=a+40;	
		}
	
	printf("%d\n",m);
	
}
