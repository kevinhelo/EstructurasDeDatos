/*B - PROBLEM B 
T = TIEMPO
V = VELOCIDAD (m/s)
S = DESPLAZAMIENTO
*/
#include <stdio.h>
#include <math.h>

int main() {
    int entrada;
    int sum = 1;
    
    while (1) {
        scanf("%d", &entrada);
        
        if (entrada == 0) {
            break; // Salir del bucle cuando se ingresa 0
        }
        
        double valor1, valor2, valor3;
        double u, v, t, a, s;

        scanf("%lf %lf %lf", &valor1, &valor2, &valor3);

        if (entrada==1){
            u = valor1;
            v = valor2;
            t = valor3;

            s= (v-u)/t;
            a= (u*t) + 0.5 * s * t * t;
            printf("Case %d: %.3lf %.3lf \n",sum,a,s);
            sum++;

        }else if (entrada ==2){
           u= valor1;
           v =valor2;
           a = valor3;

           
           t = (v-u)/a;
           s = u * t + 0.5 * a * t * t;

           printf("Case %d: %.3lf %.3lf \n",sum,s,t);
           sum++;
        
        }else if (entrada ==3){
            u= valor1;
            a = valor2;
            s = valor3;

            v = sqrt((u*u)+(2*a)*s);
            t = (v-u)/a;
            printf("Case %d: %.3lf %.3lf \n",sum,v,t);
            sum++;

        }else if (entrada ==4){
            v= valor1;
            a= valor2;
            s = valor3;

            u = sqrt(pow(v,2)-2*a*s);
            t = (v-u)/a;
            printf("Case %d: %.3lf %.3lf \n",sum,u,t);
            sum++;

        }
    }
    
    return 0;
}