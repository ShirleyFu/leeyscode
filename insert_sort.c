#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void sort(int  a[], int n){
  for(int j = 1; j < n;j++){
    int key = a[j];
    int i = j-1;
    while(i > -1 && a[i] > key){
      a[i+1] = a[i];
      i--;
    }
    a[i+1] = key;
  }
}

int main() {
    int a[] = {5,2,4,6,1,3};
    sort(a,6);
    return 0;

}