//cach 1

#include <iostream>
#include <cstring>

using namespace std;

void cc(char *a, char *b, char *kq);

int main()
{
    char a[10]="fckfckvv";
    char *x=new char;
    x=a;
    char b[10]="jkngkjgm";
    char *y=new char;
    y=b;

    char z[20];

    cc(x,y,z);
    delete x,y,z;
}

void cc(char *a, char *b, char *kq)
{
    strcpy(kq,a);
    strcat(kq,b);
    cout << kq;
}

//        cach2


#include<iostream>
#include<cstring>

using namespace std;

char* concat(const char* a, const char* b)
{
	char *p = new char;
	strcpy(p,a);
	strcat(p,b);

 //   delete p;    delete roi return thi chuyen gi xay ra

	return p;
}

int main()
{
    char a[100]="reg";
    char b[100]="conito";
	cout << concat(a,b);

	return 0;
}

