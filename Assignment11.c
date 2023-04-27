//Convert an decimal to its binary equivalent using a bitwise operator

int main()
{
  int N = 7;
  binary = 0, place = 1, remainder;

    while (N> 0) {
        remainder = N % 2;
        binary += remainder * place;
        place *= 10;
        N /= 2;
    }

    printf("Binary equivalent: %d", binary);

  
  return 0;
}
