int isPrime(int num){
   int n;
   if(num == 1 
   || num ==0 ){return 0;}
   for(n=2;n<num;n++){
    if(num%n==0){
       return 0;
    }
   }
   return 1;
}