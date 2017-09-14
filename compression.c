#include <stdio.h>
using namespace std;

String compression(String a);
int main() {
  String input;
  cin >> input;
  cout << compression(input );
}

String compression(String a){
  String result;
  int i = 0;
  while(i<a.lenght){
    int j=i+1;
    while(a[j] == a[i]) j++;
    if(j != j+1) result = ""+j-a+a[i];
    else result = a[i];
    i = j
  }
 return result;
}
