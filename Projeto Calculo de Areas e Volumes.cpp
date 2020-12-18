#include <iostream>
#include <stdlib.h>
#include <math.h>

float LQ, Q ,AQ, PQ, BR, AR, R, PR, dML, DML, AL, LL, LS, PL, RC, AC, CC, Rm, RM, ACC, BT, LE, LD, pT, aT, X, LT, Y, Z, V, LC, A, D, RE, AE, VE, Raio, Altura, LB, AA, Comp, Larg, LDB, Abase, Alateral, Asoma, Atr, RB, Geratriz, ABc, ALC, B, Hipotenusa, Ptr, Alt, Art;
double  BM, bM, ATI, At, CA, Hp, PT, BMR, bMR, ATR, ART, CAR, HP, PTR, AB;
// Esta fun??o posiciona o cursor na linha x  e coluna y
void gotoxy(int x, int y) {
  int a;
  
  for(a=1; a<=x; a++) printf("\n");
  
  for(a=1; a<=y; a++) printf("\n");
 
}


void quadrado(){
	system("cls");

	printf("Por favor, informe o valor de um lado do quadrado: ");
	scanf("%f",&LQ);
	
	AQ = LQ*LQ;
	printf("A area do quadrado é %f\n", AQ);
	
	PQ = 4*LQ;
	printf("O perimetro do quadrado e %f\n", PQ);

	system ("pause");

	
}

void retangulo(){
	system("cls");

	printf("Por favor, digite a base do retangulo: ");
	scanf("%f", &BR);
	printf("Por favor, digite a altura do retangulo: ");
	scanf("%f", &AR);
	
	R = BR*AR;
	printf("\narea do retangulo e %f\n", R);
	
	PR = 2*BR + 2*AR;
	printf("\nperimetro do retangulo é %f\n", PR);

	system ("pause");
}

void losango(){
	system("cls");
	printf("Por favor, informe o diagonal menor do losango: ");
	scanf("%f", &dML);
	printf("Por favor, informe o diagonal maior do losango: ");
	scanf("%f", &DML);
	
	AL = dML*DML/2;
	printf("A area do losango é %f\n", AL);
	
	LS = sqrt (dML*dML/2)+(DML*DML/2);
	PL = 4*LS;
	printf("O perimetro do Losango é %f\n", PL);

	

system ("pause");
}

void trapezioisosceles(){
	system("cls");
	
	printf("Por favor, informe o valor da base maior do trapézio isósceles: ");
	scanf("%lf", &BM);
	printf("Por favor, informe a base menor do trapézio isósceles: ");
	scanf("%lf", &bM);
	printf("Por favor, informe a altura do trapézio isósceles: ");
	scanf("%lf", &ATI);
	
	At = (bM+BM)*ATI/2;
	printf("A area do trapézio isósceles é %lf\n", At);
	
	CA = (BM - bM)/2;
	Hp = sqrt ((CA*CA)+(ATI*ATI));
	PT = (Hp*2)+(BM+bM);
	printf("O perímetro do trapézio isósceles é %lf\n", PT);
	

	
	
	
	
	system ("pause");
}

void trapezioretangulo(){
	system("cls");
	printf("Por favor, informe o valor da base maior do trapézio retangulo: ");
	scanf("%lf", &BMR);
	printf("Por favor, informe o valor da base menor do trapézio retangulo: ");
	scanf("%lf", &bMR);
	printf("Por favor, informe o valor da altura do trapézio retangulo: ");
	scanf("%lf", &ATR);
	
	ART = bMR+BMR*ATR/2;
	printf("A area do trapézio retangulo é %lf\n", ART);
	
	CAR = BMR - bMR;
	HP = sqrt ((CAR*CAR)+(ATR*ATR));
	PTR = HP+BMR+bMR;
	printf("O perimetro do trapézio retangulo é %lf\n", PTR);
		

	
	system ("pause");
}

