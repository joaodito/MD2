#include <bits/stdc++.h>
using namespace std;

//A solucao consiste em achar solucao do numero que possa ser dividido por x numeros com restos i
//Nesse caso é necessário indicar os valores dos divisores dentro do vetor 'dividePor' e informar os restos dentro do vetor'restoEsperado'

int TCR(int dividePor[], int restoEsperado[], int i){
	int valor = 1;
    do{
			int n;
            for( n = 0 ; n < i; n++){
                if(valor % dividePor[n] != restoEsperado [n]){ 
                     break;
                }else if(n == i){ 
                    return valor;
            }   
			valor++;
        }
    } while(true);
		return valor;
}

int main(void){
	int dividePor[]={2,4,6};
	int restoEsperado[]={2,3,4};
        
    int i = sizeof(dividePor) / sizeof (dividePor[0]);
    
    printf("A solucao possível é:"); 
    TCR(dividePor, restoEsperado, i);
        return 0;
}
