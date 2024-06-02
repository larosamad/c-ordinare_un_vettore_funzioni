#include <stdio.h>
const int N = 10;
int i, y, temp;

//dichiarazione funzioni
void salvavettore(int vet_save[], int M);
void ordinavettore(int vet_save[], int M);
void stampavettore(int vet_save[], int M);

int main(void){
    int vettore[N];

    //richiamo funzioni
    salvavettore(vettore, N);
    ordinavettore(vettore, N);
    stampavettore(vettore, N);
    return 0;
}

//funzioni:
void salvavettore(int vet_save[], int M){
    for (i=0; i<M; i++){
        printf("Inserisci un numero ");
        scanf("%d", &vet_save[i]);
    }
    return;
}

void ordinavettore(int vet_save[], int M){
    for(i=0; i<M; i++){
    for (y=0;y<M; y++){
        if (vet_save[y]>vet_save[y+1]){ 
            temp=vet_save[y]; 
            vet_save[y]=vet_save[y+1]; 
            vet_save[y+1]=temp; 
            }
        }
    }
    return;
}

void stampavettore(int vet_save[], int M){
    printf("I numeri in ordine sono: ");
    for (i=0; i<M; i++){
        printf("%d ", vet_save[i]);}
    return;
}