void trapezio(){
system("cls");
	printf("Por favor, informe o valor da base maior do trapézio retangulo: ");
	scanf("%lf", &BMR);
	printf("Por favor, informe o valor da base menor do trapézio retangulo: ");
	scanf("%lf", &bMR);
	printf("Por favor, informe o valor da altura do trapézio retangulo: ");
	scanf("%lf", &ATR);
	
	ART = bMR+BMR*ATR/2;
	printf("A area do trapézio retangulo é %lf\n", ART);
	
	CAR = BMR - bMR;
	HP = sqrt ((CAR*CAR)+(ATR*ATR));
	PTR = HP+BMR+bMR;
	printf("O perimetro do trapézio retangulo é %lf\n", PTR);
		

	
	system ("pause");
}

void circulo(){
	system("cls");
	printf("Por favor, digite o valor do raio do circulo: ");
	scanf("%f", &RC);
	
	AC = 3.14*(RC*RC);
	printf("A area do circulo é %f\n", AC);
	
	CC = (3.14*3.14)*RC;
	printf("O comprimento do circulo é %f\n", CC);
	
	
	
	system ("pause");
}

void coroacircular(){
	system("cls");
	printf("Por favor, digite o raio menor da coroa circular: ");
	scanf("%f", &Rm);
	printf("\nPor favor, digite o raio maior da coroa circular: ");
	scanf("%f", &RM);
	ACC = 3.14*((RM*RM)-(Rm*Rm));
	printf("\nA area da coroa circular é %f\n", ACC);
	
	
	system ("pause");
}

void triangulo(){
	system("cls");
	printf("Digite a base do triangulo :");
	scanf("%f", &BT);
	printf("Digite o lado esquerdo do triangulo: ");
	scanf("%f", &LE);
	printf("Digite o lado direito do triangulo: ");
	scanf("%f", &LD);
	
	pT = BT + LE + LD;
	printf("O perimetro do triangulo é %f\n\n", pT);
	X = pT/2;
	aT = sqrt (X*(X-BT)*(X-LD)*(X-LE));
	printf("a area do triangulo = %f\n\n", aT);
	system ("pause");
}

void trianguloequilatero(){
	system("cls");
    printf("Digite o lado do triangulo:");
	scanf("%f", &LT);
	
	X = LT + LT + LT;
	printf("O perimetro do triangulo é %.2f\n\n", X);
	
	Y = LT*1.7/2;	 
	printf("A altura do triangulo é %.2f\n\n", Y);
	
	Z = LT*Y/2;
	printf("A area do triangulo é %.2f\n\n", Z);
	system ("pause");
}

void trianguloretangulo(){
	system("cls");
	printf("Por favor, digite o valor da base: ");
	scanf("%f", &B);
	printf("Por favor, digite a altura: ");
	scanf("%f", &Altura);
	
	A = B*Altura/2;
	printf("A area é %f\n", A);
	
	Hipotenusa = sqrt(B*B+Altura*Altura);
	printf("A hipotenusa é %f\n", Hipotenusa);
	
	Ptr = B+Altura+Hipotenusa;
	printf("O perimetro e %f\n", Ptr);
	system ("pause");
}

