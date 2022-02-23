/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cctype>
#include <cstdlib>

using namespace std;
//using std::stoi;


int main()
{
    unsigned short num, numA, numB, divi5;
    int N;
    float numfA, numfB, div5;

    cout << "Ingrese número de ejercicio ";
    cin >> num;

    switch(num){
    
            case 1:{
                 cout<<"Ingrese numero A: ";
                 cin >> numA;
                 cout<<"Ingrese numero B: ";
                 cin >> numB;
                 cout << "El residuo de la división "<<numA<<"/"<<numB<<" es: "<<numA%numB;
            }
            break;
        
            case 2:{
                  cout<<"Ingrese un número: ";
                  cin >> N;
                  if(N%2==0) cout <<N<< " es par";
                  else cout <<N<< " es impar";}
            break;
        
            case 3: {
                  cout<<"Ingrese numero A: ";
                  cin >> numA;
                  cout<<"Ingrese numero B: ";
                  cin >> numB;
                  if (numA>numB){
                      cout<<"El numero mayor es A: "<<numA;
                  } else if (numB>numA){
                      cout<<"El numero mayor es B: "<<numB;
                  } else {
                      cout<<"Los numeros A y B son iguales"; 
                      }
            }
            break;
        
            case 4:{
                cout<<"Ingrese numero A: ";
                cin >> numA;
                cout<<"Ingrese numero B: ";
                cin >> numB;
                if (numA<numB){
                    cout<<"El numero menor es A: "<<numA;
                } else if (numB<numA){
                    cout<<"El numero menor es B: "<<numB;
                } else {
                    cout<<"Los numeros A y B son iguales"; 
                    }
            }
            break;
            
            case 5:{
                cout<<"Ingrese numero A: ";
                cin >> numfA;
                cout<<"Ingrese numero B: ";
                cin >> numfB;
                div5 = numfA/numfB;
                divi5 = (int) div5; //numfA/numfB;
                if((div5-divi5)>=0.5){
                    cout <<divi5+1;
                }else{
                    cout << numfA<<"/"<<numfB<<"="<<divi5;
                }
            }
            break;
            
            case 6:{
                cout<<"Ingrese numero A: ";
                cin >> numA;
                cout<<"Ingrese numero B: ";
                cin >> numB;
                int  com_mult=1;
                for (unsigned short i=1;i<=numB;i++){
                    com_mult=com_mult*numA;
                }
                cout << "La potencia de " <<numA<<" a la "<<numB<<" es: " << com_mult;
            }
            break;
            
            case 7:{
                cout<<"Ingrese numero N: ";
                cin >> N;
                int com_sum=0;
                for (unsigned short i=1;i<=N;i++){
                    com_sum=com_sum+i;
                }
                cout << "La sumatoria desde 0 hasta " << N <<" es: "<<com_sum;  
            }
            break;
            
            case 8:{
                cout<<"Ingrese numero N: ";
                cin >> N;
                int com_mult=1;
                for (unsigned short i=1;i<=N;i++){
                    com_mult=com_mult*i;
                }
                cout << "El factorial de " << N <<" es: "<<com_mult;  
            }
            break;
            
            case 9:{
                cout<<"Ingrese número N: ";
                cin>>N;
                float perimC=2*3.1416*N;
                float areaC=3.1416*N*N;
                cout<<"Perimetro: "<<perimC<<endl;
                cout<<"Area: "<<areaC;
                
            }
            break;

            case 10:{
                 int i=1;
                 cout<<"Ingrese un número: ";
                 cin>>N;
                 cout<<"Múltiplos de "<<N<<" menores que 100:"<<endl;
                 while(N*i<=100){
                     cout<< N*i << endl;
                     i++;
                 }
            }
            break;
            
            case 11:{
                cout<<"Ingrese numero N: ";
                cin >> N;
                for (unsigned short i=1;i<=10;i++){
                    cout<<N<<"*"<<i<<"="<<N*i<<endl;
                }
            }
            break;                
            
            case 12:{
                cout<<"Ingrese numero N: ";
                cin >> N;
                int com_mult=1;
                for (unsigned short i=1;i<=5;i++){
                    com_mult=com_mult*N;
                    cout<<N<<"^"<<i<<"="<<com_mult<<endl;
                }    
            }
            break;
            
            case 13:{
                cout<<"Ingrese numero N: ";
                cin >> N;
                cout<<"Los divisores de "<<N<<" son: "<<endl;
                for (unsigned short i=1; i<=N; i++){
                    if (N%i==0) cout << i << endl;
                }
            }
            break;
            
            case 14:{
                for (unsigned short i=1; i<=50; i++) cout<<i<<"    "<<50+1-i<<endl;    
            }
            break;
            
            case 15:{
                bool band15=true;
                int com_sum=0;
                while (band15){
                    cout<<"Ingrese numero N: ";
                    cin >> N;
                    if (N!=0){
                        com_sum=com_sum+N;
                    }else{
                        band15=false;
                    }
                }
                cout<<"El resultado de la sumatoria es "<<com_sum;    
            }
            break;
            
            case 16:{
                bool band15=true;
                float com_sum=0;
                int cont=0;
                while (band15){
                    cout<<"Ingrese numero N: ";
                    cin >> N;
                    if (N!=0){
                        com_sum=com_sum+N;
                        cont=cont+1;
                    }else{
                        band15=false;
                    }
                }
                cout<<"El promedio es "<<com_sum/cont;    
            }
            break;
            
            case 17:{
                bool band15=true;
                int com_mayor=0;
                while (band15){
                    cout<<"Ingrese numero N: ";
                    cin >> N;
                    if (N!=0){
                        if (N>com_mayor) com_mayor=N;
                    }else{
                        band15=false;
                    }
                }
                cout<<"El numero mayor es "<<com_mayor;    
            }
            break;
            
            case 18:{
                cout<<"Ingrese numero N: ";
                cin >> N;
                bool band18=true;
                bool is_perfect=false;
                int i=1;
                while(band18){
                    if (i*i==N){
                        band18=false;
                        is_perfect=true;
                    } else if (i==N){
                        band18=false;
                    }
                    i++;
                }
                if (is_perfect==true){
                    cout<<"El numero "<<N<<" es perfecto";
                }else{
                    cout<<"El numero "<<N<<" no es perfecto";
                }
            }
            break;
            
            case 19:{
                cout<<"Ingrese numero N: ";
                cin >> N;
                bool band18=true;
                bool is_primo=true;
                int i=2;
                while(band18){
                    if (N>i && N%i==0){
                        band18=false;
                        is_primo=false;
                    } else if (i==N){
                        band18=false;
                    }
                    i++;
                }
                if (is_primo==true){
                    cout<<"El numero "<<N<<" es primo";
                }else{
                    cout<<"El numero "<<N<<" no es primo";
                }
            }
            break;
            
            case 20:{
                cout<<"Ingrese numero N: ";
                cin >> N;
                int resp=0;
                bool a;
                int n=N;
                
                while(n>0){
                    resp=resp+n%10;
                    resp=resp*10;
                    n=n/10;
                }
                resp=resp/10;
                
                resp==N?cout<<"El número "<<N<<" es palíndromo":cout<<"El número "<<N<<" no es palíndromo";
            }
            break;
            
            case 21:{
                cout<<"Ingrese caracter ";
                char c;
                cin>> c;
                if(int(c)>=65 && int(c)<=90){
                    c=c+32;
                }else if(int(c)>=97 && int(c)<=122){
                    c=c-32;
                }
                cout<<"La respuesta es: "<<c;
            }
            break;
            
            case 22:{
                cout<<"Ingrese cantidad de segundos: ";
                cin >> N;
                int horas = N / 3600;
                int sob_horas= N % 3600;
                int mins= sob_horas / 60;
                int segs= sob_horas % 60;
                cout<<horas<<":"<<mins<<":"<<segs;
            }
            break;
            
            case 23:{
                cout<<"Ingrese numero A: ";
                cin >> numA;
                cout<<"Ingrese numero B: ";
                cin >> numB;
                int mcm;
                for (unsigned short i=numA*numB; i>=1;i--){
                    if (i%numA==0 && i%numB==0) mcm=i;
                }
                cout << "El MCM de "<<numA<<" y "<<numB<<" es: "<<mcm;
            }
            break;
            
            case 24:{
                 cout<<"Ingrese la dimension del lado del cuadrado: ";
                 cin >> N;
                 for (unsigned short fil=0;fil<N;fil++){ //recorro fila
                     for (unsigned short col=0; col<N;col++){ //recorro columnas de la fila
                         if (fil==0 || col==0 || fil==N-1 || col== N-1 ) cout << '+'; // && || para op binarias and or para op bits
                         else cout << ' ';
                     }
                     cout<< endl;
                 }
            }
            break;
            
            case 25: {
                cout<<"Ingrese numero N: ";
                cin >> N;
                int dig=0;
                int n=N;
                
                while(N>0){
                    N/=10;
                    dig+=1;
                }
                
                cout<<n<<" tiene "<<dig<<" digitos";
            }
            break;
            
            case 26: {
                int ladA, ladB, ladC;
                cout<<"Ingrese longitud de lado A: ";
                cin>>ladA;
                cout<<"Ingrese longitud de lado B: ";
                cin>>ladB;
                cout<<"Ingrese longitud de lado C: ";
                cin>>ladC;
                bool posTri=true;
                
                if ((ladA+ladB<=ladC) || (ladB+ladC<=ladA) || (ladA+ladC<=ladB)){
                    posTri=false;
                    cout<<"Las longitudes ingresadas no forman un triángulo.";
                }
                
                if(posTri){
                    if (ladA==ladB && ladB==ladC){
                        cout<<"Se forma un triángulo equilátero";
                    }else if (ladA==ladB || ladB==ladC || ladA==ladC){
                        cout<<"Se forma un triángulo isósceles";
                    }else if (ladA!=ladB && ladB!=ladC && ladA!=ladC){
                        cout<<"Se forma un triángulo escaleno";
                    }
                }
                
            }
            break;
            
            case 27: {
                float numA, numB;
                cout<<"Ingrese el primer número de la operación: ";
                cin>>numA;
                cout<<"Ingrese el segundo número de la operación: ";
                cin>>numB;
                cout<<"Ingrese signo de la operacion a realizar: ";
                char op;
                cin>>op;
                
                if(op=='+'){
                    cout<<numA<<op<<numB<<"="<<numA+numB;
                }else if(op=='-'){
                    cout<<numA<<op<<numB<<"="<<numA-numB;
                }else if(op=='*'){
                    cout<<numA<<op<<numB<<"="<<numA*numB;
                }else if(op=='/'){
                    cout<<numA<<op<<numB<<"="<<numA/numB;
                }else{
                    cout<<"Operación no encontrada";
                }
            }
            break;
            
            case 28: {
                cout<<"Ingrese el numero de elementos a considerar en la aproximacion Pi ";
                cin>>N;
                float com_sum=0;
                for(short i=0; i<N;i++){
                    if (i%2!=0) com_sum=com_sum-(1.0/(2*i+1));
                    else com_sum=com_sum+(1.0/(2*i+1));
                }
                float pi=4.*com_sum;
                cout<<"pi es aproximadamente: "<<pi;
            }
            break;
            
            case 29: {
                int lim_min=0;
                int lim_max=100;
                int opc=lim_max/2;
                char opc_ing;
                bool adiv=false;
                while (!adiv){
                    cout<<"El numero es "<<opc<<"?";
                    cin>>opc_ing;
                    if (opc_ing=='>'){
                        lim_min=opc;
                        lim_max=lim_max;
                        opc=lim_min+((lim_max-lim_min)/2);
                    } else if (opc_ing=='<'){
                        lim_min=lim_min;
                        lim_max=opc;
                        opc=lim_min+((lim_max-lim_min)/2);
                    }else{
                        adiv=true;
                    }
                       
                }
                cout<<"el numero es "<<opc;
            }
            break;
            case 30: {
                int lim_min=0;
                int lim_max=100;
                int opc;
                int num_ver=rand() % 100;
                //cout<<num_ver<<endl;
                bool adiv=false;
                int cont_int=0;
                cout<<"Ingresa el número que crees: "<<endl;
                while (!adiv){
                    cont_int=cont_int+1;
                    cin>>opc;
                    cout<<"El numero es "<<opc<<"?"<<endl;
                    if (opc>num_ver){
                        cout<<"El numero incognito es menor"<<endl;
                    } else if (opc<num_ver){
                        cout<<"El numero incognito es mayor"<<endl;
                    }else{
                        cout<<"Ese es el numero!"<<endl;
                        adiv=true;
                    }
                       
                }
                cout<<"el numero de intentos fue "<<cont_int;
            }
            break;
            
            case 31:{
                char let;
                cout<<"Ingrese el carácter: ";
                cin>>let;
                
                if (int(let)==65 ||int(let)==69 ||int(let)==73 ||int(let)==79 ||int(let)==85 ||int(let)==97 ||int(let)==101 ||int(let)==105 ||int(let)==111 ||int(let)==117 ){
                    cout<<let<<" es una vocal";
                }else if((int(let)>=65 && int(let)<=90)||(int(let)>=97 && int(let)<=22)){
                    cout<<let<<" es una consonante";
                }else{
                    cout<<let<<" no es una letra";
                }
            }
            break;
            
            case 32:{
                int cant;
                cout<<"Ingrese cantidad de dinero: ";
                cin>>cant;
                int resid;
                
                cout<<"50.000: "<<cant/50000<<endl;;
                resid=cant%50000;
                
                cout<<"20.000: "<<resid/20000<<endl;
                resid=resid%20000;
                
                cout<<"10.000: "<<resid/10000<<endl;
                resid=resid%10000;
                
                cout<<"5.000: "<<resid/5000<<endl;
                resid=resid%5000;
                
                cout<<"2.000: "<<resid/2000<<endl;
                resid=resid%2000;
                
                cout<<"1.000: "<<resid/1000<<endl;
                resid=resid%1000;
                
                cout<<"500: "<<resid/500<<endl;
                resid=resid%500;
                
                cout<<"200: "<<resid/200<<endl;
                resid=resid%200;
                
                cout<<"100: "<<resid/100<<endl;
                resid=resid%100;
                
                cout<<"50: "<<resid/50<<endl;
                resid=resid%50;
                
                cout<<"Faltante: "<<resid<<endl;
                
            }
            break;
            
            case 33:{
                int mes, dia;
                cout<<"Ingrese mes: ";
                cin>>mes;
                cout<<"Ingrese dia: ";
                cin>>dia;
                
                if ((dia>=1 && dia<=31) && (mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12 )){
                    cout<<dia<<"/"<<mes<<" es una fecha válida";
                }else if ((dia>=1 && dia<=30) && (mes==4 || mes==6 || mes==9 || mes==11)){
                    cout<<dia<<"/"<<mes<<" es una fecha válida";
                }else if ((dia>=1 && dia<=28) && (mes==2)) {
                    cout<<dia<<"/"<<mes<<" es una fecha válida";
                }else if ((dia>=1 && dia==29) && (mes==2)) {
                    cout<<dia<<"/"<<mes<<" posiblemente bisiesto";
                } else {
                    cout<<dia<<"/"<<mes<<" no es una fecha válida";   
                }    
            }
            break;
            
            case 34:{
                cout<<"Ingrese primer tiempo: ";
                cin>>numA;
                cout<<"Ingrese segundo tiempo: ";
                cin>>numB;
                
                int mintA=numA%100;
                int mintB=numB%100;
                int horA=numA/100;
                int horB=numB/100;
                
                if (!((mintA>=0 && mintA<=59) && (horA>=0 && horA<=23))){
                    cout<<numA<<" es formato inválido"<<endl;
                    break;
                }
                
                if (!((mintB>=0 && mintB<=59) && (horB>=0 && horB<=23))){
                    cout<<numB<<" es formato inválido"<<endl;
                    break;
                }
                
                int mintR=(mintA+mintB)%60;
                int horR=((mintA+mintB)/60+horA+horB)%24;
                
                mintR==0?cout<<horR<<"0"<<mintR:cout<<horR<<mintR;
            }
            break;
            
            case 35:{
                   short u=1;
                   do{
                       cout<<"Ingrese dimensiones del arreglo: ";
                       cin>>N;
                   }while(N%2==0 || N<0);
                   
                   for (int fil=0;fil>=0;fil+=u){
                       for(int col=0;col<N;col++){
                           if(col>=N/2-fil && col<=N/2+fil) cout<<'*';
                           else cout<<' ';
                       }
                       if(fil==N/2) u=-1;
                       cout << endl; 
                   }
            }
            break;
            
            case 36:{
                cout<<"Ingrese número de elementos para cálculo de euler: ";
                cin>>N;
                float mult;
                float comp=2;
                for (int i=2;i<N;i++){
                    mult=1.;
                    for (int j=1;j<=i;j++){
                        mult=mult*j;
                    }
                    comp=comp+1./mult;
                }
                cout<<"e es aproximadamente "<<comp;
            }
            break;
            
            case 37:{
                cout<<"Ingrese número: ";
                cin>>N;
                int fibo=0, comp=0, sumpar=0, par=0;
                int comp_ant=1,comp_antt=1;
                while(par<=N){
                    comp=comp_ant+comp_antt;
                    //cout<<"comp es: "<<comp<<endl;
                    if (comp%2==0 && comp<=N){sumpar=sumpar+comp;}
                    fibo=fibo+comp;
                    comp_antt=comp_ant;
                    //cout<<comp_antt<<" es comp_antt"<<endl;;
                    comp_ant=comp;
                    //cout<<comp_ant<<" es comp_ant"<<endl;;
                    if(comp%2==0){par=comp;}
                    //cout<<"par es"<<par<<endl;
                }
                cout<<"El resultado de la suma es: "<<sumpar;
            }
            break;
            case 38:{
                int numC;
                cout<<"Ingrese primer número: ";
                cin>>numA;
                cout<<"Ingrese segundo número: ";
                cin>>numB;
                cout<<"Ingrese número limite: ";
                cin>>numC;
                
                int sumMult=0;
                
                if(numA<=numC){
                    cout<<numA;
                    sumMult=sumMult+numA;
                    int i=2;
                    while(i*numA<=numC){
                        cout<<"+"<<i*numA;
                        sumMult=sumMult+i*numA;
                        i++;
                    }
                }
                
                int i=1;
                while(i*numB<numC){
                    if (i*numB%numA!=0){
                        cout<<"+"<<i*numB;
                        sumMult=sumMult+i*numB;
                    }
                    i++;
                }
                cout<<"="<<sumMult;
            }
            break;
            
            case 39:{
                cout<<"Ingrese número: ";
                cin>>N;
                int nume,multe;
                int sump=0;
                while(N>0){
                    nume=N%10;
                    multe=1;
                    for (int k=1;k<=nume;k++){multe=multe*nume;}
                    sump=sump+multe;
                    N=N/10;
                }
                cout<<"El resultado de la suma es: "<<sump;
            }
            break;
            
            case 40:{
                cout<<"Ingrese número: ";
                cin>>N;
                int primo=0, Num=1, numprimo=0;
                while(primo<=N){
                    int vecesmult=0;
                    for (int i=1;i<=Num;i++){
                        if(Num%i==0){vecesmult+=1;}
                    }
                    (vecesmult==2 && primo<=N)?primo+=1:primo+=0;
                    (vecesmult==2 && primo<=N)?numprimo=Num:numprimo=numprimo;
                    Num+=1;
                    //cout<<numprimo<<endl;
                }
                cout<<"El número primo de posición "<<N<<", es "<<numprimo;
            }
            break;
            
            case 41: {
                cout<<"Ingrese número: ";
                cin>>N;
                int cont,mult=N-1,j;
                bool band;
                
                while(band){
                    mult++;
                    cont=0;
                    for (j=1;j<=N;j++){
                        if(mult%j==0){
                            cont++;
                        }
                    }
                    (cont==N)?band=false:band;
                }
                
                cout<<"El mínimo común múltiplo es: "<<mult;
            }
            break;
            
            case 42: {
                cout<<"Ingrese número: ";
                cin>>N;
                int primo=0, numf;
                for (int i=1;i<=N;i++){
                    if(N%i==0){
                        numf=0;
                        for (int k=1;k<=i;k++){
                            (i%k==0)?numf=numf+1:numf=numf;
                        }
                        (numf==2)?primo=i:primo=primo;
                        //cout<<N<<" "<<i<<" "<<numf<<" "<<primo<<endl;
                        
                    }
                }
                cout<<"El mayor factor primo de "<<N<<" es "<<primo;
            }
            break;
            
            case 43:{
                cout<<"Ingrese número: ";
                cin>>N;
                int primo=0, numf;
                for (int i=1;i<=N;i++){
                        numf=0;
                        for (int k=1;k<=i;k++){
                            (i%k==0)?numf=numf+1:numf=numf;
                        }
                        (numf==2)?primo=primo+i:primo=primo;
                }
                cout<<"El resultado de la suma es "<<primo;
            }
            break;
            
            case 44:{
                int palin;
                int max_palin=0;
                for (int i=100;i<=999;i++){
                    for (int j=100;j<=999;j++){
                        int resp=0;
                        bool a;
                        N=i*j;
                        int n=N;
                        while(n>0){
                            resp=resp+n%10;
                            resp=resp*10;
                            n=n/10;
                        }
                        resp=resp/10;
                        if(resp==N && resp>max_palin){
                            numA=i;
                            numB=j;
                            palin=N;
                            max_palin=N;
                        }
                    }
                }
                cout<<numA<<"*"<<numB<<"="<<palin;
            }
            break;
            
            case 45:{
                cout<<"Ingrese el lado del cuadrado: ";
                cin>>N;
                unsigned short num1;
                for (num1=0; N>1;N-=2){
                    for (int i=0;i<4;i++) num1+= N*N-i*(N-1);
                }
                cout << "El valor de la suma de las diagonales es: "<<num1+1;
            }
            break;
            
            case 46:{
                int k;
                cout<<"Ingrese número k: ";
                cin>>k;
                
                int max_elem=0;
                int j=0;
                for (int i=1; i<=k;i++){
                    int cont=0;
                    int elem=i;
                    int next_elem;
                    //cout<<"La i es"<<i<<endl;
                    while(elem>1){
                        if(elem%2==0) next_elem=elem/2; else next_elem=3*elem+1;
                        //cout<<next_elem<<',';
                        elem=next_elem;
                        cont++;
                    }
                    //cout<<endl;
                    if (cont>max_elem){
                        max_elem=cont;
                        j=i;
                    }
                }
                cout<<"La máxima cantidad de elementos es: "<<max_elem+1<<endl;
                cout<<"Elemento inicial j es: "<<j<<endl;
                cout<<"La serie impresa es: "<<endl;

                int elem=j;
                int next_elem;
                cout<<elem;
                while(elem>1){
                    if(elem%2==0) next_elem=elem/2; else next_elem=3*elem+1;
                    cout<<','<<next_elem;
                    elem=next_elem;
                }
            }
            break;
            
            case 47:{
                cout<<"Ingrese número: ";
                cin>>N;
                int nt, n=1, divsnf=0;
                bool band=true;
                while(band){
                    nt=n*(n+1)/2;
                    int divsn=0;
                    for(int i=1;i<=nt;i++){
                        (nt%i==0)?divsn=divsn+1:divsn=divsn;
                    }
                    
                    if (divsn>N){
                        band=false;
                        divsnf=divsn;
                    }
                    n++;
                }
                cout<<"El número es: "<<nt<<" que tiene "<<divsnf<<" divisores.";
            }
        
    }
    return 0;
}






