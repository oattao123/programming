#include<stdio.h>
#include<string.h>
int main() {
	bool T = 0,L = 0;
	char a[10000];
	scanf("%s",a);
	for(int i = 0; i<strlen(a); i++) {
		if(a[i]>='A'&&a[i]<='Z') T = 1;
		else if(a[i]>='a'&&a[i]<='z') L = 1;
	}
	if(T==1&&L==1) printf("Mix");
	else if(T==1) printf("All Capital Letter");
	else printf("All Small Letter");
	return 0;
}