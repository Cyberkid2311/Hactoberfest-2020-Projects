import java.util.Arrays;

public class BubbleSort{
    public static long[] bubbleSort(int[] array) {
            long N = array.length;
            int temp;
            int mov=0;
            int comp=0;
            boolean changed = true;
            for(int i = 0; changed && i < N-1 ; i ++) {
               changed = false;
               for(int j = 0; j < N - i - 1; j ++) {
                   comp++;
                  if(array[j] > array[j + 1]) {
                     changed = true;
                     //swap(array, j, j + 1);
                     temp=array[j];
                     array[j]=array[j+1];
                     array[j+1]=temp;
                     mov+=3;
                  }
                }
            }
         return new long[]{mov,comp};
    }
      
    public static void main(String[] Args){
        int array[]={4,5,7,8,4,1,2,5,6,4,8,7,4,5,9,3,6};
        long data[];
        /*for(int n = 100; n<=6400 ; n*=2){
            long movProm=0;
            long compProm=0;
            for(int e=0; e<n/10;e++){
                array=Sesion1.randomArray(n, -n, n);*/
                data=bubbleSort(array);
               // compProm+=data[0];
               // movProm+=data[1];
               System.out.println(Arrays.toString(array));
         /*   }
            System.out.printf("%d,%d,%d\n",n,compProm/n,movProm/n);
        }*/
        
    }
}