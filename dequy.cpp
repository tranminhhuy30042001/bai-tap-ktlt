/*
STT:15
MSSV 2001190579
Ho va Ten: Trần Minh Huy
Nội dung: buổi 4
*/
//----------------------
//khai báo thư viện
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
//----------------------
//khai báo cấu trúc hằng số

//----------------------
//khai báo các hàm
void menu();
void menu1();

void bai2();
int bai2(int m,int n);
int uocChungLonNhat(int a,int b);
void bai3();
void bai4();
int capSoCong(int n,int a,int r);
void bai5();
int capSoNhan(int a,int n,int q);
void bai6();
int tinhBieuThucU(int n);
void bai7();
int tinhBieuThucQuyNap(int n);
void bai7_1();
int tinhBieuThucQuyNap1(int n);
void bai8();
int deQuyBai8(int n);
void bai10();
int binarySearch(int array[], int x, int low, int high);
void bai11();
int Fibonacci(int n);
void bai12();
int bai12_dequy(int n,int f1,int f2);
void bai12_2();
void bai13();
int tinhSoHangX(int n);
int tinhSoHangY(int n);
void bai14();
int tinhDayAn(int n);
void bai15();
int tinhYn(int n);
void bai15_2();
int tinhYn_2(int n);
void bai16();
int tinhXN(int n);
void bai16_2();
int tinhXN_2(int n);
void bai17();
int hamB17(int n,int k);
void bai18();
int hamB18(int n);
//----------------------
//thân chương trình
int main(){
    int chon = -1;
    int n=0;
    while (chon != 0)
    {
        menu();
        scanf("%d",&chon);
        switch (chon)
        {
        case 2:
        bai2();
        break;
        case 3:
        bai3();
        case 4:
        bai4();
        break;
        case 5:
        bai5();
        break;
        case 6:
        bai6();
        break;
        case 7:
        bai7();
        break;
        case 8:
        bai7_1();
        break;
        case 9:
        bai8();
        break;
        case 10:
        bai10();
        break;
        case 11:
        bai11();
        break;
        case 12:
        bai12();
        break;
        case 13:
        bai12_2();
        break;
        case 14:
        bai13();
        break;
        case 15:
        bai14();
        break;
        case 16:
        bai15();
        break;
        case 17:
        bai15_2();
        break;
        case 18:
        bai16();
        break;
        case 19:
        bai16_2();
        break;
        case 20:
        bai17();
        break;
        case 21:
        bai18();
        break;
        case 22:
        break;
        default:
            break;
        }
    }
    
}

void menu(){
    printf("\n0.thoat chuong trinh");
    printf("\n2.Bai 2");
    printf("\n3.Bai 3");
    printf("\n4.Bai 4");
    printf("\n5.Bai 5");
    printf("\n6.Bai 6");
    printf("\n7.Bai 7");
    printf("\n8.Bai 7.1");
    printf("\n9.Bai 8");
    printf("\n10.Bai 10");
    printf("\n11.Bai 11");
    printf("\n12.Bai 12");
    printf("\n13.Bai 12 de quy");
    printf("\n14.Bai 13 ");
    printf("\n15.Bai 14");
    printf("\n16.Bai 15");
    printf("\n17.Bai 15_2");
    printf("\n18.Bai 16");
    printf("\n19.Bai 16_2");
    printf("\n20.Bai 17");
    printf("\n21.Bai 18");
    printf("\nchon chuc nang: ");
}

