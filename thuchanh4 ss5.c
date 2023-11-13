#include<stdio.h>
int main(){
	float tongThuNhap,tienGiamTru,thuNhapTinhThue,thueThuNhap,luongRong;
	printf("Nhap tong thu nhap cua nhan vien:");
	scanf("%f",&tongThuNhap);
	printf("Nhap tien giam tru:");
	scanf("%f",&tienGiamTru);
	thuNhapTinhThue=tongThuNhap-tienGiamTru;
	if(tongThuNhap<5){
		thueThuNhap=thuNhapTinhThue*5/100;
	}else if(tongThuNhap<10){
		thueThuNhap=thuNhapTinhThue*10/100;
	}else if(tongThuNhap<18){
		thueThuNhap=thuNhapTinhThue*15/100;
	}else if(tongThuNhap<32){
		thueThuNhap=thuNhapTinhThue*20/100;
	}else if(tongThuNhap<52){
		thueThuNhap=thuNhapTinhThue*25/100;
	}else if(tongThuNhap<80){
		thueThuNhap=thuNhapTinhThue*30/100;
	}else if(tongThuNhap>80){
		thueThuNhap=thuNhapTinhThue*35/100;
	}
	printf("Thue thu nhap la:%.2f",thueThuNhap);
	luongRong=tongThuNhap-tienGiamTru-thueThuNhap;
	printf("luong rong la:%.2f",luongRong);
	return 0;
}