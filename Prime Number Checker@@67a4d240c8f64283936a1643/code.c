int isPrime(int num){
   int n;
   for(n=2;n<num;n++){
    if(num%n==0){
       return 0;
    }
   }
   return 1;
}