//Viết hàm tính mn với m là số nguyên và n là số nguyên dƣơng nhập từ bàn phím.
void bai2(){
    int m,n;
    printf("\nnhap m: ");
    scanf("%d",&m);
    printf("\nnhap n: ");
    scanf("%d",&n);
    int kq = bai2(m,n);
    printf("ket qua: %d",kq);
}
int bai2(int m,int n){
    if(n == 0)
    return 1;
    return m * bai2(m,n-1);
}
//Viết hàm tìm ƣớc chung lớp nhất của 2 số nguyên dƣơng a, b.
int uocChungLonNhat(int a,int b){
    if (b == 0) return a;
    if (a % b == 0) return b;
    return uocChungLonNhat(b, a%b);
}
void bai3(){
    int a,b;
    printf("\nnhap a: ");
    scanf("%d",&a);
    printf("\nnhap b: ");
    scanf("%d",&b);
    printf("uoc chung lon nhat la: %d",uocChungLonNhat(a,b));
}
//Viết hàm tìm giá trị phần tử thứ n của cấp số cộng có hạng đầu là a, công sai là r :
void bai4(){
    int n,a,r;
    printf("nhap n: ");
    scanf("%d",&n);
    printf("nhap a: ");
    scanf("%d",&a);
    printf("nhap r: ");
    scanf("%d",&r);
    int kq = capSoCong(n,a,r);
    printf("ket qua: %d",kq);
}
int capSoCong(int n,int a,int r){
    if(n==1)
        return a;
    return r + capSoCong(n-1,a,r);
}
//Viết hàm tìm giá trị phần tử thứ n của cấp số nhân có hạng đầu là a, công bội la q :
void bai5(){
     int n,a,q;
    printf("nhap n: ");
    scanf("%d",&n);
    printf("nhap a: ");
    scanf("%d",&a);
    printf("nhap q: ");
    scanf("%d",&q);
    int kq = capSoNhan(a,n,q);
    printf("ket qua: %d",kq);
}
int capSoNhan(int a,int n,int q){
    if(n == 1)
        return a;
    return q * capSoNhan(a,n-1,q);
}
void bai6(){
    int n;
    printf("nhap n: ");
    scanf("%d",&n);
    printf("ket qua: %d",tinhBieuThucU(n));
}
int tinhBieuThucU(int n){
    if(n < 6)
        return n;
    return n + tinhBieuThucU(n-1);
}
void bai7(){
    int n;
    printf("nhap n: ");
    scanf("%d",&n);
    printf("ket qua: %d",tinhBieuThucQuyNap(n));
}
int tinhBieuThucQuyNap(int n){
    if(n == 0)
        return 1;
    if(n == 1)
        return 0;
    if(n == 2)
        return -1;
    return 2*(tinhBieuThucQuyNap(n-1)) - 3*(tinhBieuThucQuyNap(n-2))-tinhBieuThucQuyNap(n-3);
}
void bai7_1(){
    int n;
    printf("nhap n: "); 
    scanf("%d",&n);
    printf("ket qua: %d",tinhBieuThucQuyNap1(n));
}
int tinhBieuThucQuyNap1(int n){
    if(n <= 3)
        return n;
    return 2*(tinhBieuThucQuyNap1(n-1)) + tinhBieuThucQuyNap1(n-2)- 3*tinhBieuThucQuyNap1(n-3);
}
//Với , n là số nguyên dƣơng, biết rằng f(n) đƣợc tính theo công thức đệ quy nhƣ sau : f(1) = 1 ; f(2n) =2f(n) ; f(2n+1) = 2f(n) + 3f(n+1).
void bai8(){
    int n;
    printf("nhap n: ");
    scanf("%d",&n);
    printf("ket qua: %d",deQuyBai8(n));
}
int deQuyBai8(int n){
    if(n == 1)
        return 1;
    return (n-1)*deQuyBai8(n-2) + n*deQuyBai8(n-1); 
}
//10. Cho mảng 1 chiều a đã có thứ tự chứa n số nguyên, viết hàm tìm kiếm số x trêna theo thuật toán tìm kiếm nhị phân bằng kỹ thuật đệ quy.
void bai10(){
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        printf("\nnhap phan tu thu %d: ",i);
        scanf("%d",a[i]);
    }
    int tg;
    for(int i = 0; i < 9; i++){
        for(int j = i + 1; j < 10; j++){
            if(a[i] > a[j]){
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;        
            }
        }
    }
    int x;
    printf("\n nhap so can tim: ");
    scanf("%d",&x);

    printf("\n ket qua: %d",binarySearch(a,x,a[0],a[10]));
}
int binarySearch(int array[], int x, int low, int high){
    if (high >= low) {
      int mid = low + (high - low) / 2;
      if (array[mid] == x)
        return mid;
      if (array[mid] > x)
        return binarySearch(array, x, low, mid - 1);
      return binarySearch(array, x, mid + 1, high);
    }

    return -1;
}
void bai11(){
    int n;
    printf("\nnhap n: ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("%5d",Fibonacci(i));
    }
    
}
int Fibonacci(int n){
   if(n ==0 || n == 1) return n;
    else return Fibonacci(n-1)+Fibonacci(n-2);
}
void bai12(){
    int f1 = 1;
    int f2 = 1;
    int n;
    printf("\n nhap n: ");
    scanf("%d",&n);
    if(n <= 2)
    {
        printf(" 1 ");
        return;
    }
    int temp =0;
    while (n > (f1+f2))
    {
        temp =f1;
        f1 = f2;
        f2+=temp;
    }
    printf("\n%d",f2);
}
int bai12_dequy(int n,int f1,int f2)
{
    if(n <= f1+f2)
        return f1;
    return bai12_dequy(n,f1+f2,f1);
}

