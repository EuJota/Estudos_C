#include <stdio.h>

main(){
	int dia, mes, ano, pDia, pMes, pAno, bissexto;
	
	scanf("%d%d%d",&dia,&mes,&ano);
	
	bissexto = ano%4;
	
	
	if(dia>0 && dia <=31 && mes >0 && mes<=31){
		if(dia==31 && mes == 12){
			pAno = ano+1;
			printf("%d/%d/%d",01,01,pAno);
		}else if(dia==30 && mes==04||dia==30 && mes==06 || dia ==30 && mes== 9 || dia==30&& mes==11){
			pDia = 01;
			pMes = mes+1;
			printf("%d/%d/%d",pDia,pMes,ano);
		}else if(dia==31 && mes ==01|| dia==31&&mes==03||dia==31&&mes==05||dia==31&&mes==07||dia==31&&mes==8||dia==31 && mes==10){
			pDia= 01;
			pMes=mes+1;
			printf("%d/%d/%d",pDia,pMes,ano);
		}else if(mes==2  && dia == 29 && bissexto == 0){
			if(ano%100==0 && ano%400!=0){
				printf("Dia nao existe");
			}else{
			pDia = 01;
			pMes=mes+1;
			printf("%d/%d/%d",pDia,pMes,ano);
			}
		}else if(mes==2 && dia ==28){
			pDia = 01;
			pMes = mes+1;
			printf("%d/%d/%d",pDia,pMes,ano);
		}else if(dia==29&&mes==02&&bissexto!=0){
			printf("Dia nao existe");
		}else{
			pDia = dia+1;
			printf("%d/%d/%d",pDia, mes, ano);
		}
	}else{
		printf("numero fora do intervalo");
	}
}
