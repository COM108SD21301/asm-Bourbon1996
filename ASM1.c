#include <stdio.h> 
#include <math.h>
#include <stdlib.h>//Thieu thu vien se bi canh bao ve ham Exit
int main(){
	int luaChon, chon; //kiểu số nguyên
		do{
            printf("\033c");
            printf("\nChào mừng bạn đến với ASM của tôi");
            printf("\nNhập 1: Lựa chọn chức năng Số nguyên");
            printf("\nNhập 2: Lựa chọn chức năng tìm UCLN và BCNN");
            printf("\nNhập 3: Lựa chọn chức năng Tính tiền quán Karaoke");
            printf("\nNhập 4: Lựa chọn chức năng Tính tiền điện");
            printf("\nNhập 0: Thoát chương trình");
            printf("\nMời bạn nhập lựa chọn: ");	scanf("%d",&luaChon);
		switch(luaChon){
			case 1:{
                do{
                    printf("\033c");
                    printf("Bạn chọn CN1\n"); // nhập vào số thực x
                    float x;
                    printf("Mời bạn nhập số x: ");
                    scanf("%f", &x);

                    if (x == (int)x) {
                        // X là số nguyên
                        printf("%.0f là số nguyên\n", x);

                        // Kiểm tra số chính phương
                        for (int i = 1; i <= x / 2; i++) {
                            if (i * i == x) {
                                printf("%.0f là số chính phương\n", x);
                                break;
                            }
                        }

                        // Kiểm tra số nguyên tố
                        int xLaSoNT = 1; // giả sử x là số nguyên tố
                        for (int i = 2; i <= sqrt(x); i++) {
                            if ((int)x % i == 0) { //ép x về kiểu số nguyên 
                                xLaSoNT = 0;
                                break;
                            }
                        }

                        if (xLaSoNT == 1) {
                            printf("%.0f là số nguyên tố\n", x);
                        } else {
                            printf("%.0f không phải số nguyên tố\n", x);
                        }

                    } else {
                        printf("%.2f là số thực\n", x);
                    }
                    
                    printf("Bạn có muốn tiếp tục CN1 không?\n");
                    printf("1: Có.\n");
                    printf("2: Không.\n");
                    scanf("%d", &chon);
                }while(chon != 2);
                     break; 

			}case 2:{
                printf("Bạn chọn CN2\n");
				break; //Ket thuc chuc nang 2
			}case 3:{
				printf("Bạn chọn CN3\n");
				int batdau ,ketthuc;

    printf("Mời bạn nhập giờ bắt đầu : "); 
	scanf("%d", &batdau);
    if(batdau < 12 && batdau > 24){
        printf("Ngoài giờ hoạt động của quán !!"); 
        printf("Mời bạn nhập giờ bắt đầu : "); 
	    scanf("%d", &batdau);
    }
    printf("Mời bạn nhập giờ kết thúc : "); 
	scanf("%d", &ketthuc);
    if(ketthuc > 24){
        printf("Hết giờ hoạt động rồi !! Nhập lại giờ trong giờ hoạt động đi : "); 
	    scanf("%d", &ketthuc);
    }
    float tongtien;
    int tonggiohat = ketthuc - batdau;
    if(batdau > 13 && batdau < 18){
        if(tonggiohat <= 3){
        tongtien = tonggiohat * 150000;
        }else{
        int tiengiam = (tonggiohat-3)*150000;
        tongtien = (tiengiam - (tiengiam * 0.3))+450000;
        }
        tongtien = tongtien - (tongtien * 0.1);
    }else{
        if(tonggiohat <= 3){
        tongtien = tonggiohat * 150000;
        }else{
        int tiengiam = (tonggiohat-3)*150000;
        tongtien = (tiengiam - (tiengiam * 0.3))+450000;
        }
    }
    printf("Thành tiền là: %.0f\n", tongtien);


				break;	//Ket thuc chuc nang 3
			}case 4:{
				printf("Bạn chọn CN4\n");
				break; //Ket thuc chuc nang 4
			}case 6:{//Lai suat co dinh 5%, thoi gian tra no la 12 thang
                printf("Bạn chọn CN6\n");
				break; //Ket thuc chuc nang 6
			}case 8:{
				//add 8.2 vào đây
                printf("Bạn chọn CN8\n");
				break; //Ket thuc chuc nang 8
			}case 0:{ //Ket thuc 
				return 0;
			}default: printf("\nYou chose wrong\n"); break;  
		}
        }while(luaChon != 0);

	// Dừng màn hình
    system("pause"); // hoặc getchar();
	return 0;
}
