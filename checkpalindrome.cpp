#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

bool checkPalindrome(char str[]) {
	int len=strlen(str);
	int count=0;
	/*for(int i=0;str[i]!='\0';i++) {
		len++;
	}*/
	for(int i=0;i<len;i++) {
		if(str[i]!=str[len-i-1]) {
			count=1;
			break;
		}
	}
	if(count==1) {
		return false;
	} else {
		return true;
	}
}
int main() {
	char ch[100];
	cout<<"Enter String: ";
	cin>>ch;
	cout<<"Given String: "<<ch<<endl;
	int temp=checkPalindrome(ch);
	if(temp==1) {
		cout<<ch<<" is a palindrome"<<endl;
	} else {
		cout<<ch<<" is a not palindrome"<<endl;
	}
}
