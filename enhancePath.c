#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;
string EnhancePath(string input);
int*  vaid(string input);
int slash(string input);

int main() {
  string input;
  cin >> input;
  cout << EnhancePath(input);

}

string EnhancePath(string input){
 int i = input.length();
 string result = "";
 while(i>0){ 
   int c = 0;
   int* check = vaid(input.substr(0,i));
   
   switch(check[0]) {
    case 0: 
         if(check[1] > slash(input.substr(0,i))) return "\\" + result; 	   
         i -= check[2];
         while (check[0] > 0 && i > 0){
         if(input[i] == '\\') c--;
         i--;
          }
	 break;
    case 1:
	 return "\\" + result;
         break;
    case 2:
         result = input.substr(i-check[2],i) + "\\" + result; 
         i -= check[2];         
		   } 
 } 
 return "\\" + result; 

}

int*  vaid(string input) {
   int i = input.length();
   int* result;
   int dot = 0;
   int star = 0;
   int number = 0;
   int c = 0;
   while(input[i] != '\\'){
     if(input[i] != '.') dot = 1;
     if(input[i] == '*') star = 1;  
     c++;  
   }
   if(dot == 0) result[0]= 0;
   if(star == 1 && c == 1) result[0]= 1;
   result[0]= 2;
   result[1] = c; 
   return result;
}
int slash(string input) {
   int temp = 0;
   for(int i = 0; i < input.length(); i++){
      if(input[i] == '/')
      temp++;
   }
  return temp;
}
