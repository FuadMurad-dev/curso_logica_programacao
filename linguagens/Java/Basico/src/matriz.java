import java.util.Scanner;

public class matriz {
    public static void main(String[] args) throws Exception {

        Scanner sc = new Scanner(System.in); 

        int m, n; 
        System.out.println("Quantas linhas vai ter a matriz?");
        m = sc.nextInt(); 
        System.out.println("Quantas colunas vai ter a matriz?");
        n = sc.nextInt(); 

        int [][] mat = new int [m][n]; 

        for(int i = 0; i < m; i ++)
        {
            for(int j = 0; j < n; j++)
            {
                System.out.print("Elemento [" + i + "," + j + "]: ");
                mat[i][j] =sc.nextInt(); 
            }
        }
        
        System.out.println();
        System.out.println("Matriz digitada: ");
         for(int i = 0; i < m; i ++)
        {
            for(int j = 0; j < n; j++)
            {
                System.out.print(mat[i][j] + " ");
            }
            System.out.println();
        }

        sc.close();
    }
}