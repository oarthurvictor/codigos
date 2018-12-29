long int MDC (int x, int y){
   int resto   
   resto = x %y;
   if (resto == 0)
      return y;
   else 
       MDC( y, resto);
}
