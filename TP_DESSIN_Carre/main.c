#define cara1 'X'
#define cara2 '-'

int main()
{

    //Longueur et hauteur du carre.
    long l=0;
    long h=0;
    int i=0;
    int j=0;

    printf("Longueur de votre carré:\n");
    scanf("%d",&l);
    printf("Hauteur de votre carré:\n");
    scanf("%d",&h);

    for(i=0;i<h;i++){

        //ligne du carre.
        if(i==0||i==h-1){
            for(j=0;j<l;j++){
                printf("%c",cara1);
            }
            }
        else{
            printf("%c",cara1);
            for(j=0;j<l-2;j++){
                printf("%c",cara2);
            }
            printf("%c",cara1);
            }

        printf("\n");

        }
    //le programme ne se fermera pas.
    return 0;
}