void bai12_2(){
    int n;
    int f1 =1,f2=1;
    printf("\n nhap n: ");
    scanf("%d",&n);
    if(n<=1) return;
    printf("\n%d",bai12_dequy(n,1,1));    

}
void bai13(){
    int n;
  
    printf("\n nhap n: ");
    scanf("%d",&n);
    printf("\nX: %d\nY:%d",tinhSoHangX(n),tinhSoHangY(n));
}
int tinhSoHangX(int n){
    if( n == 0) return 1;
    return tinhSoHangX(n-1) + tinhSoHangY(n-1);

}
int tinhSoHangY(int n){
    if( n == 0 ) return 0;
    return 3*tinhSoHangX(n-1)+2*tinhSoHangY(n-1);
}
void bai14(){
    int n;
    printf("\n nhap n: ");
    scanf("%d",&n);
    printf("%d ",tinhDayAn(n));
}
int tinhDayAn(int n){
    if(n==1)return 1;
    return n*tinhDayAn(n-1);
}
void bai15(){
    int n;
    printf("\n nhap n: ");
    scanf("%d",&n);
    printf("%d ",tinhYn(n));
}
int tinhYn(int n){
    if(n<=3) return n;
    return tinhYn(n-1)+2*tinhYn(n-2)+3*tinhYn(n-3);
}
void bai15_2(){
 int n;
    printf("\n nhap n: ");
    scanf("%d",&n);
    printf("%d ",tinhYn_2(n));
}
int tinhYn_2(int n){
    if(n<=3) return n;
    int a=1,b=2,c=3,kq;
    while(n != 3)
    {
        kq = c + 2*b + 3 * a;
        a = b;
        b = c;
        c = kq;
        n--;
    }
    return kq;
}
void bai16(){
    int n;
    printf("\n nhap n: ");
    scanf("%d",&n);
    printf("\n%d",tinhXN(n));
}
int tinhXN(int n){
    if(n<=2) return 1;
    return tinhXN(n-1)+(n-1)*tinhXN(n-2);
}
void bai16_2(){
    int n;
    printf("\n nhap n: ");
    scanf("%d",&n);
    printf("\n%d",tinhXN_2(n));
}
int tinhXN_2(int n){
    if(n <= 2) return 1;
    int a=1,b=1,kq;
    while (n!=2)
    {
        kq = b + (n-1) * a;
        a = b;
        b= kq;
        n--;
    }
    return kq;
}
void bai17(){
    int n;
    printf("\n nhap n: ");
    scanf("%d",&n);
    printf("%d ",hamB17(n,1));
}
int hamB17(int n,int k){
    if(n == 0)
        return 1;
    else if(n == 1)
        return 2;
    else
        return hamB17(n-1,k) + k*hamB17(n-2,k+1);
}
void bai18(){
    int n;
    printf("\n nhap n: ");
    scanf("%d",&n);
    printf("%d ",hamB18(n));
}
int hamB18(int n){
    if(n == 1) return 1;
    else if(n == 2) return 4;
    return n*n + hamB18(n-2) *hamB18(n-1) +1;
}