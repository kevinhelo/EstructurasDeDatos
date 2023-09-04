#include <stdio.h>



int inverso(a){
    int ans=0,saved;

    while (a !=0)
    {
        saved = a % 10;
        ans = ans * 10 + saved;
        a = a/10;
    }

    return ans;
}

int poligrofo(a,b){

    int ans = 0;
    if (a == b){
        ans = 0;
    }else{
        ans=1;
    }

    return ans;
}

int main(){
    
    int Repe,i,sum=0;
    int valores,inver;
    scanf("%d",&Repe);


    for (i=0;i<Repe;i++){
        scanf("%d",&valores);

        int flag = 1;
        int ejecucion = 0;

        while (flag!=0)
        {
            inver = inverso(valores);

            sum = valores + inver;
            flag = poligrofo(valores,inver);

            valores = sum;
            ejecucion++;


        }
        printf("%d %d\n",ejecucion-1,inver);
        
    }
    
    return 0; 
}
