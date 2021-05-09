#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define N 127

using namespace std;

void czestotliwosc(char A[N], int B[N])
{
    int i=0;
    while(A[i]!=NULL)
    {
        cout<<A[i]<<" wystepuje "<<B[i]<<" razy"<<endl;
        i++;
    }
    return;
}

int main()
{
	char A[N];
	cin.get(A,N);
	cout<<A<<endl<<endl;

	int B[N]={0}, C[N]={0}, licznik=0, i=0, j=0, k=0, a=0, b=0, c=0, d=0, e=0;
	while(A[i]!=NULL)
	{
	    while(A[j]!=NULL && A[i]!='0')
        {
            if(A[i]==A[j])
            {
                licznik+=1;
                if(i!=j)
                {
                    A[j]='0';
                }
            }
            j++;
        }
        //cout<<licznik;
        if(licznik!=0)
        {
            B[k]=licznik;
            k++;
        }
        licznik=0;
		i++;
		j=i;
	}
	//cout<<A<<endl;
	i=0, j=0;
	while(A[i]!=NULL)
    {
        while(A[i]!='0')
        {
            i++;
            if(i==k+1)
            {
                break;
            }
        }
        if(i==k+1)
        {
            break;
        }
        j=i+1;
        while(A[j]=='0')
        {
            j++;
        }
        A[i]=A[j];
        A[j]='0';
    }
	//cout<<A<<endl;
    czestotliwosc(A, B);
    cout<<endl<<endl;

    i=0, j=0, k=0;
    while(B[i]!=0)
    {
        C[i]=B[i];
        i++;
    }
    licznik=i;
    int D[i]={0};
    D[a]=i;
    while(licznik!=1)
    {
        if(licznik%2==0)
        {
            for(k=0; k<licznik/2; k++)
            {
                C[i]=C[j]+C[j+1];
                i++;
                j+=2;
            }
            licznik=k;
            a++;
            D[a]=licznik;
        }
        else if(licznik%2==1)
        {
            for(k=0; k<licznik/2; k++)
            {
                C[i]=C[j]+C[j+1];
                i++;
                j+=2;
            }
            j=i-(k+1);
            C[i]=C[j];
            licznik=k+1;
            a++;
            D[a]=licznik;
            i++;
            j++;
        }
    }
    for(j=0; j<i; j++)
    {
        cout<<C[j]<<" ";
    }
    int E[j]={0};
    cout<<endl<<endl;

    i=0;
    while(i<a)
    {
        cout<<D[i]<<" ";
        i++;
    }
    D[i]=0;
    cout<<endl<<endl;

    b=D[0]*a;
    int F[b]={0};

    i=0, j=0, k=D[j];
    while(j!=a)
    {
        while(i!=D[j])
        {
           if(i!=D[j])
           {
               E[i]=0;
               i++;
           }
           if(i!=D[j])
           {
               E[i]=1;
               i++;
           }
        }
        j++;
        k+=D[j];
        D[j]=k;
    }

    for(j=0; j<i; j++)
    {
        cout<<E[j]<<" ";
    }
    cout<<endl<<endl;

    i=-1+a, j=0, k=1, licznik=0;
    while(licznik!=b)
    {
        while(i<b)
        {
            if(D[0]-d<k)
            {
                e=k;
                k=D[0]-d;
            }
            for(c=0; c<k; c++)
            {
                F[i]=E[j];
                licznik+=1;
                d+=1;
                i+=a;
            }
            j++;
        }
        if(e!=0)
        {
            k=e;
            e=0;
        }
        k*=2;
        i=i-b;
        i--;
        d=0;
    }
    cout<<endl<<endl;

    cout<<"Kodowanie Huffmana (1 znak zostal zapisany "<<a<<" cyframi):"<<endl<<endl;

    for(i=0; i<b; i++)
    {
        cout<<F[i];
    }
    cout<<endl<<endl;

	getch();
	return 0;
}
