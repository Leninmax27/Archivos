#include <stdio.h>

int main(){

    FILE *In=NULL;
    FILE *In1=NULL;
    int z;

    In=fopen("vector.txt","r");
    In1=fopen("Resultados.txt","w");

    if (In==NULL){
        printf("verifique el archico, no se puede abrir el archivo");
        return -1;
    }
    if (In1==NULL){
        printf("verifique el archico, no se puede abrir el archivo");
        return -1;
    }

    while (!feof(In)){
        fscanf(In,"%d",&z);
        if(z%10==0){
            fprintf(In1,"%d \t*Este numero es multiplo de 10*\n",z);
        }else{
            fprintf(In1,"%d\n",z);
        }
    }
    
     fclose(In);
     fclose(In1);
     return 0;
}