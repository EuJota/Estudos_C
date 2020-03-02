#include <stdio.h>
#include <stdlib.h>


typedef struct{
    int dia, mes, ano;
} Data;

int verificaValidadeData(int dia, int mes, int ano){
    if(dia<30 && dia>1)
        if(mes>0 && mes <13)
            if(ano > 1500)
                return 1;
    else
        return 0;
}

void lerDatas(Data *data){
    int v = 0;
    scanf("%d %d %d",&data->dia, &data->mes, &data->ano);
    v = verificaValidadeData(data->dia, data->mes, data->ano);

    if(v==1)
        printf("Data armazenada");
    else
        printf("Data nao armazenada");
}



main(){
Data d1, *d2;

d2 = &d1;

lerDatas(d2);

}