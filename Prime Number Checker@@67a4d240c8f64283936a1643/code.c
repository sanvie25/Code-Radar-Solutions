int isPrime(num){
   int n;
   for(n=2;n<num;n++){
    if(num%n==0){
       return 1;
    }
   }
   return 0;
}