void cubo(){
	system("cls");
	printf("Por favor, digite o valor do lado do cubo : ");
	scanf("%f", &LC);
	
	A = 6*LC*LC;
	printf("A área do cubo é %.2f\n", A);
	
	V = LC*LC*LC;
	printf("O volume do cubo é %.2f\n", V);
	D=LC*sqrt(3);
	printf("a diagonal e:%2.f\n", D);
	system ("pause");
		
	
	
}
void cone(){
	system("cls");
	printf("Por favor, digite o raio da base: ");
	scanf("%f", &RB);
	printf("Por favor, digite a altura: ");
	scanf("%f", &Altura);
	Geratriz = sqrt (RB*RB+Altura*Altura);
	ABc = 3.14*RB*RB;
	AL= 3.14*RB*Geratriz;
	A = 3.14*RB*(Geratriz+RB);
	printf("A area é %2.f\n", A);
	V = 3.14*RB*RB*Altura/3;
	printf("O volume é %2.f\n", V);
	system ("pause");
}
void esfera(){
	system("cls");
	printf("Por favor, digite o raio  da esfera: ");
	scanf("%f", &RE);
	
	AE = 4*3.14*(RE*RE);
	printf("A area da esfera é %f\n", AE);
	
	VE = 4/3*3.14*(RE*RE*RE);
	printf("O volume da esfera é %f\n", VE);
	system ("pause");
}
void cilindro(){
	system("cls");
	printf("Por favor, digite o raio do cilindro: ");
	scanf("%f", &Raio);
	printf("Por favor, digite a altura do cilindro: ");
	scanf("%f", &Altura);
	A = 2*3.14*Raio*Raio+2*3.14*Raio*Altura;
	printf("A area do cilindro é %f\n", A);
	V = 3.14*Raio*Raio*Altura;
	printf("O volume do cilindro é %f\n", V);
	system ("pause");
	
	
}
void prismadebaseretangular(){
	system("cls");
	printf("Por favor, digite o lado da base:");
	scanf("%f", &LB);
	printf("Por favor, digite a altura:");
	scanf("%f", &Altura);
	
	A = LB*LB*2+LB*Altura*4;
	printf("A area é %f\n", A);
	
	V = (LB*LB)*Altura;
	printf("O volume é %f\n", V);
	system ("pause");
}
void prismatriangularregular(){
	system("cls");
	printf("Por favor, digite o lado da base: ");
	scanf("%f", &LB);
	printf("Por favor, digite a altura: ");
	scanf("%f", &Altura);
	
	Alt = sqrt (3)/4*(LB*LB);
	Art = LB*Altura*3;
	
	A = Alt*2+Art;
	printf("A area é %f\n", A);
	
	V = Alt*Altura;
	printf("O volume é %f\n", V);

	system ("pause");
}
void prismahexagonalregular(){
	system("cls");
	printf("Por favor, digite o valor do lado da base: ");
	scanf("%f", &LB);
	printf("Por favor, digite o valor da altura: ");
	scanf("%f", &Altura);
	AB = 6*LB*LB*sqrt (3)/4;
	AA = 6*LB*Altura;
	A = AA+2*AB;
	printf("A area é %f\n", A);
	V = AB*Altura;
	printf("O volume é %f\n", V);
	
	
	
	
	system ("pause");
}
    void piramidequadrangular(){
	system("cls");
	printf("Por favor, digite o lado da base: ");
	scanf("%f", &LDB);
	printf("Por favor, digite a altura: ");
	scanf("%f", &Altura);
     
    V = (LDB*LDB)*Altura/3;
    printf("O volume é %f\n", V);
    
    Abase = LDB*LDB;
    Alateral = sqrt ((LDB/2)*(LDB/2)+(Altura*Altura));
    Atr = (LDB/2)*Alateral/2;
    Asoma = Atr*8;
    A = Abase+Asoma;
    printf("A area é %f\n", A);
    system ("pause");
}
    void paralelepipedoretangulo(){
	system("cls");
	printf("Por favor, digite o comprimento: ");
	scanf("%f", &Comp);
	printf("Por favor, digite a altura: ");
	scanf("%f", &Altura);
	printf("Por favor, digite a largura: ");
	scanf("%f", &Larg);
	
	A = 2*((Larg*Comp)+(Comp*Altura)+(Larg*Altura));
	printf("A area é %f\n", A);
	
	V = (Larg*Comp)*Altura;
	printf("O volume é %f\n", V);
	
	D = sqrt ((Larg*Larg)+(Comp*Comp)+(Altura*Altura));
	printf("A diagonal é %f\n", D);
	
	
	system ("pause");
}

