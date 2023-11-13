#include<stdio.h>
int main(){
	int phut;
	printf("Nhap so phut su dung:");
	scanf("%d",&phut);
	int phiCoDinh=25000;
	int giaPhutDauTien=600;
	int giaPhutTiepTheo1=400;
	int giaPhutTiepTheo2=200;
	int giaPhutTiepTheo3=100;
	int cuocDienThoai=phiCoDinh;
	if(phut<=50){
		cuocDienThoai=50*giaPhutDauTien;
	}else if(phut<=150){
		cuocDienThoai=150*giaPhutTiepTheo1;
	}else if(phut<=200){
		cuocDienThoai=200*giaPhutTiepTheo2;
	}else{
		cuocDienThoai=100*giaPhutTiepTheo3;
	}
	printf("cuoc dien thoai la:%d vnd\n",cuocDienThoai);
	return 0;
	
}