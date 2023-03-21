//Task is to find out passed as well as failed students.
//Given the score of 'N' students in the class, write a program to compute the maximum score. Use array to store the marks of the students and assume that the maximum number of students
// in a class is 50. Assume that -1 is used to indicate a student who is absent for the exam. Assume that a student should secure a minimum of 50 marks to pass the exam.

int main()
{
  
 static string studentRecord(String[, ] S, int N)
  {
 
    // code here
    int maxi = Int32.MinValue;
    String result = "";
    for (int i = 0; i < N; i++) {
      int avg = (Int32.Parse(S[i, 1])
                 + Int32.Parse(S[i, 2])
                 + Int32.Parse(S[i, 3]))
        / 3;
      if (avg > maxi) {
        maxi = avg;
        result = S[i, 0];
      }
      else if (avg == maxi) {
        result = result + " " + S[i, 0];
      }
    }
    return result + " " + maxi;
  }
  public static void Main(string[] args)
  {
    int N = 2;
    String[, ] file
      = { { "Shrikanth", "20", "30", "10" },
         { "Ram", "100", "50", "10" } };
 
    Console.WriteLine(studentRecord(file, N));
  }
}
 
  return 0;
}