int Menu()
{
	int x;
	system("cls");
	printf("\n\n \t C Á L C U L O    D E   Á R E A S   E   V O L U M E S");
	printf("\n\n\n \t\t  1 - Figuras Planas");
	printf("\n\n\n \t\t  2 - Figuras Espaciais");
	printf("\n\n\n \t\t  3 - sair");
	printf("\n\n\n \t  Escolha sua opção: ");
	scanf("%i", &x);
	return(x);
}


int MenuFigurasPlanas()
{
   int x;	
   system("cls");
   printf("\n\n\t\t   F I G U R A S   P L A N A S  \n\n");
   
   printf("\t\t\t 1 - QUADRADO \n\n");
   printf("\t\t\t 2 - RETÂNGULO \n\n");
   printf("\t\t\t 3 - LOSANGO \n\n");
   printf("\t\t\t 4 - TRAPÉZIO ISÓSCELES \n\n");
   printf("\t\t\t 5 - TRAPÉZIO RETÂNGULO \n\n");
   printf("\t\t\t 6 - TRAPÉZIO \n\n");
   printf("\t\t\t 7 - CÍRCULO \n\n");
   printf("\t\t\t 8 - COROA CIRCULAR \n\n");
   printf("\t\t\t 9 - TRIÂNGULO \n\n");
   printf("\t\t\t 10 - TRIÂNGULO EQUILÁTERO  \n\n");
   printf("\t\t\t 11 - TRIÂNGULO RETÂNGULO  \n\n");
   printf("\t\t  Escolha sua opção: ");
   scanf("%i", &x);
   
   
   switch(x)
   {
   	case 1: quadrado();
   	break;
   	case 2: retangulo();
   	break;
   	case 3: losango();
   	break;
   	case 4: trapezioisosceles();
   	break;
   	case 5: trapezioretangulo();
   	break;
   	case 6: trapezio();
   	break;
   	case 7: circulo();
   	break;
   	case 8: coroacircular();
   	break;
   	case 9: triangulo();
   	break;
   	case 10: trianguloequilatero();
   	break;
   	case 11: trianguloretangulo();
   	break;
   
   } 
   return(x);
}

int MenuFigurasEspaciais()
{
   int x;	
   system("cls");
   printf("\n\n\t\t   F I G U R A S   E S P A C I A I S  \n\n");
   
   printf("\t\t\t 1 - CUBO \n\n");
   printf("\t\t\t 2 - CONE \n\n");
   printf("\t\t\t 3 - ESFERA \n\n");
   printf("\t\t\t 4 - CILINDRO \n\n");
   printf("\t\t\t 5 - PRISMA DE BASE RETANGULAR \n\n");
   printf("\t\t\t 6 - PRISMA TRIANGULAR REGULAR \n\n");
   printf("\t\t\t 7 - PRISMA HEXAGONAL REGULAR \n\n");
   printf("\t\t\t 8 - PIRAMIDE QUADRANGULAR \n\n");
   printf("\t\t\t 9 - PARALELEPIPEDO RETANGULO \n\n");
   printf("\t\t  Escolha sua opção: ");
   scanf("%i", &x);




 switch(x)
   {
   	case 1: cubo();
   	break;
   	case 2: cone();
   	break;
   	case 3: esfera();
   	break;
   	case 4: cilindro();
   	break;
   	case 5: prismadebaseretangular();
   	break;
   	case 6: prismatriangularregular();
   	break;
   	case 7: prismahexagonalregular();
   	break;
   	case 8: piramidequadrangular();
   	break;
   	case 9: paralelepipedoretangulo();
   	break;
   } 
   return(x);
}




main()
{
  int opcao;
  setlocale(LC_ALL, "Portuguese"); 
  opcao = Menu();
  while(opcao!= 3)
  {
     if(opcao == 1) MenuFigurasPlanas();
	 if(opcao == 2) MenuFigurasEspaciais();
     opcao = Menu();	
  }
}
