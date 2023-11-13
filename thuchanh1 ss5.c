#include<stdio.h>
#include<math.h>
int main(){
	int a, b, c, d;
	printf("Nhap vao a (a!=0):");
	scanf("%f", &a);
	printf("Nhap vao b: ");
	scanf("%f", &b);
	printf("Nhap vao c: ");
	scanf("%f", &c);
	printf("Nhap vao d: ");
	scanf("%f", &d);
	float delta = b*b - 4*a*c;
	if (delta < 0){
		x1=x2=0.0;
		return = 0;
	}
	else if(delta == 0){
		x1 = x2 = -b/2a;
		return = 1;	
	}
	else{
		delta = square(delta);
		x1 = (-b + delta) / (2*a);
		x2 = (-b - delta) / (2*a);
		return 2;
	}
	while(!a);// Nếu a=0 thì nhập lại
	int numNo = giaiPT(a,b,c,x1,x2);
        if(numNo == 0) {
		printf("Phuong trinh da cho vo nghiem");
	}
	else if(numNo == 1){
		printf("Phuong trinh da cho co nghiem kep x=%.4f",x1);
	}
	else{
		printf("Phuong trinh da cho co hai nghiem phan bietnx1=%.4f nx2=%.4f",x1,x2);
	}
}
}