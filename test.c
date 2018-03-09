int[] max(double[] input, int size) {
   int output[size];
   int i;

   for ( i = 0; i < 10; i++ ) {
  	 modf(input[i], *output[i]);
   }

   return output; 
}