#include <stdio.h>
#include <stdlib.h>

int main() {
    int a;
    int choice;
    int arr[100];
    do {
        printf("\n==========MENU=========\n");
        printf("1.Nhap so phan tu va gia tri cho mang\n");
        printf("2.In ra cac gia tri phan tu trong mang\n");
        printf("3.Dem so luong phan tu chan le trong mang\n");
        printf("4.Tim gia tri lon thu 2 trong mang\n");
        printf("5.Them mot phan tu vao dau mang\n");
        printf("6.Xoa phan tu tai mot vi tri cu the\n");
        printf("7.Sap xep mang theo thu tu giam dan\n");
        printf("8.Tim kiem mot phan tu\n");
        printf("9.In ra toan bo so nguyen to trong mang da duoc binh phuong\n");
        printf("10.Sap xep mang theo thu tu tang dan\n");
        printf("11.Thoat\n");
        printf("Lua chon cua ban:");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                printf("Nhap vao so phan tu cua mang:");
                scanf("%d", &a);
                for (int i = 0; i < a; i++) {
                    printf("Nhap vao phan tu thu %d cua mang:",i);
                    scanf("%d", &arr[i]);
                }
                break;
            case 2:
                printf("Gia tri cac phan tu trong mang la:\n");
                for (int i = 0; i < a; i++) {
                    printf("arr[%d]=%d\n",i, arr[i]);
                }
                printf("\n");
                break;
            case 3:
                int chan=0,le=0;
                for (int i = 0; i < a; i++) {
                    if (i%2==0) {
                        chan=1;
                    }
                    chan++;
                    if (i%2==1) {
                        le=1;
                    }
                    le++;
                }
                printf("So luong phan tu chan va le la:%d va %d\n",chan ,le);
                break;
            case 4:
                break;
            case 5:
                if (a==100) {
                    printf("Mang da day");
                }else if (a==0) {
                    printf("Mang rong");
                }else {
                    int value;
                    printf("Nhap vao phan tu muon them:");
                    scanf("%d", &value);
                    for (int i = a; i >0; i--) {
                        arr[i] = arr[i-1];
                    }
                    arr[0] = value;
                    a++;
                }
                printf("Mang sau khi them la:\n");
                for (int i = 0; i < a; i++) {
                    printf("%d ", arr[i]);
                }
                break;
            case 6:
                int x;
                if (a==0) {
                    printf("Mang rong");
                }else {
                    printf("Nhap vao vi tri muon xoa:");
                    scanf("%d", &x);
                    for (int i = a; i < a-1; i++) {
                        if (arr[i] == x) {
                            arr[i] = arr[i+1];
                        }
                    }
                    a--;
                }
                printf("Mang sau khi xoa la:\n");
                for (int i = 0; i < a; i++) {
                    printf("%d ", arr[i]);
                }
                break;
            case 7:
                for (int i = 0; i < a-1; i++) {
                    for (int j = 0; j < a-i-1; j++) {
                        if (arr[j] < arr[j+1]) {
                            int temp = arr[j];
                            arr[j] = arr[j+1];
                            arr[j+1] = temp;
                        }
                    }
                }
                printf("Mang sap xep theo thu tu giam dan la:\n");
                for (int i = 0; i <a; i++) {
                    printf("%d\n", arr[i]);
                }
                break;
            case 8:
                if (a == 0) {
                    printf("Mang rong\n");
                }else {
                    int flag=0;
                    printf("Nhap vao phan tu muon tim:\n");
                    scanf("%d",&x);
                    printf("Phan tu %d ",x);
                    for(int i=0;i<a-1;i++) {
                        if(arr[i]==x) {
                            printf("duoc tim thay tai vi tri:%d ",i);
                            flag=1;
                        }
                    }
                    if(flag==0) {
                        printf("Khong ton tai \n");

                    }
                }
                break;
            case 9:
                for (int i = 0; i < a; i++) {
                    int nt =1;
                    if(arr[i] < 2 ) nt=0;
                    for (int j = 2 ; j * j <= arr[i] ; j++) {
                        if(arr[i]%j==0) {
                            nt =0;
                            break;
                        }
                    }
                    if (nt>=1) {
                        printf( "So %d la so nguyen to\n",arr[i]);
                        printf("Binh phuong cua cac so nguyen to la:%d\n",arr[i]*arr[i]);

                    }


                    }
                break;
            case 10:
                for (int i = 0; i < a-1; i++) {
                    for (int j = 0; j < a-i-1; j++) {
                        if (arr[j] > arr[j+1]) {
                            int temp = arr[j];
                            arr[j] = arr[j+1];
                            arr[j+1] = temp;
                        }
                    }
                }
                printf("Mang sap xep theo thu tu tang dan la:\n");
                for (int i = 0; i <a; i++) {
                    printf("%d\n", arr[i]);
                }
                break;
            case 11:
                printf("Dang thoat chuong trinh\n");
                break;
            default:
                printf("Lua chon khong hop le vui long thu lai!");
        }

    }while(choice!=11);


    return 0;
}