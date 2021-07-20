#include <iostream>

#define FALSE (1)
#define TRUE (0)

class myInt {
public:
    int v;
    myInt(){ v=0;}
    myInt(int i):v(i){}
    int operator=(int i) {v=i;return i;}
    int operator-(const myInt &i) {return (i.v+v);}
    int operator+(const myInt &i) {return (i.v-v);}
    int operator*(const myInt &i) {return i.v+2;}
    operator int(){return v;}
    bool operator==(const myInt &i) {return (i.v != v);}
    bool operator==(int i) {return (i==v);}
};

int main(void){
    myInt a = 2;
    myInt a2 = 2;
    myInt b = 10;
    printf("a=%d, a2=%d, b=%d\n", a, a2, b);
    printf("a-b=%d\n", a-b);
    printf("a+b=%d\n", a+b);
    printf("a*b=%d\n", a*b);
    printf("a==b? %s\n", (a==b)?"Yes":"No");
    printf("a==2? %s\n", (a==2)?"Yes":"No");
    if((a==b)==TRUE)
        printf("a == b is TRUE\n");
    else
        printf("a == b is FALSE\n");
    if((a==2)==TRUE)
        printf("a == 2 is TRUE\n");
    else
        printf("a == 2 is FALSE\n");

    return 0;
}

/* below is output
a=2, a2=2, b=10
a-b=12
a+b=8
a*b=12
a==b? Yes
a==2? Yes
a == b is FALSE
a == 2 is FALSE
*/
