/*銀行存款計算方式如下
	N天後的存款＝開始存入的錢 *（1+RATE/365）^ N
	RATE：代表年利率
　　寫一程式包含下列兩個功能
　　（1）輸入開始的存款經過N天後，輸出存款為何？
　　（2）輸入N天後的存款，求開始時要存入多少錢？

 *製作:呂家明
 *完成日期 108年5月11日
  
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define RATE 1.090

float cal_deposit(int);
int cal_withdrawal(int);
int main(void){
	
	int input_num;//使用者輸入金額 
	int mode;//輸入模式 
	printf("請輸入模式:1.存款\t2.提款:");
	scanf("%d", &mode);
	switch(mode){
	   case 1:{
		   printf("請輸入存款"); 
		   scanf("%d", &input_num);
		   printf("%5.2f", cal_deposit(input_num));
		   break;
	   }
	   case 2:{
	   	   printf("請輸入提領金額:");
	   	   scanf("%d", &input_num);
	   	   printf("%d", cal_withdrawal(input_num));
		   break;
	   }
	   default:{
	   	   printf("輸入錯誤\n");
		   break;
	   }
	   
	}
	
	system("pause");
	return 0;
	
} 

float cal_deposit(int input_num){
	
	int day_num;//存n天
	float result=0;//N天後的存款
	printf("要存幾天?:");
	scanf("%d", &day_num); 
	result=input_num*(pow((1+(RATE/365)), day_num));  //N天後的存款＝開始存入的錢 *（1+RATE/365）^ N
	return result;
}
int cal_withdrawal(int withdraw_num){
	
	int result=0;
	int day_num;
	
	printf("輸入要存幾天:");
	scanf("%d", &day_num);
	
	result=(withdraw_num)/(pow((1+(RATE/365)), day_num));
	
	return result;
}
