// Xuat tat ca so co hai chu so sao cho tich 2 chu so cua no bang 2 lan tong hai chu so cua no

#include <stdio.h>
int main(){
	
	int a,ch;
	for(int a = 10;a<=99;a++){
		int n = a % 10;
		ch = a/10;
		if(ch * n == 2*(ch+n)){
			printf("%d is the answer",a);
			printf("\n");
		}		
	}
}
