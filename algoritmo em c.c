#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"");
	
    char alunos[2][200];
    float notas[2][3];
    int i, j;
    
    for (i = 0; i < 2; i++) {
    	printf("Digite o nome do %i aluno: ", i+1);
        scanf("%s",&alunos[i]);
        
        for (j = 0;j < 3; j++) {
        	printf("Digite a %i� nota: ", j+1);
        	scanf("%f",&notas[i][j]);
        }
        
        printf("\n"); //Somente para pular uma linha.
    
}
printf("\n=== Exibindo resultados ===\n");
for (i = 0; i < 2; i++) {
	printf("%i� alunos: %s \n",i+1, alunos[i]);
	
	for (j = 0;j < 3; j++) {
		printf("%i� alunos: %f \n",j+1, alunos[i][j]);
    }
		
	
    return 0;
}


}

