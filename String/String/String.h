#pragma once
#include<string.h>
class MyString
{
	char* str; int n;
public: MyString() { str = NULL; n = 0; }
		MyString(const char* s) {
			n = strlen(s); 
			str = new char[n + 1];
			strcpy(str, s);
		}
		MyString(char* s) { n = strlen(s);
		str - new char[n + 1]; 
		strcpy(str, s); }
		MyString(const MyString& s) {
		n = s.n; 
		str = new char[n + 1]; 
		strcpy(str, s.str); 
		}
		~MyString() {
			delete[]str;
			n = 0; 
		}
		MyString& operator=(const MyString& s) {
			n = s.n; 
			delete[]str; 
			str = new char[n + 1]; 
			strcpy(str, s.str);
			return *this;
		}
		MyString& operator+(const MyString& s) {
			MyString S1;
			S1.n = this->n + s.n;
			S1.str = new char[S1.n + 1];
			strcat(S1.str, this->str);
			strcat(S1.str, s.str);
			return S1;
		}
		
};

