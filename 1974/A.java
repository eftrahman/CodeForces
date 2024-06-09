import java.util.Scanner;

public class PhoneDesktop {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int x = sc.nextInt();
            int y = sc.nextInt();
            System.out.println(minScreens(x, y));
        }
        sc.close();
    }

    public static int minScreens(int x, int y) {
        // Each screen can have at most 3 2x2 icons (as 3*4 = 12 cells out of 15)
        int screensFor2x2 = (y + 2) / 3; // equivalent to Math.ceil(y / 3.0)
        
        // Remaining cells in the screens occupied by 2x2 icons
        int remainingCells = screensFor2x2 * 15 - y * 4;
        
        // Place 1x1 icons in the remaining cells
        x -= remainingCells;
        
        // If there are still 1x1 icons left, calculate additional screens needed
        if (x > 0) {
            int screensFor1x1 = (x + 14) / 15; // equivalent to Math.ceil(x / 15.0)
            return screensFor2x2 + screensFor1x1;
        } else {
            return screensFor2x2;
        }
    }
}
