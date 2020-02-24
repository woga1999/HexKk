#include <stdio.h>
#define MAX_LIST_SIZE 100
typedef struct {
	int arr[MAX_LIST_SIZE];
	int listsize;
}List;
void list_init(List * L) {
	L->listsize=0;
}
void list_input(List * L, int pos, int item) {
	int i;
	int put=item;
	if(L->listsize>=MAX_LIST_SIZE){
		printf("error");
        return;
}
	for(i=L->listsize-1;i>=pos;i--){
		L->arr[i+1]=L->arr[i];
	}
	L->arr[i]=put;
	L->listsize++;
}
int list_remove(List * L, int pos){
	int i=pos;
	int r=L->arr[i];
	if(L->listsize<=0){
		printf("error");
	}
	for(i=pos;i<=L->listsize-1;i++){
		L->arr[i-1]=L->arr[i];
	}
	L->listsize--;
	return r;
}
int list_search(List * L, int key){
	if(L->listsize<=0||L->listsize>=MAX_LIST_SIZE){
		printf("error");
		return 0;
	}
    int i;
	for(i=0;i<=L->listsize;i++){
		if(L->arr[i]==key){
		    	return key;
		}
	}
	return -1;
}

int main(){
    List alist;
    list_init(&alist);
    list_input(&alist,0,10);
    list_input(&alist,0,40);
    list_input(&alist,1,30);
    list_input(&alist,2,20);
    list_input(&alist,0,50);
    list_remove(&alist,2);
    printf("%d \n", list_search(&alist,30));
    return 0;
}