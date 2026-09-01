#include<stdio.h>

int main() {

int a[10], key, i, n;

 printf("Enter the number of elements: ");
 scanf("%d", &n);
 
 printf("Enter the elements:\n");
 for(i=0; i<n;i++){
 scanf("%d",&a[i]);
 }
 
 printf("Enter elements to search:");
 scanf("%d", &key);
 for(i=0; i<n; i++){
 
 if(a[i]==key){
 printf("Element found at positionm %d\n", i);
 printf("Element found at positionm %d\n", i+1);
 
 return 0;
 }
 }
 
 printf("Element not found\n");
  return 0;
  }
  
