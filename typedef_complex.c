#include <stdio.h>
typedef struct{
    float real;
    float imag;
}complex;


complex add_complex(complex,complex);
void read_compelx(complex *);
void write_complex(complex);

complex add_complex(complex a,complex b){
    complex c;
    c.real=a.real+b.real;
    c.imag=a.imag+b.imag;
    return c;
}


void read_complex(complex *t){
    printf("Enter real and imaginary part:\n");
    scanf("%f%f",&(t->real),&(t->imag));
}

void write_complex(complex t){
    char c='+';
    if (t.imag<0){
        char c='-';
    }
    printf("%f%c%fj\n",t.real,c,t.imag);
}

int main(){
    complex a,b;
    read_complex(&a);
    read_complex(&b);
    write_complex(add_complex(a,b));
}
