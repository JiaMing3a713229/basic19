/*�Ȧ�s�ڭp��覡�p�U
	N�ѫ᪺�s�ڡ׶}�l�s�J���� *�]1+RATE/365�^^ N
	RATE�G�N��~�Q�v
�@�@�g�@�{���]�t�U�C��ӥ\��
�@�@�]1�^��J�}�l���s�ڸg�LN�ѫ�A��X�s�ڬ���H
�@�@�]2�^��JN�ѫ᪺�s�ڡA�D�}�l�ɭn�s�J�h�ֿ��H

 *�s�@:�f�a��
 *������� 108�~5��11��
  
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define RATE 1.090

float cal_deposit(int);
int cal_withdrawal(int);
int main(void){
	
	int input_num;//�ϥΪ̿�J���B 
	int mode;//��J�Ҧ� 
	printf("�п�J�Ҧ�:1.�s��\t2.����:");
	scanf("%d", &mode);
	switch(mode){
	   case 1:{
		   printf("�п�J�s��"); 
		   scanf("%d", &input_num);
		   printf("%5.2f", cal_deposit(input_num));
		   break;
	   }
	   case 2:{
	   	   printf("�п�J������B:");
	   	   scanf("%d", &input_num);
	   	   printf("%d", cal_withdrawal(input_num));
		   break;
	   }
	   default:{
	   	   printf("��J���~\n");
		   break;
	   }
	   
	}
	
	system("pause");
	return 0;
	
} 

float cal_deposit(int input_num){
	
	int day_num;//�sn��
	float result=0;//N�ѫ᪺�s��
	printf("�n�s�X��?:");
	scanf("%d", &day_num); 
	result=input_num*(pow((1+(RATE/365)), day_num));  //N�ѫ᪺�s�ڡ׶}�l�s�J���� *�]1+RATE/365�^^ N
	return result;
}
int cal_withdrawal(int withdraw_num){
	
	int result=0;
	int day_num;
	
	printf("��J�n�s�X��:");
	scanf("%d", &day_num);
	
	result=(withdraw_num)/(pow((1+(RATE/365)), day_num));
	
	return result;
}
