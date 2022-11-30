//https://www.codingame.com/ide/puzzle/ascii-art
int main()
{
    int L;
    scanf("%d", &L);
    int H;
    scanf("%d", &H); fgetc(stdin);
    char T[257];
    scanf("%[^\n]", T); fgetc(stdin);
    for (int i = 0; i < H; i++) {
        char ROW[1025];
        scanf("%[^\n]", ROW); fgetc(stdin);
        int len = -1;
        while(T[++len] != '\0');

        for(int k = 0; k < len; k++)
        {
            char c = T[k];
            for(int j =0 ; j < L;++j )
            {
                int diff = 0;
                if(c < 'A' || (c > 'Z' && c <'a') || c > 'z')
                {
                    diff = 26;
                }
                else
                {
                    diff = c < 'a' ? c - 'A' : c - 'a';
                }
                
                printf("%c",ROW[L * diff + j]);
            }
        }


        printf("\n");
    }

    return 0;
}
