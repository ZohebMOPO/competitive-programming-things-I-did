using System;

public class Fence{
    public static void Main(string[] args){
        int sides;
        sides = Convert.ToInt32(Console.ReadLine());
        float sum;
        float tempo;
        int[] arr1 = new int[sides + 1];
        int[] arr2 = new int[sides];

        for(int i = 0; i < sides + 1; i++){
            arr1[i] = Convert.ToInt32(Console.ReadLine());
        }

        for(int i = 0; i < sides; i++){
            arr2[i] = Convert.ToInt32(Console.ReadLine());
        }
        int j = 0;
        for(int i = 0; i < sides; i++){
            tempo = arr2[i] * (arr1[j] + arr1[j + 1]) / 2;

            sum += tempo;

            j++;
        }

        Console.Write(sum);
    }
}