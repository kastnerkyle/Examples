void usage()
{
   printf("Usage is prog [options]\n");
   printf("       -c  <c_opt> (def='Hello'\n");
   printf("       -a  <a_opt>\n");
   printf("       -d  <d_opt>\n");
   exit(1);
}

int main(int argc, char* argv[]) {
    int a=1;
    char c_opt[32]="Hello";
    char a_opt[32]="none";
    char d_opt[32]="none";
    int needusage=1;

    while ( a < argc )
    {
        if (argv[a][0] != '-')
        {
            // ignore
            continue;
        }
        switch(argv[a++][1])
        {
            case 'c':
                if (argc>a) strncpy(c_opt,argv[a++],32);
                break;
            case 'a':
                if (argc>a) strncpy(a_opt,argv[a++],32);
                break;
            case 'd':
                if (argc>a) strncpy(d_opt,argv[a++],32);
                needusage=0;
                break;
        }
    }
    if (needusage) usage();
    printf("-c is %s, -a is %s, -d is %s\n",
           c_opt,a_opt,d_opt);
    return 0;
}

