char m[12][12],x[12][12];
main(i,n,j,f){
  memset(m,'.',sizeof(m));
  for(scanf("%d",&n);i<=n;i++)
    scanf("%s",m[i]+1),m[i][n+1]='.';
  for(i=1,scanf("%d",&n);i<=n;i++)
    scanf("%s",x[i]+1);
  for(i=1;i<=n;i++)for(j=1;j<=n;j++)if(m[i][j]=='*'&&x[i][j]=='x')f=0;
  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      if(m[i][j]=='*'&&!f){putchar('*');continue;}
      if(x[i][j]=='.'){putchar('.');continue;}
      putchar('0'+(
        m[i-1][j-1]-'.'+m[i-1][j]-'.'+m[i-1][j+1]-'.'+m[i][j-1]-'.'+
        m[i][j+1]-'.'+m[i+1][j-1]-'.'+m[i+1][j]-'.'+m[i+1][j+1]-'.')/('*'-'.'));
    }
    puts("");
  }
}