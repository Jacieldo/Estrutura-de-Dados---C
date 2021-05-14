    #include <stdio.h>    
 
       float mediaAritmetica();
       float mediaPonderada();
       float lerNota(int *i);
       float verifica (char *tmedia);
  
  /* PASSAGEM POR VALOR = Criação de uma cópia de conteúdo para ser utilizado na função. Ao final da função, as cópias são destruídas

     PASSAGEM POR REFERÊNCIA = É feito pelo uso de ponteiros e não mais atrvés de cópias (Economia de memória). A alteraçao é feita no endereço da variável
  */
    
    int main(void){ //Void não retorna NADA.    
            
      printf("\n***Calculo da Média***\n\n");
      char tipoMedia;
      float m;
      printf("Digite o tipo de Média que deseja calcular: ");
      scanf("%s", &tipoMedia);
      char VerificaMedia = verifica(&tipoMedia);
      printf("%f",m);
      return 0;
    }

/* função só retorna um resultado
//Retorno de mais de um valor é por meio de PONTEIRO
      int q3 (int v){//PASSAGEM POR VALOR
      int a = 2, b;
      b = a * v;
            
      return b;        
    }
*/

//Já pela PASSAGEM POR PARÂMETROS POR REFERÊNCIA, posso retornar mais de um valor. Na verdade é apenas referenciar o que é feito, mas os valores não saem de onde estão alocados. Entendo como um guia/menu do que deve ser feito e não o "fazer".
    int calc(int *y){
      *y = *y * 4;
      return (*y);
    }   

    float verifica (char *tmedia){
      float media[3];
      float *m;
      if (*tmedia == 'a'){
        printf("A media aritmetica é: %.2f\n", mediaAritmetica());
      }
      if (*tmedia == 'p'){
        printf("A média Ponderada é : %.2f\n", mediaPonderada());
      }else{
        printf("Erro!!!  Foi Digitado uma opção não esperada no sistema.");
      }
      return (*m);
    } 

    float lerNota(int *i){
      float nota;
      printf("Digite a %d° nota: ",*i + 1);
      scanf("%f",&nota);

      return (nota);
    }

    float mediaAritmetica(){
      float media;
      for (int i = 0; i < 3; i++){
        media = media + lerNota(&i);        
      }
      media = media / 3;      
      return(media);
    }

    float mediaPonderada(){
      float media, nota[3];
      for (int i = 0; i < 3; i++){
        nota[i] =  lerNota(&i);        
      }
      media = (nota[0] * 5 + nota[1] * 3 + nota[2] * 2) / 10;
          
      return(media);
    }