Code:

#include<stdio.h>

#include<conio.h>







#include<stdio.h>

#include<conio.h>

int main()

{

int i,m;

printf("\nenter number of processes");

scanf("%d",&m);

int arrivaltime[m],burst[m],burst1[m];

int waitingtime[m],tarrival[m];



int tq1=6, tq2=10;

int atat=0, awt=0;

printf("\nEnter arival time of processes:");

for(i=0;i<m;i++)

{ printf("\nfor processes %d :",i+1);

scanf("%d",&arrivaltime[i]);

}

printf("\nenter burst time for processes:");

for(i=0;i<m;i++)

{

printf("\nfor processes %d:",i+1);

scanf("%d",&burst[i]);
burst1[i]=burst[i];

}

printf("First Iterarrivalion\n");

for(i=0;i<m;i++)

{

if(arrivaltime[i]<=tq1+arrivaltime[i-1])

{



burst[i]=burst[i]-tq1;



printf("\nprocess %d",i+1);

printf("\nremaining will be %d",burst[i]);}

else

{

burst[i]=burst[i]-tq1;



printf("\nprocess %d ",i+1);

printf("\nremaining will be %d",burst[i]);

}}



printf("\nAFTER ITERarrivalION 2\n");

for(i=0;i<m;i++)

{

if(arrivaltime[i]<=tq2+arrivaltime[i-1])

{



burst[i]=burst[i]-tq2;
printf("\nprocess %d",i+1);

printf("\nremaining will be %d",burst[i]);}

else

{

burst[i]=burst[i]-tq2;



printf("\nprocess %d",i+1);

printf("\nremaining wil be %d",burst[i]);

}

}



int j,temp;



for(i=0;i<m;i++)

{

for(j=i+1;j<m;j++)

{if(burst[i]>burst[j])

{



temp=burst[i];

burst[i]=burst[j];

burst[j]=temp;

}

}

}

int ct[4]={71,91,67,117};

for(i=0;i<m;i++)

{
tarrival[i]=ct[i]-arrivaltime[i];

waitingtime[i]=tarrival[i]-burst1[i];

printf("\n processid \tturnaround time \twaitingtime \n");





printf("\n %d \t\t\t%d \t\t\t %d \n",i,tarrival[i],waitingtime[i]);





atat=atat+tarrival[i];

awt=awt+waitingtime[i];



}

atat=atat/m;

awt=awt/m;

printf("\nAverage turn around time: %d",atat);

printf("\nAverage waiting time:%d",awt);

}
