#include <stdio.h>

int main()
{
	int d,m,y;
	printf("Enter date month year\n");
	scanf("%d%d%d",&d,&m,&y);
	if (((y%4==0&&y%100!=0)||y%400==0)&&m==2)
		if (d==29)
			d=1;
			m=3;
		else
			d+=1;
	else if  (!((y%4==0&&y%100!=0)||y%400==0)&&m==2)
		if (d==28)
			d=1;
			m=3;
		else
			d+=1;
	else if (m==1||m==3||m==5||m==7||m==8||m==10)
		if (d==31)
			d=1;
			m+=1;
		else
			d+=1;
	else if (m==4||m==6||m==9||m==11)
		if (d==30)
			d=1;
			m+=1;
		else
			d+=1;
	else if (m==12)
		if (d==31)
			y+=1;
			d=1;
			m=1;
		else
			d+=1
	else
		printf("invalid date")
	printf("%d/%d/%d",d,m,y)
	return 0;
}
