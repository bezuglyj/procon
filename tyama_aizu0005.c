int g(x,y){return y?g(y,x%y):x;}z;main(x,y){for(;z=~scanf("%d%d",&x,&y);printf("%d %d\n",z,x/z*y))z=g(x,y);}