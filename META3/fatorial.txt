class Alguns_Erros {
  public static double f(int a, double b, double c, double d) {
  }
  public static double f(double b, double c, double d, int a) {
  }
  public static double f(double b) {
  }
  public static double f(int b) {
  }
  public static double f(double b,int c) {
  }
  public static double f(double b,double c) {
  }
  public static void main(String[] args) {
    f(main(args), args,1, f(W));
    f(1,1);
  }

}