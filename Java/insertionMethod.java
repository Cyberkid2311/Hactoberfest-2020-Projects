//import java.util.Arrays;

public class insertionMethod{
    public static long insertion(int[] a){
        int pivot;
        int j;
        long moves = 0;
        for(int i = 1;i < a.length; i++){
            pivot = a[i];   // Tetha(N - 1)
            moves++;
            j=i-1;
            while(j >= 0 && a[j] > pivot){  //si el primer valor es falso, && no revisa el segundo
                a[j+1] = a[j];  //Peor caso: O(1 + 2 + ... N - 1) = O( N(N-1)/2 ) 
                moves++;
                j--;            //Mejor caso: 0
            }
            a[j+1] = pivot; //Tetha(N - 1)
            moves++;
        }
        //System.out.println(a.length + "\t"+moves);
        return moves;
    }
//  Tmov(N) = 2(N - 1) + N(N-1)/2 = O(N^2)      si está ordenado
//  Tmov(N) = 2(N - 1)            = Omega(N)    si no está ordenado

    public static boolean isSorted(int[] a){
//      TisSorted(N) = Omega(1) El primer elemento es mayor que el segundo
//      TisSorted(N) = O(N)     El arreglo está ordenado
        for(int i = 0; i < a.length - 1; i++){
            if(a[i] > a[i+1] ){
                return false;   
            }
        }
        return true;
    }

    public static void main(String[] args){
        //int[] array={4,7,1,8,2,0,6,3,-2,9,5,0,1,-1};
        //final int n = 10000;
        for(int n = 5000; n <= 320_000; n *= 2){
            int runs = n/100;
            double avgMoves = 0;
            for(int run =1; run<= runs;run++){
                //int[] array = Sesion1.randomArray(n, 1, n);
            
                //long start = System.currentTimeMillis();
              //  long moves = insertion(array);
                //System.out.println(isSorted(array));
               // avgMoves += moves;
            }
            avgMoves /= runs;
            System.out.printf("%d\t%.1f\n",n,avgMoves);
        }
        
        //System.out.println(Arrays.toString(array));
        
    }
}