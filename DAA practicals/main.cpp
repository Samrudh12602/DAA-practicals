//  Created by Samrudh Dhaimodkar on 22/03/22.

#include <stdio.h>

int main() {
    int arr[]={1,2,3,4,6,7,8,9};
    int key,i=0;
    int flag=0;
    printf("Enter the element to be searched:");
    scanf("%d",&key);
    for(i=0;i<9;i++){
        if(key==arr[i]){
            flag=1;
        }
    }
    if(flag==1){
        printf("Element found \n");
    }
    else{
        printf("Element not found\n");
    }
}
