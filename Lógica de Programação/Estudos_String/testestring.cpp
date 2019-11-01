for(int j=0;j<10;j++){
			if(cargo[0]!=gerente[0] && cargo[0]!=tecnico[0] && cargo[0]!=eng[0]){
				equals=1;
				break;
			}else if(cargo[i]==gerente[j]){
				printf("\n%c",cargo[i]);
				break;
			}
		}		
		if(equals==1)
			break;
